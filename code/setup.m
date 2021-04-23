%% MATLAB Setup
clc
clear
close all

addpath(genpath('simulink'));

% Setup for the plots:
set(0, 'defaultTextInterpreter','latex','defaultAxesFontSize', 15);
set(0, 'defaultAxesTickLabelInterpreter','latex');
set(0, 'defaultLegendInterpreter','latex');

%% Constants
constants.U = 0.1; %[m]
constants.mu = 398600; %[km^3/s^2]

constants.wE = 7.2921150e-5; %[rad/s]
constants.rho = 3.725*1e-12; %[kg/m^3];

constants.magneticTilt = deg2rad(11.5);
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
    [-1*constants.U; 0; -0.5*constants.U]];

%Solar panels
%Centers of mass (w.r.t geometrical centre of the 6U bus alone)
spacecraft.nPanels = 2;
spacecraft.panelLength = 3.2*constants.U;
spacecraft.panelWidth = 2*constants.U;
spacecraft.panelThickness = 0.05*constants.U; %[m]

spacecraft.rCoM_panels = [[1.5*constants.U; 0.5*constants.U + spacecraft.panelLength/2; 0],...
    [1.5*constants.U; -(0.5*constants.U + spacecraft.panelLength/2); 0]];

mCube = 1.3; %[kg]
mPanel = 0.250; %[kg]
spacecraft.mass = 6*mCube + 2*mPanel;

%Position of the centre of mass w.r.t the geometrical centre

spacecraft.rCoM = (mCube*sum(spacecraft.rCoM_cubes,2) + ...
    mPanel*sum(spacecraft.rCoM_panels,2))./spacecraft.mass;

spacecraft.rCoM_cubes = spacecraft.rCoM_cubes - spacecraft.rCoM;
spacecraft.rCoM_panels = spacecraft.rCoM_panels - spacecraft.rCoM;

%% Satellite plot

plotLogic = false;

if plotLogic
    figure(1)
    cubesatPlot
end

%% Computation of the inertia properties

I = zeros(3);

MoI_cube = mCube/6*constants.U^2;
I_cube = diag(MoI_cube*ones(3,1));

for k = 1:6 %Number of cubes
    r_temp = spacecraft.rCoM_cubes(:,k);
    ext = kron(r_temp, r_temp');
    I_temp = I_cube + mCube*(dot(r_temp, r_temp)*eye(3) - ext);
    I = I + I_temp;
end

I_panel = mPanel/12.*[(spacecraft.panelLength^2 + spacecraft.panelWidth^2), 0, 0;...
    0, (spacecraft.panelThickness^2 + spacecraft.panelWidth^2), 0;...
    0, 0, (spacecraft.panelThickness^2 + spacecraft.panelLength^2)];

for k = 1:2 %Number of panels
    r_temp = spacecraft.rCoM_panels(:,k);
    ext = kron(r_temp, r_temp');
    I_temp = I_panel + mPanel*(dot(r_temp, r_temp)*eye(3) - ext);
    I = I + I_temp;
end

spacecraft.I = I;
spacecraft.invI = inv(I);

%% Normal to the surfaces

nx = [1; 0; 0];
ny = [0; 1; 0];
nz = [0; 0; 1];

surfaces.num = [6; 4];

surfaces.n = [nx, ny, -nx, -ny, nz, -nz, nx, nx, - nx, -nx];

A_2U = 2*constants.U*constants.U;
A_3U = 3*constants.U*constants.U;
A_6U = 3*constants.U*2*constants.U;
A_panel = spacecraft.panelWidth*spacecraft.panelLength;

surfaces.A = [A_2U; A_6U; A_2U; A_6U; A_3U; A_3U; A_panel*ones(4,1)];

%% Drag and optical properties

surfaces.rSurf = [[1.5*constants.U; 0; 0],...
    [0; 0.5*constants.U; 0],...
    [-1.5*constants.U; 0; 0],...
    [0; -0.5*constants.U; 0],...
    [0; 0; constants.U],...
    [0; 0; -constants.U],...
    spacecraft.rCoM_panels,...
    spacecraft.rCoM_panels];

surfaces.cd = 2.2;
rhoS_body = 0.5;
rhoD_body = 0.1;
rhoS_panels = 0.8;
rhoD_panels = 0.1;

surfaces.rhoS = [rhoS_body*ones(surfaces.num(1),1);...
    rhoS_panels*ones(surfaces.num(2),1)];

surfaces.rhoD = [rhoD_body*ones(surfaces.num(1),1);...
    rhoD_panels*ones(surfaces.num(2),1)];

%% Magnetic properties

spacecraft.resDip = [0.01; 0.01; 0.01]; %[A/m^2]

%% Orbit setup (RaInCube satellite, NORAD 43548, TLE @ 23/12/2020)

rp = 400 + 6378.1; %[km]
e = 0.0001982;
ra = rp*(1+e)/(1-e);

orbit.a = (ra + rp)/2;
orbit.e = e;
orbit.i = deg2rad(51.6133);
orbit.OM = deg2rad(23.4318);
orbit.om = deg2rad(43.8993);
orbit.theta0 = 0;
orbit.T = 2*pi*sqrt(orbit.a^3/constants.mu);

%% Initial conditions

spacecraft.w0 = deg2rad([0; 0; 0]);
spacecraft.q0 = [0; 0; 0; 1];

%% Sensors

sensors = struct();

% Sun sensor: SSOC-D60 - SolarMEMS
sensors.ss = struct();
sensors.ss.FoV = deg2rad(150); %[rad]
sensors.ss.sigmaPhi = deg2rad(0.3); %[rad]
sensors.ss.sigmaTheta = deg2rad(0.3); %[rad]
sensors.ss.sigmaPsi = deg2rad(0.3); %[rad]
sensors.ss.sigma = rad2deg(sqrt(sensors.ss.sigmaPhi^2 + sensors.ss.sigmaTheta^2 +...
    sensors.ss.sigmaPsi^2))*60; %[arcmin]
sensors.ss.Ts = 1/50; %[1/Hz = s]
sensors.ss.A_sb = [1, 0, 0; 0, 1, 0; 0, 0, 1];

% Star tracker: Sagitta star tracker - Arcsec
sensors.st = struct();
sensors.st.nStars = 4;
sensors.st.FoV = [20, 20]; % Elevation and azimuth FoV
sensors.st.sigmaRoll = deg2rad(10*1/3600);
sensors.st.sigmaCross = deg2rad(2*1/3600);
sensors.st.sigmaPhi = sensors.st.sigmaCross; %[rad]
sensors.st.sigmaTheta = sensors.st.sigmaRoll; %[rad]
sensors.st.sigmaPsi = sensors.st.sigmaCross; %[rad]
sensors.st.sigma = rad2deg(sqrt(sensors.st.sigmaPhi^2 + sensors.st.sigmaTheta^2 +...
    sensors.st.sigmaPsi^2))*60; %[arcmin]
sensors.st.Ts = 1/10; %[1/Hz = s]
sensors.st.A_sb = [0, 1, 0; -1, 0, 0; 0, 0, 1];
v = rand(3,sensors.st.nStars);
vn = vecnorm(v);
sensors.st.vStars_n_init = v./vn;

% Magnetometer: NSS Magnetometer - New Space Systems
sensors.mm = struct();
sensors.mm.sigmaPhi = deg2rad(1); %[rad]
sensors.mm.sigmaTheta = deg2rad(1); %[rad]
sensors.mm.sigmaPsi = deg2rad(1); %[rad]
sensors.mm.eps = 16e-9; %[nT]
sensors.mm.Ts = 1/18; %[1/Hz = s]

%% Actuators

actuators = struct();

% Magnetorquer: 
actuators.mt = struct();

% Reaction wheels: SatBus 4RW0 - NanoAvionics
actuators.rw = struct();
actuators.rw.A = 1/sqrt(3)*[-1, 1, 1, -1;...
    -1, -1, 1, 1;...
    1, 1, 1, 1];
actuators.rw.A_star = sqrt(3)/4*[-1, -1, 1;...
    1, -1, 1;...
    1, 1, 1;...
    -1, 1, 1];
actuators.rw.M_max = [5.9e-6, 5.9e-6, 5e-6]; %[Nm]
actuators.rw.h_max = [37e-6, 37e-6, 31.3e6]; %[Nms]

%% Observer

observer = struct();
observer.Lw = 0.1;
observer.Ld = 5e-5;
observer.estMd0 = [0; 0; 0];

%% Clear variables

clearvars -except constants spacecraft surfaces orbit...
    sensors actuators observer