% Plot cubes
for k = 1:6
    cubePlot(spacecraft.rCoM_cubes(:,k),constants.U);
    hold on
end
% Plot panels
for k = 1:2
    panelPlot(spacecraft.rCoM_panels(:,k), spacecraft.panelLength, spacecraft.panelWidth)
end

% Axes plot (in the geometrical centre of the 6U structure)
xC = 0;
yC = 0;
zC = 0;

l = 0.2;
ax1 = quiver3(xC, yC, zC, l, 0, 0, 'LineWidth', 3);
ax2 = quiver3(xC, yC, zC, 0, l, 0, 'LineWidth', 3);
ax3 = quiver3(xC, yC, zC, 0, 0, l, 'LineWidth', 3);

scatter3(xC, yC, zC, 50, 'b', 'filled')

leg = legend([ax1, ax2, ax3],...
    ['$x$' char(39) '-axis'], ['$y$' char(39) '-axis'], ['$z$' char(39) '-axis'], 'Location', 'Best');

xlabel(['$x$' char(39) '[$m$]'])
ylabel(['$y$' char(39) '[$m$]'])
zlabel(['$z$' char(39) '[$m$]'])
axis equal

clear ax1 ax2 ax3 leg xC yC zC k l leg

function cubePlot(origin, dimension)

% cubePlot plots a cube centered in a point defined by the vector origin
% and with side equal to dimension

c = dimension/2;
vx = c*[1; 1; -1; -1];
vy = c*[-1; 1; 1; -1];
x = [vx; vx] + origin(1);
y = [vy; vy] + origin(2);
z = c*[-ones(4,1); ones(4,1)] + origin(3);
vert = [x, y, z];
faces = [1, 2, 6, 5;...
    2, 3, 7, 6;...
    3, 7, 8, 4;...
    4, 8, 5, 1;...
    1, 2, 3, 4;...
    5, 6, 7, 8];
    
scatter3(x,y,z, 'k', 'filled', 'HandleVisibility', 'off')
hold on
color = [239, 245, 245]./255;
s = patch('Vertices',vert,'Faces',faces,...
    'EdgeColor','black','FaceColor',color,'LineWidth',1.3);
s.FaceVertexAlphaData = 0.1;
s.FaceAlpha = 'flat';
end

function panelPlot(origin, panel_length, panel_width)

% panelPlot plots a rectangle centered in a point defined by the vector 
% origin and with sides equal to panel_length and panel_width


vy = panel_length/2*[-1; 1; 1; -1];
vz = panel_width/2*[-1; -1; 1; 1];
x = ones(4,1)*origin(1);
y = vy + origin(2);
z = vz + origin(3);
vert = [x, y, z];
faces = [1, 4, 3, 2];
    
scatter3(x,y,z, 'k', 'filled', 'HandleVisibility', 'off')
hold on
color = [131, 85, 230]./255;
p = patch('Vertices',vert,'Faces',faces,...
    'EdgeColor','black','FaceColor',color,'LineWidth',1.3);
p.FaceVertexAlphaData = 0.4;
p.FaceAlpha = 'flat'; 
end