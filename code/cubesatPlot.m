%% Plot the 6constants.U CubeSat

%Plot cubes
for k = 1:6
    cubePlot(spacecraft.rCoM_cubes(:,k),constants.U);
    hold on
end
%Plot panels
for k = 1:2
    panelPlot(spacecraft.rCoM_panels(:,k), spacecraft.panelLength, spacecraft.panelWidth)
end

xCoM = spacecraft.rCoM(1);
yCoM = spacecraft.rCoM(2);
zCoM = spacecraft.rCoM(3);

l = 0.2;
ax1 = quiver3(xCoM, yCoM, zCoM, l, 0, 0, 'LineWidth', 3);
ax2 = quiver3(xCoM, yCoM, zCoM, 0, l, 0, 'LineWidth', 3);
ax3 = quiver3(xCoM, yCoM, zCoM, 0, 0, l, 'LineWidth', 3);

scatter3(xCoM, yCoM, zCoM, 50, 'b', 'filled')

leg = legend([ax1, ax2, ax3],...
    '$x$-axis', '$y$-axis', '$z$-axis', 'Location', 'Best');

xlabel('x [$m$]')
ylabel('y [$m$]')
zlabel('z [$m$]')
axis equal

clear ax1 ax2 ax3 leg

function cubePlot(origin, dimension)

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
patch('Vertices',vert,'Faces',faces,...
    'EdgeColor','black','FaceColor',color,'LineWidth',2)
alpha(0.3)
end

function panelPlot(origin, panel_length, panel_width)

vy = panel_length/2*[-1; 1; 1; -1];
vz = panel_width/2*[-1; -1; 1; 1];
x = ones(4,1)*origin(1);
y = vy + origin(2);
z = vz + origin(3);
vert = [x, y, z];
faces = [1, 4, 3, 2];
    
scatter3(x,y,z, 'k', 'filled', 'HandleVisibility', 'off')
hold on
color = [47, 15, 128]./255;
patch('Vertices',vert,'Faces',faces,...
    'EdgeColor','black','FaceColor',color,'LineWidth',2)
% alpha(1)
end