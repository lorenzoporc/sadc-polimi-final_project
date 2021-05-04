#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_ws3TBaK8kR1NHfxD4l548E" , 14 ,
120 } , { "struct_wjWgYUT3DRjRqLWwlezJcG" , 15 , 248 } , {
"struct_CRnsmL4lZgkrabHhgIcET" , 16 , 40 } , {
"struct_6VLnJIBAzs7njiDlW7859C" , 17 , 408 } , {
"struct_7w53TUU7DCcZ7x9uyZNi4D" , 18 , 488 } , {
"struct_0htfUdjkLFYdKkTnHEO71D" , 19 , 88 } , {
"struct_0gQV4VyplJ8zc1trNOizX" , 20 , 744 } , {
"struct_02sbINq0GgZbgB2UPNkVmG" , 21 , 56 } , {
"struct_q6QA5LqJxPb5tq5SB2ZLtD" , 22 , 40 } , {
"struct_MoyAGu2uMzj1dRvV0obSwC" , 23 , 8 } , {
"struct_S8UC4WbXnDFTTwt3KikjSD" , 24 , 8 } } ; static uint_T rtDataTypeSizes
[ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof
( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T
) , sizeof ( struct_ws3TBaK8kR1NHfxD4l548E ) , sizeof (
struct_wjWgYUT3DRjRqLWwlezJcG ) , sizeof ( struct_CRnsmL4lZgkrabHhgIcET ) ,
sizeof ( struct_6VLnJIBAzs7njiDlW7859C ) , sizeof (
struct_7w53TUU7DCcZ7x9uyZNi4D ) , sizeof ( struct_0htfUdjkLFYdKkTnHEO71D ) ,
sizeof ( struct_0gQV4VyplJ8zc1trNOizX ) , sizeof (
struct_02sbINq0GgZbgB2UPNkVmG ) , sizeof ( struct_q6QA5LqJxPb5tq5SB2ZLtD ) ,
sizeof ( struct_MoyAGu2uMzj1dRvV0obSwC ) , sizeof (
struct_S8UC4WbXnDFTTwt3KikjSD ) } ; static const char_T * rtDataTypeNames [ ]
= { "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "struct_ws3TBaK8kR1NHfxD4l548E" ,
"struct_wjWgYUT3DRjRqLWwlezJcG" , "struct_CRnsmL4lZgkrabHhgIcET" ,
"struct_6VLnJIBAzs7njiDlW7859C" , "struct_7w53TUU7DCcZ7x9uyZNi4D" ,
"struct_0htfUdjkLFYdKkTnHEO71D" , "struct_0gQV4VyplJ8zc1trNOizX" ,
"struct_02sbINq0GgZbgB2UPNkVmG" , "struct_q6QA5LqJxPb5tq5SB2ZLtD" ,
"struct_MoyAGu2uMzj1dRvV0obSwC" , "struct_S8UC4WbXnDFTTwt3KikjSD" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . ccl35kpxd5
[ 0 ] ) , 0 , 0 , 492 } , { ( char_T * ) ( & rtB . abreinrkmh ) , 8 , 0 , 3 }
, { ( char_T * ) ( & rtB . hdco5djtlp . oowvbhbp1g [ 0 ] ) , 0 , 0 , 9 } , {
( char_T * ) ( & rtB . luux5q1kph . oowvbhbp1g [ 0 ] ) , 0 , 0 , 9 } , { (
char_T * ) ( & rtDW . oib5citwht [ 0 ] ) , 0 , 0 , 50 } , { ( char_T * ) ( &
rtDW . pdgb42e4sa . LoggedData ) , 11 , 0 , 20 } , { ( char_T * ) ( & rtDW .
i0jd5ov2aq ) , 7 , 0 , 1273 } , { ( char_T * ) ( & rtDW . eyr25c41uw ) , 2 ,
0 , 13 } , { ( char_T * ) ( & rtDW . gv4fu254xq ) , 8 , 0 , 8 } } ; static
DataTypeTransitionTable rtBTransTable = { 9U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP . spacecraft
) , 18 , 0 , 1 } , { ( char_T * ) ( & rtP . sensors ) , 17 , 0 , 1 } , { (
char_T * ) ( & rtP . constants ) , 19 , 0 , 1 } , { ( char_T * ) ( & rtP .
orbit ) , 21 , 0 , 1 } , { ( char_T * ) ( & rtP . observer ) , 22 , 0 , 1 } ,
{ ( char_T * ) ( & rtP . control ) , 24 , 0 , 1 } , { ( char_T * ) ( & rtP .
NormalizeVector_maxzero ) , 0 , 0 , 178 } } ; static DataTypeTransitionTable
rtPTransTable = { 7U , rtPTransitions } ;
