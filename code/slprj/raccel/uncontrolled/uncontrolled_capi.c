#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "uncontrolled_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "uncontrolled.h"
#include "uncontrolled_capi.h"
#include "uncontrolled_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 2 , TARGET_STRING (
"uncontrolled/Attitude determination/MATLAB Function" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Gain" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 4 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Gain3" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 5 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Integrator" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Add" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Add1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Add2" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Add3" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Light condition for the Sun sensor" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Light condition for the Sun sensor" ) , TARGET_STRING (
"" ) , 1 , 0 , 3 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Shadow condition for the Sun Sensor" ) , TARGET_STRING
( "" ) , 0 , 0 , 3 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Shadow condition for the Sun Sensor" ) , TARGET_STRING
( "" ) , 1 , 0 , 3 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"uncontrolled/Sensors/AND" ) , TARGET_STRING ( "" ) , 0 , 1 , 4 , 0 , 0 } , {
15 , 0 , TARGET_STRING ( "uncontrolled/Sensors/NAND" ) , TARGET_STRING ( "" )
, 0 , 1 , 4 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Merge" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } ,
{ 17 , 0 , TARGET_STRING ( "uncontrolled/Sensors/Merge1" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 2 } , { 18 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 1 } , { 19 , 0 , TARGET_STRING ( "uncontrolled/Spin rate damping/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Add" ) , TARGET_STRING ( "mC_id" ) , 0 , 0 ,
1 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Dot Product" ) , TARGET_STRING ( "" ) , 0 , 0
, 4 , 0 , 3 } , { 22 , 1 , TARGET_STRING (
 "uncontrolled/Attitude determination/Angular velocity estimation/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"uncontrolled/Attitude determination/Angular velocity estimation/Derivative"
) , TARGET_STRING ( "dotQest" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 ,
TARGET_STRING (
"uncontrolled/Attitude determination/Angular velocity estimation/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
 "uncontrolled/Attitude determination/Angular velocity estimation/Matrix Multiply"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Sum1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 5 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Euler equations/Gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Euler equations/Gain1" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Euler equations/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Euler equations/Add" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Sum" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/Integrator" ) , TARGET_STRING ( ""
) , 0 , 0 , 4 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Cross Product/Element product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
"uncontrolled/Extended State Observer/Cross Product/Add3" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Light condition for the Sun sensor/Matrix Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Light condition for the Sun sensor/Matrix Concatenate1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 37 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Light condition for the Sun sensor/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 38 , 13 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/MATLAB Function" ) , TARGET_STRING ( "" )
, 0 , 0 , 5 , 0 , 3 } , { 39 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Matrix Multiply" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 3 } , { 40 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Sun sensor FoV/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Sun sensor FoV/Acos" ) , TARGET_STRING ( "" ) , 0 , 0 ,
4 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Cross Product/Element product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Cross Product/Add3" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Cross Product1/Element product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Cross Product1/Add3" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Cross Product2/Element product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Cross Product2/Add3" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Cross Product3/Element product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"uncontrolled/Spin rate damping/Cross Product3/Add3" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Euler equations/Cross Product/Element product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Euler equations/Cross Product/Add3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Gain" ) , TARGET_STRING (
"" ) , 0 , 0 , 5 , 0 , 1 } , { 53 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 5 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/MatrixMultiply" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Product" ) , TARGET_STRING
( "" ) , 0 , 0 , 5 , 0 , 1 } , { 56 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 57 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Sum" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Sum1" ) , TARGET_STRING (
"" ) , 0 , 0 , 5 , 0 , 1 } , { 59 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 60 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 61 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/MatrixMultiply"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 62 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/MatrixMultiply"
) , TARGET_STRING ( "c" ) , 0 , 0 , 1 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Magnetic torque/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Magnetic torque/MatrixMultiply" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 65 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Magnetic torque/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 66 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Magnetic torque/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 67 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/If Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 69 , 9 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Solar radiation pressure/Merge1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/LVLH frame/Transpose" ) ,
TARGET_STRING ( "A_nl" ) , 0 , 0 , 5 , 0 , 1 } , { 72 , 0 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/LVLH frame/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 73 , 0 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/LVLH frame/Product1" ) ,
TARGET_STRING ( "A_bl" ) , 0 , 0 , 5 , 0 , 1 } , { 74 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Transpose"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 4 } , { 75 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/MatrixMultiply"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 76 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/MatrixMultiply1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 77 , 0 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/True anomaly ODE/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 78 , 0 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/True anomaly ODE/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 79 , 0 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/True anomaly ODE/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 80 , 0 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/True anomaly ODE/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 81 , 0 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 2 } , { 82 , 10 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/MATLAB Function"
) , TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 , 2 } , { 83 , 12 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Zero-Order Hold"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 2 } , { 84 , 11 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/MATLAB Function"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 2 } , { 85 , 0 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/MatrixMultiply1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 86 , 12 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Zero-Order Hold"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 87 , 14 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/MATLAB Function"
) , TARGET_STRING ( "" ) , 1 , 0 , 3 , 0 , 2 } , { 88 , 15 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Zero-Order Hold"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 2 } , { 89 , 0 , TARGET_STRING (
"uncontrolled/Sensors/Sun sensor FoV/Normalize Vector/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 4 } , { 90 , 0 , TARGET_STRING (
 "uncontrolled/Attitude determination/Angular velocity estimation/Varying Lowpass Filter/FOS/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 91 , 0 , TARGET_STRING (
 "uncontrolled/Attitude determination/Angular velocity estimation/Varying Lowpass Filter/FOS/Product4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 92 , 0 , TARGET_STRING (
 "uncontrolled/Attitude determination/Angular velocity estimation/Varying Lowpass Filter/FOS/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Matrix Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 94 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 95 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 96 , 0 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 97 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Normalize Vector/Math Function1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 98 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Normalize Vector/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 99 , 3 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Normalize Vector/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 100 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Normalize Vector/Sum of Elements"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 101 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Normalize Vector/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 1 } , { 102 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Matrix Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 1 } , { 103 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 104 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 105 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 106 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 107 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain4"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 108 , 0 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain5"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 109 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 110 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 111 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 112 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Gain3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 113 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Product" )
, TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 114 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Product1" )
, TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 115 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Product2" )
, TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 116 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Product3" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 117 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Cross Product/Element product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 118 , 0 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Magnetic torque/Cross Product/Add3" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 119 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 120 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 121 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 122 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 123 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 124 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/Shadow cone of the Earth/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 4 , 0 , 0 } , { 125 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/Shadow cone of the Earth/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 126 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/Shadow cone of the Earth/Acos2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 127 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/Sun position in Earth inertial frame/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 128 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/LVLH frame/LVLH to inclined orbit frame/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 129 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/LVLH frame/LVLH to inclined orbit frame/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 130 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 131 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 4 } , { 132 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 133 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 134 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 135 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 136 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 137 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 138 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 139 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Normalize Vector/Math Function1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 140 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Normalize Vector/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 141 , 5 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Normalize Vector/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 142 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Normalize Vector/Sum of Elements"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 143 , 0 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Normalize Vector/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 144 , 9 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/If Action Subsystem1/Normalize Vector/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 145 , TARGET_STRING (
"uncontrolled/Extended State Observer/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 2 , 0 } , { 146 , TARGET_STRING (
"uncontrolled/Sensors/Merge" ) , TARGET_STRING ( "InitialOutput" ) , 0 , 4 ,
0 } , { 147 , TARGET_STRING ( "uncontrolled/Sensors/Merge1" ) , TARGET_STRING
( "InitialOutput" ) , 0 , 4 , 0 } , { 148 , TARGET_STRING (
"uncontrolled/Attitude determination/Angular velocity estimation/Constant" )
, TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 149 , TARGET_STRING (
"uncontrolled/Attitude determination/Angular velocity estimation/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 150 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 5 , 0 } , { 151 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Gain" ) , TARGET_STRING ( "Gain" ) ,
0 , 4 , 0 } , { 152 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Gain1" ) , TARGET_STRING ( "Gain" )
, 0 , 4 , 0 } , { 153 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number" ) , TARGET_STRING ( "Mean"
) , 0 , 4 , 0 } , { 154 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number" ) , TARGET_STRING (
"StdDev" ) , 0 , 4 , 0 } , { 155 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number" ) , TARGET_STRING ( "Seed"
) , 0 , 4 , 0 } , { 156 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number1" ) , TARGET_STRING ( "Mean"
) , 0 , 4 , 0 } , { 157 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number1" ) , TARGET_STRING (
"StdDev" ) , 0 , 4 , 0 } , { 158 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number1" ) , TARGET_STRING ( "Seed"
) , 0 , 4 , 0 } , { 159 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number2" ) , TARGET_STRING ( "Mean"
) , 0 , 4 , 0 } , { 160 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number2" ) , TARGET_STRING (
"StdDev" ) , 0 , 4 , 0 } , { 161 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number2" ) , TARGET_STRING ( "Seed"
) , 0 , 4 , 0 } , { 162 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number3" ) , TARGET_STRING ( "Mean"
) , 0 , 4 , 0 } , { 163 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number3" ) , TARGET_STRING (
"StdDev" ) , 0 , 1 , 0 } , { 164 , TARGET_STRING (
"uncontrolled/Sensors/Magnetometer/Random Number3" ) , TARGET_STRING ( "Seed"
) , 0 , 4 , 0 } , { 165 , TARGET_STRING (
"uncontrolled/Sensors/Sun sensor FoV/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 4 , 0 } , { 166 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Skew matrix/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 167 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Skew matrix/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 168 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Skew matrix/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 169 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Skew matrix/Gain" ) , TARGET_STRING
( "Gain" ) , 0 , 4 , 0 } , { 170 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Skew matrix/Gain1" ) , TARGET_STRING
( "Gain" ) , 0 , 4 , 0 } , { 171 , TARGET_STRING (
"uncontrolled/Attitude determination/DCM/Skew matrix/Gain2" ) , TARGET_STRING
( "Gain" ) , 0 , 4 , 0 } , { 172 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 173 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 174 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 175 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Normalize Vector"
) , TARGET_STRING ( "maxzero" ) , 0 , 4 , 0 } , { 176 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 177 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 178 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/LVLH frame/R1(i)" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 179 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/R1(i)"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 180 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/R3(OM)"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 181 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/R3(om)"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 182 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/True anomaly ODE/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 183 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/True anomaly ODE/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 184 , TARGET_STRING (
"uncontrolled/Environment/Orbit propagator/True anomaly ODE/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 185 , TARGET_STRING (
"uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Memory"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 5 , 0 } , { 186 ,
TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 187 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 188 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 189 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number1"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 190 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number1"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 191 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number1"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 192 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number2"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 193 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number2"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 194 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Star tracker/Random Number2"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 195 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 196 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 197 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 198 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number1"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 199 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number1"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 200 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number1"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 201 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number2"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 202 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number2"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 203 , TARGET_STRING (
 "uncontrolled/Sensors/Light condition for the Sun sensor/Sun sensor/Random Number2"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 204 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 205 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 206 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 207 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number1"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 208 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number1"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 209 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number1"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 210 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number2"
) , TARGET_STRING ( "Mean" ) , 0 , 4 , 0 } , { 211 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number2"
) , TARGET_STRING ( "StdDev" ) , 0 , 4 , 0 } , { 212 , TARGET_STRING (
 "uncontrolled/Sensors/Shadow condition for the Sun Sensor/Star tracker/Random Number2"
) , TARGET_STRING ( "Seed" ) , 0 , 4 , 0 } , { 213 , TARGET_STRING (
"uncontrolled/Sensors/Sun sensor FoV/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 214 , TARGET_STRING (
 "uncontrolled/Attitude determination/Angular velocity estimation/Varying Lowpass Filter/FOS/Integrator"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 4 , 0 } , { 215 ,
TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 216 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 217 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 218 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 219 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 220 , TARGET_STRING (
"uncontrolled/Dynamics + kinematics/Kinematics/DCM/Skew matrix/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 221 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 222 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 223 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 224 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 225 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 226 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 227 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 228 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 229 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 230 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 231 , TARGET_STRING (
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Omega matrix/Gain5"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 232 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Constant" )
, TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 233 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 234 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 235 , TARGET_STRING (
"uncontrolled/Environment/Disturbances/Gravity gradient torque/GG/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 236 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Normalize Vector"
) , TARGET_STRING ( "maxzero" ) , 0 , 4 , 0 } , { 237 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 238 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 239 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 240 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/If Action Subsystem/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 241 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/If Action Subsystem1/vSun_n"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 4 , 0 } , { 242 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/If Action Subsystem1/Normalize Vector"
) , TARGET_STRING ( "maxzero" ) , 0 , 4 , 0 } , { 243 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/LVLH frame/LVLH to inclined orbit frame/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 244 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/LVLH frame/LVLH to inclined orbit frame/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 245 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/LVLH frame/LVLH to inclined orbit frame/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 246 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 247 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 248 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 249 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 250 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Constant6"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 251 , TARGET_STRING (
 "uncontrolled/Environment/Orbit propagator/Position and velocity (inertial frame)/Position and velocity (perifocal frame)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 4 , 0 } , { 252 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Magnetic torque/Magnetic field versor/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 253 , TARGET_STRING (
 "uncontrolled/Environment/Disturbances/Solar radiation pressure/If Action Subsystem1/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 254 ,
TARGET_STRING ( "spacecraft" ) , 2 , 4 , 0 } , { 255 , TARGET_STRING (
"sensors" ) , 6 , 4 , 0 } , { 256 , TARGET_STRING ( "constants" ) , 7 , 4 , 0
} , { 257 , TARGET_STRING ( "orbit" ) , 8 , 4 , 0 } , { 258 , TARGET_STRING (
"observer" ) , 9 , 4 , 0 } , { 259 , TARGET_STRING ( "control" ) , 11 , 4 , 0
} , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . mbfh3bqryb [ 0 ] , & rtB .
hbevfgwkvl [ 0 ] , & rtB . aebifcgewd [ 0 ] , & rtB . hn4pi0rg32 [ 0 ] , &
rtB . klvp5ya35j [ 0 ] , & rtB . doteuheq3d [ 0 ] , & rtB . i3roev24mh [ 0 ]
, & rtB . l4zlvqrj2x [ 0 ] , & rtB . n12tuana1x [ 0 ] , & rtB . nk0vmookgp [
0 ] , & rtB . ptsg4njrmr [ 0 ] , & rtB . o4dj4py0uf [ 0 ] , & rtB .
ptsg4njrmr [ 0 ] , & rtB . o4dj4py0uf [ 0 ] , & rtB . mzpdbd1vyg , & rtB .
fxtfkkj240 , & rtB . ptsg4njrmr [ 0 ] , & rtB . o4dj4py0uf [ 0 ] , & rtB .
llxlnrqyk4 [ 0 ] , & rtB . by3a5qvtdp [ 0 ] , & rtB . bpjgux3ffo [ 0 ] , &
rtB . divw1m0v52 , & rtB . pphyhpy43h [ 0 ] , & rtB . lyzah33zfx [ 0 ] , &
rtB . esrmchniol [ 0 ] , & rtB . nl3ehfqz2m [ 0 ] , & rtB . jij0vqqcem [ 0 ]
, & rtB . b1p03woqms [ 0 ] , & rtB . mrapgtn004 [ 0 ] , & rtB . ccl35kpxd5 [
0 ] , & rtB . fzw2g0qbjr [ 0 ] , & rtB . occ2w24px3 [ 0 ] , & rtB .
dkn2uoguzp , & rtB . n4bqi2lsjc [ 0 ] , & rtB . jdm3ln0pbp [ 0 ] , & rtB .
ptsg4njrmr [ 0 ] , & rtB . o4dj4py0uf [ 0 ] , & rtB . o4dj4py0uf [ 0 ] , &
rtB . hdco5djtlp . oowvbhbp1g [ 0 ] , & rtB . i34eoyi5rk [ 0 ] , & rtB .
gqnw3gvtvl [ 0 ] , & rtB . au0lhyifpn , & rtB . ewv3nr05q4 [ 0 ] , & rtB .
jpmq223gsx [ 0 ] , & rtB . fv2wqoyajh [ 0 ] , & rtB . jlfsrqkudk [ 0 ] , &
rtB . hmxb1je3zz [ 0 ] , & rtB . n1x5ppclcy [ 0 ] , & rtB . e44na3aipf [ 0 ]
, & rtB . kzgofjzvij [ 0 ] , & rtB . j4ocfboarv [ 0 ] , & rtB . akh33sy2jr [
0 ] , & rtB . jobdkup5ya [ 0 ] , & rtB . ocg4x41c1b [ 0 ] , & rtB .
cly0cps1kj [ 0 ] , & rtB . kq3be5snym [ 0 ] , & rtB . ensiuwqomq [ 0 ] , &
rtB . dxoa34c3b1 , & rtB . g5cvdi42sk [ 0 ] , & rtB . h4duglqebr [ 0 ] , &
rtB . keylink3mt [ 0 ] , & rtB . bsfnxcv52h [ 0 ] , & rtB . jgcbfw45zw [ 0 ]
, & rtB . dcymgtaxnd , & rtB . ly0si1rewp [ 0 ] , & rtB . dfj1hv2rax , & rtB
. kmrxoj3dew , & rtB . fwruiojfal [ 0 ] , & rtB . fwruiojfal [ 0 ] , & rtB .
o4b5qm0dak [ 0 ] , & rtB . fwruiojfal [ 0 ] , & rtB . byhq4mkmdc [ 0 ] , &
rtB . jjc4dlmsrz [ 0 ] , & rtB . ipnql3q2rt [ 0 ] , & rtB . k0ctxkfhfc [ 0 ]
, & rtB . jrvlwmnotm [ 0 ] , & rtB . fbqtfsiq0n [ 0 ] , & rtB . dtvswhyfml ,
& rtB . cgheitfdhl , & rtB . nfnictfkhl , & rtB . lobflauijs , ( & rtB .
ptsg4njrmr [ 0 ] + 3 ) , & rtB . my4i2jj4w0 [ 0 ] , & rtB . drnfnw0sfs [ 0 ]
, & rtB . luux5q1kph . oowvbhbp1g [ 0 ] , & rtB . ptsg4njrmr [ 0 ] , & rtB .
ol4ycpsogd [ 0 ] , & rtB . ijzytbew2v [ 0 ] , & rtB . fya5ejz2q1 [ 0 ] , &
rtB . kyywqu43ff [ 0 ] , & rtB . mub3xknkza [ 0 ] , & rtB . k0l1swnxpw [ 0 ]
, & rtB . ls5eb5r25u [ 0 ] , & rtB . kijoxc4gpj [ 0 ] , & rtB . hoa03yvz1u ,
& rtB . cgif1ftqiu , & rtB . ewaorjb0zq , & rtB . n0cnntkefl , & rtB .
hpxf3zbmys [ 0 ] , & rtB . kk2fncgdzf [ 0 ] , & rtB . flzo1tlsb5 , & rtB .
awpypta2ug [ 0 ] , & rtB . ax5zdb10u1 [ 0 ] , & rtB . ai2d3xslus , & rtB .
luumjekahk , & rtB . mrr55pvfey , & rtB . gyze4besoe , & rtB . aubs0aaxnm , &
rtB . lhlpjwlhyc , & rtB . msmw2tnin3 , & rtB . ocl30sbl44 , & rtB .
kedypbphyn , & rtB . gz5vsnzo3g [ 0 ] , & rtB . erakm5mnxc , & rtB .
djambayzpx , & rtB . bhjrv33qp1 , & rtB . gggciddgh2 [ 0 ] , & rtB .
hhmibzra1i [ 0 ] , & rtB . f5kn4yvyj5 [ 0 ] , & rtB . ikrnpfioht , & rtB .
f12kiybc2b , & rtB . gvgfzrqlin [ 0 ] , & rtB . b1ehm1vv5r [ 0 ] , & rtB .
owz1l3bgnh [ 0 ] , & rtB . abreinrkmh , & rtB . imimj3j53y , & rtB .
cybvicud0e , & rtB . akarp20eco [ 0 ] , & rtB . ngvjzsm1u4 [ 0 ] , & rtB .
ki2f0jghgn , & rtB . ghebyhkfa1 , & rtB . iyr0pt2wao , & rtB . oeqvrsjl20 , &
rtB . a3y1rc3rl1 , & rtB . eml13puwhm [ 0 ] , & rtB . kbe53iduh5 , & rtB .
fwep5bzjc2 , & rtB . ihzskco0h2 , & rtB . geloubvqmf , & rtB . ars5lnjltn , &
rtB . h1payfm0hu [ 0 ] , & rtB . kvx3ci1bl1 [ 0 ] , & rtB . opuyfb0xxc , &
rtB . omjr0w1vhx [ 0 ] , & rtB . o4b5qm0dak [ 0 ] , & rtP . Integrator_IC [ 0
] , & rtP . Merge_InitialOutput , & rtP . Merge1_InitialOutput , & rtP .
Constant_Value_lroc4o2obf , & rtP . Gain_Gain_gm0w0tp13r , & rtP .
Constant_Value_kwdixjtgki [ 0 ] , & rtP . Gain_Gain_jwng3jwdax , & rtP .
Gain1_Gain_pa3zraguct , & rtP . RandomNumber_Mean_j21m43fvkk , & rtP .
RandomNumber_StdDev_ergspd3esj , & rtP . RandomNumber_Seed_hc1q2hdzfi , & rtP
. RandomNumber1_Mean_folcsctbbm , & rtP . RandomNumber1_StdDev_bfdu1ljjkh , &
rtP . RandomNumber1_Seed_p2cqbf3h23 , & rtP . RandomNumber2_Mean_atwzdqzftl ,
& rtP . RandomNumber2_StdDev_odwja0ie23 , & rtP .
RandomNumber2_Seed_dzfuypjyx1 , & rtP . RandomNumber3_Mean , & rtP .
RandomNumber3_StdDev [ 0 ] , & rtP . RandomNumber3_Seed , & rtP .
NormalizeVector_maxzero_djt22qmkdo , & rtP . Constant_Value_glwqw0xiai , &
rtP . Constant1_Value_j1hh5rgit4 , & rtP . Constant2_Value , & rtP .
Gain_Gain_gzkwwfr5i5 , & rtP . Gain1_Gain_kdpq0ktuun , & rtP .
Gain2_Gain_irocmnpiyl , & rtP . Constant_Value_l3g1zulttu [ 0 ] , & rtP .
Gain_Gain_ahnizkpkvu , & rtP . Gain1_Gain_elldija22u , & rtP .
NormalizeVector_maxzero_pmmnk1unkt , & rtP . Gain_Gain_otymskpyft , & rtP .
Constant_Value_mvnthzwinm [ 0 ] , & rtP . R1i_Value [ 0 ] , & rtP .
R1i_Value_inxxofskdo [ 0 ] , & rtP . R3OM_Value [ 0 ] , & rtP . R3om_Value [
0 ] , & rtP . Constant1_Value_pn2byenzlv , & rtP . Gain_Gain_awbyjvpvae , &
rtP . Gain1_Gain_e4enzcc5io , & rtP . Memory_InitialCondition [ 0 ] , & rtP .
RandomNumber_Mean , & rtP . RandomNumber_StdDev , & rtP . RandomNumber_Seed ,
& rtP . RandomNumber1_Mean , & rtP . RandomNumber1_StdDev , & rtP .
RandomNumber1_Seed , & rtP . RandomNumber2_Mean , & rtP .
RandomNumber2_StdDev , & rtP . RandomNumber2_Seed , & rtP .
RandomNumber_Mean_j325veq3h4 , & rtP . RandomNumber_StdDev_osyvkm1nbd , & rtP
. RandomNumber_Seed_bcyzbehizb , & rtP . RandomNumber1_Mean_cglvlehpgy , &
rtP . RandomNumber1_StdDev_pa113sydms , & rtP . RandomNumber1_Seed_ddcozcfvqh
, & rtP . RandomNumber2_Mean_iqxzkifvrj , & rtP .
RandomNumber2_StdDev_elwn2e223c , & rtP . RandomNumber2_Seed_bxzdzv3qja , &
rtP . RandomNumber_Mean_alfcasepyf , & rtP . RandomNumber_StdDev_a4g1wn2f41 ,
& rtP . RandomNumber_Seed_muoxwvcrep , & rtP . RandomNumber1_Mean_fpegcxuncp
, & rtP . RandomNumber1_StdDev_dwmuwurpze , & rtP .
RandomNumber1_Seed_etksjukgo5 , & rtP . RandomNumber2_Mean_ozab14whuo , & rtP
. RandomNumber2_StdDev_ptcl32fe50 , & rtP . RandomNumber2_Seed_fet4qq2uda , &
rtP . Constant_Value_cfysieuu3n , & rtP . Integrator_IC_hxmcczyvi1 , & rtP .
Constant_Value_mldwum2o1l , & rtP . Constant1_Value_bhblxijpmx , & rtP .
Constant2_Value_mlr4215lth , & rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP .
Gain2_Gain , & rtP . Constant_Value_owsqu1yt4f , & rtP .
Constant_Value_ltm2gro5wx , & rtP . Constant1_Value_bxxiag1xam , & rtP .
Constant2_Value_iqulksquef , & rtP . Constant3_Value , & rtP .
Gain_Gain_lezygxxwam , & rtP . Gain1_Gain_k0h4blrnoh , & rtP .
Gain2_Gain_at243adaqy , & rtP . Gain3_Gain , & rtP . Gain4_Gain , & rtP .
Gain5_Gain , & rtP . Constant_Value_bbkwb0ia13 , & rtP . Gain_Gain_avjrptcnae
, & rtP . Gain1_Gain_map4aqbp2o , & rtP . Gain2_Gain_pf4c2t2zdn , & rtP .
NormalizeVector_maxzero_mhggypqjqf , & rtP . Constant_Value_cn5rxzkzqi , &
rtP . Gain_Gain_gqfasdb0wy , & rtP . Gain1_Gain_g1f04hzvel , & rtP .
Constant1_Value [ 0 ] , & rtP . vSun_n_Y0 , & rtP . NormalizeVector_maxzero ,
& rtP . Constant_Value_ehamsmfwks , & rtP . Constant1_Value_g2fcd0r1ax [ 0 ]
, & rtP . Gain_Gain_ovchahezfk , & rtP . Constant_Value_czomgcmo5z , & rtP .
Constant3_Value_pu1m0gcxmv , & rtP . Constant4_Value , & rtP .
Constant5_Value , & rtP . Constant6_Value , & rtP . Gain1_Gain_lnkn1c2sqc , &
rtP . Constant_Value_bgpplpzlth , & rtP . Constant_Value , & rtP . spacecraft
, & rtP . sensors , & rtP . constants , & rtP . orbit , & rtP . observer , &
rtP . control , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } , { "struct" , "struct_7w53TUU7DCcZ7x9uyZNi4D" , 14 , 1 , sizeof (
struct_7w53TUU7DCcZ7x9uyZNi4D ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_ws3TBaK8kR1NHfxD4l548E" , 7 , 15 , sizeof (
struct_ws3TBaK8kR1NHfxD4l548E ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_wjWgYUT3DRjRqLWwlezJcG" , 11 , 22 , sizeof (
struct_wjWgYUT3DRjRqLWwlezJcG ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_CRnsmL4lZgkrabHhgIcET" , 5 , 33 , sizeof (
struct_CRnsmL4lZgkrabHhgIcET ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_6VLnJIBAzs7njiDlW7859C" , 3 , 38 , sizeof (
struct_6VLnJIBAzs7njiDlW7859C ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_0htfUdjkLFYdKkTnHEO71D" , 11 , 41 , sizeof (
struct_0htfUdjkLFYdKkTnHEO71D ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_02sbINq0GgZbgB2UPNkVmG" , 7 , 52 , sizeof (
struct_02sbINq0GgZbgB2UPNkVmG ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_q6QA5LqJxPb5tq5SB2ZLtD" , 3 , 59 , sizeof (
struct_q6QA5LqJxPb5tq5SB2ZLtD ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_MoyAGu2uMzj1dRvV0obSwC" , 1 , 62 , sizeof (
struct_MoyAGu2uMzj1dRvV0obSwC ) , SS_STRUCT , 0 , 0 , 0 } , { "struct" ,
"struct_S8UC4WbXnDFTTwt3KikjSD" , 1 , 63 , sizeof (
struct_S8UC4WbXnDFTTwt3KikjSD ) , SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "nCubes" , rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D ,
nCubes ) , 0 , 11 , 0 } , { "rCoM_cubes" , rt_offsetof (
struct_7w53TUU7DCcZ7x9uyZNi4D , rCoM_cubes ) , 0 , 12 , 0 } , { "nPanels" ,
rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D , nPanels ) , 0 , 11 , 0 } , {
"panelLength" , rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D , panelLength ) ,
0 , 11 , 0 } , { "panelWidth" , rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D ,
panelWidth ) , 0 , 11 , 0 } , { "panelThickness" , rt_offsetof (
struct_7w53TUU7DCcZ7x9uyZNi4D , panelThickness ) , 0 , 11 , 0 } , {
"rCoM_panels" , rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D , rCoM_panels ) ,
0 , 13 , 0 } , { "mass" , rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D , mass
) , 0 , 11 , 0 } , { "rCoM" , rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D ,
rCoM ) , 0 , 7 , 0 } , { "I" , rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D ,
I ) , 0 , 5 , 0 } , { "invI" , rt_offsetof ( struct_7w53TUU7DCcZ7x9uyZNi4D ,
invI ) , 0 , 5 , 0 } , { "resDip" , rt_offsetof (
struct_7w53TUU7DCcZ7x9uyZNi4D , resDip ) , 0 , 7 , 0 } , { "w0" , rt_offsetof
( struct_7w53TUU7DCcZ7x9uyZNi4D , w0 ) , 0 , 7 , 0 } , { "q0" , rt_offsetof (
struct_7w53TUU7DCcZ7x9uyZNi4D , q0 ) , 0 , 14 , 0 } , { "FoV" , rt_offsetof (
struct_ws3TBaK8kR1NHfxD4l548E , FoV ) , 0 , 11 , 0 } , { "sigmaPhi" ,
rt_offsetof ( struct_ws3TBaK8kR1NHfxD4l548E , sigmaPhi ) , 0 , 11 , 0 } , {
"sigmaTheta" , rt_offsetof ( struct_ws3TBaK8kR1NHfxD4l548E , sigmaTheta ) , 0
, 11 , 0 } , { "sigmaPsi" , rt_offsetof ( struct_ws3TBaK8kR1NHfxD4l548E ,
sigmaPsi ) , 0 , 11 , 0 } , { "sigma" , rt_offsetof (
struct_ws3TBaK8kR1NHfxD4l548E , sigma ) , 0 , 11 , 0 } , { "Ts" , rt_offsetof
( struct_ws3TBaK8kR1NHfxD4l548E , Ts ) , 0 , 11 , 0 } , { "A_sb" ,
rt_offsetof ( struct_ws3TBaK8kR1NHfxD4l548E , A_sb ) , 0 , 5 , 0 } , {
"nStars" , rt_offsetof ( struct_wjWgYUT3DRjRqLWwlezJcG , nStars ) , 0 , 11 ,
0 } , { "FoV" , rt_offsetof ( struct_wjWgYUT3DRjRqLWwlezJcG , FoV ) , 0 , 15
, 0 } , { "sigmaRoll" , rt_offsetof ( struct_wjWgYUT3DRjRqLWwlezJcG ,
sigmaRoll ) , 0 , 11 , 0 } , { "sigmaCross" , rt_offsetof (
struct_wjWgYUT3DRjRqLWwlezJcG , sigmaCross ) , 0 , 11 , 0 } , { "sigmaPhi" ,
rt_offsetof ( struct_wjWgYUT3DRjRqLWwlezJcG , sigmaPhi ) , 0 , 11 , 0 } , {
"sigmaTheta" , rt_offsetof ( struct_wjWgYUT3DRjRqLWwlezJcG , sigmaTheta ) , 0
, 11 , 0 } , { "sigmaPsi" , rt_offsetof ( struct_wjWgYUT3DRjRqLWwlezJcG ,
sigmaPsi ) , 0 , 11 , 0 } , { "sigma" , rt_offsetof (
struct_wjWgYUT3DRjRqLWwlezJcG , sigma ) , 0 , 11 , 0 } , { "Ts" , rt_offsetof
( struct_wjWgYUT3DRjRqLWwlezJcG , Ts ) , 0 , 11 , 0 } , { "A_sb" ,
rt_offsetof ( struct_wjWgYUT3DRjRqLWwlezJcG , A_sb ) , 0 , 5 , 0 } , {
"vStars_n_init" , rt_offsetof ( struct_wjWgYUT3DRjRqLWwlezJcG , vStars_n_init
) , 0 , 3 , 0 } , { "sigmaPhi" , rt_offsetof ( struct_CRnsmL4lZgkrabHhgIcET ,
sigmaPhi ) , 0 , 11 , 0 } , { "sigmaTheta" , rt_offsetof (
struct_CRnsmL4lZgkrabHhgIcET , sigmaTheta ) , 0 , 11 , 0 } , { "sigmaPsi" ,
rt_offsetof ( struct_CRnsmL4lZgkrabHhgIcET , sigmaPsi ) , 0 , 11 , 0 } , {
"eps" , rt_offsetof ( struct_CRnsmL4lZgkrabHhgIcET , eps ) , 0 , 11 , 0 } , {
"Ts" , rt_offsetof ( struct_CRnsmL4lZgkrabHhgIcET , Ts ) , 0 , 11 , 0 } , {
"ss" , rt_offsetof ( struct_6VLnJIBAzs7njiDlW7859C , ss ) , 3 , 11 , 0 } , {
"st" , rt_offsetof ( struct_6VLnJIBAzs7njiDlW7859C , st ) , 4 , 11 , 0 } , {
"mm" , rt_offsetof ( struct_6VLnJIBAzs7njiDlW7859C , mm ) , 5 , 11 , 0 } , {
"U" , rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D , U ) , 0 , 11 , 0 } , {
"mu" , rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D , mu ) , 0 , 11 , 0 } , {
"wE" , rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D , wE ) , 0 , 11 , 0 } , {
"rho" , rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D , rho ) , 0 , 11 , 0 } ,
{ "magneticTilt" , rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D , magneticTilt
) , 0 , 11 , 0 } , { "H0" , rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D , H0
) , 0 , 11 , 0 } , { "REq" , rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D ,
REq ) , 0 , 11 , 0 } , { "nSun" , rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D
, nSun ) , 0 , 11 , 0 } , { "oblAngle" , rt_offsetof (
struct_0htfUdjkLFYdKkTnHEO71D , oblAngle ) , 0 , 11 , 0 } , { "AU" ,
rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D , AU ) , 0 , 11 , 0 } , { "P" ,
rt_offsetof ( struct_0htfUdjkLFYdKkTnHEO71D , P ) , 0 , 11 , 0 } , { "a" ,
rt_offsetof ( struct_02sbINq0GgZbgB2UPNkVmG , a ) , 0 , 11 , 0 } , { "e" ,
rt_offsetof ( struct_02sbINq0GgZbgB2UPNkVmG , e ) , 0 , 11 , 0 } , { "i" ,
rt_offsetof ( struct_02sbINq0GgZbgB2UPNkVmG , i ) , 0 , 11 , 0 } , { "OM" ,
rt_offsetof ( struct_02sbINq0GgZbgB2UPNkVmG , OM ) , 0 , 11 , 0 } , { "om" ,
rt_offsetof ( struct_02sbINq0GgZbgB2UPNkVmG , om ) , 0 , 11 , 0 } , {
"theta0" , rt_offsetof ( struct_02sbINq0GgZbgB2UPNkVmG , theta0 ) , 0 , 11 ,
0 } , { "T" , rt_offsetof ( struct_02sbINq0GgZbgB2UPNkVmG , T ) , 0 , 11 , 0
} , { "Lw" , rt_offsetof ( struct_q6QA5LqJxPb5tq5SB2ZLtD , Lw ) , 0 , 11 , 0
} , { "Ld" , rt_offsetof ( struct_q6QA5LqJxPb5tq5SB2ZLtD , Ld ) , 0 , 11 , 0
} , { "estMd0" , rt_offsetof ( struct_q6QA5LqJxPb5tq5SB2ZLtD , estMd0 ) , 0 ,
7 , 0 } , { "kb" , rt_offsetof ( struct_MoyAGu2uMzj1dRvV0obSwC , kb ) , 0 ,
11 , 0 } , { "detumbling" , rt_offsetof ( struct_S8UC4WbXnDFTTwt3KikjSD ,
detumbling ) , 10 , 11 , 0 } } ; static const rtwCAPI_DimensionMap
rtDimensionMap [ ] = { { rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2
, 2 , 0 } , { rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 ,
2 , 0 } , { rtwCAPI_SCALAR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 10 ,
2 , 0 } , { rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 ,
2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 16 ,
2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 8 ,
2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 20 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 22 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 0 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 4 , 1 , 3 , 1 , 6 , 1 , 3 , 4 , 1 , 1 , 3 , 3 , 9 ,
1 , 5 , 1 , 4 , 4 , 1 , 3 , 3 , 6 , 3 , 2 , 1 , 2 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 , 0.1 , 0.055555555555555552 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 1 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 3 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 3 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 2 , 0 } , { ( NULL ) ,
( NULL ) , 4 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 145 , rtRootInputs , 0 , rtRootOutputs , 0 } , {
rtBlockParameters , 109 , rtModelParameters , 6 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 167638889U , 1163889396U , 1187007353U ,
916882847U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
uncontrolled_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void uncontrolled_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void uncontrolled_host_InitializeDataMapInfo (
uncontrolled_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
