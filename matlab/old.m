% %Plot dish
% a = 4*U;
% b = 4*U;
% length = 2*U;
% span_y = 3.5*U;
% span_z = 2*U;
% span_x = U;
% 
% O_dish = [-1.53*U ,0, 0];
% dish(O_dish, a, b, span_y, span_z, span_x);


function dish(origin, a, b, dimy, dimz, dimx)

vec = linspace(0, dimx, 500);
sz = length(vec);
vec_y = linspace(-dimy, dimy, sz);
vec_z = linspace(-dimz, dimz, sz);
y = vec_y + origin(2);
z = vec_z + origin(3);
[Y,Z] = meshgrid(y,z);
X = -(Y.^2/a + Z.^2/b);
X(abs(X) > dimx) = NaN;
X = X + origin(1);

color = [213, 213, 219]./255;
surf(X,Y,Z, 'EdgeColor', 'none', 'FaceColor', color)

end
