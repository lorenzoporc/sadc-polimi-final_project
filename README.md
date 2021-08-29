## sadc-final-project

Repository for the code/report of the final project for the ***Spacecraft Dynamics Attitude and Control*** course, M.Sc. in Space Engineering @ Politecnico di Milano, A.Y. 2020-2021.

Contributors:
+ Lorenzo Porcelli

### Abstract

The project reports the design of an Attitude Determination and Control System for a 6U CubeSat. The chosen sensors are a **Sun sensor**, **star tracker** and a **magnetometer**, while the employed actuators are a **magnetorquer** and a set of four **reaction wheels** arranged in a pyramid configuration. The attitude is determined via the QUEST method and an Extended State Observer. Two control modes are simulated:

* _Detumbling_: the implemented control laws are the **spin rate damping** (with the magnetorquer) and a proportional control (with the RWs)
* _Tracking_: the spacecraft tracks the Nadir direction. A **non-linear control law** (derived through a Lyapounov function) is allocated to the reaction wheels.

The numerical simulations are performed via Simulink/MATLAB models.
