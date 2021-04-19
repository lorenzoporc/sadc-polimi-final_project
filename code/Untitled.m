A_bn = [1, 0, 0; 0, 1, 0; 0, 0, 1];
A_sb = eye(3);
nStars = 4;
FoV = [pi/4, pi/4];
phi = 0.01;
psi = phi;
theta = psi;
v_n_old = rand(3,4);

[s_b, v_n] = starTracker(A_bn, A_sb, nStars, FoV, phi, theta, psi, v_n_old)

function [s_b, v_n] = starTracker(A_bn, A_sb, nStars, FoV, phi, theta, psi, v_n_old)

A_bs = A_sb';
A_ns = A_bn'*A_bs;
s_b = zeros(3,nStars); 
v_n = zeros(3,nStars);

El = zeros(nStars,1);
Az = zeros(nStars,1);

for k = 1:nStars
    
    s_b_old = A_bn*v_n_old(:,k);
    s_s_old = A_sb*s_b_old;
    
    El_old = asin(s_s_old(3));
    Az_old = asin(s_s_old(2)/cos(El_old));
    
    if wrapToPi(El_old) > FoV(2)/2 || wrapToPi(Az_old) > FoV(1)/2
        El(k) = 0.2*FoV(2)*rand(1,1);
        Az(k) = 0.2*FoV(1)*rand(1,1);
        v_s = [cos(El(k))*cos(Az(k));...
            cos(El(k))*sin(Az(k));...
            sin(El(k))];
        A_err = [cos(psi)*cos(theta), cos(psi)*sin(theta)*sin(phi) + sin(psi)*cos(phi),...
            -cos(psi)*sin(theta)*cos(phi) + sin(psi)*sin(phi);...
            -sin(psi)*cos(theta), -sin(psi)*sin(theta)*sin(phi) + cos(psi)*cos(phi),...
            sin(psi)*sin(theta)*cos(phi) + cos(psi)*sin(phi);...
            sin(theta), -cos(theta)*sin(phi), cos(theta)*cos(phi)];
        s_s = A_err*v_s;
        s_b(:,k) = A_bs*s_s;
        v_n(:,k) = A_ns*v_s;
    else
        s_b(:,k) = s_b_old;
        v_n(:,k) = v_n_old(:,k);
    end
   
end

end