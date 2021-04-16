%% MATLAB Setup
clc
clear
close all
addpath(genpath('C:/Users/loren/Desktop/sadc-final-project/simulink'))

% Setup for the plots:
set(0, 'defaultTextInterpreter','latex','defaultAxesFontSize', 15);
set(0, 'defaultAxesTickLabelInterpreter','latex');
set(0, 'defaultLegendInterpreter','latex');

%% Constants
constants.U = 0.1; %[m]
constants.mu = 398600; %[km^3/s^2]

%% Spacecraft setup
spacecraft = struct();
surfaces = struct();

% Cubes
% Centers of mass (w.r.t geometrical centre of the 6constants.U bus alone)
spacecraft.n_cubes = 6;
spacecraft.r_CoM_cubes = [0, 1*constants.U, 0.5*constants.U;...
    0, 1*constants.U, -0.5*constants.U;...
    0, 0, 0.5*constants.U;...
    0, 0, -0.5*constants.U;...
    0, -1*constants.U, 0.5*constants.U;...
    0, -1*constants.U, -0.5*constants.U];

%Solar panels
%Centers of mass (w.r.t geometrical centre of the 6constants.U bus alone)
spacecraft.n_panels = 2;
surfaces.panels.length = 3.2*constants.U;
surfaces.panels.width = 2*constants.U;
surfaces.panels.thickness = 0.05*constants.U; %[m]

spacecraft.r_CoM_panels = [0.5*constants.U + surfaces.panels.length/2, 1.5*constants.U, 0;...
    -(0.5*constants.U + surfaces.panels.length/2), 1.5*constants.U, 0];

m_cube = 1.3; %[kg]
m_panel = 0.250; %[kg]
spacecraft.mass = 6*m_cube + 2*m_panel;

%Position of the centre of mass w.r.t the geometrical centre

spacecraft.r_CoM = (m_cube*sum(spacecraft.r_CoM_cubes) + ...
    m_panel*sum(spacecraft.r_CoM_panels))./spacecraft.mass;

spacecraft.r_CoM_cubes = spacecraft.r_CoM_cubes - spacecraft.r_CoM;
spacecraft.r_CoM_panels = spacecraft.r_CoM_panels - spacecraft.r_CoM;

plotLogic = false;

if plotLogic
    figure(1)
    cubesatPlot
end

%% Computation of the inertia properties

I = zeros(3);

MoI_cube = m_cube/6*constants.U^2;
I_cube = diag(MoI_cube*ones(3,1));

for k = 1:6 %Number of cubes
    r_temp = spacecraft.r_CoM_cubes(k,:);
    ext = kron(r_temp', r_temp);
    I_temp = I_cube + m_cube*(dot(r_temp, r_temp)*eye(3) - ext);
    I = I + I_temp;
end

I_panel = m_panel/12.*[(surfaces.panels.thickness^2 + surfaces.panels.width^2), 0, 0;...
    0, (surfaces.panels.length^2 + surfaces.panels.width^2), 0;...
    0, 0, (surfaces.panels.length^2 + surfaces.panels.thickness^2)];

for k = 1:2 %Number of panels
    r_temp = spacecraft.r_CoM_panels(k,:);
    ext = kron(r_temp', r_temp);
    I_temp = I_panel + m_panel*(dot(r_temp, r_temp)*eye(3) - ext);
    I = I + I_temp;
end

spacecraft.I = I;

%% Normal to the surfaces

nx = [1, 0, 0];
ny = [0, 1, 0];
nz = [0, 0, 1];

surfaces.body.num = 6;
surfaces.panels.num = 2;

surfaces.body.n = [ny; nx; -ny; -nx; nz; -nz];
surfaces.panels.n = [ny; ny; - ny; -ny];

A_2U = 2*constants.U*constants.U;
A_3U = 3*constants.U*constants.U;
A_6U = 3*constants.U*2*constants.U;
A_panel = surfaces.panels.width*surfaces.panels.length;

surfaces.body.A = [A_2U; A_6U; A_2U; A_6U; A_3U; A_3U];
surfaces.panels.A = A_panel*ones(4,1);

%% Drag and optical properties

surfaces.body.r_surf = [0, 1.5*constants.U, 0;...
    0.5*constants.U, 0, 0;...
    0, -1.5*constants.U, 0;...
    -0.5*constants.U, 0, 0;...
    0, 0, constants.U;...
    0, 0, -constants.U];
    
surfaces.panels.r_surf = spacecraft.r_CoM_panels;

surfaces.cd = 2.2;
surfaces.body.rhoS = 0;
surfaces.body.rhoD = 0;
surfaces.panels.rhoS = 0;
surfaces.panels.rhoD = 0;

%% Magnetic properties

spacecraft.res_dip = [0.01; 0.01; 0.01]; %[A/m^2]

%% Orbit setup (RaInCube satellite, NORAD 43548, TLE @ 23/12/2020)

rp = 400 + 6378.1; %[km]
e = 0.0001982;
ra = rp*(1+e)/(1-e);

orbit.a0 = (ra + rp)/2;
orbit.e0 = e;
orbit.i0 = deg2rad(51.6133);
orbit.OM0 = deg2rad(23.4318);
orbit.om0 = deg2rad(43.8993);
orbit.th0 = 0;

%% Initial conditions

orbit.kep0 = [orbit.a0; orbit.e0; orbit.i0; orbit.OM0; orbit.om0; orbit.th0];

p = orbit.a0*(1-orbit.e0^2);
r = p/(1+orbit.e0*cos(orbit.th0));

rr = r*[cos(orbit.th0);sin(orbit.th0);0];
vv = sqrt(constants.mu/p)*[-sin(orbit.th0);orbit.e0+cos(orbit.th0);0];

ROM = [ cos(orbit.OM0) sin(orbit.OM0) 0; -sin(orbit.OM0) cos(orbit.OM0) 0; 0 0 1];
Ri = [ 1 0 0; 0 cos(orbit.i0) sin(orbit.i0); 0 -sin(orbit.i0) cos(orbit.i0)];
Rom = [ cos(orbit.om0) sin(orbit.om0) 0; -sin(orbit.om0) cos(orbit.om0) 0; 0 0 1];

T = Rom*Ri*ROM;

orbit.rr0 = T'*rr;
orbit.vv0 = T'*vv;

orbit.car0 = [orbit.rr0; orbit.vv0];

spacecraft.w0 = deg2rad([10; 5; 3]);
spacecraft.q0 = [0; 0; 0; 1];

%% Clear variables

clearvars -except constants spacecraft surfaces orbit