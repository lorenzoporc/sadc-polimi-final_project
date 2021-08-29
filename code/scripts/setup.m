%% Constants
constants.U = 0.1; %[m]
constants.mu = 398600; %[km^3/s^2]

constants.wE = 7.2921150e-5; %[rad/s]
constants.rho = 3.725*1e-12; %[kg/m^3];

constants.magneticTilt = deg2rad(11.5); %[rad]
constants.H0 = 3.009279157871533e-05;
constants.REq = 6378.1; %[km]

constants.nSun = 2*pi/(365.25*24*3600); %[rad/s]
constants.oblAngle = deg2rad(23.45); % [rad]
constants.AU = 149598073; %[km]
constants.P = (1358 + 580 + 143.3)/(3e8); %[W/m^2]

%% Spacecraft setup
spacecraft = struct();
surfaces = struct();

% Cubes
% Centers of mass (w.r.t geometrical centre of the 6U bus alone)
spacecraft.nCubes = 6;

spacecraft.rCoM_cubes = [[1*constants.U; 0; 0.5*constants.U],...
    [1*constants.U; 0; -0.5*constants.U],...
    [0; 0; 0.5*constants.U],...
    [0; 0; -0.5*constants.U],...
    [-1*constants.U; 0; 0.5*constants.U],...
    [-1*constants.U; 0; -0.5*constants.U]]; %[m]

%Solar panels
%Centers of mass (w.r.t geometrical centre of the 6U bus alone)
spacecraft.nPanels = 2;
spacecraft.panelLength = 3*constants.U; %[m]
spacecraft.panelWidth = 2*constants.U; %[m]
spacecraft.panelThickness = 0.05*constants.U; %[m]

spacecraft.rCoM_panels = [[1.5*constants.U; 0.5*constants.U + spacecraft.panelLength/2; 0],...
    [1.5*constants.U; -(0.5*constants.U + spacecraft.panelLength/2); 0]]; %[m]

mCube = 1; %[kg]
mPanel = 0.250; %[kg]
spacecraft.mass = 6*mCube + 2*mPanel; %[kg]

%Position of the centre of mass w.r.t the geometrical centre
spacecraft.rCoM = (mCube*sum(spacecraft.rCoM_cubes,2) + ...
    mPanel*sum(spacecraft.rCoM_panels,2))./spacecraft.mass; %[m]

% Redefining the centre of mass of the cubes and panels
spacecraft.rCoM_cubes = spacecraft.rCoM_cubes - spacecraft.rCoM; %[m]
spacecraft.rCoM_panels = spacecraft.rCoM_panels - spacecraft.rCoM; %[m]

%% Computation of the inertia properties

I = zeros(3);

% Inertia matrix of a single cube
MoI_cube = mCube/6*constants.U^2; %[kg m^2]
I_cube = diag(MoI_cube*ones(3,1)); %[kg m^2]

% Computing the full inertia matrix for the cubes
for k = 1:6 %Number of cubes
    r_temp = spacecraft.rCoM_cubes(:,k);
    ext = kron(r_temp, r_temp');
    I_temp = I_cube + mCube*(dot(r_temp, r_temp)*eye(3) - ext);
    I = I + I_temp;
end

% Adding the contribution of the panels
I_panel = mPanel/12.*[(spacecraft.panelLength^2 + spacecraft.panelWidth^2), 0, 0;...
    0, (spacecraft.panelThickness^2 + spacecraft.panelWidth^2), 0;...
    0, 0, (spacecraft.panelThickness^2 + spacecraft.panelLength^2)]; %[kg m^2]

for k = 1:2 %Number of panels
    r_temp = spacecraft.rCoM_panels(:,k);
    ext = kron(r_temp, r_temp');
    I_temp = I_panel + mPanel*(dot(r_temp, r_temp)*eye(3) - ext);
    I = I + I_temp;
end

spacecraft.I = I; %[kg m^2]
spacecraft.invI = inv(I);

% Non-dimensional inertia coefficient
spacecraft.kx = (I(3,3) - I(2,2))/I(1,1); %[-]
spacecraft.ky = (I(3,3) - I(1,1))/I(2,2); %[-]
spacecraft.kz = (I(2,2) - I(1,1))/I(3,3); %[-]

%% Normal unit vectors (with respect to the surfaces) and surface areas

nx = [1; 0; 0];
ny = [0; 1; 0];
nz = [0; 0; 1];

surfaces.num = [6; 4];

% Defining normal unit vectors
surfaces.n = [nx, ny, -nx, -ny, nz, -nz, nx, nx, - nx, -nx];

A_2U = 2*constants.U*constants.U; %[m^2]
A_3U = 3*constants.U*constants.U; %[m^2]
A_6U = 3*constants.U*2*constants.U; %[m^2]
A_panel = spacecraft.panelWidth*spacecraft.panelLength; %[m^2]

surfaces.A = [A_2U; A_6U; A_2U; A_6U; A_3U; A_3U; A_panel*ones(4,1)]; %[m^2]

%% Drag and optical properties

% Geometrical centre of the external surfaces of the spacecraft
% (with respect to the centre of the 6U main structure)
surfaces.rSurf = [[1.5*constants.U; 0; 0],...
    [0; 0.5*constants.U; 0],...
    [-1.5*constants.U; 0; 0],...
    [0; -0.5*constants.U; 0],...
    [0; 0; constants.U],...
    [0; 0; -constants.U],...
    spacecraft.rCoM_panels,...
    spacecraft.rCoM_panels]; %[m]

% Geometrical centre of the external surfaces of the spacecraft
% (with respect to the principal axes)
surfaces.rSurf = surfaces.rSurf - spacecraft.rCoM; %[m]

% Drag and optical coefficients
surfaces.cd = 2.2; %[-]
rhoS_body = 0.5; %[-]
rhoD_body = 0.1; %[-]
rhoS_panels = 0.8; %[-]
rhoD_panels = 0.1; %[-]

surfaces.rhoS = [rhoS_body*ones(surfaces.num(1),1);...
    rhoS_panels*ones(surfaces.num(2),1)]; %[-]

surfaces.rhoD = [rhoD_body*ones(surfaces.num(1),1);...
    rhoD_panels*ones(surfaces.num(2),1)]; %[-]

%% Magnetic properties

spacecraft.resDip = [0.01; 0.01; 0.01]; %[A/m^2]

%% Orbit setup (RaInCube satellite, NORAD 43548, TLE @ 23/12/2020)

rp = 400 + 6378.1; %[km]
e = 0.0001982; %[-]
ra = rp*(1+e)/(1-e); %[km]

orbit.a = (ra + rp)/2; %[km]
orbit.e = e; 
orbit.i = deg2rad(51.6133); %[rad]
orbit.OM = deg2rad(23.4318); %[rad]
orbit.om = deg2rad(43.8993); %[rad]
orbit.n = sqrt(constants.mu/orbit.a^3); %[1/s]
orbit.T =  2*pi/orbit.n; %[s]

%% Sensors

sensors = struct();

% Sun sensor: SSOC-D60 - SolarMEMS
sensors.ss = struct();
sensors.ss.FoV = deg2rad(60); %[rad]
sensors.ss.sigmaPhi = deg2rad(0.3); %[rad]
sensors.ss.sigmaTheta = deg2rad(0.3); %[rad]
sensors.ss.sigmaPsi = deg2rad(0.3); %[rad]
sensors.ss.sigma = rad2deg(sqrt(sensors.ss.sigmaPhi^2 + sensors.ss.sigmaTheta^2 +...
    sensors.ss.sigmaPsi^2)); %[deg]
sensors.ss.Ts = 1/50; %[1/Hz = s]
sensors.ss.A_sb = [1, 0, 0; 0, 1, 0; 0, 0, 1];

% Star tracker: Sagitta star tracker - Arcsec
sensors.st = struct();
sensors.st.nStars = 4;
sensors.st.FoV = [20, 20]; % Elevation and azimuth FoV
sensors.st.sigmaRoll = deg2rad(10*1/3600); %[rad]
sensors.st.sigmaCross = deg2rad(2*1/3600); %[rad]
sensors.st.sigmaPhi = sensors.st.sigmaRoll; %[rad]
sensors.st.sigmaTheta = sensors.st.sigmaCross; %[rad]
sensors.st.sigmaPsi = sensors.st.sigmaCross; %[rad]
sensors.st.sigma = rad2deg(sqrt(sensors.st.sigmaPhi^2 + sensors.st.sigmaTheta^2 +...
    sensors.st.sigmaPsi^2)); %[deg]
sensors.st.Ts = 1/10; %[1/Hz = s]
sensors.st.A_sb = [0, 1, 0; -1, 0, 0; 0, 0, 1];

% Initialization of the inertial directions matrix for the star sensor
v = rand(3,sensors.st.nStars);
vn = vecnorm(v);
sensors.st.vStars_n_init = v./vn;

% Magnetometer: NSS Magnetometer - New Space Systems
sensors.mm = struct();
sensors.mm.sigmaPhi = deg2rad(1); %[rad]
sensors.mm.sigmaTheta = deg2rad(1); %[rad]
sensors.mm.sigmaPsi = deg2rad(1); %[rad]
sensors.mm.eps = 16e-9; %[T]
sensors.mm.Ts = 1/18; %[1/Hz = s]

%% Actuators

actuators = struct();

% Magnetorquer: NanoTorque GST-600 - GomSpace
actuators.mt = struct();
actuators.mt.D_max = [0.310; 0.310; 0.340]; %[A/m^2]
actuators.mt.D_min = -[0.310; 0.310; 0.340];  % [A/m^2]

% Reaction wheels: SatBus 4RW0 - NanoAvionics
actuators.rw = struct();
actuators.rw.A = 1/sqrt(3)*[-1, 1, 1, -1;...
    -1, -1, 1, 1;...
    1, 1, 1, 1];
actuators.rw.A_star = sqrt(3)/4*[-1, -1, 1;...
    1, -1, 1;...
    1, 1, 1;...
    -1, 1, 1];
actuators.rw.m_singleWheel = 0.137; %[kg]
actuators.rw.R = (43.5/2)*1e-3; %[m]
actuators.rw.Ir = 1/2*actuators.rw.m_singleWheel*actuators.rw.R^2; %[kg m^2]
actuators.rw.M_max = ones(4,1)*3.2e-3; %[Nm]
actuators.rw.hdot_max = actuators.rw.M_max./actuators.rw.Ir; 
actuators.rw.h_max = ones(4,1)*20e-3; %[Nms]

%% Extended State Observer

observer = struct();
observer.Lw = 0.01;
observer.Ld = 5e-5;

%% Control

control = struct();

%% Clear variables

clearvars -except constants spacecraft surfaces orbit...
    sensors actuators observer control