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

plotLogic = true;

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

A_2constants.U = 2*constants.U*constants.U;
A_6constants.U = 3*constants.U*2*constants.U;
A_3constants.U = 3*constants.U*constants.U;
A_panel = surfaces.panels.width*surfaces.panels.length;

surfaces.body.A = [A_2constants.U; A_6constants.U; A_2constants.U; A_6constants.U; A_3constants.U; A_3constants.U];
surfaces.panels.A = A_panel*ones(4,1);

%% Drag and optical properties

surfaces.cd = 2.2;
surfaces.body.rhoS = 0;
surfaces.body.rhoD = 0;
surfaces.panels.rhoS = 0;
surfaces.panels.rhoD = 0;

%% Magnetic properties

spacecraft.residual_dipole = [0.01; 0.01; 0.01]; %[A/m^2]
