%% Uncontrolled

lwidth = 1;

% Norm of disturbances
figure
hold on, grid on
plot(outUncontrolled.tout, vecnorm(outUncontrolled.M_srp, 2, 2), 'LineWidth', lwidth)
plot(outUncontrolled.tout, vecnorm(outUncontrolled.M_b, 2, 2), 'LineWidth', lwidth)
plot(outUncontrolled.tout, vecnorm(outUncontrolled.M_gg, 2, 2), 'LineWidth', lwidth)
plot(outUncontrolled.tout, vecnorm(outUncontrolled.M_drag, 2, 2), 'LineWidth', lwidth)
legend('SRP', 'Magnetic field', 'GG', 'Drag', 'Location', 'Best');
xlabel('t $[s]$')
ylabel('$[N \cdot m]$')
xlim([outUncontrolled.tout(1), outUncontrolled.tout(end)])
% saveFigAsPdf('uncontrolled-disturbances',1,2)

% Angular velocity
figure
hold on, grid on
plot(outUncontrolled.tout, outUncontrolled.w, 'LineWidth', lwidth);
legend('$\omega_x$', '$\omega_y$', '$\omega_z$')
xlabel('t $[s]$')
ylabel('$[rad/s]$')
xlim([outUncontrolled.tout(1), outUncontrolled.tout(end)])
% saveFigAsPdf('uncontrolled-w',0.5,2)

% Quaternion
figure
hold on, grid on
plot(outUncontrolled.tout, outUncontrolled.q, 'LineWidth', lwidth);
legend('$q_1$', '$q_2$', '$q_3$', '$q_4$')
xlabel('t $[s]$')
ylabel('$[-]$')
xlim([outUncontrolled.tout(1), outUncontrolled.tout(end)])
% saveFigAsPdf('uncontrolled-q',0.5,2)

%% Detumbling (SRD)

lwidth = 1;

% Angular velocity
figure
hold on, grid on
plot(outDetumbling_SRD.tout, outDetumbling_SRD.w, 'LineWidth', lwidth);
legend('$\omega_x$', '$\omega_y$', '$\omega_z$')
xlabel('t $[s]$')
ylabel('$[rad/s]$')
xlim([outDetumbling_SRD.tout(1), outDetumbling_SRD.tout(end)])
% saveFigAsPdf('detumblingSRD-w',0.5,2)

% Estimation error (angular velocity)
figure
hold on, grid on
plot(outDetumbling_SRD.tout, abs(outDetumbling_SRD.w - outDetumbling_SRD.estW),...
    'LineWidth', lwidth);
legend('$|\bar{\omega}_x - \omega_x|$',...
    '$|\bar{\omega}_y - \omega_y|$',...
    '$|\bar{\omega}_z - \omega_z|$')
xlabel('t $[s]$')
ylabel('$[rad/s]$')
xlim([outDetumbling_SRD.tout(1), outDetumbling_SRD.tout(end)])
% saveFigAsPdf('detumblingSRD-estW',0.5,2)

% Quaternion
figure
hold on, grid on
plot(outDetumbling_SRD.tout, outDetumbling_SRD.q, 'LineWidth', lwidth);
legend('$q_1$', '$q_2$', '$q_3$', '$q_4$') 
xlabel('t $[s]$')
ylabel('$[-]$')
xlim([outDetumbling_SRD.tout(1), outDetumbling_SRD.tout(end)])
% saveFigAsPdf('detumblingSRD-q',0.5,2)

% Estimation error (quaternion)
figure
hold on, grid on
plot(outDetumbling_SRD.tout, abs(outDetumbling_SRD.q - outDetumbling_SRD.estQ),...
    'LineWidth', lwidth);
legend('$|\bar{q}_1 - q_1|$', '$|\bar{q}_2 - q_2|$',...
    '$|\bar{q}_3 - q_3|$', '$|\bar{q}_4 - q_4|$')
xlabel('t $[s]$')
ylabel('$[-]$')
xlim([outDetumbling_SRD.tout(1), outDetumbling_SRD.tout(end)])
saveFigAsPdf('detumblingSRD-estQ',0.5,2)

% % Pointing error
% figure
% hold on, grid on
% plot(outDetumbling_SRD.tout, outDetumbling_SRD.pointError, 'LineWidth', lwidth);
% xlabel('t $[s]$')
% ylabel('$[{}^{\circ}]$')
% xlim([outDetumbling_SRD.tout(1), outDetumbling_SRD.tout(end)])
% saveFigAsPdf('detumblingSRD-pe',0.5,2)

% Magnetic dipole
figure
hold on, grid on
plot(outDetumbling_SRD.tout, outDetumbling_SRD.D, 'LineWidth', lwidth);
legend('$\bar{D}_x$', '$\bar{D}_y$', '$\bar{D}_z$')
xlabel('t $[s]$')
ylabel('$[A/m^2$]')
xlim([outDetumbling_SRD.tout(1), outDetumbling_SRD.tout(end)])
% saveFigAsPdf('detumblingSRD-D',1,2)

%% Detumbling (proportional)

lwidth = 1;

% Angular velocity
figure
hold on, grid on
plot(outDetumbling_P.tout, outDetumbling_P.w, 'LineWidth', lwidth);
legend('$\omega_x$', '$\omega_y$', '$\omega_z$')
xlabel('t $[s]$')
ylabel('$[rad/s]$')
xlim([outDetumbling_P.tout(1), outDetumbling_P.tout(end)])
saveFigAsPdf('detumblingP-w',0.5,2)

% Estimation error (angular velocity)
figure
hold on, grid on
plot(outDetumbling_P.tout, abs(outDetumbling_P.w - outDetumbling_P.estW),...
    'LineWidth', lwidth);
legend('$|\bar{\omega}_x - \omega_x|$',...
    '$|\bar{\omega}_y - \omega_y|$',...
    '$|\bar{\omega}_z - \omega_z|$')
xlabel('t $[s]$')
ylabel('$[rad/s]$')
xlim([outDetumbling_P.tout(1), outDetumbling_P.tout(end)])
saveFigAsPdf('detumblingP-estW',0.5,2)

% Quaternion
figure
hold on, grid on
plot(outDetumbling_P.tout, outDetumbling_P.q, 'LineWidth', lwidth);
legend('$q_1$', '$q_2$', '$q_3$', '$q_4$') 
xlabel('t $[s]$')
ylabel('$[-]$')
xlim([outDetumbling_P.tout(1), outDetumbling_P.tout(end)])
saveFigAsPdf('detumblingP-q',0.5,2)

% Estimation error (quaternion)
figure
hold on, grid on
plot(outDetumbling_P.tout, abs(outDetumbling_P.q - outDetumbling_P.estQ),...
    'LineWidth', lwidth);
legend('$|\bar{q}_1 - q_1|$', '$|\bar{q}_2 - q_2|$',...
    '$|\bar{q}_3 - q_3|$', '$|\bar{q}_4 - q_4|$')
xlabel('t $[s]$')
ylabel('$[-]$')
xlim([outDetumbling_P.tout(1), outDetumbling_P.tout(end)])
saveFigAsPdf('detumblingP-estQ',0.5,2)

% % Pointing error
% figure
% hold on, grid on
% plot(outDetumbling_P.tout, outDetumbling_P.pointError, 'LineWidth', lwidth);
% xlabel('t $[s]$')
% ylabel('$[{}^{\circ}]$')
% xlim([outDetumbling_P.tout(1), outDetumbling_P.tout(end)])
% saveFigAsPdf('detumblingP-pe',0.5,2)

%% Tracking

lwidth = 1;

% Angular velocity
figure
hold on, grid on
plot(outTracking.tout, outTracking.w, 'LineWidth', lwidth);
legend('$\omega_x$', '$\omega_y$', '$\omega_z$')
xlabel('t $[s]$')
ylabel('$[rad/s]$')
xlim([outTracking.tout(1), outTracking.tout(end)])
saveFigAsPdf('tracking-w',0.5,2)

% Estimation error (angular velocity)
figure
hold on, grid on
plot(outTracking.tout, abs(outTracking.w - outTracking.estW),...
    'LineWidth', lwidth);
legend('$|\bar{\omega}_x - \omega_x|$',...
    '$|\bar{\omega}_y - \omega_y|$',...
    '$|\bar{\omega}_z - \omega_z|$')
xlabel('t $[s]$')
ylabel('$[rad/s]$')
xlim([outTracking.tout(1), outTracking.tout(end)])
saveFigAsPdf('tracking-estW',0.5,2)

% Direction cosines matrix
figure
hold on, grid on
leg = cell(9,1); idx = 0;
for i = 1:3
    for j = 1:3
        idx = idx + 1;
        plot(outTracking.tout(:), squeeze(outTracking.A_bn(i,j,:)),...
            'LineWidth', lwidth);
        leg{idx} = ['$A_{b/n \,', num2str(i),num2str(j),'}$'];
    end 
end
legend(leg, 'Location', 'BestOutside')
xlabel('t $[s]$')
ylabel('[-]')
xlim([outTracking.tout(1), outTracking.tout(end)])
saveFigAsPdf('tracking-Abn',0.5,2)

% Estimation error (Direction cosines matrix)
figure
hold on, grid on
leg = cell(9,1); idx = 0;
for i = 1:3
    for j = 1:3
        idx = idx + 1;
        plot(outTracking.tout(:), abs(squeeze(outTracking.A_bn(i,j,:)) -...
            squeeze(outTracking.estA_bn(i,j,:))), 'LineWidth', lwidth);
        leg{idx} = ['$|\bar{A}_{b/n \,', num2str(i), num2str(j),'} - A_{b/n \,',...
            num2str(i), num2str(j), '}|$'];
    end 
end
legend(leg, 'Location', 'BestOutside')
xlabel('t $[s]$')
ylabel('[-]')
xlim([outTracking.tout(1), outTracking.tout(end)])
saveFigAsPdf('tracking-estAbn',0.5,2)

% Estimation error (control moments)
figure
hold on, grid on
plot(outTracking.tout, abs(outTracking.Mc - outTracking.estMc), 'LineWidth', lwidth);
legend('$|\bar{M}_{c,x} - M_{c,x}|$',...
    '$|\bar{M}_{c,y} - M_{c,y}|$',...
    '$|\bar{M}_{c,z} - M_{c,z}|$')
xlabel('t $[s]$')
ylabel('$[N \cdot m]$')
xlim([outTracking.tout(1), outTracking.tout(end)])
saveFigAsPdf('tracking-estMc',0.5,2)

% Estimation error (disturbing moments)
figure
hold on, grid on
plot(outTracking.tout, abs(outTracking.Md - outTracking.estMd), 'LineWidth', lwidth);
legend('$|\bar{M}_{d,x} - M_{d,x}|$',...
    '$|\bar{M}_{d,y} - M_{d,y}|$',...
    '$|\bar{M}_{d,z} - M_{d,z}|$')
xlabel('t $[s]$')
ylabel('$[N \cdot m]$')
xlim([outTracking.tout(1), outTracking.tout(end)])
saveFigAsPdf('tracking-estMd',0.5,2)

% Angular momentum of reaction wheels
figure
hold on, grid on
plot(outTracking.tout, outTracking.hr, 'LineWidth', lwidth);
legend('$h_{r,1}$', '$h_{r,2}$', '$h_{r,3}$', '$h_{r,4}$')
xlabel('t $[s]$')
ylabel('$[kg \, m^2/s]$')
xlim([outTracking.tout(1), outTracking.tout(end)])
saveFigAsPdf('tracking-hr',0.5,2)

% Momentum provided to the wheels
figure
hold on, grid on
plot(outTracking.tout, outTracking.Mr, 'LineWidth', lwidth);
legend('$M_{r,1}$', '$M_{r,2}$', '$M_{r,3}$', '$M_{r,4}$')
xlabel('t $[s]$')
ylabel('$[N \cdot m]$')
xlim([outTracking.tout(1), outTracking.tout(end)])
saveFigAsPdf('tracking-Mr',0.5,2)

% Pointing error
figure
hold on, grid on
plot(outTracking.tout, outTracking.pointError, 'LineWidth', lwidth);
xlabel('t $[s]$')
ylabel('$[{}^{\circ}]$')
xlim([outTracking.tout(1), outTracking.tout(end)])
% saveFigAsPdf('tracking-pe',0.5,2)

%% Off-nominal simulations

lwidth = 1;

% Angular velocity in detumbling
figure
hold on, grid on
plot(outDetumbling_case1.tout, vecnorm(outDetumbling_case1.w, 2, 2), 'LineWidth', lwidth);
plot(outDetumbling_case2.tout, vecnorm(outDetumbling_case2.w, 2, 2), 'LineWidth', lwidth);
plot(outDetumbling_case3.tout, vecnorm(outDetumbling_case3.w, 2, 2), 'LineWidth', lwidth);
legend('Case 1', 'Case 2', 'Case 3')
xlabel('t $[s]$')
ylabel('$[rad/s]$')
xlim([outDetumbling_case1.tout(1), outDetumbling_case1.tout(end)])
% saveFigAsPdf('offNominal-w',1,2)

% Pointing error in tracking
figure
hold on, grid on
plot(outTracking_case1.tout, outTracking_case1.pointError, 'LineWidth', lwidth);
plot(outTracking_case2.tout, outTracking_case2.pointError, 'LineWidth', lwidth);
plot(outTracking_case3.tout, outTracking_case3.pointError, 'LineWidth', lwidth);
legend('Case 1', 'Case 2', 'Case 3')
xlabel('t $[s]$')
ylabel('$[{}^{\circ}]$')
xlim([outTracking_case1.tout(1), outTracking_case1.tout(end)])
% saveFigAsPdf('offNominal-pe',1,2)


