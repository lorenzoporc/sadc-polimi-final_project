#include "rt_logging_mmi.h"
#include "uncontrolled_capi.h"
#include <math.h>
#include "uncontrolled.h"
#include "uncontrolled_private.h"
#include "uncontrolled_dt.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 4 , & stopRequested ) ; }
rtExtModeShutdown ( 4 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 5 ; const char_T
* gbl_raccel_Version = "10.2 (R2020b) 29-Jul-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes
( SimStruct * S , const char * inportFileName , int * matFileFormat ) {
return rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static real_T lqtnujrfjc ( uint32_T state [ 625 ] ) ; static
real_T phpij0ozdb ( void ) ; static real_T lk5bzskpou ( const real_T x [ 3 ]
) ; static real_T b3tmpxckt5 ( void ) ; static void dewrzol1sz ( g4hfrp4mjz *
* pEmxArray , int32_T numDimensions ) ; static void n45xqohovf ( g4hfrp4mjz *
emxArray , int32_T oldNumel ) ; static void kdnloskd3o ( g4hfrp4mjz * *
pEmxArray ) ; static boolean_T fuzcbjylqn ( const real_T x [ 16 ] ) ; static
void bvalhr3dub ( creal_T A [ 16 ] , int32_T * ilo , int32_T * ihi , int32_T
rscale [ 4 ] ) ; static void efa1ovvj2l ( creal_T * x ) ; static void
n0fguw1wt1g ( const creal_T f , const creal_T g , real_T * cs , creal_T * sn
) ; static void n0fguw1wt1 ( const creal_T f , const creal_T g , real_T * cs
, creal_T * sn , creal_T * r ) ; static void hmixtqa5bt ( creal_T A [ 16 ] ,
int32_T ilo , int32_T ihi , creal_T Z [ 16 ] , int32_T * info , creal_T
alpha1 [ 4 ] , creal_T beta1 [ 4 ] ) ; static void obpyb0vtpe ( const creal_T
A [ 16 ] , creal_T V [ 16 ] ) ; static void jw0x3wzeuh ( const real_T A [ 16
] , creal_T V [ 16 ] , creal_T D [ 16 ] ) ; static real_T am53b42kiv (
int32_T n , const real_T x [ 16 ] , int32_T ix0 ) ; static void co3ynvpmxs (
int32_T m , int32_T n , int32_T iv0 , real_T tau , real_T C [ 16 ] , int32_T
ic0 , real_T work [ 4 ] ) ; static real_T am53b42kivy ( int32_T n , const
real_T x [ 3 ] ) ; static real_T eub0bxuykf ( int32_T n , real_T * alpha1 ,
real_T x [ 3 ] ) ; static void fdldy5rqzy ( real_T * a , real_T * b , real_T
* c , real_T * d , real_T * rt1r , real_T * rt1i , real_T * rt2r , real_T *
rt2i , real_T * cs , real_T * sn ) ; static void f5gixm5zec ( int32_T n ,
real_T x [ 16 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T s ) ; static
void f5gixm5zecw ( real_T x [ 16 ] , int32_T ix0 , int32_T iy0 , real_T c ,
real_T s ) ; static int32_T ezifbep0dg ( real_T h [ 16 ] , real_T z [ 16 ] )
; static void kpvvlrsfk4 ( const real_T A [ 16 ] , real_T V [ 16 ] , real_T D
[ 16 ] ) ; static boolean_T jd04qfjomk ( real_T x , real_T y ) ; static
real_T nhwqvesk0d ( int32_T n , const real_T x [ 12 ] , int32_T ix0 ) ;
static void lpsnbp0y5t ( int32_T n , real_T a , real_T x [ 12 ] , int32_T ix0
) ; static real_T nhwqvesk0dz ( const real_T x [ 3 ] , int32_T ix0 ) ; static
void lpsnbp0y5t1 ( real_T a , real_T x [ 3 ] , int32_T ix0 ) ; static void
gr2xwasiysh5 ( int32_T n , real_T a , const real_T x [ 4 ] , int32_T ix0 ,
real_T y [ 12 ] , int32_T iy0 ) ; static void gr2xwasiysh ( int32_T n ,
real_T a , const real_T x [ 12 ] , int32_T ix0 , real_T y [ 4 ] , int32_T iy0
) ; static real_T dz42qy1tgx ( int32_T n , const real_T x [ 12 ] , int32_T
ix0 , const real_T y [ 12 ] , int32_T iy0 ) ; static void gr2xwasiys (
int32_T n , real_T a , int32_T ix0 , real_T y [ 12 ] , int32_T iy0 ) ; static
real_T dz42qy1tgxu ( const real_T x [ 9 ] , const real_T y [ 9 ] , int32_T
iy0 ) ; static void gr2xwasiysh5h ( real_T a , real_T y [ 9 ] , int32_T iy0 )
; static void lpsnbp0y5t1k ( real_T a , real_T x [ 12 ] , int32_T ix0 ) ;
static void lpsnbp0y5t1ki ( real_T a , real_T x [ 9 ] , int32_T ix0 ) ;
static void iwydmpginn ( real_T x [ 9 ] , int32_T ix0 , int32_T iy0 ) ;
static void iwydmpginne ( real_T x [ 12 ] , int32_T ix0 , int32_T iy0 ) ;
static void mcqcitxxl5 ( real_T * a , real_T * b , real_T * c , real_T * s )
; static void pncrzsglp3 ( real_T x [ 9 ] , int32_T ix0 , int32_T iy0 ,
real_T c , real_T s ) ; static void pncrzsglp3p ( real_T x [ 12 ] , int32_T
ix0 , int32_T iy0 , real_T c , real_T s ) ; static void enutwu4xz1 ( const
real_T A [ 12 ] , real_T U [ 12 ] , real_T s [ 3 ] , real_T V [ 9 ] ) ; void
lh5o5k3kus ( real_T hqtvomzh23 , real_T pye3fkbadd , real_T dlsdw2cayj ,
ckmh1jms3g * localB ) { localB -> oowvbhbp1g [ 0 ] = muDoubleScalarCos (
dlsdw2cayj ) * muDoubleScalarCos ( pye3fkbadd ) ; localB -> oowvbhbp1g [ 3 ]
= muDoubleScalarCos ( dlsdw2cayj ) * muDoubleScalarSin ( pye3fkbadd ) *
muDoubleScalarSin ( hqtvomzh23 ) + muDoubleScalarSin ( dlsdw2cayj ) *
muDoubleScalarCos ( hqtvomzh23 ) ; localB -> oowvbhbp1g [ 6 ] = -
muDoubleScalarCos ( dlsdw2cayj ) * muDoubleScalarSin ( pye3fkbadd ) *
muDoubleScalarCos ( hqtvomzh23 ) + muDoubleScalarSin ( dlsdw2cayj ) *
muDoubleScalarSin ( hqtvomzh23 ) ; localB -> oowvbhbp1g [ 1 ] = -
muDoubleScalarSin ( dlsdw2cayj ) * muDoubleScalarCos ( pye3fkbadd ) ; localB
-> oowvbhbp1g [ 4 ] = - muDoubleScalarSin ( dlsdw2cayj ) * muDoubleScalarSin
( pye3fkbadd ) * muDoubleScalarSin ( hqtvomzh23 ) + muDoubleScalarCos (
dlsdw2cayj ) * muDoubleScalarCos ( hqtvomzh23 ) ; localB -> oowvbhbp1g [ 7 ]
= muDoubleScalarSin ( dlsdw2cayj ) * muDoubleScalarSin ( pye3fkbadd ) *
muDoubleScalarCos ( hqtvomzh23 ) + muDoubleScalarCos ( dlsdw2cayj ) *
muDoubleScalarSin ( hqtvomzh23 ) ; localB -> oowvbhbp1g [ 2 ] =
muDoubleScalarSin ( pye3fkbadd ) ; localB -> oowvbhbp1g [ 5 ] = -
muDoubleScalarCos ( pye3fkbadd ) * muDoubleScalarSin ( hqtvomzh23 ) ; localB
-> oowvbhbp1g [ 8 ] = muDoubleScalarCos ( pye3fkbadd ) * muDoubleScalarCos (
hqtvomzh23 ) ; } real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) {
uint32_T hi ; uint32_T lo ; lo = * u % 127773U * 16807U ; hi = * u / 127773U
* 2836U ; if ( lo < hi ) { * u = 2147483647U - ( hi - lo ) ; } else { * u =
lo - hi ; } return ( real_T ) * u * 4.6566128752457969E-10 ; } real_T
rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { real_T si ; real_T sr ; real_T
y ; do { sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = 2.0 *
rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr + si * si ; } while (
si > 1.0 ) ; y = muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( si ) / si )
* sr ; return y ; } static real_T lqtnujrfjc ( uint32_T state [ 625 ] ) {
real_T r ; int32_T exitg1 ; int32_T k ; int32_T kk ; uint32_T u [ 2 ] ;
uint32_T mti ; uint32_T y ; boolean_T b_isvalid ; boolean_T exitg2 ; do {
exitg1 = 0 ; for ( k = 0 ; k < 2 ; k ++ ) { mti = state [ 624 ] + 1U ; if (
state [ 624 ] + 1U >= 625U ) { for ( kk = 0 ; kk < 227 ; kk ++ ) { y = (
state [ kk + 1 ] & 2147483647U ) | ( state [ kk ] & 2147483648U ) ; if ( ( y
& 1U ) == 0U ) { y >>= 1U ; } else { y = y >> 1U ^ 2567483615U ; } state [ kk
] = state [ kk + 397 ] ^ y ; } for ( kk = 0 ; kk < 396 ; kk ++ ) { y = (
state [ kk + 227 ] & 2147483648U ) | ( state [ kk + 228 ] & 2147483647U ) ;
if ( ( y & 1U ) == 0U ) { y >>= 1U ; } else { y = y >> 1U ^ 2567483615U ; }
state [ kk + 227 ] = state [ kk ] ^ y ; } y = ( state [ 623 ] & 2147483648U )
| ( state [ 0 ] & 2147483647U ) ; if ( ( y & 1U ) == 0U ) { y >>= 1U ; } else
{ y = y >> 1U ^ 2567483615U ; } state [ 623 ] = state [ 396 ] ^ y ; mti = 1U
; } y = state [ ( int32_T ) mti - 1 ] ; state [ 624 ] = mti ; y ^= y >> 11U ;
y ^= y << 7U & 2636928640U ; y ^= y << 15U & 4022730752U ; u [ k ] = y >> 18U
^ y ; } r = ( ( real_T ) ( u [ 0 ] >> 5U ) * 6.7108864E+7 + ( real_T ) ( u [
1 ] >> 6U ) ) * 1.1102230246251565E-16 ; if ( r == 0.0 ) { if ( ( state [ 624
] >= 1U ) && ( state [ 624 ] < 625U ) ) { b_isvalid = false ; k = 1 ; exitg2
= false ; while ( ( ! exitg2 ) && ( k < 625 ) ) { if ( state [ k - 1 ] == 0U
) { k ++ ; } else { b_isvalid = true ; exitg2 = true ; } } } else { b_isvalid
= false ; } if ( ! b_isvalid ) { mti = 5489U ; state [ 0 ] = 5489U ; for ( k
= 0 ; k < 623 ; k ++ ) { mti = ( ( mti >> 30U ^ mti ) * 1812433253U + k ) +
1U ; state [ k + 1 ] = mti ; } state [ 624 ] = 624U ; } } else { exitg1 = 1 ;
} } while ( exitg1 == 0 ) ; return r ; } static real_T phpij0ozdb ( void ) {
real_T r ; int32_T hi ; uint32_T b_r ; uint32_T test2 ; if ( rtDW .
fbvjzemwgp == 4U ) { hi = ( int32_T ) ( rtDW . bppejpvrbl / 127773U ) ; b_r =
( rtDW . bppejpvrbl - hi * 127773U ) * 16807U ; test2 = 2836U * hi ; if ( b_r
< test2 ) { b_r = ~ ( test2 - b_r ) & 2147483647U ; } else { b_r -= test2 ; }
rtDW . bppejpvrbl = b_r ; r = ( real_T ) b_r * 4.6566128752457969E-10 ; }
else if ( rtDW . fbvjzemwgp == 5U ) { b_r = 69069U * rtDW . otks5fozsk [ 0 ]
+ 1234567U ; test2 = rtDW . otks5fozsk [ 1 ] << 13 ^ rtDW . otks5fozsk [ 1 ]
; test2 ^= test2 >> 17 ; test2 ^= test2 << 5 ; rtDW . otks5fozsk [ 0 ] = b_r
; rtDW . otks5fozsk [ 1 ] = test2 ; r = ( real_T ) ( b_r + test2 ) *
2.328306436538696E-10 ; } else { if ( ! rtDW . humf2uyi5m ) { memset ( & rtDW
. n2yjwgze4q [ 0 ] , 0 , 625U * sizeof ( uint32_T ) ) ; b_r = 5489U ; rtDW .
n2yjwgze4q [ 0 ] = 5489U ; for ( hi = 0 ; hi < 623 ; hi ++ ) { b_r = ( ( b_r
>> 30U ^ b_r ) * 1812433253U + hi ) + 1U ; rtDW . n2yjwgze4q [ hi + 1 ] = b_r
; } rtDW . n2yjwgze4q [ 624 ] = 624U ; rtDW . humf2uyi5m = true ; } r =
lqtnujrfjc ( rtDW . n2yjwgze4q ) ; } return r ; } static real_T lk5bzskpou (
const real_T x [ 3 ] ) { real_T absxk ; real_T scale ; real_T t ; real_T y ;
scale = 3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( x [ 0 ] ) ; if
( absxk > 3.3121686421112381E-170 ) { y = 1.0 ; scale = absxk ; } else { t =
absxk / 3.3121686421112381E-170 ; y = t * t ; } absxk = muDoubleScalarAbs ( x
[ 1 ] ) ; if ( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ;
scale = absxk ; } else { t = absxk / scale ; y += t * t ; } absxk =
muDoubleScalarAbs ( x [ 2 ] ) ; if ( absxk > scale ) { t = scale / absxk ; y
= y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t * t ;
} return scale * muDoubleScalarSqrt ( y ) ; } static real_T b3tmpxckt5 ( void
) { real_T r ; int32_T hi ; uint32_T b_r ; uint32_T test2 ; if ( rtDW .
hwm5cjsjet == 4U ) { hi = ( int32_T ) ( rtDW . nhpncgxxzs / 127773U ) ; b_r =
( rtDW . nhpncgxxzs - hi * 127773U ) * 16807U ; test2 = 2836U * hi ; if ( b_r
< test2 ) { b_r = ~ ( test2 - b_r ) & 2147483647U ; } else { b_r -= test2 ; }
rtDW . nhpncgxxzs = b_r ; r = ( real_T ) b_r * 4.6566128752457969E-10 ; }
else if ( rtDW . hwm5cjsjet == 5U ) { b_r = 69069U * rtDW . nydbalew5h [ 0 ]
+ 1234567U ; test2 = rtDW . nydbalew5h [ 1 ] << 13 ^ rtDW . nydbalew5h [ 1 ]
; test2 ^= test2 >> 17 ; test2 ^= test2 << 5 ; rtDW . nydbalew5h [ 0 ] = b_r
; rtDW . nydbalew5h [ 1 ] = test2 ; r = ( real_T ) ( b_r + test2 ) *
2.328306436538696E-10 ; } else { if ( ! rtDW . eljjgro1hu ) { memset ( & rtDW
. o235voook1 [ 0 ] , 0 , 625U * sizeof ( uint32_T ) ) ; b_r = 5489U ; rtDW .
o235voook1 [ 0 ] = 5489U ; for ( hi = 0 ; hi < 623 ; hi ++ ) { b_r = ( ( b_r
>> 30U ^ b_r ) * 1812433253U + hi ) + 1U ; rtDW . o235voook1 [ hi + 1 ] = b_r
; } rtDW . o235voook1 [ 624 ] = 624U ; rtDW . eljjgro1hu = true ; } r =
lqtnujrfjc ( rtDW . o235voook1 ) ; } return r ; } static void dewrzol1sz (
g4hfrp4mjz * * pEmxArray , int32_T numDimensions ) { g4hfrp4mjz * emxArray ;
int32_T i ; * pEmxArray = ( g4hfrp4mjz * ) malloc ( sizeof ( g4hfrp4mjz ) ) ;
emxArray = * pEmxArray ; emxArray -> data = ( real_T * ) NULL ; emxArray ->
numDimensions = numDimensions ; emxArray -> size = ( int32_T * ) malloc (
sizeof ( int32_T ) * numDimensions ) ; emxArray -> allocatedSize = 0 ;
emxArray -> canFreeData = true ; for ( i = 0 ; i < numDimensions ; i ++ ) {
emxArray -> size [ i ] = 0 ; } } static void n45xqohovf ( g4hfrp4mjz *
emxArray , int32_T oldNumel ) { int32_T i ; int32_T newNumel ; void * newData
; if ( oldNumel < 0 ) { oldNumel = 0 ; } newNumel = 1 ; for ( i = 0 ; i <
emxArray -> numDimensions ; i ++ ) { newNumel *= emxArray -> size [ i ] ; }
if ( newNumel > emxArray -> allocatedSize ) { i = emxArray -> allocatedSize ;
if ( i < 16 ) { i = 16 ; } while ( i < newNumel ) { if ( i > 1073741823 ) { i
= MAX_int32_T ; } else { i <<= 1 ; } } newData = calloc ( ( uint32_T ) i ,
sizeof ( real_T ) ) ; if ( emxArray -> data != NULL ) { memcpy ( newData ,
emxArray -> data , sizeof ( real_T ) * oldNumel ) ; if ( emxArray ->
canFreeData ) { free ( emxArray -> data ) ; } } emxArray -> data = ( real_T *
) newData ; emxArray -> allocatedSize = i ; emxArray -> canFreeData = true ;
} } static void kdnloskd3o ( g4hfrp4mjz * * pEmxArray ) { if ( * pEmxArray !=
( g4hfrp4mjz * ) NULL ) { if ( ( ( * pEmxArray ) -> data != ( real_T * ) NULL
) && ( * pEmxArray ) -> canFreeData ) { free ( ( * pEmxArray ) -> data ) ; }
free ( ( * pEmxArray ) -> size ) ; free ( * pEmxArray ) ; * pEmxArray = (
g4hfrp4mjz * ) NULL ; } } static boolean_T fuzcbjylqn ( const real_T x [ 16 ]
) { real_T x_p ; int32_T k ; boolean_T b_p ; b_p = true ; for ( k = 0 ; k <
16 ; k ++ ) { x_p = x [ k ] ; if ( b_p && ( ( ! muDoubleScalarIsInf ( x_p ) )
&& ( ! muDoubleScalarIsNaN ( x_p ) ) ) ) { } else { b_p = false ; } } return
! b_p ; } static void bvalhr3dub ( creal_T A [ 16 ] , int32_T * ilo , int32_T
* ihi , int32_T rscale [ 4 ] ) { real_T atmp_im ; real_T atmp_re ; int32_T
exitg1 ; int32_T exitg2 ; int32_T i ; int32_T ii ; int32_T j ; int32_T jj ;
int32_T nzcount ; boolean_T exitg3 ; boolean_T exitg4 ; boolean_T found ;
rscale [ 0 ] = 1 ; rscale [ 1 ] = 1 ; rscale [ 2 ] = 1 ; rscale [ 3 ] = 1 ; *
ilo = 1 ; * ihi = 4 ; do { exitg2 = 0 ; i = 0 ; j = 0 ; found = false ; ii =
* ihi ; exitg3 = false ; while ( ( ! exitg3 ) && ( ii > 0 ) ) { nzcount = 0 ;
i = ii ; j = * ihi ; jj = 0 ; exitg4 = false ; while ( ( ! exitg4 ) && ( jj
<= * ihi - 1 ) ) { if ( ( A [ ( ( jj << 2 ) + ii ) - 1 ] . re != 0.0 ) || ( A
[ ( ( jj << 2 ) + ii ) - 1 ] . im != 0.0 ) || ( jj + 1 == ii ) ) { if (
nzcount == 0 ) { j = jj + 1 ; nzcount = 1 ; jj ++ ; } else { nzcount = 2 ;
exitg4 = true ; } } else { jj ++ ; } } if ( nzcount < 2 ) { found = true ;
exitg3 = true ; } else { ii -- ; } } if ( ! found ) { exitg2 = 2 ; } else {
if ( i != * ihi ) { atmp_re = A [ i - 1 ] . re ; atmp_im = A [ i - 1 ] . im ;
A [ i - 1 ] = A [ * ihi - 1 ] ; A [ * ihi - 1 ] . re = atmp_re ; A [ * ihi -
1 ] . im = atmp_im ; atmp_re = A [ i + 3 ] . re ; atmp_im = A [ i + 3 ] . im
; A [ i + 3 ] = A [ * ihi + 3 ] ; A [ * ihi + 3 ] . re = atmp_re ; A [ * ihi
+ 3 ] . im = atmp_im ; atmp_re = A [ i + 7 ] . re ; atmp_im = A [ i + 7 ] .
im ; A [ i + 7 ] = A [ * ihi + 7 ] ; A [ * ihi + 7 ] . re = atmp_re ; A [ *
ihi + 7 ] . im = atmp_im ; atmp_re = A [ i + 11 ] . re ; atmp_im = A [ i + 11
] . im ; A [ i + 11 ] = A [ * ihi + 11 ] ; A [ * ihi + 11 ] . re = atmp_re ;
A [ * ihi + 11 ] . im = atmp_im ; } if ( j != * ihi ) { for ( i = 0 ; i < *
ihi ; i ++ ) { atmp_re = A [ ( ( j - 1 ) << 2 ) + i ] . re ; atmp_im = A [ (
( j - 1 ) << 2 ) + i ] . im ; A [ i + ( ( j - 1 ) << 2 ) ] = A [ ( ( * ihi -
1 ) << 2 ) + i ] ; A [ i + ( ( * ihi - 1 ) << 2 ) ] . re = atmp_re ; A [ i +
( ( * ihi - 1 ) << 2 ) ] . im = atmp_im ; } } rscale [ * ihi - 1 ] = j ; ( *
ihi ) -- ; if ( * ihi == 1 ) { rscale [ 0 ] = 1 ; exitg2 = 1 ; } } } while (
exitg2 == 0 ) ; if ( exitg2 == 1 ) { } else { do { exitg1 = 0 ; i = 0 ; j = 0
; found = false ; ii = * ilo ; exitg3 = false ; while ( ( ! exitg3 ) && ( ii
<= * ihi ) ) { nzcount = 0 ; i = * ihi ; j = ii ; jj = * ilo ; exitg4 = false
; while ( ( ! exitg4 ) && ( jj <= * ihi ) ) { if ( ( A [ ( ( ( ii - 1 ) << 2
) + jj ) - 1 ] . re != 0.0 ) || ( A [ ( ( ( ii - 1 ) << 2 ) + jj ) - 1 ] . im
!= 0.0 ) || ( jj == ii ) ) { if ( nzcount == 0 ) { i = jj ; nzcount = 1 ; jj
++ ; } else { nzcount = 2 ; exitg4 = true ; } } else { jj ++ ; } } if (
nzcount < 2 ) { found = true ; exitg3 = true ; } else { ii ++ ; } } if ( !
found ) { exitg1 = 1 ; } else { if ( i != * ilo ) { for ( ii = * ilo - 1 ; ii
+ 1 < 5 ; ii ++ ) { atmp_re = A [ ( ( ii << 2 ) + i ) - 1 ] . re ; atmp_im =
A [ ( ( ii << 2 ) + i ) - 1 ] . im ; A [ ( i + ( ii << 2 ) ) - 1 ] = A [ ( (
ii << 2 ) + * ilo ) - 1 ] ; A [ ( * ilo + ( ii << 2 ) ) - 1 ] . re = atmp_re
; A [ ( * ilo + ( ii << 2 ) ) - 1 ] . im = atmp_im ; } } if ( j != * ilo ) {
for ( i = 0 ; i < * ihi ; i ++ ) { atmp_re = A [ ( ( j - 1 ) << 2 ) + i ] .
re ; atmp_im = A [ ( ( j - 1 ) << 2 ) + i ] . im ; A [ i + ( ( j - 1 ) << 2 )
] = A [ ( ( * ilo - 1 ) << 2 ) + i ] ; A [ i + ( ( * ilo - 1 ) << 2 ) ] . re
= atmp_re ; A [ i + ( ( * ilo - 1 ) << 2 ) ] . im = atmp_im ; } } rscale [ *
ilo - 1 ] = j ; ( * ilo ) ++ ; if ( * ilo == * ihi ) { rscale [ * ilo - 1 ] =
* ilo ; exitg1 = 1 ; } } } while ( exitg1 == 0 ) ; } } static void efa1ovvj2l
( creal_T * x ) { real_T absxr ; real_T xr ; xr = x -> re ; if ( x -> im ==
0.0 ) { if ( x -> re < 0.0 ) { absxr = 0.0 ; xr = muDoubleScalarSqrt ( - x ->
re ) ; } else { absxr = muDoubleScalarSqrt ( x -> re ) ; xr = 0.0 ; } } else
if ( x -> re == 0.0 ) { if ( x -> im < 0.0 ) { absxr = muDoubleScalarSqrt ( -
x -> im / 2.0 ) ; xr = - absxr ; } else { absxr = muDoubleScalarSqrt ( x ->
im / 2.0 ) ; xr = absxr ; } } else if ( muDoubleScalarIsNaN ( x -> re ) ) {
absxr = x -> re ; } else if ( muDoubleScalarIsNaN ( x -> im ) ) { absxr = x
-> im ; xr = x -> im ; } else if ( muDoubleScalarIsInf ( x -> im ) ) { absxr
= muDoubleScalarAbs ( x -> im ) ; xr = x -> im ; } else if (
muDoubleScalarIsInf ( x -> re ) ) { if ( x -> re < 0.0 ) { absxr = 0.0 ; xr =
x -> im * - x -> re ; } else { absxr = x -> re ; xr = 0.0 ; } } else { absxr
= muDoubleScalarAbs ( x -> re ) ; xr = muDoubleScalarAbs ( x -> im ) ; if ( (
absxr > 4.4942328371557893E+307 ) || ( xr > 4.4942328371557893E+307 ) ) {
absxr *= 0.5 ; xr *= 0.5 ; xr = muDoubleScalarHypot ( absxr , xr ) ; if ( xr
> absxr ) { absxr = muDoubleScalarSqrt ( absxr / xr + 1.0 ) *
muDoubleScalarSqrt ( xr ) ; } else { absxr = muDoubleScalarSqrt ( xr ) *
1.4142135623730951 ; } } else { absxr = muDoubleScalarSqrt ( (
muDoubleScalarHypot ( absxr , xr ) + absxr ) * 0.5 ) ; } if ( x -> re > 0.0 )
{ xr = x -> im / absxr * 0.5 ; } else { if ( x -> im < 0.0 ) { xr = - absxr ;
} else { xr = absxr ; } absxr = x -> im / xr * 0.5 ; } } x -> re = absxr ; x
-> im = xr ; } static void n0fguw1wt1g ( const creal_T f , const creal_T g ,
real_T * cs , creal_T * sn ) { real_T f2s ; real_T fs_im ; real_T fs_re ;
real_T g2 ; real_T gs_im ; real_T gs_re ; real_T scale ; boolean_T guard1 =
false ; scale = muDoubleScalarAbs ( f . re ) ; g2 = muDoubleScalarAbs ( f .
im ) ; if ( g2 > scale ) { scale = g2 ; } g2 = muDoubleScalarAbs ( g . re ) ;
f2s = muDoubleScalarAbs ( g . im ) ; if ( f2s > g2 ) { g2 = f2s ; } if ( g2 >
scale ) { scale = g2 ; } fs_re = f . re ; fs_im = f . im ; gs_re = g . re ;
gs_im = g . im ; guard1 = false ; if ( scale >= 7.4428285367870146E+137 ) {
do { fs_re *= 1.3435752215134178E-138 ; fs_im *= 1.3435752215134178E-138 ;
gs_re *= 1.3435752215134178E-138 ; gs_im *= 1.3435752215134178E-138 ; scale
*= 1.3435752215134178E-138 ; } while ( ! ( scale < 7.4428285367870146E+137 )
) ; guard1 = true ; } else if ( scale <= 1.3435752215134178E-138 ) { if ( ( g
. re == 0.0 ) && ( g . im == 0.0 ) ) { * cs = 1.0 ; sn -> re = 0.0 ; sn -> im
= 0.0 ; } else { do { fs_re *= 7.4428285367870146E+137 ; fs_im *=
7.4428285367870146E+137 ; gs_re *= 7.4428285367870146E+137 ; gs_im *=
7.4428285367870146E+137 ; scale *= 7.4428285367870146E+137 ; } while ( ! (
scale > 1.3435752215134178E-138 ) ) ; guard1 = true ; } } else { guard1 =
true ; } if ( guard1 ) { scale = fs_re * fs_re + fs_im * fs_im ; g2 = gs_re *
gs_re + gs_im * gs_im ; f2s = g2 ; if ( 1.0 > g2 ) { f2s = 1.0 ; } if ( scale
<= f2s * 2.0041683600089728E-292 ) { if ( ( f . re == 0.0 ) && ( f . im ==
0.0 ) ) { * cs = 0.0 ; g2 = muDoubleScalarHypot ( gs_re , gs_im ) ; sn -> re
= gs_re / g2 ; sn -> im = - gs_im / g2 ; } else { scale = muDoubleScalarSqrt
( g2 ) ; * cs = muDoubleScalarHypot ( fs_re , fs_im ) / scale ; g2 =
muDoubleScalarAbs ( f . re ) ; f2s = muDoubleScalarAbs ( f . im ) ; if ( f2s
> g2 ) { g2 = f2s ; } if ( g2 > 1.0 ) { g2 = muDoubleScalarHypot ( f . re , f
. im ) ; fs_re = f . re / g2 ; fs_im = f . im / g2 ; } else { f2s =
7.4428285367870146E+137 * f . re ; fs_im = 7.4428285367870146E+137 * f . im ;
g2 = muDoubleScalarHypot ( f2s , fs_im ) ; fs_re = f2s / g2 ; fs_im /= g2 ; }
gs_re /= scale ; gs_im = - gs_im / scale ; sn -> re = fs_re * gs_re - fs_im *
gs_im ; sn -> im = fs_re * gs_im + fs_im * gs_re ; } } else { f2s =
muDoubleScalarSqrt ( g2 / scale + 1.0 ) ; fs_re *= f2s ; fs_im *= f2s ; * cs
= 1.0 / f2s ; g2 += scale ; fs_re /= g2 ; fs_im /= g2 ; sn -> re = fs_re *
gs_re - fs_im * - gs_im ; sn -> im = fs_re * - gs_im + fs_im * gs_re ; } } }
static void n0fguw1wt1 ( const creal_T f , const creal_T g , real_T * cs ,
creal_T * sn , creal_T * r ) { real_T f2s ; real_T fs_im ; real_T fs_re ;
real_T g2 ; real_T gs_im ; real_T gs_re ; real_T scale ; int32_T count ;
int32_T rescaledir ; boolean_T guard1 = false ; scale = muDoubleScalarAbs ( f
. re ) ; g2 = muDoubleScalarAbs ( f . im ) ; if ( g2 > scale ) { scale = g2 ;
} g2 = muDoubleScalarAbs ( g . re ) ; f2s = muDoubleScalarAbs ( g . im ) ; if
( f2s > g2 ) { g2 = f2s ; } if ( g2 > scale ) { scale = g2 ; } fs_re = f . re
; fs_im = f . im ; gs_re = g . re ; gs_im = g . im ; count = - 1 ; rescaledir
= 0 ; guard1 = false ; if ( scale >= 7.4428285367870146E+137 ) { do { count
++ ; fs_re *= 1.3435752215134178E-138 ; fs_im *= 1.3435752215134178E-138 ;
gs_re *= 1.3435752215134178E-138 ; gs_im *= 1.3435752215134178E-138 ; scale
*= 1.3435752215134178E-138 ; } while ( ! ( scale < 7.4428285367870146E+137 )
) ; rescaledir = 1 ; guard1 = true ; } else if ( scale <=
1.3435752215134178E-138 ) { if ( ( g . re == 0.0 ) && ( g . im == 0.0 ) ) { *
cs = 1.0 ; sn -> re = 0.0 ; sn -> im = 0.0 ; * r = f ; } else { do { count ++
; fs_re *= 7.4428285367870146E+137 ; fs_im *= 7.4428285367870146E+137 ; gs_re
*= 7.4428285367870146E+137 ; gs_im *= 7.4428285367870146E+137 ; scale *=
7.4428285367870146E+137 ; } while ( ! ( scale > 1.3435752215134178E-138 ) ) ;
rescaledir = - 1 ; guard1 = true ; } } else { guard1 = true ; } if ( guard1 )
{ scale = fs_re * fs_re + fs_im * fs_im ; g2 = gs_re * gs_re + gs_im * gs_im
; f2s = g2 ; if ( 1.0 > g2 ) { f2s = 1.0 ; } if ( scale <= f2s *
2.0041683600089728E-292 ) { if ( ( f . re == 0.0 ) && ( f . im == 0.0 ) ) { *
cs = 0.0 ; r -> re = muDoubleScalarHypot ( g . re , g . im ) ; r -> im = 0.0
; g2 = muDoubleScalarHypot ( gs_re , gs_im ) ; sn -> re = gs_re / g2 ; sn ->
im = - gs_im / g2 ; } else { scale = muDoubleScalarSqrt ( g2 ) ; * cs =
muDoubleScalarHypot ( fs_re , fs_im ) / scale ; g2 = muDoubleScalarAbs ( f .
re ) ; f2s = muDoubleScalarAbs ( f . im ) ; if ( f2s > g2 ) { g2 = f2s ; } if
( g2 > 1.0 ) { g2 = muDoubleScalarHypot ( f . re , f . im ) ; fs_re = f . re
/ g2 ; fs_im = f . im / g2 ; } else { f2s = 7.4428285367870146E+137 * f . re
; fs_im = 7.4428285367870146E+137 * f . im ; g2 = muDoubleScalarHypot ( f2s ,
fs_im ) ; fs_re = f2s / g2 ; fs_im /= g2 ; } gs_re /= scale ; gs_im = - gs_im
/ scale ; sn -> re = fs_re * gs_re - fs_im * gs_im ; sn -> im = fs_re * gs_im
+ fs_im * gs_re ; r -> re = ( sn -> re * g . re - sn -> im * g . im ) + * cs
* f . re ; r -> im = ( sn -> re * g . im + sn -> im * g . re ) + * cs * f .
im ; } } else { f2s = muDoubleScalarSqrt ( g2 / scale + 1.0 ) ; r -> re = f2s
* fs_re ; r -> im = f2s * fs_im ; * cs = 1.0 / f2s ; g2 += scale ; scale = r
-> re / g2 ; g2 = r -> im / g2 ; sn -> re = scale * gs_re - g2 * - gs_im ; sn
-> im = scale * - gs_im + g2 * gs_re ; if ( rescaledir > 0 ) { for (
rescaledir = 0 ; rescaledir <= count ; rescaledir ++ ) { r -> re *=
7.4428285367870146E+137 ; r -> im *= 7.4428285367870146E+137 ; } } else { if
( rescaledir < 0 ) { for ( rescaledir = 0 ; rescaledir <= count ; rescaledir
++ ) { r -> re *= 1.3435752215134178E-138 ; r -> im *=
1.3435752215134178E-138 ; } } } } } } static void hmixtqa5bt ( creal_T A [ 16
] , int32_T ilo , int32_T ihi , creal_T Z [ 16 ] , int32_T * info , creal_T
alpha1 [ 4 ] , creal_T beta1 [ 4 ] ) { creal_T ad22 ; creal_T anorm_p ;
creal_T ctemp ; creal_T shift ; real_T absxk ; real_T ai ; real_T anorm ;
real_T ar ; real_T colscale ; real_T eshift_im ; real_T eshift_re ; real_T
scale ; real_T shift_im ; real_T ssq ; real_T t ; int32_T col ; int32_T
exitg1 ; int32_T i ; int32_T iiter ; int32_T ilastm1 ; int32_T istart ;
int32_T j ; int32_T jiter ; int32_T jp1 ; int32_T nm1 ; boolean_T exitg2 ;
boolean_T failed ; boolean_T goto60 ; boolean_T goto70 ; boolean_T goto90 ;
boolean_T guard1 = false ; boolean_T guard2 = false ; boolean_T guard3 =
false ; * info = 0 ; alpha1 [ 0 ] . re = 0.0 ; alpha1 [ 0 ] . im = 0.0 ;
beta1 [ 0 ] . re = 1.0 ; beta1 [ 0 ] . im = 0.0 ; alpha1 [ 1 ] . re = 0.0 ;
alpha1 [ 1 ] . im = 0.0 ; beta1 [ 1 ] . re = 1.0 ; beta1 [ 1 ] . im = 0.0 ;
alpha1 [ 2 ] . re = 0.0 ; alpha1 [ 2 ] . im = 0.0 ; beta1 [ 2 ] . re = 1.0 ;
beta1 [ 2 ] . im = 0.0 ; alpha1 [ 3 ] . re = 0.0 ; alpha1 [ 3 ] . im = 0.0 ;
beta1 [ 3 ] . re = 1.0 ; beta1 [ 3 ] . im = 0.0 ; eshift_re = 0.0 ; eshift_im
= 0.0 ; ctemp . re = 0.0 ; ctemp . im = 0.0 ; anorm = 0.0 ; if ( ilo <= ihi )
{ scale = 3.3121686421112381E-170 ; ssq = 0.0 ; nm1 = ihi - ilo ; for ( j = -
1 ; j < nm1 ; j ++ ) { colscale = 3.3121686421112381E-170 ; anorm = 0.0 ; col
= ilo + j ; istart = j + 2 ; istart = muIntScalarMin_sint32 ( istart , nm1 )
+ ilo ; for ( ilastm1 = ilo ; ilastm1 <= istart ; ilastm1 ++ ) { absxk =
muDoubleScalarAbs ( A [ ( ( col << 2 ) + ilastm1 ) - 1 ] . re ) ; if ( absxk
> colscale ) { t = colscale / absxk ; anorm = anorm * t * t + 1.0 ; colscale
= absxk ; } else { t = absxk / colscale ; anorm += t * t ; } absxk =
muDoubleScalarAbs ( A [ ( ( col << 2 ) + ilastm1 ) - 1 ] . im ) ; if ( absxk
> colscale ) { t = colscale / absxk ; anorm = anorm * t * t + 1.0 ; colscale
= absxk ; } else { t = absxk / colscale ; anorm += t * t ; } } if ( scale >=
colscale ) { colscale /= scale ; ssq += colscale * colscale * anorm ; } else
{ scale /= colscale ; ssq = scale * scale * ssq + anorm ; scale = colscale ;
} } anorm = scale * muDoubleScalarSqrt ( ssq ) ; } scale =
2.2204460492503131E-16 * anorm ; ssq = 2.2250738585072014E-308 ; if ( scale >
2.2250738585072014E-308 ) { ssq = scale ; } scale = 2.2250738585072014E-308 ;
if ( anorm > 2.2250738585072014E-308 ) { scale = anorm ; } anorm = 1.0 /
scale ; failed = true ; for ( nm1 = ihi ; nm1 + 1 < 5 ; nm1 ++ ) { alpha1 [
nm1 ] = A [ ( nm1 << 2 ) + nm1 ] ; } guard1 = false ; guard2 = false ; if (
ihi >= ilo ) { col = ilo ; istart = ilo ; nm1 = ihi - 1 ; ilastm1 = ihi - 2 ;
iiter = 0 ; goto60 = false ; goto70 = false ; goto90 = false ; jiter = 0 ; do
{ exitg1 = 0 ; if ( jiter <= ( ( ihi - ilo ) + 1 ) * 30 - 1 ) { if ( nm1 + 1
== ilo ) { goto60 = true ; } else if ( muDoubleScalarAbs ( A [ ( ilastm1 << 2
) + nm1 ] . re ) + muDoubleScalarAbs ( A [ ( ilastm1 << 2 ) + nm1 ] . im ) <=
ssq ) { A [ nm1 + ( ilastm1 << 2 ) ] . re = 0.0 ; A [ nm1 + ( ilastm1 << 2 )
] . im = 0.0 ; goto60 = true ; } else { j = ilastm1 ; guard3 = false ; exitg2
= false ; while ( ( ! exitg2 ) && ( j + 1 >= ilo ) ) { if ( j + 1 == ilo ) {
guard3 = true ; exitg2 = true ; } else if ( muDoubleScalarAbs ( A [ ( ( j - 1
) << 2 ) + j ] . re ) + muDoubleScalarAbs ( A [ ( ( j - 1 ) << 2 ) + j ] . im
) <= ssq ) { A [ j + ( ( j - 1 ) << 2 ) ] . re = 0.0 ; A [ j + ( ( j - 1 ) <<
2 ) ] . im = 0.0 ; guard3 = true ; exitg2 = true ; } else { j -- ; guard3 =
false ; } } if ( guard3 ) { col = j + 1 ; goto70 = true ; } } if ( ( ! goto60
) && ( ! goto70 ) ) { alpha1 [ 0 ] . re = ( rtNaN ) ; alpha1 [ 0 ] . im = 0.0
; beta1 [ 0 ] . re = ( rtNaN ) ; beta1 [ 0 ] . im = 0.0 ; alpha1 [ 1 ] . re =
( rtNaN ) ; alpha1 [ 1 ] . im = 0.0 ; beta1 [ 1 ] . re = ( rtNaN ) ; beta1 [
1 ] . im = 0.0 ; alpha1 [ 2 ] . re = ( rtNaN ) ; alpha1 [ 2 ] . im = 0.0 ;
beta1 [ 2 ] . re = ( rtNaN ) ; beta1 [ 2 ] . im = 0.0 ; alpha1 [ 3 ] . re = (
rtNaN ) ; alpha1 [ 3 ] . im = 0.0 ; beta1 [ 3 ] . re = ( rtNaN ) ; beta1 [ 3
] . im = 0.0 ; for ( istart = 0 ; istart < 16 ; istart ++ ) { Z [ istart ] .
re = ( rtNaN ) ; Z [ istart ] . im = 0.0 ; } * info = 1 ; exitg1 = 1 ; } else
if ( goto60 ) { goto60 = false ; alpha1 [ nm1 ] = A [ ( nm1 << 2 ) + nm1 ] ;
nm1 = ilastm1 ; ilastm1 -- ; if ( nm1 + 1 < ilo ) { failed = false ; guard2 =
true ; exitg1 = 1 ; } else { iiter = 0 ; eshift_re = 0.0 ; eshift_im = 0.0 ;
jiter ++ ; } } else { if ( goto70 ) { goto70 = false ; iiter ++ ; if ( iiter
- iiter / 10 * 10 != 0 ) { ar = A [ ( ilastm1 << 2 ) + ilastm1 ] . re * anorm
; ai = A [ ( ilastm1 << 2 ) + ilastm1 ] . im * anorm ; if ( ai == 0.0 ) {
shift . re = ar / 0.5 ; shift . im = 0.0 ; } else if ( ar == 0.0 ) { shift .
re = 0.0 ; shift . im = ai / 0.5 ; } else { shift . re = ar / 0.5 ; shift .
im = ai / 0.5 ; } ar = A [ ( nm1 << 2 ) + nm1 ] . re * anorm ; ai = A [ ( nm1
<< 2 ) + nm1 ] . im * anorm ; if ( ai == 0.0 ) { ad22 . re = ar / 0.5 ; ad22
. im = 0.0 ; } else if ( ar == 0.0 ) { ad22 . re = 0.0 ; ad22 . im = ai / 0.5
; } else { ad22 . re = ar / 0.5 ; ad22 . im = ai / 0.5 ; } absxk = ( shift .
re + ad22 . re ) * 0.5 ; t = ( shift . im + ad22 . im ) * 0.5 ; ar = A [ (
nm1 << 2 ) + ilastm1 ] . re * anorm ; ai = A [ ( nm1 << 2 ) + ilastm1 ] . im
* anorm ; if ( ai == 0.0 ) { scale = ar / 0.5 ; colscale = 0.0 ; } else if (
ar == 0.0 ) { scale = 0.0 ; colscale = ai / 0.5 ; } else { scale = ar / 0.5 ;
colscale = ai / 0.5 ; } ar = A [ ( ilastm1 << 2 ) + nm1 ] . re * anorm ; ai =
A [ ( ilastm1 << 2 ) + nm1 ] . im * anorm ; if ( ai == 0.0 ) { ar /= 0.5 ; ai
= 0.0 ; } else if ( ar == 0.0 ) { ar = 0.0 ; ai /= 0.5 ; } else { ar /= 0.5 ;
ai /= 0.5 ; } shift_im = shift . re * ad22 . im + shift . im * ad22 . re ;
shift . re = ( ( absxk * absxk - t * t ) + ( scale * ar - colscale * ai ) ) -
( shift . re * ad22 . re - shift . im * ad22 . im ) ; shift . im = ( ( absxk
* t + t * absxk ) + ( scale * ai + colscale * ar ) ) - shift_im ; efa1ovvj2l
( & shift ) ; if ( ( absxk - ad22 . re ) * shift . re + ( t - ad22 . im ) *
shift . im <= 0.0 ) { shift . re += absxk ; shift . im += t ; } else { shift
. re = absxk - shift . re ; shift . im = t - shift . im ; } } else { ar = A [
( ilastm1 << 2 ) + nm1 ] . re * anorm ; ai = A [ ( ilastm1 << 2 ) + nm1 ] .
im * anorm ; if ( ai == 0.0 ) { scale = ar / 0.5 ; colscale = 0.0 ; } else if
( ar == 0.0 ) { scale = 0.0 ; colscale = ai / 0.5 ; } else { scale = ar / 0.5
; colscale = ai / 0.5 ; } eshift_re += scale ; eshift_im += colscale ; shift
. re = eshift_re ; shift . im = eshift_im ; } j = ilastm1 ; jp1 = ilastm1 + 1
; exitg2 = false ; while ( ( ! exitg2 ) && ( j + 1 > col ) ) { istart = j + 1
; ctemp . re = A [ ( j << 2 ) + j ] . re * anorm - shift . re * 0.5 ; ctemp .
im = A [ ( j << 2 ) + j ] . im * anorm - shift . im * 0.5 ; scale =
muDoubleScalarAbs ( ctemp . re ) + muDoubleScalarAbs ( ctemp . im ) ;
colscale = ( muDoubleScalarAbs ( A [ ( j << 2 ) + jp1 ] . re ) +
muDoubleScalarAbs ( A [ ( j << 2 ) + jp1 ] . im ) ) * anorm ; absxk = scale ;
if ( colscale > scale ) { absxk = colscale ; } if ( ( absxk < 1.0 ) && (
absxk != 0.0 ) ) { scale /= absxk ; colscale /= absxk ; } if ( (
muDoubleScalarAbs ( A [ ( ( j - 1 ) << 2 ) + j ] . re ) + muDoubleScalarAbs (
A [ ( ( j - 1 ) << 2 ) + j ] . im ) ) * colscale <= scale * ssq ) { goto90 =
true ; exitg2 = true ; } else { jp1 = j ; j -- ; } } if ( ! goto90 ) { istart
= col ; ctemp . re = A [ ( ( ( col - 1 ) << 2 ) + col ) - 1 ] . re * anorm -
shift . re * 0.5 ; ctemp . im = A [ ( ( ( col - 1 ) << 2 ) + col ) - 1 ] . im
* anorm - shift . im * 0.5 ; } goto90 = false ; anorm_p . re = A [ ( ( istart
- 1 ) << 2 ) + istart ] . re * anorm ; anorm_p . im = A [ ( ( istart - 1 ) <<
2 ) + istart ] . im * anorm ; n0fguw1wt1g ( ctemp , anorm_p , & scale , &
ad22 ) ; j = istart ; jp1 = istart - 2 ; while ( j < nm1 + 1 ) { if ( j >
istart ) { n0fguw1wt1 ( A [ ( j + ( jp1 << 2 ) ) - 1 ] , A [ j + ( jp1 << 2 )
] , & scale , & ad22 , & A [ ( j + ( jp1 << 2 ) ) - 1 ] ) ; A [ j + ( jp1 <<
2 ) ] . re = 0.0 ; A [ j + ( jp1 << 2 ) ] . im = 0.0 ; } for ( jp1 = j - 1 ;
jp1 + 1 < 5 ; jp1 ++ ) { shift . re = A [ ( ( jp1 << 2 ) + j ) - 1 ] . re *
scale + ( A [ ( jp1 << 2 ) + j ] . re * ad22 . re - A [ ( jp1 << 2 ) + j ] .
im * ad22 . im ) ; shift . im = A [ ( ( jp1 << 2 ) + j ) - 1 ] . im * scale +
( A [ ( jp1 << 2 ) + j ] . im * ad22 . re + A [ ( jp1 << 2 ) + j ] . re *
ad22 . im ) ; colscale = A [ ( ( jp1 << 2 ) + j ) - 1 ] . im ; absxk = A [ (
( jp1 << 2 ) + j ) - 1 ] . re ; A [ j + ( jp1 << 2 ) ] . re = A [ ( jp1 << 2
) + j ] . re * scale - ( A [ ( ( jp1 << 2 ) + j ) - 1 ] . re * ad22 . re + A
[ ( ( jp1 << 2 ) + j ) - 1 ] . im * ad22 . im ) ; A [ j + ( jp1 << 2 ) ] . im
= A [ ( jp1 << 2 ) + j ] . im * scale - ( ad22 . re * colscale - ad22 . im *
absxk ) ; A [ ( j + ( jp1 << 2 ) ) - 1 ] = shift ; } ad22 . re = - ad22 . re
; ad22 . im = - ad22 . im ; jp1 = j ; if ( nm1 + 1 < j + 2 ) { jp1 = nm1 - 1
; } for ( i = 0 ; i < jp1 + 2 ; i ++ ) { shift . re = ( A [ ( ( j - 1 ) << 2
) + i ] . re * ad22 . re - A [ ( ( j - 1 ) << 2 ) + i ] . im * ad22 . im ) +
A [ ( j << 2 ) + i ] . re * scale ; shift . im = ( A [ ( ( j - 1 ) << 2 ) + i
] . im * ad22 . re + A [ ( ( j - 1 ) << 2 ) + i ] . re * ad22 . im ) + A [ (
j << 2 ) + i ] . im * scale ; colscale = A [ ( j << 2 ) + i ] . im ; absxk =
A [ ( j << 2 ) + i ] . re ; A [ i + ( ( j - 1 ) << 2 ) ] . re = A [ ( ( j - 1
) << 2 ) + i ] . re * scale - ( A [ ( j << 2 ) + i ] . re * ad22 . re + A [ (
j << 2 ) + i ] . im * ad22 . im ) ; A [ i + ( ( j - 1 ) << 2 ) ] . im = A [ (
( j - 1 ) << 2 ) + i ] . im * scale - ( ad22 . re * colscale - ad22 . im *
absxk ) ; A [ i + ( j << 2 ) ] = shift ; } shift . re = ( Z [ ( j - 1 ) << 2
] . re * ad22 . re - Z [ ( j - 1 ) << 2 ] . im * ad22 . im ) + Z [ j << 2 ] .
re * scale ; shift . im = ( Z [ ( j - 1 ) << 2 ] . im * ad22 . re + Z [ ( j -
1 ) << 2 ] . re * ad22 . im ) + Z [ j << 2 ] . im * scale ; colscale = Z [ j
<< 2 ] . im ; absxk = Z [ j << 2 ] . re ; Z [ ( j - 1 ) << 2 ] . re = Z [ ( j
- 1 ) << 2 ] . re * scale - ( Z [ j << 2 ] . re * ad22 . re + Z [ j << 2 ] .
im * ad22 . im ) ; Z [ ( j - 1 ) << 2 ] . im = Z [ ( j - 1 ) << 2 ] . im *
scale - ( ad22 . re * colscale - ad22 . im * absxk ) ; Z [ j << 2 ] = shift ;
shift . re = ( Z [ ( ( j - 1 ) << 2 ) + 1 ] . re * ad22 . re - Z [ ( ( j - 1
) << 2 ) + 1 ] . im * ad22 . im ) + Z [ ( j << 2 ) + 1 ] . re * scale ; shift
. im = ( Z [ ( ( j - 1 ) << 2 ) + 1 ] . im * ad22 . re + Z [ ( ( j - 1 ) << 2
) + 1 ] . re * ad22 . im ) + Z [ ( j << 2 ) + 1 ] . im * scale ; colscale = Z
[ ( j << 2 ) + 1 ] . im ; absxk = Z [ ( j << 2 ) + 1 ] . re ; Z [ ( ( j - 1 )
<< 2 ) + 1 ] . re = Z [ ( ( j - 1 ) << 2 ) + 1 ] . re * scale - ( Z [ ( j <<
2 ) + 1 ] . re * ad22 . re + Z [ ( j << 2 ) + 1 ] . im * ad22 . im ) ; Z [ (
( j - 1 ) << 2 ) + 1 ] . im = Z [ ( ( j - 1 ) << 2 ) + 1 ] . im * scale - (
ad22 . re * colscale - ad22 . im * absxk ) ; Z [ ( j << 2 ) + 1 ] = shift ;
shift . re = ( Z [ ( ( j - 1 ) << 2 ) + 2 ] . re * ad22 . re - Z [ ( ( j - 1
) << 2 ) + 2 ] . im * ad22 . im ) + Z [ ( j << 2 ) + 2 ] . re * scale ; shift
. im = ( Z [ ( ( j - 1 ) << 2 ) + 2 ] . im * ad22 . re + Z [ ( ( j - 1 ) << 2
) + 2 ] . re * ad22 . im ) + Z [ ( j << 2 ) + 2 ] . im * scale ; colscale = Z
[ ( j << 2 ) + 2 ] . im ; absxk = Z [ ( j << 2 ) + 2 ] . re ; Z [ ( ( j - 1 )
<< 2 ) + 2 ] . re = Z [ ( ( j - 1 ) << 2 ) + 2 ] . re * scale - ( Z [ ( j <<
2 ) + 2 ] . re * ad22 . re + Z [ ( j << 2 ) + 2 ] . im * ad22 . im ) ; Z [ (
( j - 1 ) << 2 ) + 2 ] . im = Z [ ( ( j - 1 ) << 2 ) + 2 ] . im * scale - (
ad22 . re * colscale - ad22 . im * absxk ) ; Z [ ( j << 2 ) + 2 ] = shift ;
shift . re = ( Z [ ( ( j - 1 ) << 2 ) + 3 ] . re * ad22 . re - Z [ ( ( j - 1
) << 2 ) + 3 ] . im * ad22 . im ) + Z [ ( j << 2 ) + 3 ] . re * scale ; shift
. im = ( Z [ ( ( j - 1 ) << 2 ) + 3 ] . im * ad22 . re + Z [ ( ( j - 1 ) << 2
) + 3 ] . re * ad22 . im ) + Z [ ( j << 2 ) + 3 ] . im * scale ; colscale = Z
[ ( j << 2 ) + 3 ] . im ; absxk = Z [ ( j << 2 ) + 3 ] . re ; Z [ ( ( j - 1 )
<< 2 ) + 3 ] . re = Z [ ( ( j - 1 ) << 2 ) + 3 ] . re * scale - ( Z [ ( j <<
2 ) + 3 ] . re * ad22 . re + Z [ ( j << 2 ) + 3 ] . im * ad22 . im ) ; Z [ (
( j - 1 ) << 2 ) + 3 ] . im = Z [ ( ( j - 1 ) << 2 ) + 3 ] . im * scale - (
ad22 . re * colscale - ad22 . im * absxk ) ; Z [ ( j << 2 ) + 3 ] = shift ;
jp1 = j - 1 ; j ++ ; } } jiter ++ ; } } else { guard2 = true ; exitg1 = 1 ; }
} while ( exitg1 == 0 ) ; } else { guard1 = true ; } if ( guard2 ) { if (
failed ) { * info = nm1 + 1 ; for ( j = 0 ; j <= nm1 ; j ++ ) { alpha1 [ j ]
. re = ( rtNaN ) ; alpha1 [ j ] . im = 0.0 ; beta1 [ j ] . re = ( rtNaN ) ;
beta1 [ j ] . im = 0.0 ; } for ( istart = 0 ; istart < 16 ; istart ++ ) { Z [
istart ] . re = ( rtNaN ) ; Z [ istart ] . im = 0.0 ; } } else { guard1 =
true ; } } if ( guard1 ) { for ( nm1 = 0 ; nm1 <= ilo - 2 ; nm1 ++ ) { alpha1
[ nm1 ] = A [ ( nm1 << 2 ) + nm1 ] ; } } } static void obpyb0vtpe ( const
creal_T A [ 16 ] , creal_T V [ 16 ] ) { creal_T work1 [ 4 ] ; real_T rworka [
4 ] ; real_T acoeff ; real_T anorm ; real_T ascale ; real_T salpha_im ;
real_T salpha_re ; real_T scale ; real_T temp ; real_T work2_idx_1_im ;
real_T work2_idx_2_im ; real_T work2_idx_2_re ; real_T work2_idx_3_im ;
real_T work2_idx_3_re ; int32_T b_j ; int32_T c_j ; int32_T c_jr ; int32_T i
; int32_T j ; boolean_T lscalea ; boolean_T lscaleb ; rworka [ 0 ] = 0.0 ;
rworka [ 2 ] = 0.0 ; rworka [ 3 ] = 0.0 ; anorm = muDoubleScalarAbs ( A [ 0 ]
. re ) + muDoubleScalarAbs ( A [ 0 ] . im ) ; rworka [ 1 ] =
muDoubleScalarAbs ( A [ 4 ] . re ) + muDoubleScalarAbs ( A [ 4 ] . im ) ;
ascale = ( muDoubleScalarAbs ( A [ 5 ] . re ) + muDoubleScalarAbs ( A [ 5 ] .
im ) ) + rworka [ 1 ] ; if ( ascale > anorm ) { anorm = ascale ; } for ( i =
0 ; i < 2 ; i ++ ) { rworka [ 2 ] += muDoubleScalarAbs ( A [ i + 8 ] . re ) +
muDoubleScalarAbs ( A [ i + 8 ] . im ) ; } ascale = ( muDoubleScalarAbs ( A [
10 ] . re ) + muDoubleScalarAbs ( A [ 10 ] . im ) ) + rworka [ 2 ] ; if (
ascale > anorm ) { anorm = ascale ; } for ( i = 0 ; i < 3 ; i ++ ) { rworka [
3 ] += muDoubleScalarAbs ( A [ i + 12 ] . re ) + muDoubleScalarAbs ( A [ i +
12 ] . im ) ; } ascale = ( muDoubleScalarAbs ( A [ 15 ] . re ) +
muDoubleScalarAbs ( A [ 15 ] . im ) ) + rworka [ 3 ] ; if ( ascale > anorm )
{ anorm = ascale ; } ascale = anorm ; if ( 2.2250738585072014E-308 > anorm )
{ ascale = 2.2250738585072014E-308 ; } ascale = 1.0 / ascale ; for ( b_j = 0
; b_j < 4 ; b_j ++ ) { acoeff = ( muDoubleScalarAbs ( A [ ( ( ( 3 - b_j ) <<
2 ) - b_j ) + 3 ] . re ) + muDoubleScalarAbs ( A [ ( ( ( 3 - b_j ) << 2 ) -
b_j ) + 3 ] . im ) ) * ascale ; if ( 1.0 > acoeff ) { acoeff = 1.0 ; } temp =
1.0 / acoeff ; salpha_re = A [ ( ( ( 3 - b_j ) << 2 ) - b_j ) + 3 ] . re *
temp * ascale ; salpha_im = A [ ( ( ( 3 - b_j ) << 2 ) - b_j ) + 3 ] . im *
temp * ascale ; acoeff = temp * ascale ; lscalea = ( ( temp >=
2.2250738585072014E-308 ) && ( acoeff < 4.0083367200179456E-292 ) ) ; if ( (
muDoubleScalarAbs ( salpha_re ) + muDoubleScalarAbs ( salpha_im ) >=
2.2250738585072014E-308 ) && ( muDoubleScalarAbs ( salpha_re ) +
muDoubleScalarAbs ( salpha_im ) < 4.0083367200179456E-292 ) ) { lscaleb =
true ; } else { lscaleb = false ; } scale = 1.0 ; if ( lscalea ) { scale =
anorm ; if ( 2.4948003869184E+291 < anorm ) { scale = 2.4948003869184E+291 ;
} scale *= 4.0083367200179456E-292 / temp ; } if ( lscaleb ) { work2_idx_1_im
= 4.0083367200179456E-292 / ( muDoubleScalarAbs ( salpha_re ) +
muDoubleScalarAbs ( salpha_im ) ) ; if ( work2_idx_1_im > scale ) { scale =
work2_idx_1_im ; } } if ( lscalea || lscaleb ) { work2_idx_1_im =
muDoubleScalarAbs ( salpha_re ) + muDoubleScalarAbs ( salpha_im ) ;
work2_idx_2_re = acoeff ; if ( 1.0 > acoeff ) { work2_idx_2_re = 1.0 ; } if (
work2_idx_1_im > work2_idx_2_re ) { work2_idx_2_re = work2_idx_1_im ; }
work2_idx_1_im = 1.0 / ( 2.2250738585072014E-308 * work2_idx_2_re ) ; if (
work2_idx_1_im < scale ) { scale = work2_idx_1_im ; } if ( lscalea ) { acoeff
= scale * temp * ascale ; } else { acoeff *= scale ; } salpha_re *= scale ;
salpha_im *= scale ; } memset ( & work1 [ 0 ] , 0 , sizeof ( creal_T ) << 2U
) ; work1 [ 3 - b_j ] . re = 1.0 ; work1 [ 3 - b_j ] . im = 0.0 ; scale =
2.2204460492503131E-16 * acoeff * anorm ; temp = ( muDoubleScalarAbs (
salpha_re ) + muDoubleScalarAbs ( salpha_im ) ) * 2.2204460492503131E-16 ; if
( temp > scale ) { scale = temp ; } if ( 2.2250738585072014E-308 > scale ) {
scale = 2.2250738585072014E-308 ; } for ( i = 0 ; i <= 2 - b_j ; i ++ ) {
work1 [ i ] . re = A [ ( ( 3 - b_j ) << 2 ) + i ] . re * acoeff ; work1 [ i ]
. im = A [ ( ( 3 - b_j ) << 2 ) + i ] . im * acoeff ; } work1 [ 3 - b_j ] .
re = 1.0 ; work1 [ 3 - b_j ] . im = 0.0 ; i = ( int32_T ) ( ( ( - 1.0 - ( ( -
( real_T ) b_j + 4.0 ) - 1.0 ) ) + 1.0 ) / - 1.0 ) ; for ( c_j = 0 ; c_j < i
; c_j ++ ) { j = 2 - ( b_j + c_j ) ; work2_idx_2_im = A [ ( j << 2 ) + j ] .
re * acoeff - salpha_re ; work2_idx_2_re = A [ ( j << 2 ) + j ] . im * acoeff
- salpha_im ; if ( muDoubleScalarAbs ( work2_idx_2_im ) + muDoubleScalarAbs (
work2_idx_2_re ) <= scale ) { work2_idx_2_im = scale ; work2_idx_2_re = 0.0 ;
} if ( ( muDoubleScalarAbs ( work2_idx_2_im ) + muDoubleScalarAbs (
work2_idx_2_re ) < 1.0 ) && ( muDoubleScalarAbs ( work1 [ j ] . re ) +
muDoubleScalarAbs ( work1 [ j ] . im ) >= ( muDoubleScalarAbs (
work2_idx_2_im ) + muDoubleScalarAbs ( work2_idx_2_re ) ) *
1.1235582092889474E+307 ) ) { temp = 1.0 / ( muDoubleScalarAbs ( work1 [ j ]
. re ) + muDoubleScalarAbs ( work1 [ j ] . im ) ) ; for ( c_jr = 0 ; c_jr <=
3 - b_j ; c_jr ++ ) { work1 [ c_jr ] . re *= temp ; work1 [ c_jr ] . im *=
temp ; } } temp = - work1 [ j ] . re ; work2_idx_1_im = - work1 [ j ] . im ;
if ( work2_idx_2_re == 0.0 ) { if ( work2_idx_1_im == 0.0 ) { work1 [ j ] .
re = temp / work2_idx_2_im ; work1 [ j ] . im = 0.0 ; } else if ( temp == 0.0
) { work1 [ j ] . re = 0.0 ; work1 [ j ] . im = work2_idx_1_im /
work2_idx_2_im ; } else { work1 [ j ] . re = temp / work2_idx_2_im ; work1 [
j ] . im = work2_idx_1_im / work2_idx_2_im ; } } else if ( work2_idx_2_im ==
0.0 ) { if ( temp == 0.0 ) { work1 [ j ] . re = work2_idx_1_im /
work2_idx_2_re ; work1 [ j ] . im = 0.0 ; } else if ( work2_idx_1_im == 0.0 )
{ work1 [ j ] . re = 0.0 ; work1 [ j ] . im = - ( temp / work2_idx_2_re ) ; }
else { work1 [ j ] . re = work2_idx_1_im / work2_idx_2_re ; work1 [ j ] . im
= - ( temp / work2_idx_2_re ) ; } } else { work2_idx_3_re = muDoubleScalarAbs
( work2_idx_2_im ) ; work2_idx_3_im = muDoubleScalarAbs ( work2_idx_2_re ) ;
if ( work2_idx_3_re > work2_idx_3_im ) { work2_idx_3_re = work2_idx_2_re /
work2_idx_2_im ; work2_idx_2_re = work2_idx_3_re * work2_idx_2_re +
work2_idx_2_im ; work1 [ j ] . re = ( work2_idx_3_re * work2_idx_1_im + temp
) / work2_idx_2_re ; work1 [ j ] . im = ( work2_idx_1_im - work2_idx_3_re *
temp ) / work2_idx_2_re ; } else if ( work2_idx_3_im == work2_idx_3_re ) {
work2_idx_2_im = work2_idx_2_im > 0.0 ? 0.5 : - 0.5 ; work2_idx_2_re =
work2_idx_2_re > 0.0 ? 0.5 : - 0.5 ; work1 [ j ] . re = ( temp *
work2_idx_2_im + work2_idx_1_im * work2_idx_2_re ) / work2_idx_3_re ; work1 [
j ] . im = ( work2_idx_1_im * work2_idx_2_im - temp * work2_idx_2_re ) /
work2_idx_3_re ; } else { work2_idx_3_re = work2_idx_2_im / work2_idx_2_re ;
work2_idx_2_re += work2_idx_3_re * work2_idx_2_im ; work1 [ j ] . re = (
work2_idx_3_re * temp + work2_idx_1_im ) / work2_idx_2_re ; work1 [ j ] . im
= ( work2_idx_3_re * work2_idx_1_im - temp ) / work2_idx_2_re ; } } if ( j +
1 > 1 ) { if ( muDoubleScalarAbs ( work1 [ j ] . re ) + muDoubleScalarAbs (
work1 [ j ] . im ) > 1.0 ) { temp = 1.0 / ( muDoubleScalarAbs ( work1 [ j ] .
re ) + muDoubleScalarAbs ( work1 [ j ] . im ) ) ; if ( acoeff * rworka [ j ]
>= 1.1235582092889474E+307 * temp ) { for ( c_jr = 0 ; c_jr <= 3 - b_j ; c_jr
++ ) { work1 [ c_jr ] . re *= temp ; work1 [ c_jr ] . im *= temp ; } } }
work2_idx_2_im = acoeff * work1 [ j ] . re ; work2_idx_2_re = acoeff * work1
[ j ] . im ; for ( c_jr = 0 ; c_jr < j ; c_jr ++ ) { work1 [ c_jr ] . re += A
[ ( j << 2 ) + c_jr ] . re * work2_idx_2_im - A [ ( j << 2 ) + c_jr ] . im *
work2_idx_2_re ; work1 [ c_jr ] . im += A [ ( j << 2 ) + c_jr ] . im *
work2_idx_2_im + A [ ( j << 2 ) + c_jr ] . re * work2_idx_2_re ; } } }
salpha_re = 0.0 ; salpha_im = 0.0 ; scale = 0.0 ; work2_idx_1_im = 0.0 ;
work2_idx_2_re = 0.0 ; work2_idx_2_im = 0.0 ; work2_idx_3_re = 0.0 ;
work2_idx_3_im = 0.0 ; for ( c_j = 0 ; c_j <= 3 - b_j ; c_j ++ ) { salpha_re
+= V [ c_j << 2 ] . re * work1 [ c_j ] . re - V [ c_j << 2 ] . im * work1 [
c_j ] . im ; salpha_im += V [ c_j << 2 ] . re * work1 [ c_j ] . im + V [ c_j
<< 2 ] . im * work1 [ c_j ] . re ; scale += V [ ( c_j << 2 ) + 1 ] . re *
work1 [ c_j ] . re - V [ ( c_j << 2 ) + 1 ] . im * work1 [ c_j ] . im ;
work2_idx_1_im += V [ ( c_j << 2 ) + 1 ] . re * work1 [ c_j ] . im + V [ (
c_j << 2 ) + 1 ] . im * work1 [ c_j ] . re ; work2_idx_2_re += V [ ( c_j << 2
) + 2 ] . re * work1 [ c_j ] . re - V [ ( c_j << 2 ) + 2 ] . im * work1 [ c_j
] . im ; work2_idx_2_im += V [ ( c_j << 2 ) + 2 ] . re * work1 [ c_j ] . im +
V [ ( c_j << 2 ) + 2 ] . im * work1 [ c_j ] . re ; work2_idx_3_re += V [ (
c_j << 2 ) + 3 ] . re * work1 [ c_j ] . re - V [ ( c_j << 2 ) + 3 ] . im *
work1 [ c_j ] . im ; work2_idx_3_im += V [ ( c_j << 2 ) + 3 ] . re * work1 [
c_j ] . im + V [ ( c_j << 2 ) + 3 ] . im * work1 [ c_j ] . re ; } acoeff =
muDoubleScalarAbs ( salpha_re ) + muDoubleScalarAbs ( salpha_im ) ; temp =
muDoubleScalarAbs ( scale ) + muDoubleScalarAbs ( work2_idx_1_im ) ; if (
temp > acoeff ) { acoeff = temp ; } temp = muDoubleScalarAbs ( work2_idx_2_re
) + muDoubleScalarAbs ( work2_idx_2_im ) ; if ( temp > acoeff ) { acoeff =
temp ; } temp = muDoubleScalarAbs ( work2_idx_3_re ) + muDoubleScalarAbs (
work2_idx_3_im ) ; if ( temp > acoeff ) { acoeff = temp ; } if ( acoeff >
2.2250738585072014E-308 ) { temp = 1.0 / acoeff ; V [ ( 3 - b_j ) << 2 ] . re
= temp * salpha_re ; V [ ( 3 - b_j ) << 2 ] . im = temp * salpha_im ; V [ ( (
3 - b_j ) << 2 ) + 1 ] . re = temp * scale ; V [ ( ( 3 - b_j ) << 2 ) + 1 ] .
im = temp * work2_idx_1_im ; V [ ( ( 3 - b_j ) << 2 ) + 2 ] . re = temp *
work2_idx_2_re ; V [ ( ( 3 - b_j ) << 2 ) + 2 ] . im = temp * work2_idx_2_im
; V [ ( ( 3 - b_j ) << 2 ) + 3 ] . re = temp * work2_idx_3_re ; V [ ( ( 3 -
b_j ) << 2 ) + 3 ] . im = temp * work2_idx_3_im ; } else { V [ ( 3 - b_j ) <<
2 ] . re = 0.0 ; V [ ( 3 - b_j ) << 2 ] . im = 0.0 ; V [ ( ( 3 - b_j ) << 2 )
+ 1 ] . re = 0.0 ; V [ ( ( 3 - b_j ) << 2 ) + 1 ] . im = 0.0 ; V [ ( ( 3 -
b_j ) << 2 ) + 2 ] . re = 0.0 ; V [ ( ( 3 - b_j ) << 2 ) + 2 ] . im = 0.0 ; V
[ ( ( 3 - b_j ) << 2 ) + 3 ] . re = 0.0 ; V [ ( ( 3 - b_j ) << 2 ) + 3 ] . im
= 0.0 ; } } } static void jw0x3wzeuh ( const real_T A [ 16 ] , creal_T V [ 16
] , creal_T D [ 16 ] ) { creal_T At [ 16 ] ; creal_T alpha1 [ 4 ] ; creal_T
beta1 [ 4 ] ; creal_T s ; real_T anrm ; real_T b_absxk ; real_T cfromc ;
real_T cto1 ; real_T ctoc ; real_T mul ; real_T stemp_im ; int32_T rscale [ 4
] ; int32_T b_j ; int32_T c_k ; int32_T d_k ; int32_T jcol ; int32_T jrow ;
int8_T b_I [ 16 ] ; boolean_T exitg1 ; boolean_T guard1 = false ; boolean_T
ilascl ; boolean_T notdone ; for ( jcol = 0 ; jcol < 16 ; jcol ++ ) { At [
jcol ] . re = A [ jcol ] ; At [ jcol ] . im = 0.0 ; } anrm = 0.0 ; c_k = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( c_k < 16 ) ) { b_absxk =
muDoubleScalarHypot ( At [ c_k ] . re , At [ c_k ] . im ) ; if (
muDoubleScalarIsNaN ( b_absxk ) ) { anrm = ( rtNaN ) ; exitg1 = true ; } else
{ if ( b_absxk > anrm ) { anrm = b_absxk ; } c_k ++ ; } } if (
muDoubleScalarIsInf ( anrm ) || muDoubleScalarIsNaN ( anrm ) ) { alpha1 [ 0 ]
. re = ( rtNaN ) ; alpha1 [ 0 ] . im = 0.0 ; beta1 [ 0 ] . re = ( rtNaN ) ;
beta1 [ 0 ] . im = 0.0 ; alpha1 [ 1 ] . re = ( rtNaN ) ; alpha1 [ 1 ] . im =
0.0 ; beta1 [ 1 ] . re = ( rtNaN ) ; beta1 [ 1 ] . im = 0.0 ; alpha1 [ 2 ] .
re = ( rtNaN ) ; alpha1 [ 2 ] . im = 0.0 ; beta1 [ 2 ] . re = ( rtNaN ) ;
beta1 [ 2 ] . im = 0.0 ; alpha1 [ 3 ] . re = ( rtNaN ) ; alpha1 [ 3 ] . im =
0.0 ; beta1 [ 3 ] . re = ( rtNaN ) ; beta1 [ 3 ] . im = 0.0 ; for ( jcol = 0
; jcol < 16 ; jcol ++ ) { V [ jcol ] . re = ( rtNaN ) ; V [ jcol ] . im = 0.0
; } } else { ilascl = false ; b_absxk = anrm ; guard1 = false ; if ( ( anrm >
0.0 ) && ( anrm < 6.7178761075670888E-139 ) ) { b_absxk =
6.7178761075670888E-139 ; ilascl = true ; guard1 = true ; } else { if ( anrm
> 1.4885657073574029E+138 ) { b_absxk = 1.4885657073574029E+138 ; ilascl =
true ; guard1 = true ; } } if ( guard1 ) { cfromc = anrm ; ctoc = b_absxk ;
notdone = true ; while ( notdone ) { stemp_im = cfromc *
2.0041683600089728E-292 ; cto1 = ctoc / 4.9896007738368E+291 ; if ( (
stemp_im > ctoc ) && ( ctoc != 0.0 ) ) { mul = 2.0041683600089728E-292 ;
cfromc = stemp_im ; } else if ( cto1 > cfromc ) { mul = 4.9896007738368E+291
; ctoc = cto1 ; } else { mul = ctoc / cfromc ; notdone = false ; } for ( jcol
= 0 ; jcol < 16 ; jcol ++ ) { s = At [ jcol ] ; s . re *= mul ; s . im *= mul
; At [ jcol ] = s ; } } } bvalhr3dub ( At , & d_k , & c_k , rscale ) ; for (
jcol = 0 ; jcol < 16 ; jcol ++ ) { b_I [ jcol ] = 0 ; } b_I [ 0 ] = 1 ; b_I [
5 ] = 1 ; b_I [ 10 ] = 1 ; b_I [ 15 ] = 1 ; for ( jcol = 0 ; jcol < 16 ; jcol
++ ) { V [ jcol ] . re = b_I [ jcol ] ; V [ jcol ] . im = 0.0 ; } if ( c_k >=
d_k + 2 ) { for ( jcol = d_k - 1 ; jcol + 1 < c_k - 1 ; jcol ++ ) { for (
jrow = c_k - 1 ; jrow + 1 > jcol + 2 ; jrow -- ) { n0fguw1wt1 ( At [ ( jrow +
( jcol << 2 ) ) - 1 ] , At [ jrow + ( jcol << 2 ) ] , & cfromc , & s , & At [
( jrow + ( jcol << 2 ) ) - 1 ] ) ; At [ jrow + ( jcol << 2 ) ] . re = 0.0 ;
At [ jrow + ( jcol << 2 ) ] . im = 0.0 ; for ( b_j = jcol + 1 ; b_j + 1 < 5 ;
b_j ++ ) { ctoc = At [ ( ( b_j << 2 ) + jrow ) - 1 ] . re * cfromc + ( At [ (
b_j << 2 ) + jrow ] . re * s . re - At [ ( b_j << 2 ) + jrow ] . im * s . im
) ; stemp_im = At [ ( ( b_j << 2 ) + jrow ) - 1 ] . im * cfromc + ( At [ (
b_j << 2 ) + jrow ] . im * s . re + At [ ( b_j << 2 ) + jrow ] . re * s . im
) ; cto1 = At [ ( ( b_j << 2 ) + jrow ) - 1 ] . re ; At [ jrow + ( b_j << 2 )
] . re = At [ ( b_j << 2 ) + jrow ] . re * cfromc - ( At [ ( ( b_j << 2 ) +
jrow ) - 1 ] . re * s . re + At [ ( ( b_j << 2 ) + jrow ) - 1 ] . im * s . im
) ; At [ jrow + ( b_j << 2 ) ] . im = At [ ( b_j << 2 ) + jrow ] . im *
cfromc - ( At [ ( ( b_j << 2 ) + jrow ) - 1 ] . im * s . re - s . im * cto1 )
; At [ ( jrow + ( b_j << 2 ) ) - 1 ] . re = ctoc ; At [ ( jrow + ( b_j << 2 )
) - 1 ] . im = stemp_im ; } s . re = - s . re ; s . im = - s . im ; for ( b_j
= 0 ; b_j < c_k ; b_j ++ ) { ctoc = ( At [ ( ( jrow - 1 ) << 2 ) + b_j ] . re
* s . re - At [ ( ( jrow - 1 ) << 2 ) + b_j ] . im * s . im ) + At [ ( jrow
<< 2 ) + b_j ] . re * cfromc ; stemp_im = ( At [ ( ( jrow - 1 ) << 2 ) + b_j
] . im * s . re + At [ ( ( jrow - 1 ) << 2 ) + b_j ] . re * s . im ) + At [ (
jrow << 2 ) + b_j ] . im * cfromc ; cto1 = At [ ( jrow << 2 ) + b_j ] . re ;
At [ b_j + ( ( jrow - 1 ) << 2 ) ] . re = At [ ( ( jrow - 1 ) << 2 ) + b_j ]
. re * cfromc - ( At [ ( jrow << 2 ) + b_j ] . re * s . re + At [ ( jrow << 2
) + b_j ] . im * s . im ) ; At [ b_j + ( ( jrow - 1 ) << 2 ) ] . im = At [ (
( jrow - 1 ) << 2 ) + b_j ] . im * cfromc - ( At [ ( jrow << 2 ) + b_j ] . im
* s . re - s . im * cto1 ) ; At [ b_j + ( jrow << 2 ) ] . re = ctoc ; At [
b_j + ( jrow << 2 ) ] . im = stemp_im ; } ctoc = ( V [ ( jrow - 1 ) << 2 ] .
re * s . re - V [ ( jrow - 1 ) << 2 ] . im * s . im ) + V [ jrow << 2 ] . re
* cfromc ; stemp_im = ( V [ ( jrow - 1 ) << 2 ] . im * s . re + V [ ( jrow -
1 ) << 2 ] . re * s . im ) + V [ jrow << 2 ] . im * cfromc ; cto1 = V [ jrow
<< 2 ] . re ; V [ ( jrow - 1 ) << 2 ] . re = V [ ( jrow - 1 ) << 2 ] . re *
cfromc - ( V [ jrow << 2 ] . re * s . re + V [ jrow << 2 ] . im * s . im ) ;
V [ ( jrow - 1 ) << 2 ] . im = V [ ( jrow - 1 ) << 2 ] . im * cfromc - ( V [
jrow << 2 ] . im * s . re - s . im * cto1 ) ; V [ jrow << 2 ] . re = ctoc ; V
[ jrow << 2 ] . im = stemp_im ; ctoc = ( V [ ( ( jrow - 1 ) << 2 ) + 1 ] . re
* s . re - V [ ( ( jrow - 1 ) << 2 ) + 1 ] . im * s . im ) + V [ ( jrow << 2
) + 1 ] . re * cfromc ; stemp_im = ( V [ ( ( jrow - 1 ) << 2 ) + 1 ] . im * s
. re + V [ ( ( jrow - 1 ) << 2 ) + 1 ] . re * s . im ) + V [ ( jrow << 2 ) +
1 ] . im * cfromc ; cto1 = V [ ( jrow << 2 ) + 1 ] . re ; V [ ( ( jrow - 1 )
<< 2 ) + 1 ] . re = V [ ( ( jrow - 1 ) << 2 ) + 1 ] . re * cfromc - ( V [ (
jrow << 2 ) + 1 ] . re * s . re + V [ ( jrow << 2 ) + 1 ] . im * s . im ) ; V
[ ( ( jrow - 1 ) << 2 ) + 1 ] . im = V [ ( ( jrow - 1 ) << 2 ) + 1 ] . im *
cfromc - ( V [ ( jrow << 2 ) + 1 ] . im * s . re - s . im * cto1 ) ; V [ (
jrow << 2 ) + 1 ] . re = ctoc ; V [ ( jrow << 2 ) + 1 ] . im = stemp_im ;
ctoc = ( V [ ( ( jrow - 1 ) << 2 ) + 2 ] . re * s . re - V [ ( ( jrow - 1 )
<< 2 ) + 2 ] . im * s . im ) + V [ ( jrow << 2 ) + 2 ] . re * cfromc ;
stemp_im = ( V [ ( ( jrow - 1 ) << 2 ) + 2 ] . im * s . re + V [ ( ( jrow - 1
) << 2 ) + 2 ] . re * s . im ) + V [ ( jrow << 2 ) + 2 ] . im * cfromc ; cto1
= V [ ( jrow << 2 ) + 2 ] . re ; V [ ( ( jrow - 1 ) << 2 ) + 2 ] . re = V [ (
( jrow - 1 ) << 2 ) + 2 ] . re * cfromc - ( V [ ( jrow << 2 ) + 2 ] . re * s
. re + V [ ( jrow << 2 ) + 2 ] . im * s . im ) ; V [ ( ( jrow - 1 ) << 2 ) +
2 ] . im = V [ ( ( jrow - 1 ) << 2 ) + 2 ] . im * cfromc - ( V [ ( jrow << 2
) + 2 ] . im * s . re - s . im * cto1 ) ; V [ ( jrow << 2 ) + 2 ] . re = ctoc
; V [ ( jrow << 2 ) + 2 ] . im = stemp_im ; ctoc = ( V [ ( ( jrow - 1 ) << 2
) + 3 ] . re * s . re - V [ ( ( jrow - 1 ) << 2 ) + 3 ] . im * s . im ) + V [
( jrow << 2 ) + 3 ] . re * cfromc ; stemp_im = ( V [ ( ( jrow - 1 ) << 2 ) +
3 ] . im * s . re + V [ ( ( jrow - 1 ) << 2 ) + 3 ] . re * s . im ) + V [ (
jrow << 2 ) + 3 ] . im * cfromc ; cto1 = V [ ( jrow << 2 ) + 3 ] . re ; V [ (
( jrow - 1 ) << 2 ) + 3 ] . re = V [ ( ( jrow - 1 ) << 2 ) + 3 ] . re *
cfromc - ( V [ ( jrow << 2 ) + 3 ] . re * s . re + V [ ( jrow << 2 ) + 3 ] .
im * s . im ) ; V [ ( ( jrow - 1 ) << 2 ) + 3 ] . im = V [ ( ( jrow - 1 ) <<
2 ) + 3 ] . im * cfromc - ( V [ ( jrow << 2 ) + 3 ] . im * s . re - s . im *
cto1 ) ; V [ ( jrow << 2 ) + 3 ] . re = ctoc ; V [ ( jrow << 2 ) + 3 ] . im =
stemp_im ; } } } hmixtqa5bt ( At , d_k , c_k , V , & jcol , alpha1 , beta1 )
; if ( jcol == 0 ) { obpyb0vtpe ( At , V ) ; if ( d_k > 1 ) { for ( jcol =
d_k - 2 ; jcol + 1 >= 1 ; jcol -- ) { d_k = rscale [ jcol ] - 1 ; if ( jcol +
1 != rscale [ jcol ] ) { ctoc = V [ jcol ] . re ; stemp_im = V [ jcol ] . im
; V [ jcol ] = V [ d_k ] ; V [ d_k ] . re = ctoc ; V [ d_k ] . im = stemp_im
; ctoc = V [ jcol + 4 ] . re ; stemp_im = V [ jcol + 4 ] . im ; V [ jcol + 4
] = V [ d_k + 4 ] ; V [ d_k + 4 ] . re = ctoc ; V [ d_k + 4 ] . im = stemp_im
; ctoc = V [ jcol + 8 ] . re ; stemp_im = V [ jcol + 8 ] . im ; V [ jcol + 8
] = V [ d_k + 8 ] ; V [ d_k + 8 ] . re = ctoc ; V [ d_k + 8 ] . im = stemp_im
; ctoc = V [ jcol + 12 ] . re ; stemp_im = V [ jcol + 12 ] . im ; V [ jcol +
12 ] = V [ d_k + 12 ] ; V [ d_k + 12 ] . re = ctoc ; V [ d_k + 12 ] . im =
stemp_im ; } } } if ( c_k < 4 ) { while ( c_k + 1 < 5 ) { d_k = rscale [ c_k
] - 1 ; if ( c_k + 1 != rscale [ c_k ] ) { ctoc = V [ c_k ] . re ; stemp_im =
V [ c_k ] . im ; V [ c_k ] = V [ d_k ] ; V [ d_k ] . re = ctoc ; V [ d_k ] .
im = stemp_im ; ctoc = V [ c_k + 4 ] . re ; stemp_im = V [ c_k + 4 ] . im ; V
[ c_k + 4 ] = V [ d_k + 4 ] ; V [ d_k + 4 ] . re = ctoc ; V [ d_k + 4 ] . im
= stemp_im ; ctoc = V [ c_k + 8 ] . re ; stemp_im = V [ c_k + 8 ] . im ; V [
c_k + 8 ] = V [ d_k + 8 ] ; V [ d_k + 8 ] . re = ctoc ; V [ d_k + 8 ] . im =
stemp_im ; ctoc = V [ c_k + 12 ] . re ; stemp_im = V [ c_k + 12 ] . im ; V [
c_k + 12 ] = V [ d_k + 12 ] ; V [ d_k + 12 ] . re = ctoc ; V [ d_k + 12 ] .
im = stemp_im ; } c_k ++ ; } } for ( c_k = 0 ; c_k < 4 ; c_k ++ ) { cfromc =
muDoubleScalarAbs ( V [ c_k << 2 ] . re ) + muDoubleScalarAbs ( V [ c_k << 2
] . im ) ; ctoc = muDoubleScalarAbs ( V [ ( c_k << 2 ) + 1 ] . re ) +
muDoubleScalarAbs ( V [ ( c_k << 2 ) + 1 ] . im ) ; if ( ctoc > cfromc ) {
cfromc = ctoc ; } ctoc = muDoubleScalarAbs ( V [ ( c_k << 2 ) + 2 ] . re ) +
muDoubleScalarAbs ( V [ ( c_k << 2 ) + 2 ] . im ) ; if ( ctoc > cfromc ) {
cfromc = ctoc ; } ctoc = muDoubleScalarAbs ( V [ ( c_k << 2 ) + 3 ] . re ) +
muDoubleScalarAbs ( V [ ( c_k << 2 ) + 3 ] . im ) ; if ( ctoc > cfromc ) {
cfromc = ctoc ; } if ( cfromc >= 6.7178761075670888E-139 ) { cfromc = 1.0 /
cfromc ; V [ c_k << 2 ] . re *= cfromc ; V [ c_k << 2 ] . im *= cfromc ; V [
( c_k << 2 ) + 1 ] . re *= cfromc ; V [ ( c_k << 2 ) + 1 ] . im *= cfromc ; V
[ ( c_k << 2 ) + 2 ] . re *= cfromc ; V [ ( c_k << 2 ) + 2 ] . im *= cfromc ;
V [ ( c_k << 2 ) + 3 ] . re *= cfromc ; V [ ( c_k << 2 ) + 3 ] . im *= cfromc
; } } if ( ilascl ) { while ( ilascl ) { cfromc = b_absxk *
2.0041683600089728E-292 ; ctoc = anrm / 4.9896007738368E+291 ; if ( ( cfromc
> anrm ) && ( anrm != 0.0 ) ) { stemp_im = 2.0041683600089728E-292 ; b_absxk
= cfromc ; } else if ( ctoc > b_absxk ) { stemp_im = 4.9896007738368E+291 ;
anrm = ctoc ; } else { stemp_im = anrm / b_absxk ; ilascl = false ; } alpha1
[ 0 ] . re *= stemp_im ; alpha1 [ 0 ] . im *= stemp_im ; alpha1 [ 1 ] . re *=
stemp_im ; alpha1 [ 1 ] . im *= stemp_im ; alpha1 [ 2 ] . re *= stemp_im ;
alpha1 [ 2 ] . im *= stemp_im ; alpha1 [ 3 ] . re *= stemp_im ; alpha1 [ 3 ]
. im *= stemp_im ; } } } } anrm = 0.0 ; b_absxk = 3.3121686421112381E-170 ;
for ( d_k = 0 ; d_k < 4 ; d_k ++ ) { cfromc = muDoubleScalarAbs ( V [ d_k ] .
re ) ; if ( cfromc > b_absxk ) { ctoc = b_absxk / cfromc ; anrm = anrm * ctoc
* ctoc + 1.0 ; b_absxk = cfromc ; } else { ctoc = cfromc / b_absxk ; anrm +=
ctoc * ctoc ; } cfromc = muDoubleScalarAbs ( V [ d_k ] . im ) ; if ( cfromc >
b_absxk ) { ctoc = b_absxk / cfromc ; anrm = anrm * ctoc * ctoc + 1.0 ;
b_absxk = cfromc ; } else { ctoc = cfromc / b_absxk ; anrm += ctoc * ctoc ; }
} anrm = b_absxk * muDoubleScalarSqrt ( anrm ) ; for ( d_k = 0 ; d_k < 4 ;
d_k ++ ) { b_absxk = V [ d_k ] . re ; cfromc = V [ d_k ] . im ; if ( cfromc
== 0.0 ) { V [ d_k ] . re = b_absxk / anrm ; V [ d_k ] . im = 0.0 ; } else if
( b_absxk == 0.0 ) { V [ d_k ] . re = 0.0 ; V [ d_k ] . im = cfromc / anrm ;
} else { V [ d_k ] . re = b_absxk / anrm ; V [ d_k ] . im = cfromc / anrm ; }
} anrm = 0.0 ; b_absxk = 3.3121686421112381E-170 ; for ( d_k = 4 ; d_k < 8 ;
d_k ++ ) { cfromc = muDoubleScalarAbs ( V [ d_k ] . re ) ; if ( cfromc >
b_absxk ) { ctoc = b_absxk / cfromc ; anrm = anrm * ctoc * ctoc + 1.0 ;
b_absxk = cfromc ; } else { ctoc = cfromc / b_absxk ; anrm += ctoc * ctoc ; }
cfromc = muDoubleScalarAbs ( V [ d_k ] . im ) ; if ( cfromc > b_absxk ) {
ctoc = b_absxk / cfromc ; anrm = anrm * ctoc * ctoc + 1.0 ; b_absxk = cfromc
; } else { ctoc = cfromc / b_absxk ; anrm += ctoc * ctoc ; } } anrm = b_absxk
* muDoubleScalarSqrt ( anrm ) ; for ( d_k = 4 ; d_k < 8 ; d_k ++ ) { b_absxk
= V [ d_k ] . re ; cfromc = V [ d_k ] . im ; if ( cfromc == 0.0 ) { V [ d_k ]
. re = b_absxk / anrm ; V [ d_k ] . im = 0.0 ; } else if ( b_absxk == 0.0 ) {
V [ d_k ] . re = 0.0 ; V [ d_k ] . im = cfromc / anrm ; } else { V [ d_k ] .
re = b_absxk / anrm ; V [ d_k ] . im = cfromc / anrm ; } } anrm = 0.0 ;
b_absxk = 3.3121686421112381E-170 ; for ( d_k = 8 ; d_k < 12 ; d_k ++ ) {
cfromc = muDoubleScalarAbs ( V [ d_k ] . re ) ; if ( cfromc > b_absxk ) {
ctoc = b_absxk / cfromc ; anrm = anrm * ctoc * ctoc + 1.0 ; b_absxk = cfromc
; } else { ctoc = cfromc / b_absxk ; anrm += ctoc * ctoc ; } cfromc =
muDoubleScalarAbs ( V [ d_k ] . im ) ; if ( cfromc > b_absxk ) { ctoc =
b_absxk / cfromc ; anrm = anrm * ctoc * ctoc + 1.0 ; b_absxk = cfromc ; }
else { ctoc = cfromc / b_absxk ; anrm += ctoc * ctoc ; } } anrm = b_absxk *
muDoubleScalarSqrt ( anrm ) ; for ( d_k = 8 ; d_k < 12 ; d_k ++ ) { b_absxk =
V [ d_k ] . re ; cfromc = V [ d_k ] . im ; if ( cfromc == 0.0 ) { V [ d_k ] .
re = b_absxk / anrm ; V [ d_k ] . im = 0.0 ; } else if ( b_absxk == 0.0 ) { V
[ d_k ] . re = 0.0 ; V [ d_k ] . im = cfromc / anrm ; } else { V [ d_k ] . re
= b_absxk / anrm ; V [ d_k ] . im = cfromc / anrm ; } } anrm = 0.0 ; b_absxk
= 3.3121686421112381E-170 ; for ( d_k = 12 ; d_k < 16 ; d_k ++ ) { cfromc =
muDoubleScalarAbs ( V [ d_k ] . re ) ; if ( cfromc > b_absxk ) { ctoc =
b_absxk / cfromc ; anrm = anrm * ctoc * ctoc + 1.0 ; b_absxk = cfromc ; }
else { ctoc = cfromc / b_absxk ; anrm += ctoc * ctoc ; } cfromc =
muDoubleScalarAbs ( V [ d_k ] . im ) ; if ( cfromc > b_absxk ) { ctoc =
b_absxk / cfromc ; anrm = anrm * ctoc * ctoc + 1.0 ; b_absxk = cfromc ; }
else { ctoc = cfromc / b_absxk ; anrm += ctoc * ctoc ; } } anrm = b_absxk *
muDoubleScalarSqrt ( anrm ) ; for ( d_k = 12 ; d_k < 16 ; d_k ++ ) { b_absxk
= V [ d_k ] . re ; cfromc = V [ d_k ] . im ; if ( cfromc == 0.0 ) { V [ d_k ]
. re = b_absxk / anrm ; V [ d_k ] . im = 0.0 ; } else if ( b_absxk == 0.0 ) {
V [ d_k ] . re = 0.0 ; V [ d_k ] . im = cfromc / anrm ; } else { V [ d_k ] .
re = b_absxk / anrm ; V [ d_k ] . im = cfromc / anrm ; } } memset ( & D [ 0 ]
, 0 , sizeof ( creal_T ) << 4U ) ; if ( beta1 [ 0 ] . im == 0.0 ) { if (
alpha1 [ 0 ] . im == 0.0 ) { D [ 0 ] . re = alpha1 [ 0 ] . re / beta1 [ 0 ] .
re ; D [ 0 ] . im = 0.0 ; } else if ( alpha1 [ 0 ] . re == 0.0 ) { D [ 0 ] .
re = 0.0 ; D [ 0 ] . im = alpha1 [ 0 ] . im / beta1 [ 0 ] . re ; } else { D [
0 ] . re = alpha1 [ 0 ] . re / beta1 [ 0 ] . re ; D [ 0 ] . im = alpha1 [ 0 ]
. im / beta1 [ 0 ] . re ; } } else if ( beta1 [ 0 ] . re == 0.0 ) { if (
alpha1 [ 0 ] . re == 0.0 ) { D [ 0 ] . re = alpha1 [ 0 ] . im / beta1 [ 0 ] .
im ; D [ 0 ] . im = 0.0 ; } else if ( alpha1 [ 0 ] . im == 0.0 ) { D [ 0 ] .
re = 0.0 ; D [ 0 ] . im = - ( alpha1 [ 0 ] . re / beta1 [ 0 ] . im ) ; } else
{ D [ 0 ] . re = alpha1 [ 0 ] . im / beta1 [ 0 ] . im ; D [ 0 ] . im = - (
alpha1 [ 0 ] . re / beta1 [ 0 ] . im ) ; } } else { anrm = muDoubleScalarAbs
( beta1 [ 0 ] . re ) ; b_absxk = muDoubleScalarAbs ( beta1 [ 0 ] . im ) ; if
( anrm > b_absxk ) { anrm = beta1 [ 0 ] . im / beta1 [ 0 ] . re ; b_absxk =
anrm * beta1 [ 0 ] . im + beta1 [ 0 ] . re ; D [ 0 ] . re = ( anrm * alpha1 [
0 ] . im + alpha1 [ 0 ] . re ) / b_absxk ; D [ 0 ] . im = ( alpha1 [ 0 ] . im
- anrm * alpha1 [ 0 ] . re ) / b_absxk ; } else if ( b_absxk == anrm ) {
b_absxk = beta1 [ 0 ] . re > 0.0 ? 0.5 : - 0.5 ; cfromc = beta1 [ 0 ] . im >
0.0 ? 0.5 : - 0.5 ; D [ 0 ] . re = ( alpha1 [ 0 ] . re * b_absxk + alpha1 [ 0
] . im * cfromc ) / anrm ; D [ 0 ] . im = ( alpha1 [ 0 ] . im * b_absxk -
alpha1 [ 0 ] . re * cfromc ) / anrm ; } else { anrm = beta1 [ 0 ] . re /
beta1 [ 0 ] . im ; b_absxk = anrm * beta1 [ 0 ] . re + beta1 [ 0 ] . im ; D [
0 ] . re = ( anrm * alpha1 [ 0 ] . re + alpha1 [ 0 ] . im ) / b_absxk ; D [ 0
] . im = ( anrm * alpha1 [ 0 ] . im - alpha1 [ 0 ] . re ) / b_absxk ; } } if
( beta1 [ 1 ] . im == 0.0 ) { if ( alpha1 [ 1 ] . im == 0.0 ) { D [ 5 ] . re
= alpha1 [ 1 ] . re / beta1 [ 1 ] . re ; D [ 5 ] . im = 0.0 ; } else if (
alpha1 [ 1 ] . re == 0.0 ) { D [ 5 ] . re = 0.0 ; D [ 5 ] . im = alpha1 [ 1 ]
. im / beta1 [ 1 ] . re ; } else { D [ 5 ] . re = alpha1 [ 1 ] . re / beta1 [
1 ] . re ; D [ 5 ] . im = alpha1 [ 1 ] . im / beta1 [ 1 ] . re ; } } else if
( beta1 [ 1 ] . re == 0.0 ) { if ( alpha1 [ 1 ] . re == 0.0 ) { D [ 5 ] . re
= alpha1 [ 1 ] . im / beta1 [ 1 ] . im ; D [ 5 ] . im = 0.0 ; } else if (
alpha1 [ 1 ] . im == 0.0 ) { D [ 5 ] . re = 0.0 ; D [ 5 ] . im = - ( alpha1 [
1 ] . re / beta1 [ 1 ] . im ) ; } else { D [ 5 ] . re = alpha1 [ 1 ] . im /
beta1 [ 1 ] . im ; D [ 5 ] . im = - ( alpha1 [ 1 ] . re / beta1 [ 1 ] . im )
; } } else { anrm = muDoubleScalarAbs ( beta1 [ 1 ] . re ) ; b_absxk =
muDoubleScalarAbs ( beta1 [ 1 ] . im ) ; if ( anrm > b_absxk ) { anrm = beta1
[ 1 ] . im / beta1 [ 1 ] . re ; b_absxk = anrm * beta1 [ 1 ] . im + beta1 [ 1
] . re ; D [ 5 ] . re = ( anrm * alpha1 [ 1 ] . im + alpha1 [ 1 ] . re ) /
b_absxk ; D [ 5 ] . im = ( alpha1 [ 1 ] . im - anrm * alpha1 [ 1 ] . re ) /
b_absxk ; } else if ( b_absxk == anrm ) { b_absxk = beta1 [ 1 ] . re > 0.0 ?
0.5 : - 0.5 ; cfromc = beta1 [ 1 ] . im > 0.0 ? 0.5 : - 0.5 ; D [ 5 ] . re =
( alpha1 [ 1 ] . re * b_absxk + alpha1 [ 1 ] . im * cfromc ) / anrm ; D [ 5 ]
. im = ( alpha1 [ 1 ] . im * b_absxk - alpha1 [ 1 ] . re * cfromc ) / anrm ;
} else { anrm = beta1 [ 1 ] . re / beta1 [ 1 ] . im ; b_absxk = anrm * beta1
[ 1 ] . re + beta1 [ 1 ] . im ; D [ 5 ] . re = ( anrm * alpha1 [ 1 ] . re +
alpha1 [ 1 ] . im ) / b_absxk ; D [ 5 ] . im = ( anrm * alpha1 [ 1 ] . im -
alpha1 [ 1 ] . re ) / b_absxk ; } } if ( beta1 [ 2 ] . im == 0.0 ) { if (
alpha1 [ 2 ] . im == 0.0 ) { D [ 10 ] . re = alpha1 [ 2 ] . re / beta1 [ 2 ]
. re ; D [ 10 ] . im = 0.0 ; } else if ( alpha1 [ 2 ] . re == 0.0 ) { D [ 10
] . re = 0.0 ; D [ 10 ] . im = alpha1 [ 2 ] . im / beta1 [ 2 ] . re ; } else
{ D [ 10 ] . re = alpha1 [ 2 ] . re / beta1 [ 2 ] . re ; D [ 10 ] . im =
alpha1 [ 2 ] . im / beta1 [ 2 ] . re ; } } else if ( beta1 [ 2 ] . re == 0.0
) { if ( alpha1 [ 2 ] . re == 0.0 ) { D [ 10 ] . re = alpha1 [ 2 ] . im /
beta1 [ 2 ] . im ; D [ 10 ] . im = 0.0 ; } else if ( alpha1 [ 2 ] . im == 0.0
) { D [ 10 ] . re = 0.0 ; D [ 10 ] . im = - ( alpha1 [ 2 ] . re / beta1 [ 2 ]
. im ) ; } else { D [ 10 ] . re = alpha1 [ 2 ] . im / beta1 [ 2 ] . im ; D [
10 ] . im = - ( alpha1 [ 2 ] . re / beta1 [ 2 ] . im ) ; } } else { anrm =
muDoubleScalarAbs ( beta1 [ 2 ] . re ) ; b_absxk = muDoubleScalarAbs ( beta1
[ 2 ] . im ) ; if ( anrm > b_absxk ) { anrm = beta1 [ 2 ] . im / beta1 [ 2 ]
. re ; b_absxk = anrm * beta1 [ 2 ] . im + beta1 [ 2 ] . re ; D [ 10 ] . re =
( anrm * alpha1 [ 2 ] . im + alpha1 [ 2 ] . re ) / b_absxk ; D [ 10 ] . im =
( alpha1 [ 2 ] . im - anrm * alpha1 [ 2 ] . re ) / b_absxk ; } else if (
b_absxk == anrm ) { b_absxk = beta1 [ 2 ] . re > 0.0 ? 0.5 : - 0.5 ; cfromc =
beta1 [ 2 ] . im > 0.0 ? 0.5 : - 0.5 ; D [ 10 ] . re = ( alpha1 [ 2 ] . re *
b_absxk + alpha1 [ 2 ] . im * cfromc ) / anrm ; D [ 10 ] . im = ( alpha1 [ 2
] . im * b_absxk - alpha1 [ 2 ] . re * cfromc ) / anrm ; } else { anrm =
beta1 [ 2 ] . re / beta1 [ 2 ] . im ; b_absxk = anrm * beta1 [ 2 ] . re +
beta1 [ 2 ] . im ; D [ 10 ] . re = ( anrm * alpha1 [ 2 ] . re + alpha1 [ 2 ]
. im ) / b_absxk ; D [ 10 ] . im = ( anrm * alpha1 [ 2 ] . im - alpha1 [ 2 ]
. re ) / b_absxk ; } } if ( beta1 [ 3 ] . im == 0.0 ) { if ( alpha1 [ 3 ] .
im == 0.0 ) { D [ 15 ] . re = alpha1 [ 3 ] . re / beta1 [ 3 ] . re ; D [ 15 ]
. im = 0.0 ; } else if ( alpha1 [ 3 ] . re == 0.0 ) { D [ 15 ] . re = 0.0 ; D
[ 15 ] . im = alpha1 [ 3 ] . im / beta1 [ 3 ] . re ; } else { D [ 15 ] . re =
alpha1 [ 3 ] . re / beta1 [ 3 ] . re ; D [ 15 ] . im = alpha1 [ 3 ] . im /
beta1 [ 3 ] . re ; } } else if ( beta1 [ 3 ] . re == 0.0 ) { if ( alpha1 [ 3
] . re == 0.0 ) { D [ 15 ] . re = alpha1 [ 3 ] . im / beta1 [ 3 ] . im ; D [
15 ] . im = 0.0 ; } else if ( alpha1 [ 3 ] . im == 0.0 ) { D [ 15 ] . re =
0.0 ; D [ 15 ] . im = - ( alpha1 [ 3 ] . re / beta1 [ 3 ] . im ) ; } else { D
[ 15 ] . re = alpha1 [ 3 ] . im / beta1 [ 3 ] . im ; D [ 15 ] . im = - (
alpha1 [ 3 ] . re / beta1 [ 3 ] . im ) ; } } else { anrm = muDoubleScalarAbs
( beta1 [ 3 ] . re ) ; b_absxk = muDoubleScalarAbs ( beta1 [ 3 ] . im ) ; if
( anrm > b_absxk ) { anrm = beta1 [ 3 ] . im / beta1 [ 3 ] . re ; b_absxk =
anrm * beta1 [ 3 ] . im + beta1 [ 3 ] . re ; D [ 15 ] . re = ( anrm * alpha1
[ 3 ] . im + alpha1 [ 3 ] . re ) / b_absxk ; D [ 15 ] . im = ( alpha1 [ 3 ] .
im - anrm * alpha1 [ 3 ] . re ) / b_absxk ; } else if ( b_absxk == anrm ) {
b_absxk = beta1 [ 3 ] . re > 0.0 ? 0.5 : - 0.5 ; cfromc = beta1 [ 3 ] . im >
0.0 ? 0.5 : - 0.5 ; D [ 15 ] . re = ( alpha1 [ 3 ] . re * b_absxk + alpha1 [
3 ] . im * cfromc ) / anrm ; D [ 15 ] . im = ( alpha1 [ 3 ] . im * b_absxk -
alpha1 [ 3 ] . re * cfromc ) / anrm ; } else { anrm = beta1 [ 3 ] . re /
beta1 [ 3 ] . im ; b_absxk = anrm * beta1 [ 3 ] . re + beta1 [ 3 ] . im ; D [
15 ] . re = ( anrm * alpha1 [ 3 ] . re + alpha1 [ 3 ] . im ) / b_absxk ; D [
15 ] . im = ( anrm * alpha1 [ 3 ] . im - alpha1 [ 3 ] . re ) / b_absxk ; } }
} static real_T am53b42kiv ( int32_T n , const real_T x [ 16 ] , int32_T ix0
) { real_T absxk ; real_T scale ; real_T t ; real_T y ; int32_T k ; y = 0.0 ;
if ( n >= 1 ) { if ( n == 1 ) { y = muDoubleScalarAbs ( x [ ix0 - 1 ] ) ; }
else { scale = 3.3121686421112381E-170 ; for ( k = ix0 ; k <= ix0 + 1 ; k ++
) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt ( y ) ; } } return y
; } static void co3ynvpmxs ( int32_T m , int32_T n , int32_T iv0 , real_T tau
, real_T C [ 16 ] , int32_T ic0 , real_T work [ 4 ] ) { real_T c ; int32_T
coltop ; int32_T d ; int32_T exitg1 ; int32_T ia ; int32_T iac ; int32_T ix ;
int32_T jy ; int32_T lastc ; int32_T lastv ; boolean_T exitg2 ; if ( tau !=
0.0 ) { lastv = m ; lastc = iv0 + m ; while ( ( lastv > 0 ) && ( C [ lastc -
2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc = n - 1 ; exitg2 = false ;
while ( ( ! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = ( lastc << 2 ) + ic0 ;
jy = coltop ; do { exitg1 = 0 ; if ( jy <= ( coltop + lastv ) - 1 ) { if ( C
[ jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } } else { lastc -- ;
exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ;
} } } else { lastv = 0 ; lastc = - 1 ; } if ( lastv > 0 ) { if ( lastc + 1 !=
0 ) { for ( coltop = 0 ; coltop <= lastc ; coltop ++ ) { work [ coltop ] =
0.0 ; } coltop = 0 ; jy = ( lastc << 2 ) + ic0 ; for ( iac = ic0 ; iac <= jy
; iac += 4 ) { ix = iv0 ; c = 0.0 ; d = ( iac + lastv ) - 1 ; for ( ia = iac
; ia <= d ; ia ++ ) { c += C [ ia - 1 ] * C [ ix - 1 ] ; ix ++ ; } work [
coltop ] += c ; coltop ++ ; } } if ( ! ( - tau == 0.0 ) ) { coltop = ic0 - 1
; jy = 0 ; for ( iac = 0 ; iac <= lastc ; iac ++ ) { if ( work [ jy ] != 0.0
) { c = work [ jy ] * - tau ; ix = iv0 ; d = lastv + coltop ; for ( ia =
coltop ; ia < d ; ia ++ ) { C [ ia ] += C [ ix - 1 ] * c ; ix ++ ; } } jy ++
; coltop += 4 ; } } } } static real_T am53b42kivy ( int32_T n , const real_T
x [ 3 ] ) { real_T absxk ; real_T scale ; real_T t ; real_T y ; y = 0.0 ; if
( n >= 1 ) { if ( n == 1 ) { y = muDoubleScalarAbs ( x [ 1 ] ) ; } else {
scale = 3.3121686421112381E-170 ; absxk = muDoubleScalarAbs ( x [ 1 ] ) ; if
( absxk > 3.3121686421112381E-170 ) { y = 1.0 ; scale = absxk ; } else { t =
absxk / 3.3121686421112381E-170 ; y = t * t ; } absxk = muDoubleScalarAbs ( x
[ 2 ] ) ; if ( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ;
scale = absxk ; } else { t = absxk / scale ; y += t * t ; } y = scale *
muDoubleScalarSqrt ( y ) ; } } return y ; } static real_T eub0bxuykf (
int32_T n , real_T * alpha1 , real_T x [ 3 ] ) { real_T tau ; real_T xnorm ;
int32_T c_k ; int32_T knt ; tau = 0.0 ; if ( n > 0 ) { xnorm = am53b42kivy (
n - 1 , x ) ; if ( xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( * alpha1 ,
xnorm ) ; if ( * alpha1 >= 0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs
( xnorm ) < 1.0020841800044864E-292 ) { knt = - 1 ; do { knt ++ ; for ( c_k =
1 ; c_k < n ; c_k ++ ) { x [ c_k ] *= 9.9792015476736E+291 ; } xnorm *=
9.9792015476736E+291 ; * alpha1 *= 9.9792015476736E+291 ; } while ( ! (
muDoubleScalarAbs ( xnorm ) >= 1.0020841800044864E-292 ) ) ; xnorm =
muDoubleScalarHypot ( * alpha1 , am53b42kivy ( n - 1 , x ) ) ; if ( * alpha1
>= 0.0 ) { xnorm = - xnorm ; } tau = ( xnorm - * alpha1 ) / xnorm ; * alpha1
= 1.0 / ( * alpha1 - xnorm ) ; for ( c_k = 1 ; c_k < n ; c_k ++ ) { x [ c_k ]
*= * alpha1 ; } for ( c_k = 0 ; c_k <= knt ; c_k ++ ) { xnorm *=
1.0020841800044864E-292 ; } * alpha1 = xnorm ; } else { tau = ( xnorm - *
alpha1 ) / xnorm ; * alpha1 = 1.0 / ( * alpha1 - xnorm ) ; for ( knt = 1 ;
knt < n ; knt ++ ) { x [ knt ] *= * alpha1 ; } * alpha1 = xnorm ; } } }
return tau ; } static void fdldy5rqzy ( real_T * a , real_T * b , real_T * c
, real_T * d , real_T * rt1r , real_T * rt1i , real_T * rt2r , real_T * rt2i
, real_T * cs , real_T * sn ) { real_T bcmax ; real_T bcmis ; real_T p ;
real_T scale ; real_T temp ; real_T z ; int32_T b_p ; int32_T c_p ; if ( * c
== 0.0 ) { * cs = 1.0 ; * sn = 0.0 ; } else if ( * b == 0.0 ) { * cs = 0.0 ;
* sn = 1.0 ; temp = * d ; * d = * a ; * a = temp ; * b = - * c ; * c = 0.0 ;
} else if ( ( * a - * d == 0.0 ) && ( ( * b < 0.0 ) != ( * c < 0.0 ) ) ) { *
cs = 1.0 ; * sn = 0.0 ; } else { temp = * a - * d ; p = 0.5 * temp ; bcmax =
muDoubleScalarMax ( muDoubleScalarAbs ( * b ) , muDoubleScalarAbs ( * c ) ) ;
if ( ! ( * b < 0.0 ) ) { b_p = 1 ; } else { b_p = - 1 ; } if ( ! ( * c < 0.0
) ) { c_p = 1 ; } else { c_p = - 1 ; } bcmis = muDoubleScalarMin (
muDoubleScalarAbs ( * b ) , muDoubleScalarAbs ( * c ) ) * ( real_T ) b_p * (
real_T ) c_p ; scale = muDoubleScalarMax ( muDoubleScalarAbs ( p ) , bcmax )
; z = p / scale * p + bcmax / scale * bcmis ; if ( z >=
8.8817841970012523E-16 ) { if ( ! ( p < 0.0 ) ) { temp = muDoubleScalarSqrt (
scale ) * muDoubleScalarSqrt ( z ) ; } else { temp = - ( muDoubleScalarSqrt (
scale ) * muDoubleScalarSqrt ( z ) ) ; } z = p + temp ; * a = * d + z ; * d
-= bcmax / z * bcmis ; bcmax = muDoubleScalarHypot ( * c , z ) ; * cs = z /
bcmax ; * sn = * c / bcmax ; * b -= * c ; * c = 0.0 ; } else { bcmis = * b +
* c ; bcmax = muDoubleScalarHypot ( bcmis , temp ) ; * cs =
muDoubleScalarSqrt ( ( muDoubleScalarAbs ( bcmis ) / bcmax + 1.0 ) * 0.5 ) ;
if ( ! ( bcmis < 0.0 ) ) { b_p = 1 ; } else { b_p = - 1 ; } * sn = - ( p / (
bcmax * * cs ) ) * ( real_T ) b_p ; temp = * a * * cs + * b * * sn ; p = - *
a * * sn + * b * * cs ; bcmax = * c * * cs + * d * * sn ; bcmis = - * c * *
sn + * d * * cs ; * b = p * * cs + bcmis * * sn ; * c = - temp * * sn + bcmax
* * cs ; temp = ( ( temp * * cs + bcmax * * sn ) + ( - p * * sn + bcmis * *
cs ) ) * 0.5 ; * a = temp ; * d = temp ; if ( * c != 0.0 ) { if ( * b != 0.0
) { if ( ( * b < 0.0 ) == ( * c < 0.0 ) ) { z = muDoubleScalarSqrt (
muDoubleScalarAbs ( * b ) ) ; bcmis = muDoubleScalarSqrt ( muDoubleScalarAbs
( * c ) ) ; p = z * bcmis ; if ( * c < 0.0 ) { p = - p ; } bcmax = 1.0 /
muDoubleScalarSqrt ( muDoubleScalarAbs ( * b + * c ) ) ; * a = temp + p ; * d
= temp - p ; * b -= * c ; * c = 0.0 ; p = z * bcmax ; bcmax *= bcmis ; temp =
* cs * p - * sn * bcmax ; * sn = * cs * bcmax + * sn * p ; * cs = temp ; } }
else { * b = - * c ; * c = 0.0 ; temp = * cs ; * cs = - * sn ; * sn = temp ;
} } } } * rt1r = * a ; * rt2r = * d ; if ( * c == 0.0 ) { * rt1i = 0.0 ; *
rt2i = 0.0 ; } else { * rt1i = muDoubleScalarSqrt ( muDoubleScalarAbs ( * b )
) * muDoubleScalarSqrt ( muDoubleScalarAbs ( * c ) ) ; * rt2i = - * rt1i ; }
} static void f5gixm5zec ( int32_T n , real_T x [ 16 ] , int32_T ix0 ,
int32_T iy0 , real_T c , real_T s ) { real_T temp ; int32_T ix ; int32_T iy ;
int32_T k ; if ( n >= 1 ) { ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n
; k ++ ) { temp = c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c * x [ iy ] - s *
x [ ix ] ; x [ ix ] = temp ; iy ++ ; ix ++ ; } } } static void f5gixm5zecw (
real_T x [ 16 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T s ) { real_T
temp ; temp = x [ ix0 - 1 ] * c + x [ iy0 - 1 ] * s ; x [ iy0 - 1 ] = x [ iy0
- 1 ] * c - x [ ix0 - 1 ] * s ; x [ ix0 - 1 ] = temp ; temp = x [ ix0 ] * c +
x [ iy0 ] * s ; x [ iy0 ] = x [ iy0 ] * c - x [ ix0 ] * s ; x [ ix0 ] = temp
; temp = x [ ix0 + 1 ] * c + x [ iy0 + 1 ] * s ; x [ iy0 + 1 ] = x [ iy0 + 1
] * c - x [ ix0 + 1 ] * s ; x [ ix0 + 1 ] = temp ; temp = x [ ix0 + 2 ] * c +
x [ iy0 + 2 ] * s ; x [ iy0 + 2 ] = x [ iy0 + 2 ] * c - x [ ix0 + 2 ] * s ; x
[ ix0 + 2 ] = temp ; } static int32_T ezifbep0dg ( real_T h [ 16 ] , real_T z
[ 16 ] ) { real_T b_v [ 3 ] ; real_T v [ 3 ] ; real_T aa ; real_T ab ; real_T
ba ; real_T h12 ; real_T htmp1 ; real_T tst ; real_T unusedU0 ; real_T
unusedU1 ; real_T unusedU2 ; real_T unusedU3 ; int32_T L ; int32_T b_k ;
int32_T hoffset ; int32_T i ; int32_T info ; int32_T ix ; int32_T j ; int32_T
k ; int32_T m ; int32_T nr ; boolean_T exitg1 ; boolean_T exitg2 ; boolean_T
exitg3 ; boolean_T goto150 ; info = 0 ; v [ 0 ] = 0.0 ; v [ 1 ] = 0.0 ; v [ 2
] = 0.0 ; h [ 2 ] = 0.0 ; h [ 3 ] = 0.0 ; h [ 7 ] = 0.0 ; i = 3 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( i + 1 >= 1 ) ) { L = 1 ; goto150 = false ;
ix = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( ix < 301 ) ) { k = i ;
exitg3 = false ; while ( ( ! exitg3 ) && ( ( k + 1 > L ) && ( ! (
muDoubleScalarAbs ( h [ ( ( k - 1 ) << 2 ) + k ] ) <= 4.0083367200179456E-292
) ) ) ) { tst = muDoubleScalarAbs ( h [ ( ( ( k - 1 ) << 2 ) + k ) - 1 ] ) +
muDoubleScalarAbs ( h [ ( k << 2 ) + k ] ) ; if ( tst == 0.0 ) { if ( k - 1
>= 1 ) { tst = muDoubleScalarAbs ( h [ ( ( ( k - 2 ) << 2 ) + k ) - 1 ] ) ; }
if ( k + 2 <= 4 ) { tst += muDoubleScalarAbs ( h [ ( ( k << 2 ) + k ) + 1 ] )
; } } if ( muDoubleScalarAbs ( h [ ( ( k - 1 ) << 2 ) + k ] ) <=
2.2204460492503131E-16 * tst ) { htmp1 = muDoubleScalarAbs ( h [ ( ( k - 1 )
<< 2 ) + k ] ) ; tst = muDoubleScalarAbs ( h [ ( ( k << 2 ) + k ) - 1 ] ) ;
if ( htmp1 > tst ) { ab = htmp1 ; ba = tst ; } else { ab = tst ; ba = htmp1 ;
} htmp1 = muDoubleScalarAbs ( h [ ( k << 2 ) + k ] ) ; tst =
muDoubleScalarAbs ( h [ ( ( ( k - 1 ) << 2 ) + k ) - 1 ] - h [ ( k << 2 ) + k
] ) ; if ( htmp1 > tst ) { aa = htmp1 ; htmp1 = tst ; } else { aa = tst ; }
tst = aa + ab ; if ( ab / tst * ba <= muDoubleScalarMax (
4.0083367200179456E-292 , aa / tst * htmp1 * 2.2204460492503131E-16 ) ) {
exitg3 = true ; } else { k -- ; } } else { k -- ; } } L = k + 1 ; if ( k + 1
> 1 ) { h [ k + ( ( k - 1 ) << 2 ) ] = 0.0 ; } if ( k + 1 >= i ) { goto150 =
true ; exitg2 = true ; } else { if ( ix == 10 ) { tst = muDoubleScalarAbs ( h
[ ( ( ( k + 1 ) << 2 ) + k ) + 2 ] ) + muDoubleScalarAbs ( h [ ( ( k << 2 ) +
k ) + 1 ] ) ; ba = h [ ( k << 2 ) + k ] + 0.75 * tst ; h12 = - 0.4375 * tst ;
aa = tst ; htmp1 = ba ; } else if ( ix == 20 ) { tst = muDoubleScalarAbs ( h
[ ( ( ( i - 2 ) << 2 ) + i ) - 1 ] ) + muDoubleScalarAbs ( h [ ( ( i - 1 ) <<
2 ) + i ] ) ; ba = h [ ( i << 2 ) + i ] + 0.75 * tst ; h12 = - 0.4375 * tst ;
aa = tst ; htmp1 = ba ; } else { ba = h [ ( ( ( i - 1 ) << 2 ) + i ) - 1 ] ;
aa = h [ ( ( i - 1 ) << 2 ) + i ] ; h12 = h [ ( ( i << 2 ) + i ) - 1 ] ;
htmp1 = h [ ( i << 2 ) + i ] ; } tst = ( ( muDoubleScalarAbs ( ba ) +
muDoubleScalarAbs ( h12 ) ) + muDoubleScalarAbs ( aa ) ) + muDoubleScalarAbs
( htmp1 ) ; if ( tst == 0.0 ) { ba = 0.0 ; htmp1 = 0.0 ; ab = 0.0 ; aa = 0.0
; } else { ba /= tst ; aa /= tst ; h12 /= tst ; htmp1 /= tst ; ab = ( ba +
htmp1 ) / 2.0 ; ba = ( ba - ab ) * ( htmp1 - ab ) - h12 * aa ; aa =
muDoubleScalarSqrt ( muDoubleScalarAbs ( ba ) ) ; if ( ba >= 0.0 ) { ba = ab
* tst ; ab = ba ; htmp1 = aa * tst ; aa = - htmp1 ; } else { ba = ab + aa ;
ab -= aa ; if ( muDoubleScalarAbs ( ba - htmp1 ) <= muDoubleScalarAbs ( ab -
htmp1 ) ) { ba *= tst ; ab = ba ; } else { ab *= tst ; ba = ab ; } htmp1 =
0.0 ; aa = 0.0 ; } } m = i - 1 ; exitg3 = false ; while ( ( ! exitg3 ) && ( m
>= k + 1 ) ) { tst = ( muDoubleScalarAbs ( h [ ( ( ( m - 1 ) << 2 ) + m ) - 1
] - ab ) + muDoubleScalarAbs ( aa ) ) + muDoubleScalarAbs ( h [ ( ( m - 1 )
<< 2 ) + m ] ) ; h12 = h [ ( ( m - 1 ) << 2 ) + m ] / tst ; v [ 0 ] = ( ( h [
( ( ( m - 1 ) << 2 ) + m ) - 1 ] - ab ) / tst * ( h [ ( ( ( m - 1 ) << 2 ) +
m ) - 1 ] - ba ) + h [ ( ( m << 2 ) + m ) - 1 ] * h12 ) - aa / tst * htmp1 ;
v [ 1 ] = ( ( ( h [ ( ( ( m - 1 ) << 2 ) + m ) - 1 ] + h [ ( m << 2 ) + m ] )
- ba ) - ab ) * h12 ; v [ 2 ] = h [ ( ( m << 2 ) + m ) + 1 ] * h12 ; tst = (
muDoubleScalarAbs ( v [ 0 ] ) + muDoubleScalarAbs ( v [ 1 ] ) ) +
muDoubleScalarAbs ( v [ 2 ] ) ; v [ 0 ] /= tst ; v [ 1 ] /= tst ; v [ 2 ] /=
tst ; if ( ( k + 1 == m ) || ( muDoubleScalarAbs ( h [ ( ( ( m - 2 ) << 2 ) +
m ) - 1 ] ) * ( muDoubleScalarAbs ( v [ 1 ] ) + muDoubleScalarAbs ( v [ 2 ] )
) <= ( ( muDoubleScalarAbs ( h [ ( ( ( m - 2 ) << 2 ) + m ) - 2 ] ) +
muDoubleScalarAbs ( h [ ( ( ( m - 1 ) << 2 ) + m ) - 1 ] ) ) +
muDoubleScalarAbs ( h [ ( m << 2 ) + m ] ) ) * ( 2.2204460492503131E-16 *
muDoubleScalarAbs ( v [ 0 ] ) ) ) ) { exitg3 = true ; } else { m -- ; } } for
( b_k = m ; b_k <= i ; b_k ++ ) { nr = ( i - b_k ) + 2 ; nr =
muIntScalarMin_sint32 ( 3 , nr ) ; if ( b_k > m ) { hoffset = ( ( b_k - 2 )
<< 2 ) + b_k ; for ( j = 0 ; j < nr ; j ++ ) { v [ j ] = h [ ( j + hoffset )
- 1 ] ; } } htmp1 = v [ 0 ] ; b_v [ 0 ] = v [ 0 ] ; b_v [ 1 ] = v [ 1 ] ; b_v
[ 2 ] = v [ 2 ] ; tst = eub0bxuykf ( nr , & htmp1 , b_v ) ; v [ 1 ] = b_v [ 1
] ; v [ 2 ] = b_v [ 2 ] ; v [ 0 ] = htmp1 ; if ( b_k > m ) { h [ ( b_k + ( (
b_k - 2 ) << 2 ) ) - 1 ] = htmp1 ; h [ b_k + ( ( b_k - 2 ) << 2 ) ] = 0.0 ;
if ( b_k < i ) { h [ b_k + 1 ] = 0.0 ; } } else { if ( m > k + 1 ) { h [ b_k
- 1 ] *= 1.0 - tst ; } } htmp1 = b_v [ 1 ] ; ab = tst * b_v [ 1 ] ; if ( nr
== 3 ) { aa = b_v [ 2 ] ; h12 = tst * b_v [ 2 ] ; for ( nr = b_k - 1 ; nr + 1
< 5 ; nr ++ ) { ba = ( h [ ( ( nr << 2 ) + b_k ) - 1 ] + h [ ( nr << 2 ) +
b_k ] * htmp1 ) + h [ ( ( nr << 2 ) + b_k ) + 1 ] * aa ; h [ ( b_k + ( nr <<
2 ) ) - 1 ] -= ba * tst ; h [ b_k + ( nr << 2 ) ] -= ba * ab ; h [ ( b_k + (
nr << 2 ) ) + 1 ] -= ba * h12 ; } nr = b_k + 3 ; hoffset = i + 1 ; nr =
muIntScalarMin_sint32 ( nr , hoffset ) ; for ( hoffset = 0 ; hoffset < nr ;
hoffset ++ ) { ba = ( h [ ( ( b_k - 1 ) << 2 ) + hoffset ] + h [ ( b_k << 2 )
+ hoffset ] * htmp1 ) + h [ ( ( b_k + 1 ) << 2 ) + hoffset ] * aa ; h [
hoffset + ( ( b_k - 1 ) << 2 ) ] -= ba * tst ; h [ hoffset + ( b_k << 2 ) ]
-= ba * ab ; h [ hoffset + ( ( b_k + 1 ) << 2 ) ] -= ba * h12 ; } for ( nr =
0 ; nr < 4 ; nr ++ ) { ba = ( z [ ( ( b_k - 1 ) << 2 ) + nr ] + z [ ( b_k <<
2 ) + nr ] * htmp1 ) + z [ ( ( b_k + 1 ) << 2 ) + nr ] * aa ; z [ nr + ( (
b_k - 1 ) << 2 ) ] -= ba * tst ; z [ nr + ( b_k << 2 ) ] -= ba * ab ; z [ nr
+ ( ( b_k + 1 ) << 2 ) ] -= ba * h12 ; } } else { if ( nr == 2 ) { for ( nr =
b_k - 1 ; nr + 1 < 5 ; nr ++ ) { ba = h [ ( ( nr << 2 ) + b_k ) - 1 ] + h [ (
nr << 2 ) + b_k ] * htmp1 ; h [ ( b_k + ( nr << 2 ) ) - 1 ] -= ba * tst ; h [
b_k + ( nr << 2 ) ] -= ba * ab ; } for ( nr = 0 ; nr <= i ; nr ++ ) { ba = h
[ ( ( b_k - 1 ) << 2 ) + nr ] + h [ ( b_k << 2 ) + nr ] * htmp1 ; h [ nr + (
( b_k - 1 ) << 2 ) ] -= ba * tst ; h [ nr + ( b_k << 2 ) ] -= ba * ab ; } for
( nr = 0 ; nr < 4 ; nr ++ ) { ba = z [ ( ( b_k - 1 ) << 2 ) + nr ] + z [ (
b_k << 2 ) + nr ] * htmp1 ; z [ nr + ( ( b_k - 1 ) << 2 ) ] -= ba * tst ; z [
nr + ( b_k << 2 ) ] -= ba * ab ; } } } } ix ++ ; } } if ( ! goto150 ) { info
= i + 1 ; exitg1 = true ; } else { if ( ( i + 1 != L ) && ( L == i ) ) { ab =
h [ ( ( ( i - 1 ) << 2 ) + i ) - 1 ] ; ba = h [ ( ( i << 2 ) + i ) - 1 ] ; aa
= h [ ( ( i - 1 ) << 2 ) + i ] ; h12 = h [ ( i << 2 ) + i ] ; fdldy5rqzy ( &
ab , & ba , & aa , & h12 , & unusedU0 , & unusedU1 , & unusedU2 , & unusedU3
, & tst , & htmp1 ) ; h [ ( i + ( ( i - 1 ) << 2 ) ) - 1 ] = ab ; h [ ( i + (
i << 2 ) ) - 1 ] = ba ; h [ i + ( ( i - 1 ) << 2 ) ] = aa ; h [ i + ( i << 2
) ] = h12 ; if ( 4 > i + 1 ) { ix = ( ( ( i + 1 ) << 2 ) + i ) - 1 ; k = ( (
i + 1 ) << 2 ) + i ; for ( m = 0 ; m <= 2 - i ; m ++ ) { ab = tst * h [ ix ]
+ htmp1 * h [ k ] ; h [ k ] = tst * h [ k ] - htmp1 * h [ ix ] ; h [ ix ] =
ab ; k += 4 ; ix += 4 ; } } f5gixm5zec ( i - 1 , h , ( ( i - 1 ) << 2 ) + 1 ,
( i << 2 ) + 1 , tst , htmp1 ) ; f5gixm5zecw ( z , ( ( i - 1 ) << 2 ) + 1 , (
i << 2 ) + 1 , tst , htmp1 ) ; } i = L - 2 ; } } return info ; } static void
kpvvlrsfk4 ( const real_T A [ 16 ] , real_T V [ 16 ] , real_T D [ 16 ] ) {
real_T work [ 4 ] ; real_T alpha1 ; real_T tau_idx_0 ; real_T tau_idx_1 ;
real_T tau_idx_2 ; real_T xnorm ; int32_T b_ia ; int32_T b_ix ; int32_T
exitg1 ; int32_T ia ; int32_T ia0 ; int32_T iy ; int32_T jy ; int32_T knt ;
int32_T l ; int32_T rowleft ; boolean_T exitg2 ; if ( fuzcbjylqn ( A ) ) {
for ( ia0 = 0 ; ia0 < 16 ; ia0 ++ ) { V [ ia0 ] = ( rtNaN ) ; } for ( ia0 = 2
; ia0 < 5 ; ia0 ++ ) { V [ ia0 - 1 ] = 0.0 ; } for ( ia0 = 3 ; ia0 < 5 ; ia0
++ ) { V [ ia0 + 3 ] = 0.0 ; } V [ 11 ] = 0.0 ; for ( ia0 = 0 ; ia0 < 16 ;
ia0 ++ ) { D [ ia0 ] = ( rtNaN ) ; } } else { memcpy ( & D [ 0 ] , & A [ 0 ]
, sizeof ( real_T ) << 4U ) ; work [ 0 ] = 0.0 ; work [ 1 ] = 0.0 ; work [ 2
] = 0.0 ; work [ 3 ] = 0.0 ; ia0 = 3 ; alpha1 = D [ 1 ] ; tau_idx_0 = 0.0 ;
xnorm = am53b42kiv ( 2 , D , 3 ) ; if ( xnorm != 0.0 ) { xnorm =
muDoubleScalarHypot ( D [ 1 ] , xnorm ) ; if ( D [ 1 ] >= 0.0 ) { xnorm = -
xnorm ; } if ( muDoubleScalarAbs ( xnorm ) < 1.0020841800044864E-292 ) { knt
= - 1 ; do { knt ++ ; for ( rowleft = 3 ; rowleft < 5 ; rowleft ++ ) { D [
rowleft - 1 ] *= 9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ;
alpha1 *= 9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( alpha1 ,
am53b42kiv ( 2 , D , 3 ) ) ; if ( alpha1 >= 0.0 ) { xnorm = - xnorm ; }
tau_idx_0 = ( xnorm - alpha1 ) / xnorm ; alpha1 = 1.0 / ( alpha1 - xnorm ) ;
while ( ia0 <= 4 ) { D [ ia0 - 1 ] *= alpha1 ; ia0 ++ ; } for ( ia0 = 0 ; ia0
<= knt ; ia0 ++ ) { xnorm *= 1.0020841800044864E-292 ; } alpha1 = xnorm ; }
else { tau_idx_0 = ( xnorm - D [ 1 ] ) / xnorm ; alpha1 = 1.0 / ( D [ 1 ] -
xnorm ) ; while ( ia0 <= 4 ) { D [ ia0 - 1 ] *= alpha1 ; ia0 ++ ; } alpha1 =
xnorm ; } } D [ 1 ] = 1.0 ; jy = 1 ; if ( tau_idx_0 != 0.0 ) { knt = 2 ; ia0
= 3 ; while ( ( knt + 1 > 0 ) && ( D [ ia0 ] == 0.0 ) ) { knt -- ; ia0 -- ; }
ia0 = 4 ; exitg2 = false ; while ( ( ! exitg2 ) && ( ia0 > 0 ) ) { b_ia = ia0
+ 4 ; do { exitg1 = 0 ; if ( b_ia <= ( ia0 + ( knt << 2 ) ) + 4 ) { if ( D [
b_ia - 1 ] != 0.0 ) { exitg1 = 1 ; } else { b_ia += 4 ; } } else { ia0 -- ;
exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ;
} } } else { knt = - 1 ; ia0 = 0 ; } if ( knt + 1 > 0 ) { if ( ia0 != 0 ) {
for ( rowleft = 0 ; rowleft < ia0 ; rowleft ++ ) { work [ rowleft ] = 0.0 ; }
rowleft = 1 ; b_ia = ( knt << 2 ) + 5 ; for ( b_ix = 5 ; b_ix <= b_ia ; b_ix
+= 4 ) { iy = 0 ; l = ( b_ix + ia0 ) - 1 ; for ( ia = b_ix ; ia <= l ; ia ++
) { work [ iy ] += D [ ia - 1 ] * D [ rowleft ] ; iy ++ ; } rowleft ++ ; } }
if ( ! ( - tau_idx_0 == 0.0 ) ) { rowleft = 4 ; for ( b_ia = 0 ; b_ia <= knt
; b_ia ++ ) { if ( D [ jy ] != 0.0 ) { xnorm = D [ jy ] * - tau_idx_0 ; b_ix
= 0 ; iy = ia0 + rowleft ; for ( l = rowleft ; l < iy ; l ++ ) { D [ l ] +=
work [ b_ix ] * xnorm ; b_ix ++ ; } } jy ++ ; rowleft += 4 ; } } } co3ynvpmxs
( 3 , 3 , 2 , tau_idx_0 , D , 6 , work ) ; D [ 1 ] = alpha1 ; alpha1 = D [ 6
] ; tau_idx_1 = 0.0 ; xnorm = am53b42kiv ( 1 , D , 8 ) ; if ( xnorm != 0.0 )
{ xnorm = muDoubleScalarHypot ( D [ 6 ] , xnorm ) ; if ( D [ 6 ] >= 0.0 ) {
xnorm = - xnorm ; } if ( muDoubleScalarAbs ( xnorm ) <
1.0020841800044864E-292 ) { knt = - 1 ; do { knt ++ ; D [ 7 ] *=
9.9792015476736E+291 ; xnorm *= 9.9792015476736E+291 ; alpha1 *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( alpha1 ,
am53b42kiv ( 1 , D , 8 ) ) ; if ( alpha1 >= 0.0 ) { xnorm = - xnorm ; }
tau_idx_1 = ( xnorm - alpha1 ) / xnorm ; alpha1 = 1.0 / ( alpha1 - xnorm ) ;
D [ 7 ] *= alpha1 ; for ( ia0 = 0 ; ia0 <= knt ; ia0 ++ ) { xnorm *=
1.0020841800044864E-292 ; } alpha1 = xnorm ; } else { tau_idx_1 = ( xnorm - D
[ 6 ] ) / xnorm ; D [ 7 ] *= 1.0 / ( D [ 6 ] - xnorm ) ; alpha1 = xnorm ; } }
D [ 6 ] = 1.0 ; jy = 6 ; if ( tau_idx_1 != 0.0 ) { knt = 1 ; ia0 = 7 ; while
( ( knt + 1 > 0 ) && ( D [ ia0 ] == 0.0 ) ) { knt -- ; ia0 -- ; } ia0 = 4 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( ia0 > 0 ) ) { b_ia = ia0 + 8 ; do
{ exitg1 = 0 ; if ( b_ia <= ( ia0 + ( knt << 2 ) ) + 8 ) { if ( D [ b_ia - 1
] != 0.0 ) { exitg1 = 1 ; } else { b_ia += 4 ; } } else { ia0 -- ; exitg1 = 2
; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } } else
{ knt = - 1 ; ia0 = 0 ; } if ( knt + 1 > 0 ) { if ( ia0 != 0 ) { for (
rowleft = 0 ; rowleft < ia0 ; rowleft ++ ) { work [ rowleft ] = 0.0 ; }
rowleft = 6 ; b_ia = ( knt << 2 ) + 9 ; for ( b_ix = 9 ; b_ix <= b_ia ; b_ix
+= 4 ) { iy = 0 ; l = ( b_ix + ia0 ) - 1 ; for ( ia = b_ix ; ia <= l ; ia ++
) { work [ iy ] += D [ ia - 1 ] * D [ rowleft ] ; iy ++ ; } rowleft ++ ; } }
if ( ! ( - tau_idx_1 == 0.0 ) ) { rowleft = 8 ; for ( b_ia = 0 ; b_ia <= knt
; b_ia ++ ) { if ( D [ jy ] != 0.0 ) { xnorm = D [ jy ] * - tau_idx_1 ; b_ix
= 0 ; iy = ia0 + rowleft ; for ( l = rowleft ; l < iy ; l ++ ) { D [ l ] +=
work [ b_ix ] * xnorm ; b_ix ++ ; } } jy ++ ; rowleft += 4 ; } } } co3ynvpmxs
( 2 , 2 , 7 , tau_idx_1 , D , 11 , work ) ; D [ 6 ] = alpha1 ; alpha1 = D [
11 ] ; tau_idx_2 = 0.0 ; xnorm = am53b42kiv ( 0 , D , 12 ) ; if ( xnorm !=
0.0 ) { xnorm = muDoubleScalarHypot ( D [ 11 ] , xnorm ) ; if ( D [ 11 ] >=
0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs ( xnorm ) <
1.0020841800044864E-292 ) { knt = - 1 ; do { knt ++ ; xnorm *=
9.9792015476736E+291 ; alpha1 *= 9.9792015476736E+291 ; } while ( ! (
muDoubleScalarAbs ( xnorm ) >= 1.0020841800044864E-292 ) ) ; xnorm =
muDoubleScalarHypot ( alpha1 , am53b42kiv ( 0 , D , 12 ) ) ; if ( alpha1 >=
0.0 ) { xnorm = - xnorm ; } tau_idx_2 = ( xnorm - alpha1 ) / xnorm ; for (
ia0 = 0 ; ia0 <= knt ; ia0 ++ ) { xnorm *= 1.0020841800044864E-292 ; } alpha1
= xnorm ; } else { tau_idx_2 = ( xnorm - D [ 11 ] ) / xnorm ; alpha1 = xnorm
; } } D [ 11 ] = 1.0 ; jy = 11 ; if ( tau_idx_2 != 0.0 ) { knt = 0 ; ia0 = 11
; while ( ( knt + 1 > 0 ) && ( D [ ia0 ] == 0.0 ) ) { knt -- ; ia0 -- ; } ia0
= 4 ; exitg2 = false ; while ( ( ! exitg2 ) && ( ia0 > 0 ) ) { b_ia = ia0 +
12 ; do { exitg1 = 0 ; if ( b_ia <= ( ia0 + ( knt << 2 ) ) + 12 ) { if ( D [
b_ia - 1 ] != 0.0 ) { exitg1 = 1 ; } else { b_ia += 4 ; } } else { ia0 -- ;
exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ;
} } } else { knt = - 1 ; ia0 = 0 ; } if ( knt + 1 > 0 ) { if ( ia0 != 0 ) {
for ( rowleft = 0 ; rowleft < ia0 ; rowleft ++ ) { work [ rowleft ] = 0.0 ; }
rowleft = 11 ; b_ia = ( knt << 2 ) + 13 ; for ( b_ix = 13 ; b_ix <= b_ia ;
b_ix += 4 ) { iy = 0 ; l = ( b_ix + ia0 ) - 1 ; for ( ia = b_ix ; ia <= l ;
ia ++ ) { work [ iy ] += D [ ia - 1 ] * D [ rowleft ] ; iy ++ ; } rowleft ++
; } } if ( ! ( - tau_idx_2 == 0.0 ) ) { rowleft = 12 ; for ( b_ia = 0 ; b_ia
<= knt ; b_ia ++ ) { if ( D [ jy ] != 0.0 ) { xnorm = D [ jy ] * - tau_idx_2
; b_ix = 0 ; iy = ia0 + rowleft ; for ( l = rowleft ; l < iy ; l ++ ) { D [ l
] += work [ b_ix ] * xnorm ; b_ix ++ ; } } jy ++ ; rowleft += 4 ; } } }
co3ynvpmxs ( 1 , 1 , 12 , tau_idx_2 , D , 16 , work ) ; D [ 11 ] = alpha1 ;
memcpy ( & V [ 0 ] , & D [ 0 ] , sizeof ( real_T ) << 4U ) ; for ( ia0 = 0 ;
ia0 < 3 ; ia0 ++ ) { V [ ia0 + 12 ] = 0.0 ; } for ( ia0 = 0 ; ia0 < 2 ; ia0
++ ) { V [ ia0 + 8 ] = 0.0 ; } for ( ia0 = 1 ; ia0 + 3 < 5 ; ia0 ++ ) { V [
ia0 + 10 ] = V [ ia0 + 6 ] ; } V [ 4 ] = 0.0 ; for ( ia0 = 0 ; ia0 + 3 < 5 ;
ia0 ++ ) { V [ ia0 + 6 ] = V [ ia0 + 2 ] ; } work [ 0 ] = 0.0 ; V [ 1 ] = 0.0
; work [ 1 ] = 0.0 ; V [ 2 ] = 0.0 ; work [ 2 ] = 0.0 ; V [ 3 ] = 0.0 ; work
[ 3 ] = 0.0 ; V [ 0 ] = 1.0 ; V [ 15 ] = 1.0 - tau_idx_2 ; for ( knt = 0 ;
knt < 2 ; knt ++ ) { V [ 14 - knt ] = 0.0 ; } V [ 10 ] = 1.0 ; co3ynvpmxs ( 2
, 1 , 11 , tau_idx_1 , V , 15 , work ) ; for ( ia0 = 11 ; ia0 < 12 ; ia0 ++ )
{ V [ ia0 ] *= - tau_idx_1 ; } V [ 10 ] = 1.0 - tau_idx_1 ; V [ 9 ] = 0.0 ; V
[ 5 ] = 1.0 ; co3ynvpmxs ( 3 , 2 , 6 , tau_idx_0 , V , 10 , work ) ; for (
ia0 = 6 ; ia0 < 8 ; ia0 ++ ) { V [ ia0 ] *= - tau_idx_0 ; } V [ 5 ] = 1.0 -
tau_idx_0 ; ezifbep0dg ( D , V ) ; D [ 3 ] = 0.0 ; } D [ 1 ] = 0.0 ; D [ 4 ]
= 0.0 ; D [ 6 ] = 0.0 ; for ( ia0 = 0 ; ia0 < 2 ; ia0 ++ ) { D [ ia0 + 8 ] =
0.0 ; } D [ 11 ] = 0.0 ; for ( ia0 = 0 ; ia0 < 3 ; ia0 ++ ) { D [ ia0 + 12 ]
= 0.0 ; } } static boolean_T jd04qfjomk ( real_T x , real_T y ) { real_T absx
; int32_T exponent ; boolean_T p ; absx = muDoubleScalarAbs ( y / 2.0 ) ; if
( ( ! muDoubleScalarIsInf ( absx ) ) && ( ! muDoubleScalarIsNaN ( absx ) ) )
{ if ( absx <= 2.2250738585072014E-308 ) { absx = 4.94065645841247E-324 ; }
else { frexp ( absx , & exponent ) ; absx = ldexp ( 1.0 , exponent - 53 ) ; }
} else { absx = ( rtNaN ) ; } if ( ( muDoubleScalarAbs ( y - x ) < absx ) ||
( muDoubleScalarIsInf ( x ) && muDoubleScalarIsInf ( y ) && ( ( x > 0.0 ) ==
( y > 0.0 ) ) ) ) { p = true ; } else { p = false ; } return p ; } static
real_T nhwqvesk0d ( int32_T n , const real_T x [ 12 ] , int32_T ix0 ) {
real_T absxk ; real_T scale ; real_T t ; real_T y ; int32_T k ; int32_T kend
; y = 0.0 ; scale = 3.3121686421112381E-170 ; kend = ( ix0 + n ) - 1 ; for (
k = ix0 ; k <= kend ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if
( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ;
} else { t = absxk / scale ; y += t * t ; } } return scale *
muDoubleScalarSqrt ( y ) ; } static void lpsnbp0y5t ( int32_T n , real_T a ,
real_T x [ 12 ] , int32_T ix0 ) { int32_T b ; int32_T k ; b = ( ix0 + n ) - 1
; for ( k = ix0 ; k <= b ; k ++ ) { x [ k - 1 ] *= a ; } } static real_T
nhwqvesk0dz ( const real_T x [ 3 ] , int32_T ix0 ) { real_T absxk ; real_T
scale ; real_T t ; real_T y ; int32_T k ; y = 0.0 ; scale =
3.3121686421112381E-170 ; for ( k = ix0 ; k <= ix0 + 1 ; k ++ ) { absxk =
muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) { t = scale / absxk
; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t *
t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static void lpsnbp0y5t1 (
real_T a , real_T x [ 3 ] , int32_T ix0 ) { int32_T k ; for ( k = ix0 ; k <=
ix0 + 1 ; k ++ ) { x [ k - 1 ] *= a ; } } static void gr2xwasiysh5 ( int32_T
n , real_T a , const real_T x [ 4 ] , int32_T ix0 , real_T y [ 12 ] , int32_T
iy0 ) { int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) ) { ix =
ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a * x [
ix ] ; ix ++ ; iy ++ ; } } } static void gr2xwasiysh ( int32_T n , real_T a ,
const real_T x [ 12 ] , int32_T ix0 , real_T y [ 4 ] , int32_T iy0 ) {
int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a == 0.0 ) ) { ix = ix0 - 1 ;
iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy ] += a * x [ ix ] ; ix
++ ; iy ++ ; } } } static real_T dz42qy1tgx ( int32_T n , const real_T x [ 12
] , int32_T ix0 , const real_T y [ 12 ] , int32_T iy0 ) { real_T d ; int32_T
ix ; int32_T iy ; int32_T k ; d = 0.0 ; ix = ix0 ; iy = iy0 ; for ( k = 0 ; k
< n ; k ++ ) { d += x [ ix - 1 ] * y [ iy - 1 ] ; ix ++ ; iy ++ ; } return d
; } static void gr2xwasiys ( int32_T n , real_T a , int32_T ix0 , real_T y [
12 ] , int32_T iy0 ) { int32_T ix ; int32_T iy ; int32_T k ; if ( ! ( a ==
0.0 ) ) { ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { y [ iy
] += a * y [ ix ] ; ix ++ ; iy ++ ; } } } static real_T dz42qy1tgxu ( const
real_T x [ 9 ] , const real_T y [ 9 ] , int32_T iy0 ) { return y [ iy0 ] * x
[ 2 ] + y [ iy0 - 1 ] * x [ 1 ] ; } static void gr2xwasiysh5h ( real_T a ,
real_T y [ 9 ] , int32_T iy0 ) { if ( ! ( a == 0.0 ) ) { y [ iy0 - 1 ] += a *
y [ 1 ] ; y [ iy0 ] += a * y [ 2 ] ; } } static void lpsnbp0y5t1k ( real_T a
, real_T x [ 12 ] , int32_T ix0 ) { int32_T k ; for ( k = ix0 ; k <= ix0 + 3
; k ++ ) { x [ k - 1 ] *= a ; } } static void lpsnbp0y5t1ki ( real_T a ,
real_T x [ 9 ] , int32_T ix0 ) { int32_T k ; for ( k = ix0 ; k <= ix0 + 2 ; k
++ ) { x [ k - 1 ] *= a ; } } static void iwydmpginn ( real_T x [ 9 ] ,
int32_T ix0 , int32_T iy0 ) { real_T temp ; temp = x [ ix0 - 1 ] ; x [ ix0 -
1 ] = x [ iy0 - 1 ] ; x [ iy0 - 1 ] = temp ; temp = x [ ix0 ] ; x [ ix0 ] = x
[ iy0 ] ; x [ iy0 ] = temp ; temp = x [ ix0 + 1 ] ; x [ ix0 + 1 ] = x [ iy0 +
1 ] ; x [ iy0 + 1 ] = temp ; } static void iwydmpginne ( real_T x [ 12 ] ,
int32_T ix0 , int32_T iy0 ) { real_T temp ; temp = x [ ix0 - 1 ] ; x [ ix0 -
1 ] = x [ iy0 - 1 ] ; x [ iy0 - 1 ] = temp ; temp = x [ ix0 ] ; x [ ix0 ] = x
[ iy0 ] ; x [ iy0 ] = temp ; temp = x [ ix0 + 1 ] ; x [ ix0 + 1 ] = x [ iy0 +
1 ] ; x [ iy0 + 1 ] = temp ; temp = x [ ix0 + 2 ] ; x [ ix0 + 2 ] = x [ iy0 +
2 ] ; x [ iy0 + 2 ] = temp ; } static void mcqcitxxl5 ( real_T * a , real_T *
b , real_T * c , real_T * s ) { real_T absa ; real_T absb ; real_T ads ;
real_T bds ; real_T roe ; real_T scale ; roe = * b ; absa = muDoubleScalarAbs
( * a ) ; absb = muDoubleScalarAbs ( * b ) ; if ( absa > absb ) { roe = * a ;
} scale = absa + absb ; if ( scale == 0.0 ) { * s = 0.0 ; * c = 1.0 ; * b =
0.0 ; } else { ads = absa / scale ; bds = absb / scale ; scale *=
muDoubleScalarSqrt ( ads * ads + bds * bds ) ; if ( roe < 0.0 ) { scale = -
scale ; } * c = * a / scale ; * s = * b / scale ; if ( absa > absb ) { * b =
* s ; } else if ( * c != 0.0 ) { * b = 1.0 / * c ; } else { * b = 1.0 ; } } *
a = scale ; } static void pncrzsglp3 ( real_T x [ 9 ] , int32_T ix0 , int32_T
iy0 , real_T c , real_T s ) { real_T temp ; temp = x [ ix0 - 1 ] * c + x [
iy0 - 1 ] * s ; x [ iy0 - 1 ] = x [ iy0 - 1 ] * c - x [ ix0 - 1 ] * s ; x [
ix0 - 1 ] = temp ; temp = x [ ix0 ] * c + x [ iy0 ] * s ; x [ iy0 ] = x [ iy0
] * c - x [ ix0 ] * s ; x [ ix0 ] = temp ; temp = x [ ix0 + 1 ] * c + x [ iy0
+ 1 ] * s ; x [ iy0 + 1 ] = x [ iy0 + 1 ] * c - x [ ix0 + 1 ] * s ; x [ ix0 +
1 ] = temp ; } static void pncrzsglp3p ( real_T x [ 12 ] , int32_T ix0 ,
int32_T iy0 , real_T c , real_T s ) { real_T temp ; temp = x [ ix0 - 1 ] * c
+ x [ iy0 - 1 ] * s ; x [ iy0 - 1 ] = x [ iy0 - 1 ] * c - x [ ix0 - 1 ] * s ;
x [ ix0 - 1 ] = temp ; temp = x [ ix0 ] * c + x [ iy0 ] * s ; x [ iy0 ] = x [
iy0 ] * c - x [ ix0 ] * s ; x [ ix0 ] = temp ; temp = x [ ix0 + 1 ] * c + x [
iy0 + 1 ] * s ; x [ iy0 + 1 ] = x [ iy0 + 1 ] * c - x [ ix0 + 1 ] * s ; x [
ix0 + 1 ] = temp ; temp = x [ ix0 + 2 ] * c + x [ iy0 + 2 ] * s ; x [ iy0 + 2
] = x [ iy0 + 2 ] * c - x [ ix0 + 2 ] * s ; x [ ix0 + 2 ] = temp ; } static
void enutwu4xz1 ( const real_T A [ 12 ] , real_T U [ 12 ] , real_T s [ 3 ] ,
real_T V [ 9 ] ) { real_T b_A [ 12 ] ; real_T Vf [ 9 ] ; real_T work [ 4 ] ;
real_T b_s [ 3 ] ; real_T e [ 3 ] ; real_T emm1 ; real_T nrm ; real_T rt ;
real_T shift ; real_T smm1 ; real_T sqds ; real_T ztest ; int32_T d ; int32_T
exitg1 ; int32_T j_ii ; int32_T kase ; int32_T m ; int32_T qjj ; int32_T qq ;
boolean_T apply_transform ; boolean_T exitg2 ; e [ 0 ] = 0.0 ; e [ 1 ] = 0.0
; e [ 2 ] = 0.0 ; work [ 0 ] = 0.0 ; work [ 1 ] = 0.0 ; work [ 2 ] = 0.0 ;
work [ 3 ] = 0.0 ; for ( qq = 0 ; qq < 12 ; qq ++ ) { b_A [ qq ] = A [ qq ] ;
U [ qq ] = 0.0 ; } memset ( & Vf [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; qq =
0 ; apply_transform = false ; nrm = nhwqvesk0d ( 4 , b_A , 1 ) ; if ( nrm >
0.0 ) { apply_transform = true ; if ( b_A [ 0 ] < 0.0 ) { b_s [ 0 ] = - nrm ;
} else { b_s [ 0 ] = nrm ; } if ( muDoubleScalarAbs ( b_s [ 0 ] ) >=
1.0020841800044864E-292 ) { lpsnbp0y5t ( 4 , 1.0 / b_s [ 0 ] , b_A , 1 ) ; }
else { for ( qjj = 0 ; qjj < 4 ; qjj ++ ) { b_A [ qjj ] /= b_s [ 0 ] ; } }
b_A [ 0 ] ++ ; b_s [ 0 ] = - b_s [ 0 ] ; } else { b_s [ 0 ] = 0.0 ; } for ( d
= 1 ; d + 1 < 4 ; d ++ ) { qjj = d << 2 ; if ( apply_transform ) { gr2xwasiys
( 4 , - ( dz42qy1tgx ( 4 , b_A , 1 , b_A , qjj + 1 ) / b_A [ 0 ] ) , 1 , b_A
, qjj + 1 ) ; } e [ d ] = b_A [ qjj ] ; } while ( qq + 1 < 5 ) { U [ qq ] =
b_A [ qq ] ; qq ++ ; } nrm = nhwqvesk0dz ( e , 2 ) ; if ( nrm == 0.0 ) { e [
0 ] = 0.0 ; } else { if ( e [ 1 ] < 0.0 ) { nrm = - nrm ; } e [ 0 ] = nrm ;
if ( muDoubleScalarAbs ( nrm ) >= 1.0020841800044864E-292 ) { lpsnbp0y5t1 (
1.0 / nrm , e , 2 ) ; } else { for ( qq = 1 ; qq < 3 ; qq ++ ) { e [ qq ] /=
nrm ; } } e [ 1 ] ++ ; e [ 0 ] = - e [ 0 ] ; for ( qq = 2 ; qq < 5 ; qq ++ )
{ work [ qq - 1 ] = 0.0 ; } for ( qq = 1 ; qq + 1 < 4 ; qq ++ ) { gr2xwasiysh
( 3 , e [ qq ] , b_A , ( qq << 2 ) + 2 , work , 2 ) ; } for ( qq = 1 ; qq + 1
< 4 ; qq ++ ) { gr2xwasiysh5 ( 3 , - e [ qq ] / e [ 1 ] , work , 2 , b_A , (
qq << 2 ) + 2 ) ; } } for ( qq = 1 ; qq + 1 < 4 ; qq ++ ) { Vf [ qq ] = e [
qq ] ; } apply_transform = false ; nrm = nhwqvesk0d ( 3 , b_A , 6 ) ; if (
nrm > 0.0 ) { apply_transform = true ; if ( b_A [ 5 ] < 0.0 ) { b_s [ 1 ] = -
nrm ; } else { b_s [ 1 ] = nrm ; } if ( muDoubleScalarAbs ( b_s [ 1 ] ) >=
1.0020841800044864E-292 ) { lpsnbp0y5t ( 3 , 1.0 / b_s [ 1 ] , b_A , 6 ) ; }
else { for ( qjj = 5 ; qjj < 8 ; qjj ++ ) { b_A [ qjj ] /= b_s [ 1 ] ; } }
b_A [ 5 ] ++ ; b_s [ 1 ] = - b_s [ 1 ] ; } else { b_s [ 1 ] = 0.0 ; } for ( d
= 2 ; d + 1 < 4 ; d ++ ) { qjj = ( d << 2 ) + 1 ; if ( apply_transform ) {
gr2xwasiys ( 3 , - ( dz42qy1tgx ( 3 , b_A , 6 , b_A , qjj + 1 ) / b_A [ 5 ] )
, 6 , b_A , qjj + 1 ) ; } e [ d ] = b_A [ qjj ] ; } for ( qq = 1 ; qq + 1 < 5
; qq ++ ) { U [ qq + 4 ] = b_A [ qq + 4 ] ; } nrm = nhwqvesk0d ( 2 , b_A , 11
) ; if ( nrm > 0.0 ) { if ( b_A [ 10 ] < 0.0 ) { b_s [ 2 ] = - nrm ; } else {
b_s [ 2 ] = nrm ; } if ( muDoubleScalarAbs ( b_s [ 2 ] ) >=
1.0020841800044864E-292 ) { lpsnbp0y5t ( 2 , 1.0 / b_s [ 2 ] , b_A , 11 ) ; }
else { for ( qjj = 10 ; qjj < 12 ; qjj ++ ) { b_A [ qjj ] /= b_s [ 2 ] ; } }
b_A [ 10 ] ++ ; b_s [ 2 ] = - b_s [ 2 ] ; } else { b_s [ 2 ] = 0.0 ; } for (
qq = 2 ; qq + 1 < 5 ; qq ++ ) { U [ qq + 8 ] = b_A [ qq + 8 ] ; } m = 1 ; for
( d = 2 ; d >= 0 ; d -- ) { qq = ( d << 2 ) + d ; if ( b_s [ d ] != 0.0 ) {
for ( kase = d + 1 ; kase + 1 < 4 ; kase ++ ) { qjj = ( ( kase << 2 ) + d ) +
1 ; gr2xwasiys ( 4 - d , - ( dz42qy1tgx ( 4 - d , U , qq + 1 , U , qjj ) / U
[ qq ] ) , qq + 1 , U , qjj ) ; } for ( qjj = d ; qjj + 1 < 5 ; qjj ++ ) { U
[ qjj + ( d << 2 ) ] = - U [ ( d << 2 ) + qjj ] ; } U [ qq ] ++ ; for ( qq =
0 ; qq < d ; qq ++ ) { U [ qq + ( d << 2 ) ] = 0.0 ; } } else { U [ d << 2 ]
= 0.0 ; U [ ( d << 2 ) + 1 ] = 0.0 ; U [ ( d << 2 ) + 2 ] = 0.0 ; U [ ( d <<
2 ) + 3 ] = 0.0 ; U [ qq ] = 1.0 ; } } for ( qq = 2 ; qq >= 0 ; qq -- ) { if
( ( qq + 1 <= 1 ) && ( e [ 0 ] != 0.0 ) ) { gr2xwasiysh5h ( - ( dz42qy1tgxu (
Vf , Vf , 5 ) / Vf [ 1 ] ) , Vf , 5 ) ; gr2xwasiysh5h ( - ( dz42qy1tgxu ( Vf
, Vf , 8 ) / Vf [ 1 ] ) , Vf , 8 ) ; } Vf [ 3 * qq ] = 0.0 ; Vf [ 3 * qq + 1
] = 0.0 ; Vf [ 3 * qq + 2 ] = 0.0 ; Vf [ qq + 3 * qq ] = 1.0 ; } ztest = e [
0 ] ; if ( b_s [ 0 ] != 0.0 ) { rt = muDoubleScalarAbs ( b_s [ 0 ] ) ; nrm =
b_s [ 0 ] / rt ; b_s [ 0 ] = rt ; ztest = e [ 0 ] / nrm ; lpsnbp0y5t1k ( nrm
, U , 1 ) ; } if ( ztest != 0.0 ) { rt = muDoubleScalarAbs ( ztest ) ; nrm =
rt / ztest ; ztest = rt ; b_s [ 1 ] *= nrm ; lpsnbp0y5t1ki ( nrm , Vf , 4 ) ;
} e [ 0 ] = ztest ; ztest = b_A [ 9 ] ; if ( b_s [ 1 ] != 0.0 ) { rt =
muDoubleScalarAbs ( b_s [ 1 ] ) ; nrm = b_s [ 1 ] / rt ; b_s [ 1 ] = rt ;
ztest = b_A [ 9 ] / nrm ; lpsnbp0y5t1k ( nrm , U , 5 ) ; } if ( ztest != 0.0
) { rt = muDoubleScalarAbs ( ztest ) ; nrm = rt / ztest ; ztest = rt ; b_s [
2 ] *= nrm ; lpsnbp0y5t1ki ( nrm , Vf , 7 ) ; } e [ 1 ] = ztest ; if ( b_s [
2 ] != 0.0 ) { rt = muDoubleScalarAbs ( b_s [ 2 ] ) ; nrm = b_s [ 2 ] / rt ;
b_s [ 2 ] = rt ; lpsnbp0y5t1k ( nrm , U , 9 ) ; } e [ 2 ] = 0.0 ; qq = 0 ;
nrm = muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( b_s [ 0 ] ,
e [ 0 ] ) , muDoubleScalarMax ( b_s [ 1 ] , ztest ) ) , muDoubleScalarMax (
b_s [ 2 ] , 0.0 ) ) ; while ( ( m + 2 > 0 ) && ( qq < 75 ) ) { kase = m + 1 ;
do { exitg1 = 0 ; d = kase ; if ( kase == 0 ) { exitg1 = 1 ; } else { rt =
muDoubleScalarAbs ( e [ kase - 1 ] ) ; if ( ( rt <= ( muDoubleScalarAbs ( b_s
[ kase - 1 ] ) + muDoubleScalarAbs ( b_s [ kase ] ) ) *
2.2204460492503131E-16 ) || ( ( rt <= 1.0020841800044864E-292 ) || ( ( qq >
20 ) && ( rt <= 2.2204460492503131E-16 * nrm ) ) ) ) { e [ kase - 1 ] = 0.0 ;
exitg1 = 1 ; } else { kase -- ; } } } while ( exitg1 == 0 ) ; if ( m + 1 ==
kase ) { kase = 4 ; } else { qjj = m + 2 ; j_ii = m + 2 ; exitg2 = false ;
while ( ( ! exitg2 ) && ( j_ii >= kase ) ) { qjj = j_ii ; if ( j_ii == kase )
{ exitg2 = true ; } else { rt = 0.0 ; if ( j_ii < m + 2 ) { rt =
muDoubleScalarAbs ( e [ j_ii - 1 ] ) ; } if ( j_ii > kase + 1 ) { rt +=
muDoubleScalarAbs ( e [ j_ii - 2 ] ) ; } ztest = muDoubleScalarAbs ( b_s [
j_ii - 1 ] ) ; if ( ( ztest <= 2.2204460492503131E-16 * rt ) || ( ztest <=
1.0020841800044864E-292 ) ) { b_s [ j_ii - 1 ] = 0.0 ; exitg2 = true ; } else
{ j_ii -- ; } } } if ( qjj == kase ) { kase = 3 ; } else if ( m + 2 == qjj )
{ kase = 1 ; } else { kase = 2 ; d = qjj ; } } switch ( kase ) { case 1 : rt
= e [ m ] ; e [ m ] = 0.0 ; for ( qjj = m ; qjj + 1 >= d + 1 ; qjj -- ) {
mcqcitxxl5 ( & b_s [ qjj ] , & rt , & ztest , & sqds ) ; if ( qjj + 1 > d + 1
) { rt = - sqds * e [ 0 ] ; e [ 0 ] *= ztest ; } pncrzsglp3 ( Vf , 3 * qjj +
1 , 3 * ( m + 1 ) + 1 , ztest , sqds ) ; } break ; case 2 : rt = e [ d - 1 ]
; e [ d - 1 ] = 0.0 ; for ( qjj = d ; qjj < m + 2 ; qjj ++ ) { mcqcitxxl5 ( &
b_s [ qjj ] , & rt , & ztest , & sqds ) ; rt = - sqds * e [ qjj ] ; e [ qjj ]
*= ztest ; pncrzsglp3p ( U , ( qjj << 2 ) + 1 , ( ( d - 1 ) << 2 ) + 1 ,
ztest , sqds ) ; } break ; case 3 : ztest = muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarAbs
( b_s [ m + 1 ] ) , muDoubleScalarAbs ( b_s [ m ] ) ) , muDoubleScalarAbs ( e
[ m ] ) ) , muDoubleScalarAbs ( b_s [ d ] ) ) , muDoubleScalarAbs ( e [ d ] )
) ; rt = b_s [ m + 1 ] / ztest ; smm1 = b_s [ m ] / ztest ; emm1 = e [ m ] /
ztest ; sqds = b_s [ d ] / ztest ; smm1 = ( ( smm1 + rt ) * ( smm1 - rt ) +
emm1 * emm1 ) / 2.0 ; emm1 *= rt ; emm1 *= emm1 ; if ( ( smm1 != 0.0 ) || (
emm1 != 0.0 ) ) { shift = muDoubleScalarSqrt ( smm1 * smm1 + emm1 ) ; if (
smm1 < 0.0 ) { shift = - shift ; } shift = emm1 / ( smm1 + shift ) ; } else {
shift = 0.0 ; } rt = ( sqds + rt ) * ( sqds - rt ) + shift ; ztest = e [ d ]
/ ztest * sqds ; for ( qjj = d + 1 ; qjj <= m + 1 ; qjj ++ ) { mcqcitxxl5 ( &
rt , & ztest , & sqds , & smm1 ) ; if ( qjj > d + 1 ) { e [ 0 ] = rt ; } rt =
b_s [ qjj - 1 ] * sqds + e [ qjj - 1 ] * smm1 ; e [ qjj - 1 ] = e [ qjj - 1 ]
* sqds - b_s [ qjj - 1 ] * smm1 ; ztest = smm1 * b_s [ qjj ] ; b_s [ qjj ] *=
sqds ; pncrzsglp3 ( Vf , 3 * ( qjj - 1 ) + 1 , 3 * qjj + 1 , sqds , smm1 ) ;
mcqcitxxl5 ( & rt , & ztest , & sqds , & smm1 ) ; b_s [ qjj - 1 ] = rt ; rt =
e [ qjj - 1 ] * sqds + smm1 * b_s [ qjj ] ; b_s [ qjj ] = e [ qjj - 1 ] * -
smm1 + sqds * b_s [ qjj ] ; ztest = smm1 * e [ qjj ] ; e [ qjj ] *= sqds ;
pncrzsglp3p ( U , ( ( qjj - 1 ) << 2 ) + 1 , ( qjj << 2 ) + 1 , sqds , smm1 )
; } e [ m ] = rt ; qq ++ ; break ; default : if ( b_s [ d ] < 0.0 ) { b_s [ d
] = - b_s [ d ] ; lpsnbp0y5t1ki ( - 1.0 , Vf , 3 * d + 1 ) ; } qq = d + 1 ;
while ( ( d + 1 < 3 ) && ( b_s [ d ] < b_s [ qq ] ) ) { rt = b_s [ d ] ; b_s
[ d ] = b_s [ qq ] ; b_s [ qq ] = rt ; iwydmpginn ( Vf , 3 * d + 1 , 3 * ( d
+ 1 ) + 1 ) ; iwydmpginne ( U , ( d << 2 ) + 1 , ( ( d + 1 ) << 2 ) + 1 ) ; d
= qq ; qq ++ ; } qq = 0 ; m -- ; break ; } } for ( m = 0 ; m < 3 ; m ++ ) { s
[ m ] = b_s [ m ] ; V [ 3 * m ] = Vf [ 3 * m ] ; V [ 3 * m + 1 ] = Vf [ 3 * m
+ 1 ] ; V [ 3 * m + 2 ] = Vf [ 3 * m + 2 ] ; } } void MdlInitialize ( void )
{ real_T tmp ; int32_T i ; int32_T t ; uint32_T tseed ; rtX . n3fcvgunz5 [ 0
] = rtP . spacecraft . w0 [ 0 ] ; rtX . n3fcvgunz5 [ 1 ] = rtP . spacecraft .
w0 [ 1 ] ; rtX . n3fcvgunz5 [ 2 ] = rtP . spacecraft . w0 [ 2 ] ; rtX .
fbzp2mgfcu [ 0 ] = rtP . spacecraft . q0 [ 0 ] ; rtX . fbzp2mgfcu [ 1 ] = rtP
. spacecraft . q0 [ 1 ] ; rtX . fbzp2mgfcu [ 2 ] = rtP . spacecraft . q0 [ 2
] ; rtX . fbzp2mgfcu [ 3 ] = rtP . spacecraft . q0 [ 3 ] ; rtX . oxsdi5rguh =
rtP . orbit . theta0 ; for ( i = 0 ; i < 6 ; i ++ ) { rtX . ojag5ytihq [ i ]
= rtP . Integrator_IC [ i ] ; } rtDW . oib5citwht [ 0 ] = rtP . spacecraft .
q0 [ 0 ] ; rtX . avwtd3ss0s [ 0 ] = rtP . Integrator_IC_hxmcczyvi1 ; rtDW .
oib5citwht [ 1 ] = rtP . spacecraft . q0 [ 1 ] ; rtX . avwtd3ss0s [ 1 ] = rtP
. Integrator_IC_hxmcczyvi1 ; rtDW . oib5citwht [ 2 ] = rtP . spacecraft . q0
[ 2 ] ; rtX . avwtd3ss0s [ 2 ] = rtP . Integrator_IC_hxmcczyvi1 ; rtDW .
oib5citwht [ 3 ] = rtP . spacecraft . q0 [ 3 ] ; rtX . avwtd3ss0s [ 3 ] = rtP
. Integrator_IC_hxmcczyvi1 ; rtDW . jnd30r1ht2 = ( rtInf ) ; rtDW .
dznssketm0 = ( rtInf ) ; tmp = muDoubleScalarFloor ( rtP .
RandomNumber_Seed_hc1q2hdzfi ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i <<
16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
i0jd5ov2aq = tseed ; rtDW . m1iqlgvxip = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW
. i0jd5ov2aq ) * rtP . RandomNumber_StdDev_ergspd3esj + rtP .
RandomNumber_Mean_j21m43fvkk ; tmp = muDoubleScalarFloor ( rtP .
RandomNumber1_Seed_p2cqbf3h23 ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i <<
16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
ekvi0kaox0 = tseed ; rtDW . ox23uhpd5w = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW
. ekvi0kaox0 ) * rtP . RandomNumber1_StdDev_bfdu1ljjkh + rtP .
RandomNumber1_Mean_folcsctbbm ; tmp = muDoubleScalarFloor ( rtP .
RandomNumber2_Seed_dzfuypjyx1 ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i <<
16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
h13pii2unk = tseed ; rtDW . nbdm23k5hd = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW
. h13pii2unk ) * rtP . RandomNumber2_StdDev_odwja0ie23 + rtP .
RandomNumber2_Mean_atwzdqzftl ; tmp = muDoubleScalarFloor ( rtP .
RandomNumber3_Seed ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i <<
16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
gdm2ge0ofw [ 0 ] = tseed ; rtDW . fiht0f3ctl [ 0 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gdm2ge0ofw [ 0 ] ) * rtP .
RandomNumber3_StdDev [ 0 ] + rtP . RandomNumber3_Mean ; rtB . o4b5qm0dak [ 0
] = rtP . vSun_n_Y0 ; tmp = muDoubleScalarFloor ( rtP . RandomNumber3_Seed )
; if ( muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp =
0.0 ; } else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed =
tmp < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp
; i = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ;
tseed = ( ( ( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i
; if ( tseed < 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U
) { tseed = 2147483646U ; } } rtDW . gdm2ge0ofw [ 1 ] = tseed ; rtDW .
fiht0f3ctl [ 1 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gdm2ge0ofw [ 1 ] ) *
rtP . RandomNumber3_StdDev [ 1 ] + rtP . RandomNumber3_Mean ; rtB .
o4b5qm0dak [ 1 ] = rtP . vSun_n_Y0 ; tmp = muDoubleScalarFloor ( rtP .
RandomNumber3_Seed ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i <<
16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
gdm2ge0ofw [ 2 ] = tseed ; rtDW . fiht0f3ctl [ 2 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gdm2ge0ofw [ 2 ] ) * rtP .
RandomNumber3_StdDev [ 2 ] + rtP . RandomNumber3_Mean ; rtB . o4b5qm0dak [ 2
] = rtP . vSun_n_Y0 ; tmp = muDoubleScalarFloor ( rtP . RandomNumber_Seed ) ;
if ( muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0
; } else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp <
0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; i =
( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = (
( ( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if (
tseed < 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) {
tseed = 2147483646U ; } } rtDW . ptzydd1mlx = tseed ; rtDW . j42igdadkb =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ptzydd1mlx ) * rtP .
RandomNumber_StdDev + rtP . RandomNumber_Mean ; tmp = muDoubleScalarFloor (
rtP . RandomNumber1_Seed ) ; if ( muDoubleScalarIsNaN ( tmp ) ||
muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp = muDoubleScalarRem
( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) ( tseed >> 16U ) ; t =
( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) i <<
16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) { tseed = 1144108930U ;
} else { if ( tseed > 2147483646U ) { tseed = 2147483646U ; } } rtDW .
lspg4frwvz = tseed ; rtDW . jsxfhslkkg = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW
. lspg4frwvz ) * rtP . RandomNumber1_StdDev + rtP . RandomNumber1_Mean ; tmp
= muDoubleScalarFloor ( rtP . RandomNumber2_Seed ) ; if ( muDoubleScalarIsNaN
( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; } else { tmp =
muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0 ? ( uint32_T
) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; i = ( int32_T ) (
tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( ( ( ( tseed -
( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed < 1U ) {
tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . nwumsxn30c = tseed ; rtDW . bkj2ve0mem =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . nwumsxn30c ) * rtP .
RandomNumber2_StdDev + rtP . RandomNumber2_Mean ; memcpy ( & rtDW .
m1del2va53 [ 0 ] , & rtP . Memory_InitialCondition [ 0 ] , 9U * sizeof (
real_T ) ) ; tmp = muDoubleScalarFloor ( rtP . RandomNumber_Seed_bcyzbehizb )
; if ( muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp =
0.0 ; } else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed =
tmp < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp
; i = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ;
tseed = ( ( ( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i
; if ( tseed < 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U
) { tseed = 2147483646U ; } } rtDW . ixdsougept = tseed ; rtDW . ejy4002h5a =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ixdsougept ) * rtP .
RandomNumber_StdDev_osyvkm1nbd + rtP . RandomNumber_Mean_j325veq3h4 ; tmp =
muDoubleScalarFloor ( rtP . RandomNumber1_Seed_ddcozcfvqh ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . of2m5ic0pn = tseed ; rtDW . ksjty3navg =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . of2m5ic0pn ) * rtP .
RandomNumber1_StdDev_pa113sydms + rtP . RandomNumber1_Mean_cglvlehpgy ; tmp =
muDoubleScalarFloor ( rtP . RandomNumber2_Seed_bxzdzv3qja ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . n3kp14atf0 = tseed ; rtDW . fhk413qchg =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . n3kp14atf0 ) * rtP .
RandomNumber2_StdDev_elwn2e223c + rtP . RandomNumber2_Mean_iqxzkifvrj ; rtDW
. humf2uyi5m = false ; rtDW . fbvjzemwgp = 7U ; rtDW . bppejpvrbl =
1144108930U ; rtDW . otks5fozsk [ 0 ] = 362436069U ; rtDW . otks5fozsk [ 1 ]
= 521288629U ; tmp = muDoubleScalarFloor ( rtP . RandomNumber_Seed_muoxwvcrep
) ; if ( muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp =
0.0 ; } else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed =
tmp < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp
; i = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ;
tseed = ( ( ( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i
; if ( tseed < 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U
) { tseed = 2147483646U ; } } rtDW . g3mjvbs1uu = tseed ; rtDW . ny2oqvzhck =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . g3mjvbs1uu ) * rtP .
RandomNumber_StdDev_a4g1wn2f41 + rtP . RandomNumber_Mean_alfcasepyf ; tmp =
muDoubleScalarFloor ( rtP . RandomNumber1_Seed_etksjukgo5 ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . lfqvcenhcp = tseed ; rtDW . lkpte3brp0 =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . lfqvcenhcp ) * rtP .
RandomNumber1_StdDev_dwmuwurpze + rtP . RandomNumber1_Mean_fpegcxuncp ; tmp =
muDoubleScalarFloor ( rtP . RandomNumber2_Seed_fet4qq2uda ) ; if (
muDoubleScalarIsNaN ( tmp ) || muDoubleScalarIsInf ( tmp ) ) { tmp = 0.0 ; }
else { tmp = muDoubleScalarRem ( tmp , 4.294967296E+9 ) ; } tseed = tmp < 0.0
? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp : ( uint32_T ) tmp ; i = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) i << 16U ) ) + t ) << 16U ) + t ) + i ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else { if ( tseed > 2147483646U ) { tseed =
2147483646U ; } } rtDW . lzm03ewcyj = tseed ; rtDW . i3dsukuteh =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . lzm03ewcyj ) * rtP .
RandomNumber2_StdDev_ptcl32fe50 + rtP . RandomNumber2_Mean_ozab14whuo ; rtDW
. eljjgro1hu = false ; rtDW . hwm5cjsjet = 7U ; rtDW . nhpncgxxzs =
1144108930U ; rtDW . nydbalew5h [ 0 ] = 362436069U ; rtDW . nydbalew5h [ 1 ]
= 521288629U ; for ( i = 0 ; i < 12 ; i ++ ) { rtDW . imdqbdwqjp [ i ] = rtP
. sensors . st . vStars_n_init [ i ] ; rtB . o4dj4py0uf [ i ] = rtP .
Merge1_InitialOutput ; rtB . ptsg4njrmr [ i ] = rtP . Merge_InitialOutput ; }
} void MdlStart ( void ) { { bool externalInputIsInDatasetFormat = false ;
void * pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath
= sdiGetLabelFromChars ( "uncontrolled/Attitude determination" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 2 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. dvzlnzlo0n . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"bcda9e34-b6cc-4915-b3a4-d93136e0c42c" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . dvzlnzlo0n . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . dvzlnzlo0n . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . dvzlnzlo0n . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . dvzlnzlo0n .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . dvzlnzlo0n . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . dvzlnzlo0n . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
dimensions [ 1 ] = { 3 } ; rtDW . dggtzpbo31 . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "w" , SS_DOUBLE , 0 , 0 , 0 , 3 , 1 ,
dimensions , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.0 , 1 ) ; if (
rtDW . dggtzpbo31 . LoggedData == ( NULL ) ) return ; ssCachePointer ( rtS ,
& ( rtDW . dggtzpbo31 . LoggedData ) ) ; } { { { { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"uncontrolled/Environment/Disturbances/Solar radiation pressure" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. knwdemyl3a . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"fe7be6d2-0bb7-4dd2-baf4-a9a88d8b48c4" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . knwdemyl3a . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . knwdemyl3a . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . knwdemyl3a . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . knwdemyl3a .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . knwdemyl3a . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . knwdemyl3a . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "uncontrolled/Sensors/Sun sensor FoV" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_BOOLEAN ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. pcvk10hfia . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"bba47558-ed76-48a0-aee1-263d31a8886f" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . pcvk10hfia . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . pcvk10hfia . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . pcvk10hfia . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . pcvk10hfia .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . pcvk10hfia . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . pcvk10hfia . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"mC_id" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "mC_id" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "uncontrolled/Spin rate damping/Add" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "mC_id" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. lrlfbto3oq . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"6fc0923e-1909-4b27-8840-f1b0a441456b" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . lrlfbto3oq . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . lrlfbto3oq . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . lrlfbto3oq . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . lrlfbto3oq .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . lrlfbto3oq . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . lrlfbto3oq . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "uncontrolled/Spin rate damping/Cross Product2" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 3 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ehi0fzdome . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"7d2b88ce-7b91-4b04-984c-c4c114e9d689" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . ehi0fzdome . AQHandles )
{ ssCachePointer ( rtS , & ( rtDW . ehi0fzdome . AQHandles ) ) ;
sdiSetSignalSampleTimeString ( rtDW . ehi0fzdome . AQHandles , "Continuous" ,
0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . ehi0fzdome .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . ehi0fzdome . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . ehi0fzdome . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } rtDW .
pvnpyl41yz = 0 ; rtDW . dxiowqubpb = 0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . kdqmmbuvr3 = - 1
; rtDW . l3kas04ekx = false ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; rtDW . m4mnewhzec = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . np5lb5q3v4 = 0 ;
rtDW . gw5aebdpal = 0 ; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) {
real_T ezynvqd4w3 ; real_T kmz0sdznhu ; real_T idvwmxj5se ; real_T fry41lfzk2
; real_T jc41fkujib ; real_T f2sqccvuue ; boolean_T d00pp20lcr ; static const
real_T rSurf [ 30 ] = { 0.15000000000000002 , 0.0 , 0.0 , 0.0 , 0.05 , 0.0 ,
- 0.15000000000000002 , 0.0 , 0.0 , 0.0 , - 0.05 , 0.0 , 0.0 , 0.0 , 0.1 ,
0.0 , 0.0 , - 0.1 , 0.14096385542168677 , 0.21000000000000002 , 0.0 ,
0.14096385542168677 , - 0.21000000000000002 , 0.0 , 0.14096385542168677 ,
0.21000000000000002 , 0.0 , 0.14096385542168677 , - 0.21000000000000002 , 0.0
} ; static const real_T A [ 10 ] = { 0.020000000000000004 ,
0.060000000000000012 , 0.020000000000000004 , 0.060000000000000012 ,
0.030000000000000006 , 0.030000000000000006 , 0.064000000000000015 ,
0.064000000000000015 , 0.064000000000000015 , 0.064000000000000015 } ; static
const int8_T n [ 30 ] = { 1 , 0 , 0 , 0 , 1 , 0 , - 1 , 0 , 0 , 0 , - 1 , 0 ,
0 , 0 , 1 , 0 , 0 , - 1 , 1 , 0 , 0 , 1 , 0 , 0 , - 1 , 0 , 0 , - 1 , 0 , 0 }
; static const int8_T a_p [ 9 ] = { 0 , - 1 , 0 , 1 , 0 , 0 , 0 , 0 , 1 } ;
static const int8_T b [ 9 ] = { 0 , 1 , 0 , - 1 , 0 , 0 , 0 , 0 , 1 } ;
static const int8_T b_b [ 9 ] = { 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 } ;
g4hfrp4mjz * a ; creal_T D [ 16 ] ; creal_T V [ 16 ] ; real_T K [ 16 ] ;
real_T b_D [ 16 ] ; real_T b_V [ 16 ] ; real_T Q [ 12 ] ; real_T U [ 12 ] ;
real_T A_err [ 9 ] ; real_T A_ns [ 9 ] ; real_T Az [ 4 ] ; real_T hax1ngh5lz
[ 4 ] ; real_T ( * lastU ) [ 4 ] ; real_T A_err_p [ 3 ] ; real_T itkqxigoel [
3 ] ; real_T n_b [ 3 ] ; real_T nlblustwwf [ 3 ] ; real_T s_bTemp [ 3 ] ;
real_T adu5x2vfux ; real_T comkstkxrf ; real_T ex_im ; real_T ex_re ; real_T
hxx315qf4f ; real_T hyjqkh21bx ; real_T ogfmxqoi1y ; real_T oombnprmul_p ;
int32_T b_ic ; int32_T b_k ; int32_T exitg1 ; int32_T i ; int32_T ia ;
int32_T r ; int32_T vcol ; int8_T rtAction ; int8_T rtPrevAction ; boolean_T
SCALEB ; boolean_T exitg2 ; boolean_T p ; srClearBC ( rtDW . nquht41u0y ) ;
srClearBC ( rtDW . kkbhj5rupm ) ; srClearBC ( rtDW . o1o144q2ee ) ; srClearBC
( rtDW . l1an2vzzne ) ; rtB . ccl35kpxd5 [ 0 ] = rtX . n3fcvgunz5 [ 0 ] ; rtB
. ccl35kpxd5 [ 1 ] = rtX . n3fcvgunz5 [ 1 ] ; rtB . ccl35kpxd5 [ 2 ] = rtX .
n3fcvgunz5 [ 2 ] ; rtB . keylink3mt [ 0 ] = rtX . fbzp2mgfcu [ 0 ] ; rtB .
keylink3mt [ 1 ] = rtX . fbzp2mgfcu [ 1 ] ; rtB . keylink3mt [ 2 ] = rtX .
fbzp2mgfcu [ 2 ] ; rtB . keylink3mt [ 3 ] = rtX . fbzp2mgfcu [ 3 ] ; rtB .
flzo1tlsb5 = ( ( rtB . keylink3mt [ 0 ] * rtB . keylink3mt [ 0 ] + rtB .
keylink3mt [ 1 ] * rtB . keylink3mt [ 1 ] ) + rtB . keylink3mt [ 2 ] * rtB .
keylink3mt [ 2 ] ) + rtB . keylink3mt [ 3 ] * rtB . keylink3mt [ 3 ] ; if (
rtB . flzo1tlsb5 < 0.0 ) { rtB . n0cnntkefl = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . flzo1tlsb5 ) ) ; } else { rtB . n0cnntkefl =
muDoubleScalarSqrt ( rtB . flzo1tlsb5 ) ; } if ( ssIsMajorTimeStep ( rtS ) )
{ rtDW . gv4fu254xq = ( rtB . n0cnntkefl > rtP .
NormalizeVector_maxzero_pmmnk1unkt ) ; } if ( rtDW . gv4fu254xq ) { rtB .
awpypta2ug [ 0 ] = rtB . keylink3mt [ 0 ] ; rtB . awpypta2ug [ 1 ] = rtB .
keylink3mt [ 1 ] ; rtB . awpypta2ug [ 2 ] = rtB . keylink3mt [ 2 ] ; rtB .
awpypta2ug [ 3 ] = rtB . keylink3mt [ 3 ] ; rtB . awpypta2ug [ 4 ] = rtB .
n0cnntkefl ; } else { rtB . kk2fncgdzf [ 0 ] = rtB . keylink3mt [ 0 ] * 0.0 ;
rtB . awpypta2ug [ 0 ] = rtB . kk2fncgdzf [ 0 ] ; rtB . kk2fncgdzf [ 1 ] =
rtB . keylink3mt [ 1 ] * 0.0 ; rtB . awpypta2ug [ 1 ] = rtB . kk2fncgdzf [ 1
] ; rtB . kk2fncgdzf [ 2 ] = rtB . keylink3mt [ 2 ] * 0.0 ; rtB . awpypta2ug
[ 2 ] = rtB . kk2fncgdzf [ 2 ] ; rtB . kk2fncgdzf [ 3 ] = rtB . keylink3mt [
3 ] * 0.0 ; rtB . awpypta2ug [ 3 ] = rtB . kk2fncgdzf [ 3 ] ; rtB .
awpypta2ug [ 4 ] = rtP . Constant_Value_owsqu1yt4f ; } rtB . hpxf3zbmys [ 0 ]
= rtB . awpypta2ug [ 0 ] / rtB . awpypta2ug [ 4 ] ; rtB . hpxf3zbmys [ 1 ] =
rtB . awpypta2ug [ 1 ] / rtB . awpypta2ug [ 4 ] ; rtB . hpxf3zbmys [ 2 ] =
rtB . awpypta2ug [ 2 ] / rtB . awpypta2ug [ 4 ] ; rtB . hpxf3zbmys [ 3 ] =
rtB . awpypta2ug [ 3 ] / rtB . awpypta2ug [ 4 ] ; rtB . dkn2uoguzp = rtX .
oxsdi5rguh ; hxx315qf4f = muDoubleScalarCos ( rtB . dkn2uoguzp ) ; rtB .
a3y1rc3rl1 = rtP . orbit . e * hxx315qf4f ; rtB . geloubvqmf = rtP .
Constant3_Value_pu1m0gcxmv + rtB . a3y1rc3rl1 ; rtB . oeqvrsjl20 = 1.0 / rtB
. geloubvqmf * rtP . Constant4_Value ; rtB . kbe53iduh5 = hxx315qf4f * rtB .
oeqvrsjl20 ; hyjqkh21bx = muDoubleScalarSin ( rtB . dkn2uoguzp ) ; rtB .
fwep5bzjc2 = hyjqkh21bx * rtB . oeqvrsjl20 ; rtB . dzxfzraqep [ 0 ] = rtB .
kbe53iduh5 ; rtB . dzxfzraqep [ 1 ] = rtB . fwep5bzjc2 ; rtB . dzxfzraqep [ 2
] = rtP . Constant6_Value ; oombnprmul_p = 0.0 ; for ( vcol = 0 ; vcol < 3 ;
vcol ++ ) { rtB . jrvlwmnotm [ vcol ] = 0.0 ; rtB . jrvlwmnotm [ vcol ] +=
rtB . k0ctxkfhfc [ vcol ] * rtB . dzxfzraqep [ 0 ] ; rtB . jrvlwmnotm [ vcol
] += rtB . k0ctxkfhfc [ vcol + 3 ] * rtB . dzxfzraqep [ 1 ] ; rtB .
jrvlwmnotm [ vcol ] += rtB . k0ctxkfhfc [ vcol + 6 ] * rtB . dzxfzraqep [ 2 ]
; oombnprmul_p += rtB . jrvlwmnotm [ vcol ] * rtB . jrvlwmnotm [ vcol ] ; }
if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . pvnpyl41yz != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . pvnpyl41yz = 0 ;
} ogfmxqoi1y = muDoubleScalarSqrt ( oombnprmul_p ) ; } else if ( oombnprmul_p
< 0.0 ) { ogfmxqoi1y = - muDoubleScalarSqrt ( muDoubleScalarAbs (
oombnprmul_p ) ) ; rtDW . pvnpyl41yz = 1 ; } else { ogfmxqoi1y =
muDoubleScalarSqrt ( oombnprmul_p ) ; } oombnprmul_p = 1.0 / ogfmxqoi1y * rtP
. constants . REq ; adu5x2vfux = rtP . constants . nSun * ssGetT ( rtS ) ;
comkstkxrf = muDoubleScalarSin ( adu5x2vfux ) ; rtB . akarp20eco [ 0 ] = rtP
. constants . AU * muDoubleScalarCos ( adu5x2vfux ) ; rtB . akarp20eco [ 1 ]
= muDoubleScalarCos ( rtP . constants . oblAngle ) * comkstkxrf * rtP .
constants . AU ; rtB . akarp20eco [ 2 ] = muDoubleScalarSin ( rtP . constants
. oblAngle ) * comkstkxrf * rtP . constants . AU ; adu5x2vfux = ( rtB .
akarp20eco [ 0 ] * rtB . akarp20eco [ 0 ] + rtB . akarp20eco [ 1 ] * rtB .
akarp20eco [ 1 ] ) + rtB . akarp20eco [ 2 ] * rtB . akarp20eco [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . dxiowqubpb != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . dxiowqubpb = 0 ;
} comkstkxrf = muDoubleScalarSqrt ( adu5x2vfux ) ; } else if ( adu5x2vfux <
0.0 ) { comkstkxrf = - muDoubleScalarSqrt ( muDoubleScalarAbs ( adu5x2vfux )
) ; rtDW . dxiowqubpb = 1 ; } else { comkstkxrf = muDoubleScalarSqrt (
adu5x2vfux ) ; } adu5x2vfux = 1.0 / comkstkxrf * rtP . constants . REq ; if (
oombnprmul_p > 1.0 ) { oombnprmul_p = 1.0 ; } else { if ( oombnprmul_p < -
1.0 ) { oombnprmul_p = - 1.0 ; } } if ( adu5x2vfux > 1.0 ) { adu5x2vfux = 1.0
; } else { if ( adu5x2vfux < - 1.0 ) { adu5x2vfux = - 1.0 ; } } rtB .
imimj3j53y = muDoubleScalarAcos ( oombnprmul_p ) + muDoubleScalarAcos (
adu5x2vfux ) ; adu5x2vfux = ( ( rtB . jrvlwmnotm [ 0 ] * rtB . akarp20eco [ 0
] + rtB . jrvlwmnotm [ 1 ] * rtB . akarp20eco [ 1 ] ) + rtB . jrvlwmnotm [ 2
] * rtB . akarp20eco [ 2 ] ) / ogfmxqoi1y / comkstkxrf ; if ( adu5x2vfux >
1.0 ) { adu5x2vfux = 1.0 ; } else { if ( adu5x2vfux < - 1.0 ) { adu5x2vfux =
- 1.0 ; } } rtB . cybvicud0e = muDoubleScalarAcos ( adu5x2vfux ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
pk4uaaxwfa = ( rtB . imimj3j53y <= rtB . cybvicud0e ) ; } rtB . abreinrkmh =
! rtDW . pk4uaaxwfa ; } rtB . dxoa34c3b1 = rtB . hpxf3zbmys [ 3 ] * rtB .
hpxf3zbmys [ 3 ] - ( ( rtB . hpxf3zbmys [ 0 ] * rtB . hpxf3zbmys [ 0 ] + rtB
. hpxf3zbmys [ 1 ] * rtB . hpxf3zbmys [ 1 ] ) + rtB . hpxf3zbmys [ 2 ] * rtB
. hpxf3zbmys [ 2 ] ) ; rtB . hoa03yvz1u = rtP . Gain_Gain * rtB . hpxf3zbmys
[ 2 ] ; rtB . cgif1ftqiu = rtP . Gain1_Gain * rtB . hpxf3zbmys [ 0 ] ; rtB .
ewaorjb0zq = rtP . Gain2_Gain * rtB . hpxf3zbmys [ 1 ] ; rtB . kijoxc4gpj [ 0
] = rtP . Constant_Value_mldwum2o1l ; rtB . kijoxc4gpj [ 3 ] = rtB .
hoa03yvz1u ; rtB . kijoxc4gpj [ 6 ] = rtB . hpxf3zbmys [ 1 ] ; rtB .
kijoxc4gpj [ 1 ] = rtB . hpxf3zbmys [ 2 ] ; rtB . kijoxc4gpj [ 4 ] = rtP .
Constant1_Value_bhblxijpmx ; rtB . kijoxc4gpj [ 7 ] = rtB . cgif1ftqiu ; rtB
. kijoxc4gpj [ 2 ] = rtB . ewaorjb0zq ; rtB . kijoxc4gpj [ 5 ] = rtB .
hpxf3zbmys [ 0 ] ; rtB . kijoxc4gpj [ 8 ] = rtP . Constant2_Value_mlr4215lth
; for ( i = 0 ; i < 9 ; i ++ ) { rtB . kq3be5snym [ i ] = rtP .
Constant_Value_l3g1zulttu [ i ] * rtB . dxoa34c3b1 ; rtB . ensiuwqomq [ i ] =
rtB . hpxf3zbmys [ 3 ] * rtB . kijoxc4gpj [ i ] ; rtB . jobdkup5ya [ i ] =
rtP . Gain_Gain_ahnizkpkvu * rtB . ensiuwqomq [ i ] ; } for ( vcol = 0 ; vcol
< 3 ; vcol ++ ) { rtB . cly0cps1kj [ 3 * vcol ] = rtB . hpxf3zbmys [ 0 ] *
rtB . hpxf3zbmys [ vcol ] ; rtB . cly0cps1kj [ 3 * vcol + 1 ] = rtB .
hpxf3zbmys [ 1 ] * rtB . hpxf3zbmys [ vcol ] ; rtB . cly0cps1kj [ 3 * vcol +
2 ] = rtB . hpxf3zbmys [ 2 ] * rtB . hpxf3zbmys [ vcol ] ; } for ( i = 0 ; i
< 9 ; i ++ ) { rtB . ocg4x41c1b [ i ] = rtP . Gain1_Gain_elldija22u * rtB .
cly0cps1kj [ i ] ; rtB . g5cvdi42sk [ i ] = ( rtB . kq3be5snym [ i ] - rtB .
jobdkup5ya [ i ] ) + rtB . ocg4x41c1b [ i ] ; } if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { rtPrevAction = rtDW . kdqmmbuvr3 ; if ( ssIsMajorTimeStep ( rtS ) )
{ rtAction = ( int8_T ) ! rtB . abreinrkmh ; rtDW . kdqmmbuvr3 = rtAction ; }
else { rtAction = rtDW . kdqmmbuvr3 ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { oombnprmul_p = rtB . akarp20eco [ 0 ] - rtB . jrvlwmnotm [
0 ] ; nlblustwwf [ 0 ] = oombnprmul_p * oombnprmul_p ; itkqxigoel [ 0 ] =
oombnprmul_p ; oombnprmul_p = rtB . akarp20eco [ 1 ] - rtB . jrvlwmnotm [ 1 ]
; nlblustwwf [ 1 ] = oombnprmul_p * oombnprmul_p ; itkqxigoel [ 1 ] =
oombnprmul_p ; oombnprmul_p = rtB . akarp20eco [ 2 ] - rtB . jrvlwmnotm [ 2 ]
; comkstkxrf = ( nlblustwwf [ 0 ] + nlblustwwf [ 1 ] ) + oombnprmul_p *
oombnprmul_p ; if ( comkstkxrf < 0.0 ) { comkstkxrf = - muDoubleScalarSqrt (
muDoubleScalarAbs ( comkstkxrf ) ) ; } else { comkstkxrf = muDoubleScalarSqrt
( comkstkxrf ) ; } if ( comkstkxrf > rtP . NormalizeVector_maxzero ) {
hax1ngh5lz [ 0 ] = itkqxigoel [ 0 ] ; hax1ngh5lz [ 1 ] = itkqxigoel [ 1 ] ;
hax1ngh5lz [ 2 ] = oombnprmul_p ; hax1ngh5lz [ 3 ] = comkstkxrf ; } else {
hax1ngh5lz [ 0 ] = itkqxigoel [ 0 ] * 0.0 ; hax1ngh5lz [ 1 ] = itkqxigoel [ 1
] * 0.0 ; hax1ngh5lz [ 2 ] = oombnprmul_p * 0.0 ; hax1ngh5lz [ 3 ] = rtP .
Constant_Value ; } rtB . o4b5qm0dak [ 0 ] = hax1ngh5lz [ 0 ] / hax1ngh5lz [ 3
] ; rtB . o4b5qm0dak [ 1 ] = hax1ngh5lz [ 1 ] / hax1ngh5lz [ 3 ] ; rtB .
o4b5qm0dak [ 2 ] = hax1ngh5lz [ 2 ] / hax1ngh5lz [ 3 ] ; for ( i = 0 ; i < 3
; i ++ ) { nlblustwwf [ i ] = 0.0 ; itkqxigoel [ i ] = rtB . g5cvdi42sk [ i +
6 ] * rtB . o4b5qm0dak [ 2 ] + ( rtB . g5cvdi42sk [ i + 3 ] * rtB .
o4b5qm0dak [ 1 ] + rtB . g5cvdi42sk [ i ] * rtB . o4b5qm0dak [ 0 ] ) ; } for
( i = 0 ; i < 3 ; i ++ ) { vcol = n [ 3 * i ] ; comkstkxrf = itkqxigoel [ 0 ]
* ( real_T ) vcol ; n_b [ 0 ] = vcol ; vcol = n [ 3 * i + 1 ] ; comkstkxrf +=
itkqxigoel [ 1 ] * ( real_T ) vcol ; n_b [ 1 ] = vcol ; vcol = n [ 3 * i + 2
] ; comkstkxrf += itkqxigoel [ 2 ] * ( real_T ) vcol ; if ( comkstkxrf > 0.0
) { oombnprmul_p = - rtP . constants . P * A [ i ] * comkstkxrf ; n_b [ 0 ] =
( ( comkstkxrf + 0.066666666666666666 ) * n_b [ 0 ] + 0.5 * itkqxigoel [ 0 ]
) * oombnprmul_p ; n_b [ 1 ] = ( ( comkstkxrf + 0.066666666666666666 ) * n_b
[ 1 ] + 0.5 * itkqxigoel [ 1 ] ) * oombnprmul_p ; oombnprmul_p *= (
comkstkxrf + 0.066666666666666666 ) * ( real_T ) vcol + 0.5 * itkqxigoel [ 2
] ; ogfmxqoi1y = nlblustwwf [ 0 ] ; comkstkxrf = nlblustwwf [ 1 ] ;
adu5x2vfux = nlblustwwf [ 2 ] ; nlblustwwf [ 0 ] = ( rSurf [ 3 * i + 1 ] *
oombnprmul_p - rSurf [ 3 * i + 2 ] * n_b [ 1 ] ) + ogfmxqoi1y ; nlblustwwf [
1 ] = ( rSurf [ 3 * i + 2 ] * n_b [ 0 ] - rSurf [ 3 * i ] * oombnprmul_p ) +
comkstkxrf ; nlblustwwf [ 2 ] = ( rSurf [ 3 * i ] * n_b [ 1 ] - rSurf [ 3 * i
+ 1 ] * n_b [ 0 ] ) + adu5x2vfux ; } } rtB . fwruiojfal [ 0 ] = nlblustwwf [
0 ] ; rtB . fwruiojfal [ 1 ] = nlblustwwf [ 1 ] ; rtB . fwruiojfal [ 2 ] =
nlblustwwf [ 2 ] ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW .
nquht41u0y ) ; } break ; case 1 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtB . fwruiojfal [ 0 ] = rtP . Constant1_Value [ 0 ] ; rtB
. fwruiojfal [ 1 ] = rtP . Constant1_Value [ 1 ] ; rtB . fwruiojfal [ 2 ] =
rtP . Constant1_Value [ 2 ] ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC
( rtDW . kkbhj5rupm ) ; } break ; } } for ( vcol = 0 ; vcol < 3 ; vcol ++ ) {
s_bTemp [ vcol ] = rtB . g5cvdi42sk [ vcol + 6 ] * rtB . o4b5qm0dak [ 2 ] + (
rtB . g5cvdi42sk [ vcol + 3 ] * rtB . o4b5qm0dak [ 1 ] + rtB . g5cvdi42sk [
vcol ] * rtB . o4b5qm0dak [ 0 ] ) ; } adu5x2vfux = 0.0 ; for ( vcol = 0 ;
vcol < 3 ; vcol ++ ) { rtB . gqnw3gvtvl [ vcol ] = 0.0 ; rtB . gqnw3gvtvl [
vcol ] += rtP . sensors . ss . A_sb [ vcol ] * s_bTemp [ 0 ] ; rtB .
gqnw3gvtvl [ vcol ] += rtP . sensors . ss . A_sb [ vcol + 3 ] * s_bTemp [ 1 ]
; rtB . gqnw3gvtvl [ vcol ] += rtP . sensors . ss . A_sb [ vcol + 6 ] *
s_bTemp [ 2 ] ; adu5x2vfux += rtB . kyywqu43ff [ vcol ] * rtB . gqnw3gvtvl [
vcol ] ; } if ( adu5x2vfux > 1.0 ) { adu5x2vfux = 1.0 ; } else { if (
adu5x2vfux < - 1.0 ) { adu5x2vfux = - 1.0 ; } } rtB . au0lhyifpn =
muDoubleScalarAcos ( adu5x2vfux ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . llvlsepr0c = ( rtB . au0lhyifpn < rtP
. sensors . ss . FoV / 2.0 ) ; } d00pp20lcr = rtDW . llvlsepr0c ; rtB .
mzpdbd1vyg = ( rtB . abreinrkmh && d00pp20lcr ) ; if ( ssIsMajorTimeStep (
rtS ) ) { if ( rtB . mzpdbd1vyg ) { if ( ! rtDW . l3kas04ekx ) { if (
ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . l3kas04ekx =
true ; } } else { if ( rtDW . l3kas04ekx ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . l3kas04ekx =
false ; } } } } if ( rtDW . l3kas04ekx ) { if ( ssIsSampleHit ( rtS , 3 , 0 )
) { memcpy ( & rtB . drnfnw0sfs [ 0 ] , & rtB . g5cvdi42sk [ 0 ] , 9U *
sizeof ( real_T ) ) ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { for ( i = 0 ; i
< 3 ; i ++ ) { A_ns [ vcol + 3 * i ] = 0.0 ; A_ns [ vcol + 3 * i ] += rtB .
drnfnw0sfs [ 3 * vcol ] * ( real_T ) b [ 3 * i ] ; A_ns [ vcol + 3 * i ] +=
rtB . drnfnw0sfs [ 3 * vcol + 1 ] * ( real_T ) b [ 3 * i + 1 ] ; A_ns [ vcol
+ 3 * i ] += rtB . drnfnw0sfs [ 3 * vcol + 2 ] * ( real_T ) b [ 3 * i + 2 ] ;
} } memset ( & rtB . ptsg4njrmr [ 3 ] , 0 , 9U * sizeof ( real_T ) ) ; memset
( & rtB . my4i2jj4w0 [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; itkqxigoel [ 0 ]
= 0.0 ; nlblustwwf [ 0 ] = 0.0 ; itkqxigoel [ 1 ] = 0.0 ; nlblustwwf [ 1 ] =
0.0 ; itkqxigoel [ 2 ] = 0.0 ; nlblustwwf [ 2 ] = 0.0 ; for ( i = 0 ; i < 3 ;
i ++ ) { for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { s_bTemp [ vcol ] = rtDW .
m1del2va53 [ ( 2 - i ) * 3 + 2 ] * rtB . drnfnw0sfs [ vcol + 6 ] + ( rtDW .
m1del2va53 [ ( 2 - i ) * 3 + 1 ] * rtB . drnfnw0sfs [ vcol + 3 ] + rtDW .
m1del2va53 [ ( 2 - i ) * 3 ] * rtB . drnfnw0sfs [ vcol ] ) ; } for ( vcol = 0
; vcol < 3 ; vcol ++ ) { n_b [ vcol ] = ( real_T ) a_p [ vcol + 6 ] * s_bTemp
[ 2 ] + ( ( real_T ) a_p [ vcol + 3 ] * s_bTemp [ 1 ] + ( real_T ) a_p [ vcol
] * s_bTemp [ 0 ] ) ; } comkstkxrf = muDoubleScalarAsin ( n_b [ 2 ] ) ;
ogfmxqoi1y = n_b [ 0 ] / muDoubleScalarCos ( comkstkxrf ) ; if ( n_b [ 1 ] <=
0.0 ) { comkstkxrf = 6.2831853071795862 - comkstkxrf ; } if ( (
muDoubleScalarAbs ( muDoubleScalarAcos ( ogfmxqoi1y ) ) > 10.0 ) || (
muDoubleScalarAbs ( comkstkxrf ) > 10.0 ) ) { nlblustwwf [ 2 - i ] = ( 2.0 *
phpij0ozdb ( ) + - 1.0 ) * 4.0 ; itkqxigoel [ 2 - i ] = ( 2.0 * phpij0ozdb (
) + - 1.0 ) * 4.0 ; n_b [ 0 ] = muDoubleScalarCos ( itkqxigoel [ 2 - i ] ) *
muDoubleScalarCos ( nlblustwwf [ 2 - i ] ) ; n_b [ 1 ] = muDoubleScalarCos (
itkqxigoel [ 2 - i ] ) * muDoubleScalarSin ( nlblustwwf [ 2 - i ] ) ; n_b [ 2
] = muDoubleScalarSin ( itkqxigoel [ 2 - i ] ) ; A_err [ 0 ] =
muDoubleScalarCos ( rtDW . bkj2ve0mem ) * muDoubleScalarCos ( rtDW .
jsxfhslkkg ) ; A_err [ 3 ] = muDoubleScalarCos ( rtDW . bkj2ve0mem ) *
muDoubleScalarSin ( rtDW . jsxfhslkkg ) * muDoubleScalarSin ( rtDW .
j42igdadkb ) + muDoubleScalarSin ( rtDW . bkj2ve0mem ) * muDoubleScalarCos (
rtDW . j42igdadkb ) ; A_err [ 6 ] = - muDoubleScalarCos ( rtDW . bkj2ve0mem )
* muDoubleScalarSin ( rtDW . jsxfhslkkg ) * muDoubleScalarCos ( rtDW .
j42igdadkb ) + muDoubleScalarSin ( rtDW . bkj2ve0mem ) * muDoubleScalarSin (
rtDW . j42igdadkb ) ; A_err [ 1 ] = - muDoubleScalarSin ( rtDW . bkj2ve0mem )
* muDoubleScalarCos ( rtDW . jsxfhslkkg ) ; A_err [ 4 ] = - muDoubleScalarSin
( rtDW . bkj2ve0mem ) * muDoubleScalarSin ( rtDW . jsxfhslkkg ) *
muDoubleScalarSin ( rtDW . j42igdadkb ) + muDoubleScalarCos ( rtDW .
bkj2ve0mem ) * muDoubleScalarCos ( rtDW . j42igdadkb ) ; A_err [ 7 ] =
muDoubleScalarSin ( rtDW . bkj2ve0mem ) * muDoubleScalarSin ( rtDW .
jsxfhslkkg ) * muDoubleScalarCos ( rtDW . j42igdadkb ) + muDoubleScalarCos (
rtDW . bkj2ve0mem ) * muDoubleScalarSin ( rtDW . j42igdadkb ) ; A_err [ 2 ] =
muDoubleScalarSin ( rtDW . jsxfhslkkg ) ; A_err [ 5 ] = - muDoubleScalarCos (
rtDW . jsxfhslkkg ) * muDoubleScalarSin ( rtDW . j42igdadkb ) ; A_err [ 8 ] =
muDoubleScalarCos ( rtDW . jsxfhslkkg ) * muDoubleScalarCos ( rtDW .
j42igdadkb ) ; } else { memset ( & A_err [ 0 ] , 0 , 9U * sizeof ( real_T ) )
; A_err [ 0 ] = 1.0 ; A_err [ 4 ] = 1.0 ; A_err [ 8 ] = 1.0 ; } for ( vcol =
0 ; vcol < 3 ; vcol ++ ) { A_err_p [ vcol ] = A_err [ vcol + 6 ] * n_b [ 2 ]
+ ( A_err [ vcol + 3 ] * n_b [ 1 ] + A_err [ vcol ] * n_b [ 0 ] ) ; } for (
vcol = 0 ; vcol < 3 ; vcol ++ ) { s_bTemp [ vcol ] = ( real_T ) b [ vcol + 6
] * A_err_p [ 2 ] + ( ( real_T ) b [ vcol + 3 ] * A_err_p [ 1 ] + ( real_T )
b [ vcol ] * A_err_p [ 0 ] ) ; } oombnprmul_p = lk5bzskpou ( s_bTemp ) ; for
( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . ptsg4njrmr [ vcol + 3 * ( 3 - i ) ]
= s_bTemp [ vcol ] / oombnprmul_p ; ogfmxqoi1y = A_ns [ vcol + 6 ] * n_b [ 2
] + ( A_ns [ vcol + 3 ] * n_b [ 1 ] + A_ns [ vcol ] * n_b [ 0 ] ) ; rtB .
my4i2jj4w0 [ vcol + 3 * ( 2 - i ) ] = ogfmxqoi1y ; s_bTemp [ vcol ] =
ogfmxqoi1y ; } oombnprmul_p = lk5bzskpou ( s_bTemp ) ; rtB . my4i2jj4w0 [ 3 *
( 2 - i ) ] = s_bTemp [ 0 ] / oombnprmul_p ; rtB . my4i2jj4w0 [ 3 * ( 2 - i )
+ 1 ] = s_bTemp [ 1 ] / oombnprmul_p ; rtB . my4i2jj4w0 [ 3 * ( 2 - i ) + 2 ]
= s_bTemp [ 2 ] / oombnprmul_p ; } memcpy ( & rtB . o4dj4py0uf [ 3 ] , & rtB
. my4i2jj4w0 [ 0 ] , 9U * sizeof ( real_T ) ) ; fry41lfzk2 = rtDW .
ejy4002h5a ; jc41fkujib = rtDW . ksjty3navg ; f2sqccvuue = rtDW . fhk413qchg
; lh5o5k3kus ( fry41lfzk2 , jc41fkujib , f2sqccvuue , & rtB . luux5q1kph ) ;
rtB . ol4ycpsogd [ 0 ] = rtB . gqnw3gvtvl [ 0 ] ; rtB . ol4ycpsogd [ 1 ] =
rtB . gqnw3gvtvl [ 1 ] ; rtB . ol4ycpsogd [ 2 ] = rtB . gqnw3gvtvl [ 2 ] ;
for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . ptsg4njrmr [ vcol ] = 0.0 ; rtB
. ptsg4njrmr [ vcol ] += rtB . luux5q1kph . oowvbhbp1g [ vcol ] * rtB .
ol4ycpsogd [ 0 ] ; rtB . ptsg4njrmr [ vcol ] += rtB . luux5q1kph . oowvbhbp1g
[ vcol + 3 ] * rtB . ol4ycpsogd [ 1 ] ; rtB . ptsg4njrmr [ vcol ] += rtB .
luux5q1kph . oowvbhbp1g [ vcol + 6 ] * rtB . ol4ycpsogd [ 2 ] ; } } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ssIsSampleHit ( rtS , 3 , 0 ) ) { rtB .
o4dj4py0uf [ 0 ] = rtB . o4b5qm0dak [ 0 ] ; rtB . o4dj4py0uf [ 1 ] = rtB .
o4b5qm0dak [ 1 ] ; rtB . o4dj4py0uf [ 2 ] = rtB . o4b5qm0dak [ 2 ] ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . o1o144q2ee ) ; } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . fxtfkkj240 = ( ( ! rtB . abreinrkmh )
|| ( ! d00pp20lcr ) ) ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtB .
fxtfkkj240 ) { if ( ! rtDW . m4mnewhzec ) { if ( ssGetTaskTime ( rtS , 1 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} rtDW . m4mnewhzec = true ; } } else { if ( rtDW . m4mnewhzec ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . m4mnewhzec =
false ; } } } } if ( rtDW . m4mnewhzec ) { if ( ssIsSampleHit ( rtS , 3 , 0 )
) { memcpy ( & rtB . fya5ejz2q1 [ 0 ] , & rtB . g5cvdi42sk [ 0 ] , 9U *
sizeof ( real_T ) ) ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { for ( i = 0 ; i
< 3 ; i ++ ) { A_ns [ vcol + 3 * i ] = 0.0 ; A_ns [ vcol + 3 * i ] += rtB .
fya5ejz2q1 [ 3 * vcol ] * ( real_T ) b [ 3 * i ] ; A_ns [ vcol + 3 * i ] +=
rtB . fya5ejz2q1 [ 3 * vcol + 1 ] * ( real_T ) b [ 3 * i + 1 ] ; A_ns [ vcol
+ 3 * i ] += rtB . fya5ejz2q1 [ 3 * vcol + 2 ] * ( real_T ) b [ 3 * i + 2 ] ;
} } memset ( & rtB . ptsg4njrmr [ 0 ] , 0 , 12U * sizeof ( real_T ) ) ;
memset ( & rtB . ijzytbew2v [ 0 ] , 0 , 12U * sizeof ( real_T ) ) ;
hax1ngh5lz [ 0 ] = 0.0 ; Az [ 0 ] = 0.0 ; hax1ngh5lz [ 1 ] = 0.0 ; Az [ 1 ] =
0.0 ; hax1ngh5lz [ 2 ] = 0.0 ; Az [ 2 ] = 0.0 ; hax1ngh5lz [ 3 ] = 0.0 ; Az [
3 ] = 0.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for ( vcol = 0 ; vcol < 3 ; vcol
++ ) { s_bTemp [ vcol ] = rtDW . imdqbdwqjp [ ( 3 - i ) * 3 + 2 ] * rtB .
fya5ejz2q1 [ vcol + 6 ] + ( rtDW . imdqbdwqjp [ ( 3 - i ) * 3 + 1 ] * rtB .
fya5ejz2q1 [ vcol + 3 ] + rtDW . imdqbdwqjp [ ( 3 - i ) * 3 ] * rtB .
fya5ejz2q1 [ vcol ] ) ; } for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { n_b [ vcol
] = ( real_T ) a_p [ vcol + 6 ] * s_bTemp [ 2 ] + ( ( real_T ) a_p [ vcol + 3
] * s_bTemp [ 1 ] + ( real_T ) a_p [ vcol ] * s_bTemp [ 0 ] ) ; } comkstkxrf
= muDoubleScalarAsin ( n_b [ 2 ] ) ; ogfmxqoi1y = n_b [ 0 ] /
muDoubleScalarCos ( comkstkxrf ) ; if ( n_b [ 1 ] <= 0.0 ) { comkstkxrf =
6.2831853071795862 - comkstkxrf ; } if ( ( muDoubleScalarAbs (
muDoubleScalarAcos ( ogfmxqoi1y ) ) > 10.0 ) || ( muDoubleScalarAbs (
comkstkxrf ) > 10.0 ) ) { Az [ 3 - i ] = ( 2.0 * b3tmpxckt5 ( ) + - 1.0 ) *
4.0 ; hax1ngh5lz [ 3 - i ] = ( 2.0 * b3tmpxckt5 ( ) + - 1.0 ) * 4.0 ; n_b [ 0
] = muDoubleScalarCos ( hax1ngh5lz [ 3 - i ] ) * muDoubleScalarCos ( Az [ 3 -
i ] ) ; n_b [ 1 ] = muDoubleScalarCos ( hax1ngh5lz [ 3 - i ] ) *
muDoubleScalarSin ( Az [ 3 - i ] ) ; n_b [ 2 ] = muDoubleScalarSin (
hax1ngh5lz [ 3 - i ] ) ; A_err [ 0 ] = muDoubleScalarCos ( rtDW . i3dsukuteh
) * muDoubleScalarCos ( rtDW . lkpte3brp0 ) ; A_err [ 3 ] = muDoubleScalarCos
( rtDW . i3dsukuteh ) * muDoubleScalarSin ( rtDW . lkpte3brp0 ) *
muDoubleScalarSin ( rtDW . ny2oqvzhck ) + muDoubleScalarSin ( rtDW .
i3dsukuteh ) * muDoubleScalarCos ( rtDW . ny2oqvzhck ) ; A_err [ 6 ] = -
muDoubleScalarCos ( rtDW . i3dsukuteh ) * muDoubleScalarSin ( rtDW .
lkpte3brp0 ) * muDoubleScalarCos ( rtDW . ny2oqvzhck ) + muDoubleScalarSin (
rtDW . i3dsukuteh ) * muDoubleScalarSin ( rtDW . ny2oqvzhck ) ; A_err [ 1 ] =
- muDoubleScalarSin ( rtDW . i3dsukuteh ) * muDoubleScalarCos ( rtDW .
lkpte3brp0 ) ; A_err [ 4 ] = - muDoubleScalarSin ( rtDW . i3dsukuteh ) *
muDoubleScalarSin ( rtDW . lkpte3brp0 ) * muDoubleScalarSin ( rtDW .
ny2oqvzhck ) + muDoubleScalarCos ( rtDW . i3dsukuteh ) * muDoubleScalarCos (
rtDW . ny2oqvzhck ) ; A_err [ 7 ] = muDoubleScalarSin ( rtDW . i3dsukuteh ) *
muDoubleScalarSin ( rtDW . lkpte3brp0 ) * muDoubleScalarCos ( rtDW .
ny2oqvzhck ) + muDoubleScalarCos ( rtDW . i3dsukuteh ) * muDoubleScalarSin (
rtDW . ny2oqvzhck ) ; A_err [ 2 ] = muDoubleScalarSin ( rtDW . lkpte3brp0 ) ;
A_err [ 5 ] = - muDoubleScalarCos ( rtDW . lkpte3brp0 ) * muDoubleScalarSin (
rtDW . ny2oqvzhck ) ; A_err [ 8 ] = muDoubleScalarCos ( rtDW . lkpte3brp0 ) *
muDoubleScalarCos ( rtDW . ny2oqvzhck ) ; } else { memset ( & A_err [ 0 ] , 0
, 9U * sizeof ( real_T ) ) ; A_err [ 0 ] = 1.0 ; A_err [ 4 ] = 1.0 ; A_err [
8 ] = 1.0 ; } for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { A_err_p [ vcol ] =
A_err [ vcol + 6 ] * n_b [ 2 ] + ( A_err [ vcol + 3 ] * n_b [ 1 ] + A_err [
vcol ] * n_b [ 0 ] ) ; } for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { s_bTemp [
vcol ] = ( real_T ) b [ vcol + 6 ] * A_err_p [ 2 ] + ( ( real_T ) b [ vcol +
3 ] * A_err_p [ 1 ] + ( real_T ) b [ vcol ] * A_err_p [ 0 ] ) ; }
oombnprmul_p = lk5bzskpou ( s_bTemp ) ; for ( vcol = 0 ; vcol < 3 ; vcol ++ )
{ rtB . ptsg4njrmr [ vcol + 3 * ( 3 - i ) ] = s_bTemp [ vcol ] / oombnprmul_p
; ogfmxqoi1y = A_ns [ vcol + 6 ] * n_b [ 2 ] + ( A_ns [ vcol + 3 ] * n_b [ 1
] + A_ns [ vcol ] * n_b [ 0 ] ) ; rtB . ijzytbew2v [ vcol + 3 * ( 3 - i ) ] =
ogfmxqoi1y ; s_bTemp [ vcol ] = ogfmxqoi1y ; } oombnprmul_p = lk5bzskpou (
s_bTemp ) ; rtB . ijzytbew2v [ 3 * ( 3 - i ) ] = s_bTemp [ 0 ] / oombnprmul_p
; rtB . ijzytbew2v [ 3 * ( 3 - i ) + 1 ] = s_bTemp [ 1 ] / oombnprmul_p ; rtB
. ijzytbew2v [ 3 * ( 3 - i ) + 2 ] = s_bTemp [ 2 ] / oombnprmul_p ; } memcpy
( & rtB . o4dj4py0uf [ 0 ] , & rtB . ijzytbew2v [ 0 ] , 12U * sizeof ( real_T
) ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . l1an2vzzne ) ;
} } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { } for ( i = 0 ; i < 6 ; i ++ ) {
rtB . doteuheq3d [ i ] = rtX . ojag5ytihq [ i ] ; } rtB . dcymgtaxnd = rtP .
constants . wE * ssGetT ( rtS ) ; rtB . dfj1hv2rax = muDoubleScalarCos ( rtB
. dcymgtaxnd ) * muDoubleScalarSin ( rtP . constants . magneticTilt ) ; rtB .
kmrxoj3dew = muDoubleScalarSin ( rtB . dcymgtaxnd ) * muDoubleScalarSin ( rtP
. constants . magneticTilt ) ; rtB . ampf4zyrnm [ 0 ] = rtB . dfj1hv2rax ;
rtB . ampf4zyrnm [ 1 ] = rtB . kmrxoj3dew ; rtB . ampf4zyrnm [ 2 ] =
muDoubleScalarCos ( rtP . constants . magneticTilt ) ; rtB . opuyfb0xxc = (
rtB . jrvlwmnotm [ 0 ] * rtB . jrvlwmnotm [ 0 ] + rtB . jrvlwmnotm [ 1 ] *
rtB . jrvlwmnotm [ 1 ] ) + rtB . jrvlwmnotm [ 2 ] * rtB . jrvlwmnotm [ 2 ] ;
if ( rtB . opuyfb0xxc < 0.0 ) { rtB . ars5lnjltn = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtB . opuyfb0xxc ) ) ; } else { rtB . ars5lnjltn =
muDoubleScalarSqrt ( rtB . opuyfb0xxc ) ; } if ( ssIsMajorTimeStep ( rtS ) )
{ rtDW . cahwo2f04v = ( rtB . ars5lnjltn > rtP .
NormalizeVector_maxzero_mhggypqjqf ) ; } if ( rtDW . cahwo2f04v ) { rtB .
omjr0w1vhx [ 0 ] = rtB . jrvlwmnotm [ 0 ] ; rtB . omjr0w1vhx [ 1 ] = rtB .
jrvlwmnotm [ 1 ] ; rtB . omjr0w1vhx [ 2 ] = rtB . jrvlwmnotm [ 2 ] ; rtB .
omjr0w1vhx [ 3 ] = rtB . ars5lnjltn ; } else { rtB . kvx3ci1bl1 [ 0 ] = rtB .
jrvlwmnotm [ 0 ] * 0.0 ; rtB . omjr0w1vhx [ 0 ] = rtB . kvx3ci1bl1 [ 0 ] ;
rtB . kvx3ci1bl1 [ 1 ] = rtB . jrvlwmnotm [ 1 ] * 0.0 ; rtB . omjr0w1vhx [ 1
] = rtB . kvx3ci1bl1 [ 1 ] ; rtB . kvx3ci1bl1 [ 2 ] = rtB . jrvlwmnotm [ 2 ]
* 0.0 ; rtB . omjr0w1vhx [ 2 ] = rtB . kvx3ci1bl1 [ 2 ] ; rtB . omjr0w1vhx [
3 ] = rtP . Constant_Value_bgpplpzlth ; } rtB . h1payfm0hu [ 0 ] = rtB .
omjr0w1vhx [ 0 ] / rtB . omjr0w1vhx [ 3 ] ; rtB . h1payfm0hu [ 1 ] = rtB .
omjr0w1vhx [ 1 ] / rtB . omjr0w1vhx [ 3 ] ; rtB . h1payfm0hu [ 2 ] = rtB .
omjr0w1vhx [ 2 ] / rtB . omjr0w1vhx [ 3 ] ; rtB . f12kiybc2b = ( ( rtB .
ampf4zyrnm [ 0 ] * rtB . h1payfm0hu [ 0 ] + rtB . ampf4zyrnm [ 1 ] * rtB .
h1payfm0hu [ 1 ] ) + rtB . ampf4zyrnm [ 2 ] * rtB . h1payfm0hu [ 2 ] ) * rtP
. Gain1_Gain_g1f04hzvel ; rtB . gvgfzrqlin [ 0 ] = rtB . f12kiybc2b * rtB .
h1payfm0hu [ 0 ] ; rtB . owz1l3bgnh [ 0 ] = ( 0.0 - rtB . ampf4zyrnm [ 0 ] )
- rtB . gvgfzrqlin [ 0 ] ; rtB . gvgfzrqlin [ 1 ] = rtB . f12kiybc2b * rtB .
h1payfm0hu [ 1 ] ; rtB . owz1l3bgnh [ 1 ] = ( 0.0 - rtB . ampf4zyrnm [ 1 ] )
- rtB . gvgfzrqlin [ 1 ] ; rtB . gvgfzrqlin [ 2 ] = rtB . f12kiybc2b * rtB .
h1payfm0hu [ 2 ] ; rtB . owz1l3bgnh [ 2 ] = ( 0.0 - rtB . ampf4zyrnm [ 2 ] )
- rtB . gvgfzrqlin [ 2 ] ; comkstkxrf = ( rtB . jrvlwmnotm [ 0 ] * rtB .
jrvlwmnotm [ 0 ] + rtB . jrvlwmnotm [ 1 ] * rtB . jrvlwmnotm [ 1 ] ) + rtB .
jrvlwmnotm [ 2 ] * rtB . jrvlwmnotm [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( rtDW . np5lb5q3v4 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; rtDW . np5lb5q3v4 = 0 ; } ogfmxqoi1y = muDoubleScalarSqrt (
comkstkxrf ) ; } else if ( comkstkxrf < 0.0 ) { ogfmxqoi1y = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( comkstkxrf ) ) ; rtDW . np5lb5q3v4 =
1 ; } else { ogfmxqoi1y = muDoubleScalarSqrt ( comkstkxrf ) ; } rtB .
ikrnpfioht = rtP . Gain_Gain_gqfasdb0wy * muDoubleScalarPower ( ogfmxqoi1y ,
rtP . Constant_Value_cn5rxzkzqi ) ; rtB . b1ehm1vv5r [ 0 ] = rtB . owz1l3bgnh
[ 0 ] * rtB . ikrnpfioht ; rtB . b1ehm1vv5r [ 1 ] = rtB . owz1l3bgnh [ 1 ] *
rtB . ikrnpfioht ; rtB . b1ehm1vv5r [ 2 ] = rtB . owz1l3bgnh [ 2 ] * rtB .
ikrnpfioht ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . ly0si1rewp [ vcol
] = 0.0 ; rtB . ly0si1rewp [ vcol ] += rtB . g5cvdi42sk [ vcol ] * rtB .
b1ehm1vv5r [ 0 ] ; rtB . ly0si1rewp [ vcol ] += rtB . g5cvdi42sk [ vcol + 3 ]
* rtB . b1ehm1vv5r [ 1 ] ; rtB . ly0si1rewp [ vcol ] += rtB . g5cvdi42sk [
vcol + 6 ] * rtB . b1ehm1vv5r [ 2 ] ; } rtB . hhmibzra1i [ 0 ] = rtP .
spacecraft . resDip [ 1 ] * rtB . ly0si1rewp [ 2 ] ; rtB . hhmibzra1i [ 1 ] =
rtP . spacecraft . resDip [ 2 ] * rtB . ly0si1rewp [ 0 ] ; rtB . hhmibzra1i [
2 ] = rtP . spacecraft . resDip [ 0 ] * rtB . ly0si1rewp [ 1 ] ; rtB .
hhmibzra1i [ 3 ] = rtP . spacecraft . resDip [ 2 ] * rtB . ly0si1rewp [ 1 ] ;
rtB . hhmibzra1i [ 4 ] = rtP . spacecraft . resDip [ 0 ] * rtB . ly0si1rewp [
2 ] ; rtB . hhmibzra1i [ 5 ] = rtP . spacecraft . resDip [ 1 ] * rtB .
ly0si1rewp [ 0 ] ; comkstkxrf = muDoubleScalarCos ( rtB . dkn2uoguzp ) ;
ogfmxqoi1y = muDoubleScalarSin ( rtB . dkn2uoguzp ) ; rtB . ngvjzsm1u4 [ 0 ]
= comkstkxrf ; rtB . ngvjzsm1u4 [ 1 ] = ogfmxqoi1y ; rtB . ngvjzsm1u4 [ 2 ] =
rtP . Constant_Value_ehamsmfwks ; rtB . ki2f0jghgn = rtP .
Gain_Gain_ovchahezfk * ogfmxqoi1y ; rtB . ngvjzsm1u4 [ 3 ] = rtB . ki2f0jghgn
; rtB . ngvjzsm1u4 [ 4 ] = comkstkxrf ; rtB . ngvjzsm1u4 [ 5 ] = rtP .
Constant_Value_ehamsmfwks ; rtB . f5kn4yvyj5 [ 0 ] = rtB . hhmibzra1i [ 0 ] -
rtB . hhmibzra1i [ 3 ] ; rtB . ngvjzsm1u4 [ 6 ] = rtP .
Constant1_Value_g2fcd0r1ax [ 0 ] ; rtB . f5kn4yvyj5 [ 1 ] = rtB . hhmibzra1i
[ 1 ] - rtB . hhmibzra1i [ 4 ] ; rtB . ngvjzsm1u4 [ 7 ] = rtP .
Constant1_Value_g2fcd0r1ax [ 1 ] ; rtB . f5kn4yvyj5 [ 2 ] = rtB . hhmibzra1i
[ 2 ] - rtB . hhmibzra1i [ 5 ] ; rtB . ngvjzsm1u4 [ 8 ] = rtP .
Constant1_Value_g2fcd0r1ax [ 2 ] ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) {
for ( i = 0 ; i < 3 ; i ++ ) { rtB . jjc4dlmsrz [ vcol + 3 * i ] = 0.0 ; rtB
. jjc4dlmsrz [ vcol + 3 * i ] += rtP . R1i_Value [ 3 * i ] * rtB . ngvjzsm1u4
[ vcol ] ; rtB . jjc4dlmsrz [ vcol + 3 * i ] += rtP . R1i_Value [ 3 * i + 1 ]
* rtB . ngvjzsm1u4 [ vcol + 3 ] ; rtB . jjc4dlmsrz [ vcol + 3 * i ] += rtP .
R1i_Value [ 3 * i + 2 ] * rtB . ngvjzsm1u4 [ vcol + 6 ] ; rtB . byhq4mkmdc [
i + 3 * vcol ] = rtB . jjc4dlmsrz [ 3 * i + vcol ] ; } } ogfmxqoi1y = 3.0 *
rtP . constants . mu ; comkstkxrf = 0.0 ; for ( vcol = 0 ; vcol < 3 ; vcol ++
) { rtB . jgcbfw45zw [ vcol ] = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) { rtB .
ipnql3q2rt [ vcol + 3 * i ] = 0.0 ; rtB . ipnql3q2rt [ vcol + 3 * i ] += rtB
. byhq4mkmdc [ 3 * i ] * rtB . g5cvdi42sk [ vcol ] ; rtB . ipnql3q2rt [ vcol
+ 3 * i ] += rtB . byhq4mkmdc [ 3 * i + 1 ] * rtB . g5cvdi42sk [ vcol + 3 ] ;
rtB . ipnql3q2rt [ vcol + 3 * i ] += rtB . byhq4mkmdc [ 3 * i + 2 ] * rtB .
g5cvdi42sk [ vcol + 6 ] ; rtB . jgcbfw45zw [ vcol ] += rtB . ipnql3q2rt [ 3 *
i + vcol ] * rtP . Constant_Value_mvnthzwinm [ i ] ; } comkstkxrf += rtB .
jrvlwmnotm [ vcol ] * rtB . jrvlwmnotm [ vcol ] ; } rtB . erakm5mnxc = rtB .
jgcbfw45zw [ 1 ] * rtB . jgcbfw45zw [ 2 ] ; rtB . msmw2tnin3 = rtP .
Gain_Gain_avjrptcnae * rtB . erakm5mnxc ; rtB . djambayzpx = rtB . jgcbfw45zw
[ 0 ] * rtB . jgcbfw45zw [ 2 ] ; rtB . ocl30sbl44 = rtP .
Gain1_Gain_map4aqbp2o * rtB . djambayzpx ; rtB . bhjrv33qp1 = rtB .
jgcbfw45zw [ 0 ] * rtB . jgcbfw45zw [ 1 ] ; rtB . kedypbphyn = rtP .
Gain2_Gain_pf4c2t2zdn * rtB . bhjrv33qp1 ; rtB . gz5vsnzo3g [ 0 ] =
ogfmxqoi1y * rtB . msmw2tnin3 ; rtB . gz5vsnzo3g [ 1 ] = ogfmxqoi1y * rtB .
ocl30sbl44 ; rtB . gz5vsnzo3g [ 2 ] = ogfmxqoi1y * rtB . kedypbphyn ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . gw5aebdpal != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . gw5aebdpal = 0 ;
} ogfmxqoi1y = muDoubleScalarSqrt ( comkstkxrf ) ; } else if ( comkstkxrf <
0.0 ) { ogfmxqoi1y = - muDoubleScalarSqrt ( muDoubleScalarAbs ( comkstkxrf )
) ; rtDW . gw5aebdpal = 1 ; } else { ogfmxqoi1y = muDoubleScalarSqrt (
comkstkxrf ) ; } comkstkxrf = muDoubleScalarPower ( ogfmxqoi1y , rtP .
Constant_Value_bbkwb0ia13 ) ; rtB . ghebyhkfa1 = rtP . Gain1_Gain_lnkn1c2sqc
* hyjqkh21bx ; rtB . ihzskco0h2 = hxx315qf4f + rtP . orbit . e ; rtB .
eml13puwhm [ 0 ] = rtB . iyr0pt2wao * rtB . ghebyhkfa1 ; rtB . eml13puwhm [ 1
] = rtB . iyr0pt2wao * rtB . ihzskco0h2 ; rtB . eml13puwhm [ 2 ] = rtB .
iyr0pt2wao * rtP . Constant_Value_czomgcmo5z ; for ( i = 0 ; i < 3 ; i ++ ) {
rtB . gggciddgh2 [ i ] = rtB . gz5vsnzo3g [ i ] * comkstkxrf ; rtB .
fbqtfsiq0n [ i ] = 0.0 ; rtB . fbqtfsiq0n [ i ] += rtB . k0ctxkfhfc [ i ] *
rtB . eml13puwhm [ 0 ] ; rtB . fbqtfsiq0n [ i ] += rtB . k0ctxkfhfc [ i + 3 ]
* rtB . eml13puwhm [ 1 ] ; rtB . fbqtfsiq0n [ i ] += rtB . k0ctxkfhfc [ i + 6
] * rtB . eml13puwhm [ 2 ] ; } itkqxigoel [ 0 ] = 7.292115E-5 * rtB .
jrvlwmnotm [ 1 ] + rtB . fbqtfsiq0n [ 0 ] ; itkqxigoel [ 1 ] = rtB .
fbqtfsiq0n [ 1 ] - 7.292115E-5 * rtB . jrvlwmnotm [ 0 ] ; itkqxigoel [ 2 ] =
rtB . fbqtfsiq0n [ 2 ] ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { nlblustwwf [
vcol ] = rtB . g5cvdi42sk [ vcol + 6 ] * itkqxigoel [ 2 ] + ( rtB .
g5cvdi42sk [ vcol + 3 ] * itkqxigoel [ 1 ] + rtB . g5cvdi42sk [ vcol ] *
itkqxigoel [ 0 ] ) ; } hxx315qf4f = lk5bzskpou ( itkqxigoel ) ; hyjqkh21bx =
lk5bzskpou ( nlblustwwf ) ; hxx315qf4f *= hxx315qf4f ; ogfmxqoi1y =
nlblustwwf [ 0 ] / hyjqkh21bx ; itkqxigoel [ 0 ] = - 0.5 * rtP . constants .
rho * 2.2 * hxx315qf4f * ogfmxqoi1y ; n_b [ 0 ] = 0.0 ; nlblustwwf [ 0 ] =
ogfmxqoi1y ; ogfmxqoi1y = nlblustwwf [ 1 ] / hyjqkh21bx ; itkqxigoel [ 1 ] =
- 0.5 * rtP . constants . rho * 2.2 * hxx315qf4f * ogfmxqoi1y ; n_b [ 1 ] =
0.0 ; nlblustwwf [ 1 ] = ogfmxqoi1y ; ogfmxqoi1y = nlblustwwf [ 2 ] /
hyjqkh21bx ; itkqxigoel [ 2 ] = - 0.5 * rtP . constants . rho * 2.2 *
hxx315qf4f * ogfmxqoi1y ; n_b [ 2 ] = 0.0 ; for ( i = 0 ; i < 3 ; i ++ ) {
hxx315qf4f = ( ( real_T ) n [ 3 * i + 1 ] * nlblustwwf [ 1 ] + ( real_T ) n [
3 * i ] * nlblustwwf [ 0 ] ) + ( real_T ) n [ 3 * i + 2 ] * ogfmxqoi1y ; if (
hxx315qf4f > 0.0 ) { hxx315qf4f *= A [ i ] ; s_bTemp [ 0 ] = itkqxigoel [ 0 ]
* hxx315qf4f ; s_bTemp [ 1 ] = itkqxigoel [ 1 ] * hxx315qf4f ; s_bTemp [ 2 ]
= itkqxigoel [ 2 ] * hxx315qf4f ; oombnprmul_p = n_b [ 0 ] ; hxx315qf4f = n_b
[ 1 ] ; hyjqkh21bx = n_b [ 2 ] ; n_b [ 0 ] = ( rSurf [ 3 * i + 1 ] * s_bTemp
[ 2 ] - rSurf [ 3 * i + 2 ] * s_bTemp [ 1 ] ) + oombnprmul_p ; n_b [ 1 ] = (
rSurf [ 3 * i + 2 ] * s_bTemp [ 0 ] - rSurf [ 3 * i ] * s_bTemp [ 2 ] ) +
hxx315qf4f ; n_b [ 2 ] = ( rSurf [ 3 * i ] * s_bTemp [ 1 ] - rSurf [ 3 * i +
1 ] * s_bTemp [ 0 ] ) + hyjqkh21bx ; } } rtB . occ2w24px3 [ 0 ] = ( ( rtB .
fwruiojfal [ 0 ] + rtB . f5kn4yvyj5 [ 0 ] ) + rtB . gggciddgh2 [ 0 ] ) + n_b
[ 0 ] ; rtB . occ2w24px3 [ 1 ] = ( ( rtB . fwruiojfal [ 1 ] + rtB .
f5kn4yvyj5 [ 1 ] ) + rtB . gggciddgh2 [ 1 ] ) + n_b [ 1 ] ; rtB . occ2w24px3
[ 2 ] = ( ( rtB . fwruiojfal [ 2 ] + rtB . f5kn4yvyj5 [ 2 ] ) + rtB .
gggciddgh2 [ 2 ] ) + n_b [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
dewrzol1sz ( & a , 1 ) ; if ( rtB . fxtfkkj240 ) { hxx315qf4f = 1.0 / rtP .
sensors . st . sigma ; vcol = a -> size [ 0 ] ; a -> size [ 0 ] = ( int32_T )
( rtP . sensors . st . nStars - 1.0 ) + 1 ; n45xqohovf ( a , vcol ) ; a ->
data [ 0 ] = 1.0 / rtP . sensors . ss . sigma ; i = ( int32_T ) ( rtP .
sensors . st . nStars - 1.0 ) ; for ( vcol = 0 ; vcol < i ; vcol ++ ) { a ->
data [ vcol + 1 ] = hxx315qf4f ; } } else { hxx315qf4f = 1.0 / rtP . sensors
. st . sigma ; vcol = a -> size [ 0 ] ; a -> size [ 0 ] = ( int32_T ) rtP .
sensors . st . nStars ; n45xqohovf ( a , vcol ) ; i = ( int32_T ) rtP .
sensors . st . nStars ; for ( vcol = 0 ; vcol < i ; vcol ++ ) { a -> data [
vcol ] = hxx315qf4f ; } } if ( a -> size [ 0 ] == 0 ) { hxx315qf4f = 0.0 ; }
else { hxx315qf4f = a -> data [ 0 ] ; for ( b_k = 2 ; b_k <= a -> size [ 0 ]
; b_k ++ ) { hxx315qf4f += a -> data [ b_k - 1 ] ; } } vcol = a -> size [ 0 ]
; n45xqohovf ( a , vcol ) ; i = a -> size [ 0 ] ; for ( vcol = 0 ; vcol < i ;
vcol ++ ) { a -> data [ vcol ] /= hxx315qf4f ; } memset ( & A_ns [ 0 ] , 0 ,
9U * sizeof ( real_T ) ) ; for ( i = 0 ; i < 4 ; i ++ ) { hxx315qf4f = a ->
data [ i ] ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { A_ns [ 3 * vcol ] += rtB
. ptsg4njrmr [ 3 * i ] * hxx315qf4f * rtB . o4dj4py0uf [ 3 * i + vcol ] ;
A_ns [ 3 * vcol + 1 ] += rtB . ptsg4njrmr [ 3 * i + 1 ] * hxx315qf4f * rtB .
o4dj4py0uf [ 3 * i + vcol ] ; A_ns [ 3 * vcol + 2 ] += rtB . ptsg4njrmr [ 3 *
i + 2 ] * hxx315qf4f * rtB . o4dj4py0uf [ 3 * i + vcol ] ; } } kdnloskd3o ( &
a ) ; itkqxigoel [ 0 ] = A_ns [ 7 ] - A_ns [ 5 ] ; itkqxigoel [ 1 ] = A_ns [
2 ] - A_ns [ 6 ] ; itkqxigoel [ 2 ] = A_ns [ 3 ] - A_ns [ 1 ] ; hxx315qf4f =
( A_ns [ 0 ] + A_ns [ 4 ] ) + A_ns [ 8 ] ; for ( vcol = 0 ; vcol < 3 ; vcol
++ ) { oombnprmul_p = itkqxigoel [ vcol ] ; K [ vcol << 2 ] = ( A_ns [ 3 *
vcol ] + A_ns [ vcol ] ) - ( real_T ) b_b [ 3 * vcol ] * hxx315qf4f ; K [ (
vcol << 2 ) + 1 ] = ( A_ns [ 3 * vcol + 1 ] + A_ns [ vcol + 3 ] ) - ( real_T
) b_b [ 3 * vcol + 1 ] * hxx315qf4f ; K [ ( vcol << 2 ) + 2 ] = ( A_ns [ 3 *
vcol + 2 ] + A_ns [ vcol + 6 ] ) - ( real_T ) b_b [ 3 * vcol + 2 ] *
hxx315qf4f ; K [ vcol + 12 ] = oombnprmul_p ; K [ ( vcol << 2 ) + 3 ] =
oombnprmul_p ; } K [ 15 ] = hxx315qf4f ; if ( fuzcbjylqn ( K ) ) { for ( vcol
= 0 ; vcol < 16 ; vcol ++ ) { V [ vcol ] . re = ( rtNaN ) ; V [ vcol ] . im =
0.0 ; } D [ 0 ] . re = ( rtNaN ) ; D [ 0 ] . im = 0.0 ; D [ 5 ] . re = (
rtNaN ) ; D [ 5 ] . im = 0.0 ; D [ 10 ] . re = ( rtNaN ) ; D [ 10 ] . im =
0.0 ; D [ 15 ] . re = ( rtNaN ) ; D [ 15 ] . im = 0.0 ; } else { p = true ; i
= 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( i < 4 ) ) { b_k = 0 ; do {
exitg1 = 0 ; if ( b_k <= i ) { if ( ! ( K [ ( i << 2 ) + b_k ] == K [ ( b_k
<< 2 ) + i ] ) ) { p = false ; exitg1 = 1 ; } else { b_k ++ ; } } else { i ++
; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true
; } } if ( p ) { kpvvlrsfk4 ( K , b_V , b_D ) ; for ( vcol = 0 ; vcol < 16 ;
vcol ++ ) { V [ vcol ] . re = b_V [ vcol ] ; V [ vcol ] . im = 0.0 ; D [ vcol
] . re = b_D [ vcol ] ; D [ vcol ] . im = 0.0 ; } } else { jw0x3wzeuh ( K , V
, D ) ; } } i = - 1 ; ex_re = D [ 0 ] . re ; ex_im = D [ 0 ] . im ; if (
muDoubleScalarIsNaN ( D [ 5 ] . re ) || muDoubleScalarIsNaN ( D [ 5 ] . im )
) { p = false ; } else if ( muDoubleScalarIsNaN ( D [ 0 ] . re ) ||
muDoubleScalarIsNaN ( D [ 0 ] . im ) ) { p = true ; } else { if ( (
muDoubleScalarAbs ( D [ 0 ] . re ) > 8.9884656743115785E+307 ) || (
muDoubleScalarAbs ( D [ 0 ] . im ) > 8.9884656743115785E+307 ) ) { p = true ;
} else { p = false ; } if ( ( muDoubleScalarAbs ( D [ 5 ] . re ) >
8.9884656743115785E+307 ) || ( muDoubleScalarAbs ( D [ 5 ] . im ) >
8.9884656743115785E+307 ) ) { SCALEB = true ; } else { SCALEB = false ; } if
( p || SCALEB ) { hxx315qf4f = muDoubleScalarHypot ( D [ 0 ] . re / 2.0 , D [
0 ] . im / 2.0 ) ; hyjqkh21bx = muDoubleScalarHypot ( D [ 5 ] . re / 2.0 , D
[ 5 ] . im / 2.0 ) ; } else { hxx315qf4f = muDoubleScalarHypot ( D [ 0 ] . re
, D [ 0 ] . im ) ; hyjqkh21bx = muDoubleScalarHypot ( D [ 5 ] . re , D [ 5 ]
. im ) ; } if ( jd04qfjomk ( hxx315qf4f , hyjqkh21bx ) ) { comkstkxrf =
muDoubleScalarAbs ( D [ 0 ] . re ) ; hyjqkh21bx = muDoubleScalarAbs ( D [ 0 ]
. im ) ; ogfmxqoi1y = muDoubleScalarAbs ( D [ 5 ] . re ) ; hxx315qf4f =
muDoubleScalarAbs ( D [ 5 ] . im ) ; if ( comkstkxrf > hyjqkh21bx ) {
oombnprmul_p = comkstkxrf ; comkstkxrf = hyjqkh21bx ; } else { oombnprmul_p =
hyjqkh21bx ; } if ( ogfmxqoi1y > hxx315qf4f ) { adu5x2vfux = ogfmxqoi1y ;
ogfmxqoi1y = hxx315qf4f ; } else { adu5x2vfux = hxx315qf4f ; } if (
oombnprmul_p > adu5x2vfux ) { if ( comkstkxrf < ogfmxqoi1y ) { hxx315qf4f =
oombnprmul_p - adu5x2vfux ; hyjqkh21bx = ( comkstkxrf / 2.0 + ogfmxqoi1y /
2.0 ) / ( oombnprmul_p / 2.0 + adu5x2vfux / 2.0 ) * ( ogfmxqoi1y - comkstkxrf
) ; } else { hxx315qf4f = oombnprmul_p ; hyjqkh21bx = adu5x2vfux ; } } else
if ( oombnprmul_p < adu5x2vfux ) { if ( comkstkxrf > ogfmxqoi1y ) {
hyjqkh21bx = adu5x2vfux - oombnprmul_p ; hxx315qf4f = ( comkstkxrf / 2.0 +
ogfmxqoi1y / 2.0 ) / ( oombnprmul_p / 2.0 + adu5x2vfux / 2.0 ) * ( comkstkxrf
- ogfmxqoi1y ) ; } else { hxx315qf4f = oombnprmul_p ; hyjqkh21bx = adu5x2vfux
; } } else { hxx315qf4f = comkstkxrf ; hyjqkh21bx = ogfmxqoi1y ; } if (
jd04qfjomk ( hxx315qf4f , hyjqkh21bx ) ) { hxx315qf4f = muDoubleScalarAtan2 (
D [ 0 ] . im , D [ 0 ] . re ) ; hyjqkh21bx = muDoubleScalarAtan2 ( D [ 5 ] .
im , D [ 5 ] . re ) ; if ( jd04qfjomk ( hxx315qf4f , hyjqkh21bx ) ) {
comkstkxrf = D [ 0 ] . re ; hyjqkh21bx = D [ 5 ] . re ; if ( hxx315qf4f >
0.78539816339744828 ) { if ( hxx315qf4f > 2.3561944901923448 ) { comkstkxrf =
- D [ 0 ] . im ; hyjqkh21bx = - D [ 5 ] . im ; } else { comkstkxrf = - D [ 0
] . re ; hyjqkh21bx = - D [ 5 ] . re ; } } else if ( hxx315qf4f > -
0.78539816339744828 ) { comkstkxrf = D [ 0 ] . im ; hyjqkh21bx = D [ 5 ] . im
; } else { if ( ! ( hxx315qf4f > - 2.3561944901923448 ) ) { comkstkxrf = - D
[ 0 ] . im ; hyjqkh21bx = - D [ 5 ] . im ; } } hxx315qf4f = comkstkxrf ; if (
jd04qfjomk ( comkstkxrf , hyjqkh21bx ) ) { hxx315qf4f = 0.0 ; hyjqkh21bx =
0.0 ; } } } } p = ( hxx315qf4f < hyjqkh21bx ) ; } if ( p ) { ex_re = D [ 5 ]
. re ; ex_im = D [ 5 ] . im ; i = 0 ; } if ( muDoubleScalarIsNaN ( D [ 10 ] .
re ) || muDoubleScalarIsNaN ( D [ 10 ] . im ) ) { p = false ; } else if (
muDoubleScalarIsNaN ( ex_re ) || muDoubleScalarIsNaN ( ex_im ) ) { p = true ;
} else { if ( ( muDoubleScalarAbs ( ex_re ) > 8.9884656743115785E+307 ) || (
muDoubleScalarAbs ( ex_im ) > 8.9884656743115785E+307 ) ) { p = true ; } else
{ p = false ; } if ( ( muDoubleScalarAbs ( D [ 10 ] . re ) >
8.9884656743115785E+307 ) || ( muDoubleScalarAbs ( D [ 10 ] . im ) >
8.9884656743115785E+307 ) ) { SCALEB = true ; } else { SCALEB = false ; } if
( p || SCALEB ) { hxx315qf4f = muDoubleScalarHypot ( ex_re / 2.0 , ex_im /
2.0 ) ; hyjqkh21bx = muDoubleScalarHypot ( D [ 10 ] . re / 2.0 , D [ 10 ] .
im / 2.0 ) ; } else { hxx315qf4f = muDoubleScalarHypot ( ex_re , ex_im ) ;
hyjqkh21bx = muDoubleScalarHypot ( D [ 10 ] . re , D [ 10 ] . im ) ; } if (
jd04qfjomk ( hxx315qf4f , hyjqkh21bx ) ) { comkstkxrf = muDoubleScalarAbs (
ex_re ) ; hyjqkh21bx = muDoubleScalarAbs ( ex_im ) ; ogfmxqoi1y =
muDoubleScalarAbs ( D [ 10 ] . re ) ; hxx315qf4f = muDoubleScalarAbs ( D [ 10
] . im ) ; if ( comkstkxrf > hyjqkh21bx ) { oombnprmul_p = comkstkxrf ;
comkstkxrf = hyjqkh21bx ; } else { oombnprmul_p = hyjqkh21bx ; } if (
ogfmxqoi1y > hxx315qf4f ) { adu5x2vfux = ogfmxqoi1y ; ogfmxqoi1y = hxx315qf4f
; } else { adu5x2vfux = hxx315qf4f ; } if ( oombnprmul_p > adu5x2vfux ) { if
( comkstkxrf < ogfmxqoi1y ) { hxx315qf4f = oombnprmul_p - adu5x2vfux ;
hyjqkh21bx = ( comkstkxrf / 2.0 + ogfmxqoi1y / 2.0 ) / ( oombnprmul_p / 2.0 +
adu5x2vfux / 2.0 ) * ( ogfmxqoi1y - comkstkxrf ) ; } else { hxx315qf4f =
oombnprmul_p ; hyjqkh21bx = adu5x2vfux ; } } else if ( oombnprmul_p <
adu5x2vfux ) { if ( comkstkxrf > ogfmxqoi1y ) { hyjqkh21bx = adu5x2vfux -
oombnprmul_p ; hxx315qf4f = ( comkstkxrf / 2.0 + ogfmxqoi1y / 2.0 ) / (
oombnprmul_p / 2.0 + adu5x2vfux / 2.0 ) * ( comkstkxrf - ogfmxqoi1y ) ; }
else { hxx315qf4f = oombnprmul_p ; hyjqkh21bx = adu5x2vfux ; } } else {
hxx315qf4f = comkstkxrf ; hyjqkh21bx = ogfmxqoi1y ; } if ( jd04qfjomk (
hxx315qf4f , hyjqkh21bx ) ) { hxx315qf4f = muDoubleScalarAtan2 ( ex_im ,
ex_re ) ; hyjqkh21bx = muDoubleScalarAtan2 ( D [ 10 ] . im , D [ 10 ] . re )
; if ( jd04qfjomk ( hxx315qf4f , hyjqkh21bx ) ) { comkstkxrf = ex_re ;
hyjqkh21bx = D [ 10 ] . re ; if ( hxx315qf4f > 0.78539816339744828 ) { if (
hxx315qf4f > 2.3561944901923448 ) { comkstkxrf = - ex_im ; hyjqkh21bx = - D [
10 ] . im ; } else { comkstkxrf = - ex_re ; hyjqkh21bx = - D [ 10 ] . re ; }
} else if ( hxx315qf4f > - 0.78539816339744828 ) { comkstkxrf = ex_im ;
hyjqkh21bx = D [ 10 ] . im ; } else { if ( ! ( hxx315qf4f > -
2.3561944901923448 ) ) { comkstkxrf = - ex_im ; hyjqkh21bx = - D [ 10 ] . im
; } } hxx315qf4f = comkstkxrf ; if ( jd04qfjomk ( comkstkxrf , hyjqkh21bx ) )
{ hxx315qf4f = 0.0 ; hyjqkh21bx = 0.0 ; } } } } p = ( hxx315qf4f < hyjqkh21bx
) ; } if ( p ) { ex_re = D [ 10 ] . re ; ex_im = D [ 10 ] . im ; i = 1 ; } if
( muDoubleScalarIsNaN ( D [ 15 ] . re ) || muDoubleScalarIsNaN ( D [ 15 ] .
im ) ) { p = false ; } else if ( muDoubleScalarIsNaN ( ex_re ) ||
muDoubleScalarIsNaN ( ex_im ) ) { p = true ; } else { if ( (
muDoubleScalarAbs ( ex_re ) > 8.9884656743115785E+307 ) || (
muDoubleScalarAbs ( ex_im ) > 8.9884656743115785E+307 ) ) { p = true ; } else
{ p = false ; } if ( ( muDoubleScalarAbs ( D [ 15 ] . re ) >
8.9884656743115785E+307 ) || ( muDoubleScalarAbs ( D [ 15 ] . im ) >
8.9884656743115785E+307 ) ) { SCALEB = true ; } else { SCALEB = false ; } if
( p || SCALEB ) { hxx315qf4f = muDoubleScalarHypot ( ex_re / 2.0 , ex_im /
2.0 ) ; hyjqkh21bx = muDoubleScalarHypot ( D [ 15 ] . re / 2.0 , D [ 15 ] .
im / 2.0 ) ; } else { hxx315qf4f = muDoubleScalarHypot ( ex_re , ex_im ) ;
hyjqkh21bx = muDoubleScalarHypot ( D [ 15 ] . re , D [ 15 ] . im ) ; } if (
jd04qfjomk ( hxx315qf4f , hyjqkh21bx ) ) { comkstkxrf = muDoubleScalarAbs (
ex_re ) ; hyjqkh21bx = muDoubleScalarAbs ( ex_im ) ; ogfmxqoi1y =
muDoubleScalarAbs ( D [ 15 ] . re ) ; hxx315qf4f = muDoubleScalarAbs ( D [ 15
] . im ) ; if ( comkstkxrf > hyjqkh21bx ) { oombnprmul_p = comkstkxrf ;
comkstkxrf = hyjqkh21bx ; } else { oombnprmul_p = hyjqkh21bx ; } if (
ogfmxqoi1y > hxx315qf4f ) { adu5x2vfux = ogfmxqoi1y ; ogfmxqoi1y = hxx315qf4f
; } else { adu5x2vfux = hxx315qf4f ; } if ( oombnprmul_p > adu5x2vfux ) { if
( comkstkxrf < ogfmxqoi1y ) { hxx315qf4f = oombnprmul_p - adu5x2vfux ;
hyjqkh21bx = ( comkstkxrf / 2.0 + ogfmxqoi1y / 2.0 ) / ( oombnprmul_p / 2.0 +
adu5x2vfux / 2.0 ) * ( ogfmxqoi1y - comkstkxrf ) ; } else { hxx315qf4f =
oombnprmul_p ; hyjqkh21bx = adu5x2vfux ; } } else if ( oombnprmul_p <
adu5x2vfux ) { if ( comkstkxrf > ogfmxqoi1y ) { hyjqkh21bx = adu5x2vfux -
oombnprmul_p ; hxx315qf4f = ( comkstkxrf / 2.0 + ogfmxqoi1y / 2.0 ) / (
oombnprmul_p / 2.0 + adu5x2vfux / 2.0 ) * ( comkstkxrf - ogfmxqoi1y ) ; }
else { hxx315qf4f = oombnprmul_p ; hyjqkh21bx = adu5x2vfux ; } } else {
hxx315qf4f = comkstkxrf ; hyjqkh21bx = ogfmxqoi1y ; } if ( jd04qfjomk (
hxx315qf4f , hyjqkh21bx ) ) { hxx315qf4f = muDoubleScalarAtan2 ( ex_im ,
ex_re ) ; hyjqkh21bx = muDoubleScalarAtan2 ( D [ 15 ] . im , D [ 15 ] . re )
; if ( jd04qfjomk ( hxx315qf4f , hyjqkh21bx ) ) { comkstkxrf = ex_re ;
hyjqkh21bx = D [ 15 ] . re ; if ( hxx315qf4f > 0.78539816339744828 ) { if (
hxx315qf4f > 2.3561944901923448 ) { comkstkxrf = - ex_im ; hyjqkh21bx = - D [
15 ] . im ; } else { comkstkxrf = - ex_re ; hyjqkh21bx = - D [ 15 ] . re ; }
} else if ( hxx315qf4f > - 0.78539816339744828 ) { comkstkxrf = ex_im ;
hyjqkh21bx = D [ 15 ] . im ; } else { if ( ! ( hxx315qf4f > -
2.3561944901923448 ) ) { comkstkxrf = - ex_im ; hyjqkh21bx = - D [ 15 ] . im
; } } hxx315qf4f = comkstkxrf ; if ( jd04qfjomk ( comkstkxrf , hyjqkh21bx ) )
{ hxx315qf4f = 0.0 ; hyjqkh21bx = 0.0 ; } } } } p = ( hxx315qf4f < hyjqkh21bx
) ; } if ( p ) { i = 2 ; } rtB . mbfh3bqryb [ 0 ] = V [ ( i + 1 ) << 2 ] . re
; rtB . mbfh3bqryb [ 1 ] = V [ ( ( i + 1 ) << 2 ) + 1 ] . re ; rtB .
mbfh3bqryb [ 2 ] = V [ ( ( i + 1 ) << 2 ) + 2 ] . re ; rtB . mbfh3bqryb [ 3 ]
= V [ ( ( i + 1 ) << 2 ) + 3 ] . re ; if ( ( ( ( muDoubleScalarAbs ( rtB .
mbfh3bqryb [ 0 ] - rtDW . oib5citwht [ 0 ] ) > 0.1 ) + ( muDoubleScalarAbs (
rtB . mbfh3bqryb [ 1 ] - rtDW . oib5citwht [ 1 ] ) > 0.1 ) ) + (
muDoubleScalarAbs ( rtB . mbfh3bqryb [ 2 ] - rtDW . oib5citwht [ 2 ] ) > 0.1
) ) + ( muDoubleScalarAbs ( rtB . mbfh3bqryb [ 3 ] - rtDW . oib5citwht [ 3 ]
) > 0.1 ) != 0 ) { i = - 1 ; } else { i = 1 ; } hyjqkh21bx =
3.3121686421112381E-170 ; comkstkxrf = muDoubleScalarAbs ( rtB . mbfh3bqryb [
0 ] ) ; if ( comkstkxrf > 3.3121686421112381E-170 ) { hxx315qf4f = 1.0 ;
hyjqkh21bx = comkstkxrf ; } else { ogfmxqoi1y = comkstkxrf /
3.3121686421112381E-170 ; hxx315qf4f = ogfmxqoi1y * ogfmxqoi1y ; } comkstkxrf
= muDoubleScalarAbs ( rtB . mbfh3bqryb [ 1 ] ) ; if ( comkstkxrf > hyjqkh21bx
) { ogfmxqoi1y = hyjqkh21bx / comkstkxrf ; hxx315qf4f = hxx315qf4f *
ogfmxqoi1y * ogfmxqoi1y + 1.0 ; hyjqkh21bx = comkstkxrf ; } else { ogfmxqoi1y
= comkstkxrf / hyjqkh21bx ; hxx315qf4f += ogfmxqoi1y * ogfmxqoi1y ; }
comkstkxrf = muDoubleScalarAbs ( rtB . mbfh3bqryb [ 2 ] ) ; if ( comkstkxrf >
hyjqkh21bx ) { ogfmxqoi1y = hyjqkh21bx / comkstkxrf ; hxx315qf4f = hxx315qf4f
* ogfmxqoi1y * ogfmxqoi1y + 1.0 ; hyjqkh21bx = comkstkxrf ; } else {
ogfmxqoi1y = comkstkxrf / hyjqkh21bx ; hxx315qf4f += ogfmxqoi1y * ogfmxqoi1y
; } comkstkxrf = muDoubleScalarAbs ( rtB . mbfh3bqryb [ 3 ] ) ; if (
comkstkxrf > hyjqkh21bx ) { ogfmxqoi1y = hyjqkh21bx / comkstkxrf ; hxx315qf4f
= hxx315qf4f * ogfmxqoi1y * ogfmxqoi1y + 1.0 ; hyjqkh21bx = comkstkxrf ; }
else { ogfmxqoi1y = comkstkxrf / hyjqkh21bx ; hxx315qf4f += ogfmxqoi1y *
ogfmxqoi1y ; } hxx315qf4f = hyjqkh21bx * muDoubleScalarSqrt ( hxx315qf4f ) ;
rtB . mbfh3bqryb [ 0 ] = ( real_T ) i * rtB . mbfh3bqryb [ 0 ] / hxx315qf4f ;
rtB . mbfh3bqryb [ 1 ] = ( real_T ) i * rtB . mbfh3bqryb [ 1 ] / hxx315qf4f ;
rtB . mbfh3bqryb [ 2 ] = ( real_T ) i * rtB . mbfh3bqryb [ 2 ] / hxx315qf4f ;
rtB . mbfh3bqryb [ 3 ] = ( real_T ) i * rtB . mbfh3bqryb [ 3 ] / hxx315qf4f ;
oombnprmul_p = 0.0 ; A_ns [ 0 ] = rtB . mbfh3bqryb [ 3 ] * rtP .
Constant_Value_glwqw0xiai * rtP . Gain_Gain_jwng3jwdax ; A_ns [ 3 ] = rtP .
Gain_Gain_gzkwwfr5i5 * rtB . mbfh3bqryb [ 2 ] * rtB . mbfh3bqryb [ 3 ] * rtP
. Gain_Gain_jwng3jwdax ; A_ns [ 6 ] = rtB . mbfh3bqryb [ 3 ] * rtB .
mbfh3bqryb [ 1 ] * rtP . Gain_Gain_jwng3jwdax ; A_ns [ 1 ] = rtB . mbfh3bqryb
[ 3 ] * rtB . mbfh3bqryb [ 2 ] * rtP . Gain_Gain_jwng3jwdax ; A_ns [ 4 ] =
rtB . mbfh3bqryb [ 3 ] * rtP . Constant1_Value_j1hh5rgit4 * rtP .
Gain_Gain_jwng3jwdax ; A_ns [ 7 ] = rtP . Gain1_Gain_kdpq0ktuun * rtB .
mbfh3bqryb [ 0 ] * rtB . mbfh3bqryb [ 3 ] * rtP . Gain_Gain_jwng3jwdax ; A_ns
[ 2 ] = rtP . Gain2_Gain_irocmnpiyl * rtB . mbfh3bqryb [ 1 ] * rtB .
mbfh3bqryb [ 3 ] * rtP . Gain_Gain_jwng3jwdax ; A_ns [ 5 ] = rtB . mbfh3bqryb
[ 3 ] * rtB . mbfh3bqryb [ 0 ] * rtP . Gain_Gain_jwng3jwdax ; A_ns [ 8 ] =
rtB . mbfh3bqryb [ 3 ] * rtP . Constant2_Value * rtP . Gain_Gain_jwng3jwdax ;
for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { oombnprmul_p += rtB . mbfh3bqryb [
vcol ] * rtB . mbfh3bqryb [ vcol ] ; A_err [ 3 * vcol ] = rtB . mbfh3bqryb [
0 ] * rtB . mbfh3bqryb [ vcol ] ; A_err [ 3 * vcol + 1 ] = rtB . mbfh3bqryb [
1 ] * rtB . mbfh3bqryb [ vcol ] ; A_err [ 3 * vcol + 2 ] = rtB . mbfh3bqryb [
2 ] * rtB . mbfh3bqryb [ vcol ] ; } hxx315qf4f = rtB . mbfh3bqryb [ 3 ] * rtB
. mbfh3bqryb [ 3 ] - oombnprmul_p ; for ( vcol = 0 ; vcol < 9 ; vcol ++ ) {
rtB . jij0vqqcem [ vcol ] = ( rtP . Constant_Value_kwdixjtgki [ vcol ] *
hxx315qf4f - A_ns [ vcol ] ) + rtP . Gain1_Gain_pa3zraguct * A_err [ vcol ] ;
} Q [ 0 ] = rtB . mbfh3bqryb [ 3 ] ; Q [ 4 ] = - rtB . mbfh3bqryb [ 2 ] ; Q [
8 ] = rtB . mbfh3bqryb [ 1 ] ; Q [ 1 ] = rtB . mbfh3bqryb [ 2 ] ; Q [ 5 ] =
rtB . mbfh3bqryb [ 3 ] ; Q [ 9 ] = - rtB . mbfh3bqryb [ 0 ] ; Q [ 2 ] = - rtB
. mbfh3bqryb [ 1 ] ; Q [ 6 ] = rtB . mbfh3bqryb [ 0 ] ; Q [ 10 ] = rtB .
mbfh3bqryb [ 3 ] ; Q [ 3 ] = - rtB . mbfh3bqryb [ 0 ] ; Q [ 7 ] = - rtB .
mbfh3bqryb [ 1 ] ; Q [ 11 ] = - rtB . mbfh3bqryb [ 2 ] ; p = true ; for ( b_k
= 0 ; b_k < 12 ; b_k ++ ) { hxx315qf4f = Q [ b_k ] ; rtB . pphyhpy43h [ b_k ]
= 0.0 ; if ( p && ( ( ! muDoubleScalarIsInf ( hxx315qf4f ) ) && ( !
muDoubleScalarIsNaN ( hxx315qf4f ) ) ) ) { } else { p = false ; } } if ( ! p
) { for ( i = 0 ; i < 12 ; i ++ ) { rtB . pphyhpy43h [ i ] = ( rtNaN ) ; } }
else { enutwu4xz1 ( Q , U , itkqxigoel , A_ns ) ; hxx315qf4f =
muDoubleScalarAbs ( itkqxigoel [ 0 ] ) ; if ( ( ! muDoubleScalarIsInf (
hxx315qf4f ) ) && ( ! muDoubleScalarIsNaN ( hxx315qf4f ) ) ) { if (
hxx315qf4f <= 2.2250738585072014E-308 ) { hxx315qf4f = 4.94065645841247E-324
; } else { frexp ( hxx315qf4f , & r ) ; hxx315qf4f = ldexp ( 1.0 , r - 53 ) ;
} } else { hxx315qf4f = ( rtNaN ) ; } hxx315qf4f *= 4.0 ; r = - 1 ; i = 0 ;
while ( ( i < 3 ) && ( itkqxigoel [ i ] > hxx315qf4f ) ) { r ++ ; i ++ ; } if
( r + 1 > 0 ) { vcol = 0 ; for ( i = 0 ; i <= r ; i ++ ) { hxx315qf4f = 1.0 /
itkqxigoel [ i ] ; for ( b_k = vcol ; b_k < vcol + 3 ; b_k ++ ) { A_ns [ b_k
] *= hxx315qf4f ; } vcol += 3 ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB .
pphyhpy43h [ i ] = 0.0 ; } for ( i = 3 ; i < 6 ; i ++ ) { rtB . pphyhpy43h [
i ] = 0.0 ; } for ( i = 6 ; i < 9 ; i ++ ) { rtB . pphyhpy43h [ i ] = 0.0 ; }
for ( i = 9 ; i < 12 ; i ++ ) { rtB . pphyhpy43h [ i ] = 0.0 ; } vcol = - 1 ;
i = ( r << 2 ) + 1 ; for ( b_k = 1 ; b_k <= i ; b_k += 4 ) { ia = vcol ; for
( b_ic = 0 ; b_ic < 3 ; b_ic ++ ) { ia ++ ; rtB . pphyhpy43h [ b_ic ] += U [
b_k - 1 ] * A_ns [ ia ] ; } vcol += 3 ; } vcol = - 1 ; i = ( r << 2 ) + 2 ;
for ( b_k = 2 ; b_k <= i ; b_k += 4 ) { ia = vcol ; for ( b_ic = 3 ; b_ic < 6
; b_ic ++ ) { ia ++ ; rtB . pphyhpy43h [ b_ic ] += U [ b_k - 1 ] * A_ns [ ia
] ; } vcol += 3 ; } vcol = - 1 ; i = ( r << 2 ) + 3 ; for ( b_k = 3 ; b_k <=
i ; b_k += 4 ) { ia = vcol ; for ( b_ic = 6 ; b_ic < 9 ; b_ic ++ ) { ia ++ ;
rtB . pphyhpy43h [ b_ic ] += U [ b_k - 1 ] * A_ns [ ia ] ; } vcol += 3 ; }
vcol = - 1 ; i = ( r << 2 ) + 4 ; for ( b_k = 4 ; b_k <= i ; b_k += 4 ) { ia
= vcol ; for ( b_ic = 9 ; b_ic < 12 ; b_ic ++ ) { ia ++ ; rtB . pphyhpy43h [
b_ic ] += U [ b_k - 1 ] * A_ns [ ia ] ; } vcol += 3 ; } } } } rtB .
mub3xknkza [ 0 ] = rtX . avwtd3ss0s [ 0 ] ; rtB . k0l1swnxpw [ 0 ] = rtP .
Constant_Value_lroc4o2obf * rtB . mub3xknkza [ 0 ] ; rtB . mub3xknkza [ 1 ] =
rtX . avwtd3ss0s [ 1 ] ; rtB . k0l1swnxpw [ 1 ] = rtP .
Constant_Value_lroc4o2obf * rtB . mub3xknkza [ 1 ] ; rtB . mub3xknkza [ 2 ] =
rtX . avwtd3ss0s [ 2 ] ; rtB . k0l1swnxpw [ 2 ] = rtP .
Constant_Value_lroc4o2obf * rtB . mub3xknkza [ 2 ] ; rtB . mub3xknkza [ 3 ] =
rtX . avwtd3ss0s [ 3 ] ; rtB . k0l1swnxpw [ 3 ] = rtP .
Constant_Value_lroc4o2obf * rtB . mub3xknkza [ 3 ] ; if ( ( rtDW . jnd30r1ht2
>= ssGetT ( rtS ) ) && ( rtDW . dznssketm0 >= ssGetT ( rtS ) ) ) { rtB .
lyzah33zfx [ 0 ] = 0.0 ; rtB . lyzah33zfx [ 1 ] = 0.0 ; rtB . lyzah33zfx [ 2
] = 0.0 ; rtB . lyzah33zfx [ 3 ] = 0.0 ; } else { hxx315qf4f = rtDW .
jnd30r1ht2 ; lastU = & rtDW . a5uardskgm ; if ( rtDW . jnd30r1ht2 < rtDW .
dznssketm0 ) { if ( rtDW . dznssketm0 < ssGetT ( rtS ) ) { hxx315qf4f = rtDW
. dznssketm0 ; lastU = & rtDW . ajgdfi3jqy ; } } else { if ( rtDW .
jnd30r1ht2 >= ssGetT ( rtS ) ) { hxx315qf4f = rtDW . dznssketm0 ; lastU = &
rtDW . ajgdfi3jqy ; } } hxx315qf4f = ssGetT ( rtS ) - hxx315qf4f ; rtB .
lyzah33zfx [ 0 ] = ( rtB . k0l1swnxpw [ 0 ] - ( * lastU ) [ 0 ] ) /
hxx315qf4f ; rtB . lyzah33zfx [ 1 ] = ( rtB . k0l1swnxpw [ 1 ] - ( * lastU )
[ 1 ] ) / hxx315qf4f ; rtB . lyzah33zfx [ 2 ] = ( rtB . k0l1swnxpw [ 2 ] - (
* lastU ) [ 2 ] ) / hxx315qf4f ; rtB . lyzah33zfx [ 3 ] = ( rtB . k0l1swnxpw
[ 3 ] - ( * lastU ) [ 3 ] ) / hxx315qf4f ; } for ( i = 0 ; i < 3 ; i ++ ) {
rtB . nl3ehfqz2m [ i ] = 0.0 ; rtB . nl3ehfqz2m [ i ] += rtB . pphyhpy43h [ i
] * rtB . lyzah33zfx [ 0 ] ; rtB . nl3ehfqz2m [ i ] += rtB . pphyhpy43h [ i +
3 ] * rtB . lyzah33zfx [ 1 ] ; rtB . nl3ehfqz2m [ i ] += rtB . pphyhpy43h [ i
+ 6 ] * rtB . lyzah33zfx [ 2 ] ; rtB . nl3ehfqz2m [ i ] += rtB . pphyhpy43h [
i + 9 ] * rtB . lyzah33zfx [ 3 ] ; rtB . esrmchniol [ i ] = rtP .
Gain_Gain_gm0w0tp13r * rtB . nl3ehfqz2m [ i ] ; } if ( ssIsSampleHit ( rtS ,
2 , 0 ) ) { ezynvqd4w3 = rtDW . m1iqlgvxip ; kmz0sdznhu = rtDW . ox23uhpd5w ;
idvwmxj5se = rtDW . nbdm23k5hd ; lh5o5k3kus ( ezynvqd4w3 , kmz0sdznhu ,
idvwmxj5se , & rtB . hdco5djtlp ) ; hxx315qf4f = rtB . ly0si1rewp [ 0 ] +
rtDW . fiht0f3ctl [ 0 ] ; hyjqkh21bx = rtB . ly0si1rewp [ 1 ] + rtDW .
fiht0f3ctl [ 1 ] ; oombnprmul_p = rtB . ly0si1rewp [ 2 ] + rtDW . fiht0f3ctl
[ 2 ] ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . i34eoyi5rk [ vcol ] =
0.0 ; rtB . i34eoyi5rk [ vcol ] += rtB . hdco5djtlp . oowvbhbp1g [ vcol ] *
hxx315qf4f ; rtB . i34eoyi5rk [ vcol ] += rtB . hdco5djtlp . oowvbhbp1g [
vcol + 3 ] * hyjqkh21bx ; rtB . i34eoyi5rk [ vcol ] += rtB . hdco5djtlp .
oowvbhbp1g [ vcol + 6 ] * oombnprmul_p ; } } if ( ssIsSampleHit ( rtS , 1 , 0
) ) { } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { } if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { { if ( rtDW . dvzlnzlo0n . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . dvzlnzlo0n . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . esrmchniol [ 0 ] + 0 ) ; } } } if ( ssGetLogOutput ( rtS )
) { { double locTime = ssGetTaskTime ( rtS , 0 ) ; ; if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateLogVar ( ( LogVar * ) (
LogVar * ) ( rtDW . dggtzpbo31 . LoggedData ) , & rtB . ccl35kpxd5 [ 0 ] , 0
) ; } } } rtB . ls5eb5r25u [ 0 ] = rtB . mbfh3bqryb [ 0 ] - rtB . k0l1swnxpw
[ 0 ] ; rtB . ls5eb5r25u [ 1 ] = rtB . mbfh3bqryb [ 1 ] - rtB . k0l1swnxpw [
1 ] ; rtB . ls5eb5r25u [ 2 ] = rtB . mbfh3bqryb [ 2 ] - rtB . k0l1swnxpw [ 2
] ; rtB . ls5eb5r25u [ 3 ] = rtB . mbfh3bqryb [ 3 ] - rtB . k0l1swnxpw [ 3 ]
; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { rtB . b1p03woqms [ vcol ] = 0.0 ;
rtB . b1p03woqms [ vcol ] += rtP . spacecraft . I [ vcol ] * rtB . ccl35kpxd5
[ 0 ] ; rtB . b1p03woqms [ vcol ] += rtP . spacecraft . I [ vcol + 3 ] * rtB
. ccl35kpxd5 [ 1 ] ; rtB . b1p03woqms [ vcol ] += rtP . spacecraft . I [ vcol
+ 6 ] * rtB . ccl35kpxd5 [ 2 ] ; } rtB . j4ocfboarv [ 0 ] = rtB . b1p03woqms
[ 1 ] * rtB . ccl35kpxd5 [ 2 ] ; rtB . j4ocfboarv [ 1 ] = rtB . b1p03woqms [
2 ] * rtB . ccl35kpxd5 [ 0 ] ; rtB . j4ocfboarv [ 2 ] = rtB . b1p03woqms [ 0
] * rtB . ccl35kpxd5 [ 1 ] ; rtB . j4ocfboarv [ 3 ] = rtB . b1p03woqms [ 2 ]
* rtB . ccl35kpxd5 [ 1 ] ; rtB . j4ocfboarv [ 4 ] = rtB . b1p03woqms [ 0 ] *
rtB . ccl35kpxd5 [ 2 ] ; rtB . j4ocfboarv [ 5 ] = rtB . b1p03woqms [ 1 ] *
rtB . ccl35kpxd5 [ 0 ] ; rtB . akh33sy2jr [ 0 ] = rtB . j4ocfboarv [ 0 ] -
rtB . j4ocfboarv [ 3 ] ; rtB . akh33sy2jr [ 1 ] = rtB . j4ocfboarv [ 1 ] -
rtB . j4ocfboarv [ 4 ] ; rtB . akh33sy2jr [ 2 ] = rtB . j4ocfboarv [ 2 ] -
rtB . j4ocfboarv [ 5 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB .
divw1m0v52 = ( rtB . i34eoyi5rk [ 0 ] * rtB . i34eoyi5rk [ 0 ] + rtB .
i34eoyi5rk [ 1 ] * rtB . i34eoyi5rk [ 1 ] ) + rtB . i34eoyi5rk [ 2 ] * rtB .
i34eoyi5rk [ 2 ] ; } rtB . e44na3aipf [ 0 ] = rtB . doteuheq3d [ 1 ] * rtB .
i34eoyi5rk [ 2 ] ; rtB . e44na3aipf [ 1 ] = rtB . doteuheq3d [ 2 ] * rtB .
i34eoyi5rk [ 0 ] ; rtB . e44na3aipf [ 2 ] = rtB . doteuheq3d [ 0 ] * rtB .
i34eoyi5rk [ 1 ] ; rtB . e44na3aipf [ 3 ] = rtB . doteuheq3d [ 2 ] * rtB .
i34eoyi5rk [ 1 ] ; rtB . e44na3aipf [ 4 ] = rtB . doteuheq3d [ 0 ] * rtB .
i34eoyi5rk [ 2 ] ; rtB . e44na3aipf [ 5 ] = rtB . doteuheq3d [ 1 ] * rtB .
i34eoyi5rk [ 0 ] ; rtB . kzgofjzvij [ 0 ] = rtB . e44na3aipf [ 0 ] - rtB .
e44na3aipf [ 3 ] ; rtB . llxlnrqyk4 [ 0 ] = - rtP . control . detumbling . kb
* rtB . kzgofjzvij [ 0 ] ; rtB . kzgofjzvij [ 1 ] = rtB . e44na3aipf [ 1 ] -
rtB . e44na3aipf [ 4 ] ; rtB . llxlnrqyk4 [ 1 ] = - rtP . control .
detumbling . kb * rtB . kzgofjzvij [ 1 ] ; rtB . kzgofjzvij [ 2 ] = rtB .
e44na3aipf [ 2 ] - rtB . e44na3aipf [ 5 ] ; rtB . llxlnrqyk4 [ 2 ] = - rtP .
control . detumbling . kb * rtB . kzgofjzvij [ 2 ] ; rtB . ewv3nr05q4 [ 0 ] =
rtB . llxlnrqyk4 [ 1 ] * rtB . ly0si1rewp [ 2 ] ; rtB . ewv3nr05q4 [ 1 ] =
rtB . llxlnrqyk4 [ 2 ] * rtB . ly0si1rewp [ 0 ] ; rtB . ewv3nr05q4 [ 2 ] =
rtB . llxlnrqyk4 [ 0 ] * rtB . ly0si1rewp [ 1 ] ; rtB . ewv3nr05q4 [ 3 ] =
rtB . llxlnrqyk4 [ 2 ] * rtB . ly0si1rewp [ 1 ] ; rtB . ewv3nr05q4 [ 4 ] =
rtB . llxlnrqyk4 [ 0 ] * rtB . ly0si1rewp [ 2 ] ; rtB . ewv3nr05q4 [ 5 ] =
rtB . llxlnrqyk4 [ 1 ] * rtB . ly0si1rewp [ 0 ] ; rtB . jpmq223gsx [ 0 ] =
rtB . ewv3nr05q4 [ 0 ] - rtB . ewv3nr05q4 [ 3 ] ; rtB . bpjgux3ffo [ 0 ] =
rtB . jpmq223gsx [ 0 ] - rtB . doteuheq3d [ 3 ] ; rtB . jpmq223gsx [ 1 ] =
rtB . ewv3nr05q4 [ 1 ] - rtB . ewv3nr05q4 [ 4 ] ; rtB . bpjgux3ffo [ 1 ] =
rtB . jpmq223gsx [ 1 ] - rtB . doteuheq3d [ 4 ] ; rtB . jpmq223gsx [ 2 ] =
rtB . ewv3nr05q4 [ 2 ] - rtB . ewv3nr05q4 [ 5 ] ; rtB . bpjgux3ffo [ 2 ] =
rtB . jpmq223gsx [ 2 ] - rtB . doteuheq3d [ 5 ] ; rtB . fv2wqoyajh [ 0 ] =
rtB . i34eoyi5rk [ 1 ] * rtB . bpjgux3ffo [ 2 ] ; rtB . fv2wqoyajh [ 1 ] =
rtB . i34eoyi5rk [ 2 ] * rtB . bpjgux3ffo [ 0 ] ; rtB . fv2wqoyajh [ 2 ] =
rtB . i34eoyi5rk [ 0 ] * rtB . bpjgux3ffo [ 1 ] ; rtB . fv2wqoyajh [ 3 ] =
rtB . i34eoyi5rk [ 2 ] * rtB . bpjgux3ffo [ 1 ] ; rtB . fv2wqoyajh [ 4 ] =
rtB . i34eoyi5rk [ 0 ] * rtB . bpjgux3ffo [ 2 ] ; rtB . fv2wqoyajh [ 5 ] =
rtB . i34eoyi5rk [ 1 ] * rtB . bpjgux3ffo [ 0 ] ; rtB . jlfsrqkudk [ 0 ] =
rtB . fv2wqoyajh [ 0 ] - rtB . fv2wqoyajh [ 3 ] ; rtB . by3a5qvtdp [ 0 ] =
1.0 / rtB . divw1m0v52 * rtB . jlfsrqkudk [ 0 ] ; rtB . jlfsrqkudk [ 1 ] =
rtB . fv2wqoyajh [ 1 ] - rtB . fv2wqoyajh [ 4 ] ; rtB . by3a5qvtdp [ 1 ] =
1.0 / rtB . divw1m0v52 * rtB . jlfsrqkudk [ 1 ] ; rtB . jlfsrqkudk [ 2 ] =
rtB . fv2wqoyajh [ 2 ] - rtB . fv2wqoyajh [ 5 ] ; rtB . by3a5qvtdp [ 2 ] =
1.0 / rtB . divw1m0v52 * rtB . jlfsrqkudk [ 2 ] ; rtB . hmxb1je3zz [ 0 ] =
rtB . by3a5qvtdp [ 1 ] * rtB . ly0si1rewp [ 2 ] ; rtB . hmxb1je3zz [ 1 ] =
rtB . by3a5qvtdp [ 2 ] * rtB . ly0si1rewp [ 0 ] ; rtB . hmxb1je3zz [ 2 ] =
rtB . by3a5qvtdp [ 0 ] * rtB . ly0si1rewp [ 1 ] ; rtB . hmxb1je3zz [ 3 ] =
rtB . by3a5qvtdp [ 2 ] * rtB . ly0si1rewp [ 1 ] ; rtB . hmxb1je3zz [ 4 ] =
rtB . by3a5qvtdp [ 0 ] * rtB . ly0si1rewp [ 2 ] ; rtB . hmxb1je3zz [ 5 ] =
rtB . by3a5qvtdp [ 1 ] * rtB . ly0si1rewp [ 0 ] ; rtB . n1x5ppclcy [ 0 ] =
rtB . hmxb1je3zz [ 0 ] - rtB . hmxb1je3zz [ 3 ] ; rtB . fzw2g0qbjr [ 0 ] = (
rtB . akh33sy2jr [ 0 ] + rtB . occ2w24px3 [ 0 ] ) + rtB . n1x5ppclcy [ 0 ] ;
rtB . n1x5ppclcy [ 1 ] = rtB . hmxb1je3zz [ 1 ] - rtB . hmxb1je3zz [ 4 ] ;
rtB . fzw2g0qbjr [ 1 ] = ( rtB . akh33sy2jr [ 1 ] + rtB . occ2w24px3 [ 1 ] )
+ rtB . n1x5ppclcy [ 1 ] ; rtB . n1x5ppclcy [ 2 ] = rtB . hmxb1je3zz [ 2 ] -
rtB . hmxb1je3zz [ 5 ] ; rtB . fzw2g0qbjr [ 2 ] = ( rtB . akh33sy2jr [ 2 ] +
rtB . occ2w24px3 [ 2 ] ) + rtB . n1x5ppclcy [ 2 ] ; for ( vcol = 0 ; vcol < 3
; vcol ++ ) { rtB . mrapgtn004 [ vcol ] = 0.0 ; rtB . mrapgtn004 [ vcol ] +=
rtP . spacecraft . invI [ vcol ] * rtB . fzw2g0qbjr [ 0 ] ; rtB . mrapgtn004
[ vcol ] += rtP . spacecraft . invI [ vcol + 3 ] * rtB . fzw2g0qbjr [ 1 ] ;
rtB . mrapgtn004 [ vcol ] += rtP . spacecraft . invI [ vcol + 6 ] * rtB .
fzw2g0qbjr [ 2 ] ; } rtB . ai2d3xslus = rtP . Gain_Gain_lezygxxwam * rtB .
ccl35kpxd5 [ 1 ] ; rtB . luumjekahk = rtP . Gain1_Gain_k0h4blrnoh * rtB .
ccl35kpxd5 [ 2 ] ; rtB . mrr55pvfey = rtP . Gain2_Gain_at243adaqy * rtB .
ccl35kpxd5 [ 0 ] ; rtB . gyze4besoe = rtP . Gain3_Gain * rtB . ccl35kpxd5 [ 0
] ; rtB . aubs0aaxnm = rtP . Gain4_Gain * rtB . ccl35kpxd5 [ 1 ] ; rtB .
lhlpjwlhyc = rtP . Gain5_Gain * rtB . ccl35kpxd5 [ 2 ] ; rtB . ax5zdb10u1 [ 0
] = rtP . Constant_Value_ltm2gro5wx ; rtB . ax5zdb10u1 [ 4 ] = rtB .
ccl35kpxd5 [ 2 ] ; rtB . ax5zdb10u1 [ 8 ] = rtB . ai2d3xslus ; rtB .
ax5zdb10u1 [ 12 ] = rtB . ccl35kpxd5 [ 0 ] ; rtB . ax5zdb10u1 [ 1 ] = rtB .
luumjekahk ; rtB . ax5zdb10u1 [ 5 ] = rtP . Constant1_Value_bxxiag1xam ; rtB
. ax5zdb10u1 [ 9 ] = rtB . ccl35kpxd5 [ 0 ] ; rtB . ax5zdb10u1 [ 13 ] = rtB .
ccl35kpxd5 [ 1 ] ; rtB . ax5zdb10u1 [ 2 ] = rtB . ccl35kpxd5 [ 1 ] ; rtB .
ax5zdb10u1 [ 6 ] = rtB . mrr55pvfey ; rtB . ax5zdb10u1 [ 10 ] = rtP .
Constant2_Value_iqulksquef ; rtB . ax5zdb10u1 [ 14 ] = rtB . ccl35kpxd5 [ 2 ]
; rtB . ax5zdb10u1 [ 3 ] = rtB . gyze4besoe ; rtB . ax5zdb10u1 [ 7 ] = rtB .
aubs0aaxnm ; rtB . ax5zdb10u1 [ 11 ] = rtB . lhlpjwlhyc ; rtB . ax5zdb10u1 [
15 ] = rtP . Constant3_Value ; for ( i = 0 ; i < 4 ; i ++ ) { rtB .
bsfnxcv52h [ i ] = 0.0 ; rtB . bsfnxcv52h [ i ] += rtB . ax5zdb10u1 [ i ] *
rtB . hpxf3zbmys [ 0 ] ; rtB . bsfnxcv52h [ i ] += rtB . ax5zdb10u1 [ i + 4 ]
* rtB . hpxf3zbmys [ 1 ] ; rtB . bsfnxcv52h [ i ] += rtB . ax5zdb10u1 [ i + 8
] * rtB . hpxf3zbmys [ 2 ] ; rtB . bsfnxcv52h [ i ] += rtB . ax5zdb10u1 [ i +
12 ] * rtB . hpxf3zbmys [ 3 ] ; rtB . h4duglqebr [ i ] = rtP .
Gain_Gain_otymskpyft * rtB . bsfnxcv52h [ i ] ; } if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { { if ( rtDW . knwdemyl3a . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . knwdemyl3a . AQHandles , ssGetTaskTime ( rtS , 1 )
, ( char * ) & rtB . fwruiojfal [ 0 ] + 0 ) ; } } } rtB . nfnictfkhl = rtP .
orbit . e * muDoubleScalarCos ( rtB . dkn2uoguzp ) ; rtB . lobflauijs = rtP .
Constant1_Value_pn2byenzlv + rtB . nfnictfkhl ; rtB . dtvswhyfml = rtB .
lobflauijs * rtB . lobflauijs * rtP . Gain_Gain_awbyjvpvae ; rtB . cgheitfdhl
= rtP . Gain1_Gain_e4enzcc5io * rtB . dtvswhyfml ; for ( vcol = 0 ; vcol < 3
; vcol ++ ) { rtB . aebifcgewd [ vcol ] = 0.0 ; rtB . aebifcgewd [ vcol ] +=
rtP . spacecraft . I [ vcol ] * rtB . doteuheq3d [ 0 ] ; rtB . aebifcgewd [
vcol ] += rtP . spacecraft . I [ vcol + 3 ] * rtB . doteuheq3d [ 1 ] ; rtB .
aebifcgewd [ vcol ] += rtP . spacecraft . I [ vcol + 6 ] * rtB . doteuheq3d [
2 ] ; } rtB . n4bqi2lsjc [ 0 ] = rtB . aebifcgewd [ 1 ] * rtB . doteuheq3d [
2 ] ; rtB . n4bqi2lsjc [ 1 ] = rtB . aebifcgewd [ 2 ] * rtB . doteuheq3d [ 0
] ; rtB . n4bqi2lsjc [ 2 ] = rtB . aebifcgewd [ 0 ] * rtB . doteuheq3d [ 1 ]
; rtB . n4bqi2lsjc [ 3 ] = rtB . aebifcgewd [ 2 ] * rtB . doteuheq3d [ 1 ] ;
rtB . n4bqi2lsjc [ 4 ] = rtB . aebifcgewd [ 0 ] * rtB . doteuheq3d [ 2 ] ;
rtB . n4bqi2lsjc [ 5 ] = rtB . aebifcgewd [ 1 ] * rtB . doteuheq3d [ 0 ] ;
rtB . jdm3ln0pbp [ 0 ] = rtB . n4bqi2lsjc [ 0 ] - rtB . n4bqi2lsjc [ 3 ] ;
rtB . i3roev24mh [ 0 ] = ( rtB . jdm3ln0pbp [ 0 ] + rtB . n1x5ppclcy [ 0 ] )
+ rtB . doteuheq3d [ 3 ] ; rtB . l4zlvqrj2x [ 0 ] = rtB . esrmchniol [ 0 ] -
rtB . doteuheq3d [ 0 ] ; rtB . n12tuana1x [ 0 ] = rtB . esrmchniol [ 0 ] -
rtB . doteuheq3d [ 0 ] ; rtB . jdm3ln0pbp [ 1 ] = rtB . n4bqi2lsjc [ 1 ] -
rtB . n4bqi2lsjc [ 4 ] ; rtB . i3roev24mh [ 1 ] = ( rtB . jdm3ln0pbp [ 1 ] +
rtB . n1x5ppclcy [ 1 ] ) + rtB . doteuheq3d [ 4 ] ; rtB . l4zlvqrj2x [ 1 ] =
rtB . esrmchniol [ 1 ] - rtB . doteuheq3d [ 1 ] ; rtB . n12tuana1x [ 1 ] =
rtB . esrmchniol [ 1 ] - rtB . doteuheq3d [ 1 ] ; rtB . jdm3ln0pbp [ 2 ] =
rtB . n4bqi2lsjc [ 2 ] - rtB . n4bqi2lsjc [ 5 ] ; rtB . i3roev24mh [ 2 ] = (
rtB . jdm3ln0pbp [ 2 ] + rtB . n1x5ppclcy [ 2 ] ) + rtB . doteuheq3d [ 5 ] ;
rtB . l4zlvqrj2x [ 2 ] = rtB . esrmchniol [ 2 ] - rtB . doteuheq3d [ 2 ] ;
rtB . n12tuana1x [ 2 ] = rtB . esrmchniol [ 2 ] - rtB . doteuheq3d [ 2 ] ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . hbevfgwkvl [ i ] = 0.0 ; rtB .
hbevfgwkvl [ i ] += rtP . spacecraft . invI [ i ] * rtB . i3roev24mh [ 0 ] ;
rtB . hbevfgwkvl [ i ] += rtP . spacecraft . invI [ i + 3 ] * rtB .
i3roev24mh [ 1 ] ; rtB . hbevfgwkvl [ i ] += rtP . spacecraft . invI [ i + 6
] * rtB . i3roev24mh [ 2 ] ; rtB . hn4pi0rg32 [ i ] = rtP . observer . Lw *
rtB . l4zlvqrj2x [ i ] ; rtB . nk0vmookgp [ i ] = rtB . hbevfgwkvl [ i ] +
rtB . hn4pi0rg32 [ i ] ; rtB . klvp5ya35j [ i ] = rtP . observer . Ld * rtB .
n12tuana1x [ i ] ; rtB . bev5jpn51t [ i ] = rtB . nk0vmookgp [ i ] ; rtB .
bev5jpn51t [ i + 3 ] = rtB . klvp5ya35j [ i ] ; } if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { { if ( rtDW . pcvk10hfia . AQHandles && ssGetLogOutput ( rtS ) )
{ sdiWriteSignal ( rtDW . pcvk10hfia . AQHandles , ssGetTaskTime ( rtS , 1 )
, ( char * ) & d00pp20lcr + 0 ) ; } } { if ( rtDW . lrlfbto3oq . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . lrlfbto3oq . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . bpjgux3ffo [ 0 ] + 0 ) ; } } {
if ( rtDW . ehi0fzdome . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . ehi0fzdome . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . n1x5ppclcy [ 0 ] + 0 ) ; } } } UNUSED_PARAMETER ( tid ) ;
} void MdlOutputsTID4 ( int_T tid ) { real_T tmp [ 9 ] ; real_T apjytlz3iq [
3 ] ; real_T igxfj3yunm ; real_T kxifqrw4ux_idx_0 ; real_T kxifqrw4ux_idx_1 ;
real_T kxifqrw4ux_idx_2 ; int32_T i ; int32_T i_p ; rtB . iyr0pt2wao =
muDoubleScalarSqrt ( rtP . constants . mu ) * muDoubleScalarPower ( rtP .
Constant4_Value , rtP . Constant5_Value ) ; for ( i_p = 0 ; i_p < 3 ; i_p ++
) { for ( i = 0 ; i < 3 ; i ++ ) { tmp [ i + 3 * i_p ] = 0.0 ; tmp [ i + 3 *
i_p ] += rtP . R3OM_Value [ 3 * i_p ] * rtP . R1i_Value_inxxofskdo [ i ] ;
tmp [ i + 3 * i_p ] += rtP . R3OM_Value [ 3 * i_p + 1 ] * rtP .
R1i_Value_inxxofskdo [ i + 3 ] ; tmp [ i + 3 * i_p ] += rtP . R3OM_Value [ 3
* i_p + 2 ] * rtP . R1i_Value_inxxofskdo [ i + 6 ] ; } for ( i = 0 ; i < 3 ;
i ++ ) { rtB . k0ctxkfhfc [ i_p + 3 * i ] = 0.0 ; rtB . k0ctxkfhfc [ i_p + 3
* i ] += tmp [ 3 * i_p ] * rtP . R3om_Value [ i ] ; rtB . k0ctxkfhfc [ i_p +
3 * i ] += tmp [ 3 * i_p + 1 ] * rtP . R3om_Value [ i + 3 ] ; rtB .
k0ctxkfhfc [ i_p + 3 * i ] += tmp [ 3 * i_p + 2 ] * rtP . R3om_Value [ i + 6
] ; } apjytlz3iq [ i_p ] = rtP . sensors . ss . A_sb [ i_p ] * rtP . sensors
. ss . A_sb [ i_p ] ; } igxfj3yunm = ( apjytlz3iq [ 0 ] + apjytlz3iq [ 1 ] )
+ apjytlz3iq [ 2 ] ; if ( igxfj3yunm < 0.0 ) { igxfj3yunm = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( igxfj3yunm ) ) ; } else { igxfj3yunm
= muDoubleScalarSqrt ( igxfj3yunm ) ; } if ( igxfj3yunm > rtP .
NormalizeVector_maxzero_djt22qmkdo ) { kxifqrw4ux_idx_0 = rtP . sensors . ss
. A_sb [ 0 ] ; kxifqrw4ux_idx_1 = rtP . sensors . ss . A_sb [ 1 ] ;
kxifqrw4ux_idx_2 = rtP . sensors . ss . A_sb [ 2 ] ; } else {
kxifqrw4ux_idx_0 = rtP . sensors . ss . A_sb [ 0 ] * 0.0 ; kxifqrw4ux_idx_1 =
rtP . sensors . ss . A_sb [ 1 ] * 0.0 ; kxifqrw4ux_idx_2 = rtP . sensors . ss
. A_sb [ 2 ] * 0.0 ; igxfj3yunm = rtP . Constant_Value_cfysieuu3n ; } rtB .
kyywqu43ff [ 0 ] = kxifqrw4ux_idx_0 / igxfj3yunm ; rtB . kyywqu43ff [ 1 ] =
kxifqrw4ux_idx_1 / igxfj3yunm ; rtB . kyywqu43ff [ 2 ] = kxifqrw4ux_idx_2 /
igxfj3yunm ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
real_T ( * lastU ) [ 4 ] ; if ( rtDW . l3kas04ekx && ssIsSampleHit ( rtS , 3
, 0 ) ) { rtDW . j42igdadkb = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW .
ptzydd1mlx ) * rtP . RandomNumber_StdDev + rtP . RandomNumber_Mean ; rtDW .
jsxfhslkkg = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . lspg4frwvz ) * rtP .
RandomNumber1_StdDev + rtP . RandomNumber1_Mean ; rtDW . bkj2ve0mem =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . nwumsxn30c ) * rtP .
RandomNumber2_StdDev + rtP . RandomNumber2_Mean ; memcpy ( & rtDW .
m1del2va53 [ 0 ] , & rtB . my4i2jj4w0 [ 0 ] , 9U * sizeof ( real_T ) ) ; rtDW
. ejy4002h5a = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ixdsougept ) * rtP .
RandomNumber_StdDev_osyvkm1nbd + rtP . RandomNumber_Mean_j325veq3h4 ; rtDW .
ksjty3navg = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . of2m5ic0pn ) * rtP .
RandomNumber1_StdDev_pa113sydms + rtP . RandomNumber1_Mean_cglvlehpgy ; rtDW
. fhk413qchg = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . n3kp14atf0 ) * rtP .
RandomNumber2_StdDev_elwn2e223c + rtP . RandomNumber2_Mean_iqxzkifvrj ; } if
( rtDW . m4mnewhzec && ssIsSampleHit ( rtS , 3 , 0 ) ) { rtDW . ny2oqvzhck =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . g3mjvbs1uu ) * rtP .
RandomNumber_StdDev_a4g1wn2f41 + rtP . RandomNumber_Mean_alfcasepyf ; rtDW .
lkpte3brp0 = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . lfqvcenhcp ) * rtP .
RandomNumber1_StdDev_dwmuwurpze + rtP . RandomNumber1_Mean_fpegcxuncp ; rtDW
. i3dsukuteh = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . lzm03ewcyj ) * rtP .
RandomNumber2_StdDev_ptcl32fe50 + rtP . RandomNumber2_Mean_ozab14whuo ;
memcpy ( & rtDW . imdqbdwqjp [ 0 ] , & rtB . ijzytbew2v [ 0 ] , 12U * sizeof
( real_T ) ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . oib5citwht [ 0
] = rtB . mbfh3bqryb [ 0 ] ; rtDW . oib5citwht [ 1 ] = rtB . mbfh3bqryb [ 1 ]
; rtDW . oib5citwht [ 2 ] = rtB . mbfh3bqryb [ 2 ] ; rtDW . oib5citwht [ 3 ]
= rtB . mbfh3bqryb [ 3 ] ; } if ( rtDW . jnd30r1ht2 == ( rtInf ) ) { rtDW .
jnd30r1ht2 = ssGetT ( rtS ) ; lastU = & rtDW . a5uardskgm ; } else if ( rtDW
. dznssketm0 == ( rtInf ) ) { rtDW . dznssketm0 = ssGetT ( rtS ) ; lastU = &
rtDW . ajgdfi3jqy ; } else if ( rtDW . jnd30r1ht2 < rtDW . dznssketm0 ) {
rtDW . jnd30r1ht2 = ssGetT ( rtS ) ; lastU = & rtDW . a5uardskgm ; } else {
rtDW . dznssketm0 = ssGetT ( rtS ) ; lastU = & rtDW . ajgdfi3jqy ; } ( *
lastU ) [ 0 ] = rtB . k0l1swnxpw [ 0 ] ; ( * lastU ) [ 1 ] = rtB . k0l1swnxpw
[ 1 ] ; ( * lastU ) [ 2 ] = rtB . k0l1swnxpw [ 2 ] ; ( * lastU ) [ 3 ] = rtB
. k0l1swnxpw [ 3 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . m1iqlgvxip
= rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . i0jd5ov2aq ) * rtP .
RandomNumber_StdDev_ergspd3esj + rtP . RandomNumber_Mean_j21m43fvkk ; rtDW .
ox23uhpd5w = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ekvi0kaox0 ) * rtP .
RandomNumber1_StdDev_bfdu1ljjkh + rtP . RandomNumber1_Mean_folcsctbbm ; rtDW
. nbdm23k5hd = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . h13pii2unk ) * rtP .
RandomNumber2_StdDev_odwja0ie23 + rtP . RandomNumber2_Mean_atwzdqzftl ; rtDW
. fiht0f3ctl [ 0 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gdm2ge0ofw [ 0 ] )
* rtP . RandomNumber3_StdDev [ 0 ] + rtP . RandomNumber3_Mean ; rtDW .
fiht0f3ctl [ 1 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gdm2ge0ofw [ 1 ] ) *
rtP . RandomNumber3_StdDev [ 1 ] + rtP . RandomNumber3_Mean ; rtDW .
fiht0f3ctl [ 2 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . gdm2ge0ofw [ 2 ] ) *
rtP . RandomNumber3_StdDev [ 2 ] + rtP . RandomNumber3_Mean ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID4 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { XDot * _rtXdot ;
int32_T i ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> n3fcvgunz5
[ 0 ] = rtB . mrapgtn004 [ 0 ] ; _rtXdot -> n3fcvgunz5 [ 1 ] = rtB .
mrapgtn004 [ 1 ] ; _rtXdot -> n3fcvgunz5 [ 2 ] = rtB . mrapgtn004 [ 2 ] ;
_rtXdot -> fbzp2mgfcu [ 0 ] = rtB . h4duglqebr [ 0 ] ; _rtXdot -> fbzp2mgfcu
[ 1 ] = rtB . h4duglqebr [ 1 ] ; _rtXdot -> fbzp2mgfcu [ 2 ] = rtB .
h4duglqebr [ 2 ] ; _rtXdot -> fbzp2mgfcu [ 3 ] = rtB . h4duglqebr [ 3 ] ;
_rtXdot -> oxsdi5rguh = rtB . cgheitfdhl ; for ( i = 0 ; i < 6 ; i ++ ) {
_rtXdot -> ojag5ytihq [ i ] = rtB . bev5jpn51t [ i ] ; } _rtXdot ->
avwtd3ss0s [ 0 ] = rtB . ls5eb5r25u [ 0 ] ; _rtXdot -> avwtd3ss0s [ 1 ] = rtB
. ls5eb5r25u [ 1 ] ; _rtXdot -> avwtd3ss0s [ 2 ] = rtB . ls5eb5r25u [ 2 ] ;
_rtXdot -> avwtd3ss0s [ 3 ] = rtB . ls5eb5r25u [ 3 ] ; } void MdlProjection (
void ) { } void MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> betpwbj5sj = rtB .
n0cnntkefl - rtP . NormalizeVector_maxzero_pmmnk1unkt ; _rtZCSV -> pjnfnw41ee
= rtB . imimj3j53y - rtB . cybvicud0e ; _rtZCSV -> fe5rtnxu45 = rtB .
au0lhyifpn - rtP . sensors . ss . FoV / 2.0 ; _rtZCSV -> f1nkynwq33 = rtB .
ars5lnjltn - rtP . NormalizeVector_maxzero_mhggypqjqf ; } void MdlTerminate (
void ) { { if ( rtDW . dvzlnzlo0n . AQHandles ) { sdiTerminateStreaming ( &
rtDW . dvzlnzlo0n . AQHandles ) ; } } { if ( rtDW . knwdemyl3a . AQHandles )
{ sdiTerminateStreaming ( & rtDW . knwdemyl3a . AQHandles ) ; } } { if ( rtDW
. pcvk10hfia . AQHandles ) { sdiTerminateStreaming ( & rtDW . pcvk10hfia .
AQHandles ) ; } } { if ( rtDW . lrlfbto3oq . AQHandles ) {
sdiTerminateStreaming ( & rtDW . lrlfbto3oq . AQHandles ) ; } } { if ( rtDW .
ehi0fzdome . AQHandles ) { sdiTerminateStreaming ( & rtDW . ehi0fzdome .
AQHandles ) ; } } } void MdlInitializeSizes ( void ) { ssSetNumContStates (
rtS , 18 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 4 ) ; ssSetNumBlocks ( rtS , 312 ) ;
ssSetNumBlockIO ( rtS , 145 ) ; ssSetNumBlockParams ( rtS , 184 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 ,
0.055555555555555552 ) ; ssSetSampleTime ( rtS , 3 , 0.1 ) ; ssSetOffsetTime
( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS
, 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ; } void raccel_set_checksum
( ) { ssSetChecksumVal ( rtS , 0 , 167638889U ) ; ssSetChecksumVal ( rtS , 1
, 1163889396U ) ; ssSetChecksumVal ( rtS , 2 , 1187007353U ) ;
ssSetChecksumVal ( rtS , 3 , 916882847U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtB ) ,
"BlockIO" ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; }
{ real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void )
memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) &
rtDW ; ssSetRootDWork ( rtS , dwork ) ; ssSetWorkSizeInBytes ( rtS , sizeof (
rtDW ) , "DWork" ) ; ( void ) memset ( dwork , 0 , sizeof ( DW ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 25 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
uncontrolled_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS
, true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "uncontrolled" ) ;
ssSetPath ( rtS , "uncontrolled" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 5555.2333645118179 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 3 , 4
, 1 , 6 , 4 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 ,
1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 3 , 4 , 1 , 6 , 4 } ;
static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T *
rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
"uncontrolled/Dynamics + kinematics/Euler equations/Integrator" ,
 "uncontrolled/Dynamics + kinematics/Kinematics/Quaternion integration/Integrator"
, "uncontrolled/Environment/Orbit propagator/Integrator" ,
"uncontrolled/Extended State Observer/Integrator" ,
 "uncontrolled/Attitude determination/Angular velocity estimation/Varying Lowpass Filter/FOS/Integrator"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
} ; static boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 } ;
static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE
, SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 ,
0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 5 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 5 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . n3fcvgunz5 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . fbzp2mgfcu [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . oxsdi5rguh ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ojag5ytihq [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . avwtd3ss0s [ 0 ] ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 18 ] ;
static real_T absTol [ 18 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [
18 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U } ; static real_T contStateJacPerturbBoundMinVec [ 18 ] ;
static real_T contStateJacPerturbBoundMaxVec [ 18 ] ; static uint8_T
zcAttributes [ 4 ] = { ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 5 ]
= { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . divw1m0v52 ) , ( NULL ) }
, { 3 * sizeof ( real_T ) , ( char * ) ( & rtB . i34eoyi5rk [ 0 ] ) , ( NULL
) } , { 3 * sizeof ( real_T ) , ( char * ) ( & rtB . fwruiojfal [ 0 ] ) , (
NULL ) } , { 4 * sizeof ( real_T ) , ( char * ) ( & rtB . mbfh3bqryb [ 0 ] )
, ( NULL ) } , { 12 * sizeof ( real_T ) , ( char * ) ( & rtB . pphyhpy43h [ 0
] ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 18 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 1.0E-8 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS ,
0.055555555555555552 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
5 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 0 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 4 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 4 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 167638889U ) ; ssSetChecksumVal ( rtS , 1 ,
1163889396U ) ; ssSetChecksumVal ( rtS , 2 , 1187007353U ) ; ssSetChecksumVal
( rtS , 3 , 916882847U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 16 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = ( sysRanDType * ) & rtDW . kkbhj5rupm ; systemRan [ 7 ] = (
sysRanDType * ) & rtDW . nquht41u0y ; systemRan [ 8 ] = ( sysRanDType * ) &
rtDW . nquht41u0y ; systemRan [ 9 ] = ( sysRanDType * ) & rtDW . nquht41u0y ;
systemRan [ 10 ] = ( sysRanDType * ) & rtDW . o1o144q2ee ; systemRan [ 11 ] =
( sysRanDType * ) & rtDW . o1o144q2ee ; systemRan [ 12 ] = ( sysRanDType * )
& rtDW . o1o144q2ee ; systemRan [ 13 ] = & rtAlwaysEnabled ; systemRan [ 14 ]
= ( sysRanDType * ) & rtDW . l1an2vzzne ; systemRan [ 15 ] = ( sysRanDType *
) & rtDW . l1an2vzzne ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo (
rtS ) , & ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 4 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID4 ( tid ) ; }
