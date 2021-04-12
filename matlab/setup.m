%%% Setup for the simulation %%%

%% MATLAB setup
clc
clear
close all
addpath(genpath('C:/Users/loren/Desktop/sadc-final-project/simulink')

%% Orbit setup (for orbit propagation)

orbit = struct();
orbit.rr_0 = ; % Initial position in ECEI frame [km]
orbit.vv_0 = ; % Initial velocity in ECEI frame [km/s]

%% S/C properties setup

spacecraft = struct();
spacecraft.w0 = pi/180*[15, 20, 0]'; % Initial angular velocity in body frame [rad/s]
spacecraft.mass = 6*1.3 + 1; % [kg]
spacecraft.redidual_dipole = [0.05, 0.05, 0.05]; % Magnetic residual dipole [A/m^2]
spacecraft.I = [1e-2, 0, 0;...
    0, 0.5e-2, 0;...
    0, 0, 2.5e-3]; % Inertia matrix in body frame [kg*m^2]
spacecraft.rCoM = [130e-3; 25e-3; 10e-3];

%% S/C surfaces setup

surfaces = struct();
n_panels = 14;
n1 = [1, 0, 0]';
n2 = [0, 1, 0]';
n3 = [0, 0, 1]';

surfaces.n = zeros(3,n_panels);
surfaces.n(:,1) = n3;
surfaces.n(:,2) = n2;
surfaces.n(:,3) = -n3;
surfaces.n(:,4) = -n2;
surfaces.n(:,5) = -n1;
surfaces.n(:,6) = n1;
surfaces.n(:, [7 8 9 10]) = n1;
surfaces.n(:, [11 12 13 14]) = -n1;

surfaces.cd = zeros(1,n_panels);
surfaces.cd(:) = 2.2;




surfaces.panels
    
