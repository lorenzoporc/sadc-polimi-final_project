% Spacecraft Attitude Dynamics and Control 
% A.Y. 2020-2021, prof. Franco Bernelli Zazzera
% Final project - Lorenzo Porcelli 945295

% NOTE: please follow the instructions at the beginning of each section (if
% present) to let the script work properly.

%% MATLAB setup

clc
clear
close all

addpath('scripts')
addpath('functions')
addpath('workspaces')

set(0, 'defaultTextInterpreter','latex','defaultAxesFontSize', 15);
set(0, 'defaultAxesTickLabelInterpreter','latex');
set(0, 'defaultLegendInterpreter','latex');

%% Spacecraft setup

% Run the script that sets all of the properties of the spacecraft
setup
% Open the Simulink library used for the development of the models
library

%% Satellite plot

% Set plotLogic to true in order to generate a graph for the satellite
cubePlot = false;

if cubePlot
    figure
    cubesatPlot
end

clear cubePlot

%% Simulation setup

% Please, choose to set the following variables to true in order to run a 
% Simulink simulation and save the output variables in a .mat files. If the
% variables are set to false, the code loads a previously saved workspace
% (if available). Detumbling shall be performed after uncontrolled and
% tracking shall be performed after detumbling.

% Uncontrolled dynamics
sim_uncontrolled = false;
% Detumbling
sim_detumbling = false;
% Tracking
sim_tracking = false;
% Off-nominal condition 1
sim_case1 = false;
% Off-nominal condition 2
sim_case2 = false;
% Off-nominal condition 3
sim_case3 = false;

%% Control setup

% Parameters for detumbling control
control.detumbling = struct();
control.detumbling.kb = 1e5;
control.detumbling.kp = 1e-3;

% Parameters for tracking control
control.tracking = struct();
control.tracking.kw = 0.001;
control.tracking.kae = 0.001;

%% 1st phase: uncontrolled dynamics

if sim_uncontrolled
    uncontrolled
    
    % Initial conditions
    spacecraft.w0 = deg2rad([20; 14; 3]);
    spacecraft.q0 = [0; 0; 0; 1];
    orbit.theta0 = 0;
    observer.estMd0 = [0; 0; 0];
    
    % Simulation setup
    startTime = 0;
    stopTime = orbit.T;
    set_param('uncontrolled', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation and save workspace
    outUncontrolled = sim('uncontrolled');
    save('outUncontrolled.mat', 'outUncontrolled')
else
    load outUncontrolled
end

% Determine the max magnitude of the disturbing torques
maxMd = [max(vecnorm(outUncontrolled.M_srp, 2, 2));...
    max(vecnorm(outUncontrolled.M_b, 2, 2));...
    max(vecnorm(outUncontrolled.M_gg, 2, 2));...
    max(vecnorm(outUncontrolled.M_drag, 2, 2))];

%% 2nd phase: detumbling

if sim_detumbling
    detumbling
    
    % Initial conditions
    spacecraft.w0 = outUncontrolled.w(end,:)';
    spacecraft.q0 = outUncontrolled.q(end,:)';
    orbit.theta0 = outUncontrolled.theta(end,:)';
    observer.estMd0 = outUncontrolled.estMd(end,:)';
    actuators.rw.hr0 = [0; 0; 0; 0];

    % Spin rate damping control - simulation setup
    control.detumbling.SRD = 1; % Boolean variable for the Simulink model
    startTime = orbit.T;
    stopTime = 4*orbit.T;
    set_param('detumbling', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation and save workspace
    outDetumbling_SRD = sim('detumbling');
    save('outDetumbling_SRD', 'outDetumbling_SRD')
    
    % Proportional control - simulation setup
    control.detumbling.SRD = 0; % Boolean variable for the Simulink model
    startTime = orbit.T;
    stopTime = 4*orbit.T;
    set_param('detumbling', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation and save workspace
    outDetumbling_P = sim('detumbling');
    save('outDetumbling_P', 'outDetumbling_P')
else
    load outDetumbling_SRD
    load outDetumbling_P
end

% Angular velocities at the end of the control phase
wEnd_SRD = outDetumbling_SRD.w(end,:)';
wEnd_P = outDetumbling_P.w(end,:)';

%% 3rd phase: tracking

if sim_tracking
    tracking
    
    % Initial conditions
    spacecraft.w0 = outDetumbling_P.w(end,:)';
    spacecraft.q0 = outDetumbling_P.q(end,:)';
    orbit.theta0 = outDetumbling_P.theta(end,:)';
    observer.estMd0 = outDetumbling_P.estMd(end,:)';
    actuators.rw.hr0 = outDetumbling_P.hr(end,:)';
    
    % Simulation setup
    startTime = 4*orbit.T;
    stopTime = 7*orbit.T;
    set_param('tracking', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation and save workspace
    outTracking = sim('tracking');
    save('outTracking', 'outTracking')
else
    load outTracking
end

% Momentum provided to the reaction wheels [N m]
outTracking.Mr = outTracking.hr_dot.*actuators.rw.Ir;

% Defining the max estimation errors for the torques (control and
% disturbing) in the second half of the simulation
idx = ceil(length(outTracking.tout)/2);
t_idx = outTracking.tout(idx);
estError_Mc = vecnorm(abs(outTracking.estMc(idx:end,:) - outTracking.Mc(idx:end,:)), 2 ,2);
estError_Md = vecnorm(abs(outTracking.estMd(idx:end,:) - outTracking.Md(idx:end,:)), 2, 2);
max_estErrors = [max(estError_Mc); max(estError_Md)];

%% Off-nominal conditions: case 1

if sim_case1
    
    % Changing spacecraft properties
    spacecraft.resDip = [0.02; 0.04; -0.1];
    spacecraft.I = [6.01, -0.78, 0.90;...
        -0.78, 7.71, 0.05;...
        0.90, 0.05, 9.81].*1e-2;

    detumbling
    
    % Initial conditions for detumbling
    spacecraft.w0 = deg2rad([1; 5; 2]);
    spacecraft.q0 = [0.3178; 0.6442; 0.1294; 0.6835];
    orbit.theta0 = outUncontrolled.theta(end,:)';
    observer.estMd0 = outUncontrolled.estMd(end,:)';
    actuators.rw.hr0 = [0; 0; 0; 0];
    
    % Detumbling - simulation setup
    control.detumbling.SRD = 0;
    startTime = 0;
    stopTime = 3*orbit.T;
    set_param('detumbling', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation
    outDetumbling_case1 = sim('detumbling');
    
    tracking
    
    % Initial conditions for tracking
    spacecraft.w0 = outDetumbling_case1.w(end,:)';
    spacecraft.q0 = outDetumbling_case1.q(end,:)';
    orbit.theta0 = outDetumbling_case1.theta(end,:)';
    observer.estMd0 = outDetumbling_case1.estMd(end,:)';
    actuators.rw.hr0 = outDetumbling_case1.hr(end,:)';
    
    % Tracking - simulation setup
    startTime = 3*orbit.T;
    stopTime = 6*orbit.T;
    set_param('tracking', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation and save workspace
    outTracking_case1 = sim('tracking');
    save('outOffNominal_case1.mat', 'outDetumbling_case1', 'outTracking_case1')
else
    load outOffNominal_case1
end

%% Off-nominal conditions: case 2

if sim_case2
    
    % Changing spacecraft properties
    spacecraft.resDip = [-0.04; 0.05; 0.1];
    spacecraft.I = [5.04, 1.00, -0.6;...
        1.00, 6.50, 0.4;...
        -0.6, 0.4, 8.41].*1e-2;

    detumbling
    
    % Initial conditions for detumbling
    spacecraft.w0 = deg2rad([4; 10; 9]);
    spacecraft.q0 = [0.5533; 0.2997; 0.7533; 0.1911];
    orbit.theta0 = 0;
    observer.estMd0 = [0; 0; 0];
    actuators.rw.hr0 = [0; 0; 0; 0];
    
    % Detumbling - simulation setup
    control.detumbling.SRD = 0;
    startTime = 0;
    stopTime = 3*orbit.T;
    set_param('detumbling', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation
    outDetumbling_case2 = sim('detumbling');
    
    tracking
    
    % Initial conditions for tracking
    spacecraft.w0 = outDetumbling_case2.w(end,:)';
    spacecraft.q0 = outDetumbling_case2.q(end,:)';
    orbit.theta0 = outDetumbling_case2.theta(end,:)';
    observer.estMd0 = outDetumbling_case2.estMd(end,:)';
    actuators.rw.hr0 = outDetumbling_case2.hr(end,:)';
    
    % Tracking - simulation setup
    startTime = 3*orbit.T;
    stopTime = 6*orbit.T;
    set_param('tracking', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation and save workspace
    outTracking_case2 = sim('tracking');
    save('outOffNominal_case2.mat', 'outDetumbling_case2', 'outTracking_case2')
else
    load outOffNominal_case2
end

%% Off-nominal conditions: case 3

if sim_case3
    
    % Changing spacecraft properties
    spacecraft.resDip = [0.08; -0.05; 0.04];
    spacecraft.I = [4.60, -0.5, -1.2;...
        -0.5, 8.31, 1.1;...
        -1.2, 1.1, 5.7].*1e-2;
    
    detumbling
    
    % Initial conditions for detumbling
    spacecraft.w0 = deg2rad([7; 2 ; 6]);
    spacecraft.q0 = [0.7133; 0.1100; 0.3141; 0.6168];
    orbit.theta0 = 0;
    observer.estMd0 = [0; 0; 0];
    actuators.rw.hr0 = [0; 0; 0; 0];
    
    % Detumbling - simulation setup
    control.detumbling.SRD = 0;
    startTime = 0;
    stopTime = 3*orbit.T;
    set_param('detumbling', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation
    outDetumbling_case3 = sim('detumbling');
    
    tracking
    
    % Initial conditions for tracking
    spacecraft.w0 = outDetumbling_case3.w(end,:)';
    spacecraft.q0 = outDetumbling_case3.q(end,:)';
    orbit.theta0 = outDetumbling_case3.theta(end,:)';
    observer.estMd0 = outDetumbling_case3.estMd(end,:)';
    actuators.rw.hr0 = outDetumbling_case3.hr(end,:)';
    
    % Tracking - simulation setup
    startTime = 3*orbit.T;
    stopTime = 6*orbit.T;
    set_param('tracking', 'Solver', 'ode45', 'SimulationMode', 'accelerator',...
        'MaxStep', num2str(sensors.st.Ts), 'AbsTol', '1e-8', 'RelTol', '1e-8',...
        'StartTime',num2str(startTime),'StopTime', num2str(stopTime));
    
    % Run simulation and save workspace
    outTracking_case3 = sim('tracking');
    save('outOffNominal_case3.mat', 'outDetumbling_case3', 'outTracking_case3')
else
    load outOffNominal_case3
end

%% Plots

% For plotting, run each section in plots.m (uncontrolled, detumbling, 
% tracking, off-nominal) separately. This is to avoid overloading the
% memory when generating the graphs.

edit plots

