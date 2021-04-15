U = 10; %[cm]

% Cubes

% Centers of mass (w.r.t geometrical centre)
O = zeros(6,3);
O(1,:) = [U, -0.5*U, 0];
O(2,:) = [U, 0.5*U, 0];
O(3,:) = [0, -0.5*U, 0];
O(4,:) = [0, 0.5*U, 0];
O(5,:) = -O(1,:);
O(6,:) = -O(2,:);

for k = 1:6
    cube(O(k,:),U);
    hold on
end

function cube(origin, dimension)

c = dimension/2;
vx = c*[1, 1, -1, -1];
vy = c*[-1, 1, 1, -1];
x = [vx; vx] + origin(1);
y = [vy; vy] + origin(2);
z = c*[-ones(1,4); ones(1,4)] + origin(3);

scatter3(x(1,:),y(1,:),z(1,:), 'k', 'filled')
hold on
scatter3(x(2,:),y(2,:),z(2,:), 'k', 'filled')
hold on
surf(x,y,z)
hold on
% patch(x', y', z') 

end