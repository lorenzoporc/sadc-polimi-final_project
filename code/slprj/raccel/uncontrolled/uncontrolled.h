#ifndef RTW_HEADER_uncontrolled_h_
#define RTW_HEADER_uncontrolled_h_
#include <stddef.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef uncontrolled_COMMON_INCLUDES_
#define uncontrolled_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "uncontrolled_types.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME uncontrolled
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (145) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (18)   
#elif NCSTATES != 18
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T oowvbhbp1g [ 9 ] ; } ckmh1jms3g ; typedef struct {
real_T ccl35kpxd5 [ 3 ] ; real_T keylink3mt [ 4 ] ; real_T flzo1tlsb5 ;
real_T n0cnntkefl ; real_T awpypta2ug [ 5 ] ; real_T hpxf3zbmys [ 4 ] ;
real_T dkn2uoguzp ; real_T a3y1rc3rl1 ; real_T geloubvqmf ; real_T oeqvrsjl20
; real_T kbe53iduh5 ; real_T fwep5bzjc2 ; real_T dzxfzraqep [ 3 ] ; real_T
jrvlwmnotm [ 3 ] ; real_T akarp20eco [ 3 ] ; real_T imimj3j53y ; real_T
cybvicud0e ; real_T dxoa34c3b1 ; real_T kq3be5snym [ 9 ] ; real_T hoa03yvz1u
; real_T cgif1ftqiu ; real_T ewaorjb0zq ; real_T kijoxc4gpj [ 9 ] ; real_T
ensiuwqomq [ 9 ] ; real_T jobdkup5ya [ 9 ] ; real_T cly0cps1kj [ 9 ] ; real_T
ocg4x41c1b [ 9 ] ; real_T g5cvdi42sk [ 9 ] ; real_T gqnw3gvtvl [ 3 ] ; real_T
au0lhyifpn ; real_T o4dj4py0uf [ 12 ] ; real_T doteuheq3d [ 6 ] ; real_T
fwruiojfal [ 3 ] ; real_T dcymgtaxnd ; real_T dfj1hv2rax ; real_T kmrxoj3dew
; real_T ampf4zyrnm [ 3 ] ; real_T opuyfb0xxc ; real_T ars5lnjltn ; real_T
omjr0w1vhx [ 4 ] ; real_T h1payfm0hu [ 3 ] ; real_T f12kiybc2b ; real_T
gvgfzrqlin [ 3 ] ; real_T owz1l3bgnh [ 3 ] ; real_T ikrnpfioht ; real_T
b1ehm1vv5r [ 3 ] ; real_T ly0si1rewp [ 3 ] ; real_T hhmibzra1i [ 6 ] ; real_T
f5kn4yvyj5 [ 3 ] ; real_T ki2f0jghgn ; real_T ngvjzsm1u4 [ 9 ] ; real_T
jjc4dlmsrz [ 9 ] ; real_T byhq4mkmdc [ 9 ] ; real_T ipnql3q2rt [ 9 ] ; real_T
jgcbfw45zw [ 3 ] ; real_T erakm5mnxc ; real_T msmw2tnin3 ; real_T djambayzpx
; real_T ocl30sbl44 ; real_T bhjrv33qp1 ; real_T kedypbphyn ; real_T
gz5vsnzo3g [ 3 ] ; real_T gggciddgh2 [ 3 ] ; real_T ghebyhkfa1 ; real_T
ihzskco0h2 ; real_T eml13puwhm [ 3 ] ; real_T fbqtfsiq0n [ 3 ] ; real_T
occ2w24px3 [ 3 ] ; real_T ptsg4njrmr [ 12 ] ; real_T jij0vqqcem [ 9 ] ;
real_T mub3xknkza [ 4 ] ; real_T k0l1swnxpw [ 4 ] ; real_T lyzah33zfx [ 4 ] ;
real_T nl3ehfqz2m [ 3 ] ; real_T esrmchniol [ 3 ] ; real_T i34eoyi5rk [ 3 ] ;
real_T ls5eb5r25u [ 4 ] ; real_T b1p03woqms [ 3 ] ; real_T j4ocfboarv [ 6 ] ;
real_T akh33sy2jr [ 3 ] ; real_T divw1m0v52 ; real_T e44na3aipf [ 6 ] ;
real_T kzgofjzvij [ 3 ] ; real_T llxlnrqyk4 [ 3 ] ; real_T ewv3nr05q4 [ 6 ] ;
real_T jpmq223gsx [ 3 ] ; real_T bpjgux3ffo [ 3 ] ; real_T fv2wqoyajh [ 6 ] ;
real_T jlfsrqkudk [ 3 ] ; real_T by3a5qvtdp [ 3 ] ; real_T hmxb1je3zz [ 6 ] ;
real_T n1x5ppclcy [ 3 ] ; real_T fzw2g0qbjr [ 3 ] ; real_T mrapgtn004 [ 3 ] ;
real_T ai2d3xslus ; real_T luumjekahk ; real_T mrr55pvfey ; real_T gyze4besoe
; real_T aubs0aaxnm ; real_T lhlpjwlhyc ; real_T ax5zdb10u1 [ 16 ] ; real_T
bsfnxcv52h [ 4 ] ; real_T h4duglqebr [ 4 ] ; real_T nfnictfkhl ; real_T
lobflauijs ; real_T dtvswhyfml ; real_T cgheitfdhl ; real_T aebifcgewd [ 3 ]
; real_T n4bqi2lsjc [ 6 ] ; real_T jdm3ln0pbp [ 3 ] ; real_T i3roev24mh [ 3 ]
; real_T l4zlvqrj2x [ 3 ] ; real_T n12tuana1x [ 3 ] ; real_T hbevfgwkvl [ 3 ]
; real_T hn4pi0rg32 [ 3 ] ; real_T nk0vmookgp [ 3 ] ; real_T klvp5ya35j [ 3 ]
; real_T bev5jpn51t [ 6 ] ; real_T iyr0pt2wao ; real_T k0ctxkfhfc [ 9 ] ;
real_T kyywqu43ff [ 3 ] ; real_T fya5ejz2q1 [ 9 ] ; real_T ijzytbew2v [ 12 ]
; real_T drnfnw0sfs [ 9 ] ; real_T ol4ycpsogd [ 3 ] ; real_T my4i2jj4w0 [ 9 ]
; real_T o4b5qm0dak [ 3 ] ; real_T kvx3ci1bl1 [ 3 ] ; real_T kk2fncgdzf [ 4 ]
; real_T mbfh3bqryb [ 4 ] ; real_T pphyhpy43h [ 12 ] ; boolean_T abreinrkmh ;
boolean_T mzpdbd1vyg ; boolean_T fxtfkkj240 ; ckmh1jms3g hdco5djtlp ;
ckmh1jms3g luux5q1kph ; } B ; typedef struct { real_T oib5citwht [ 4 ] ;
real_T jnd30r1ht2 ; real_T a5uardskgm [ 4 ] ; real_T dznssketm0 ; real_T
ajgdfi3jqy [ 4 ] ; real_T m1iqlgvxip ; real_T ox23uhpd5w ; real_T nbdm23k5hd
; real_T fiht0f3ctl [ 3 ] ; real_T ny2oqvzhck ; real_T lkpte3brp0 ; real_T
i3dsukuteh ; real_T imdqbdwqjp [ 12 ] ; real_T j42igdadkb ; real_T jsxfhslkkg
; real_T bkj2ve0mem ; real_T m1del2va53 [ 9 ] ; real_T ejy4002h5a ; real_T
ksjty3navg ; real_T fhk413qchg ; struct { void * LoggedData ; } pdgb42e4sa ;
struct { void * LoggedData ; } hdt0nwbtkp ; struct { void * LoggedData ; }
phbtb5kkgd ; struct { void * LoggedData ; } aq4avw3414 ; struct { void *
LoggedData ; } bfxbpi3bsd ; struct { void * LoggedData ; } pmtxsinjme ;
struct { void * LoggedData ; } powg2s4ijk ; struct { void * LoggedData ; }
jymxdm54bx ; struct { void * LoggedData ; } pvzant0n3h ; struct { void *
LoggedData ; } dbqpt24xqp ; struct { void * LoggedData ; } otbzsw1jeq ;
struct { void * LoggedData ; } glhek3mxgj ; struct { void * LoggedData ; }
holdi4gy11 ; struct { void * LoggedData ; } ksieypke2s ; struct { void *
AQHandles ; } dvzlnzlo0n ; struct { void * LoggedData ; } dggtzpbo31 ; struct
{ void * AQHandles ; } knwdemyl3a ; struct { void * AQHandles ; } pcvk10hfia
; struct { void * AQHandles ; } lrlfbto3oq ; struct { void * AQHandles ; }
ehi0fzdome ; uint32_T i0jd5ov2aq ; uint32_T ekvi0kaox0 ; uint32_T h13pii2unk
; uint32_T gdm2ge0ofw [ 3 ] ; uint32_T g3mjvbs1uu ; uint32_T lfqvcenhcp ;
uint32_T lzm03ewcyj ; uint32_T hwm5cjsjet ; uint32_T nhpncgxxzs ; uint32_T
nydbalew5h [ 2 ] ; uint32_T o235voook1 [ 625 ] ; uint32_T ptzydd1mlx ;
uint32_T lspg4frwvz ; uint32_T nwumsxn30c ; uint32_T ixdsougept ; uint32_T
of2m5ic0pn ; uint32_T n3kp14atf0 ; uint32_T fbvjzemwgp ; uint32_T bppejpvrbl
; uint32_T otks5fozsk [ 2 ] ; uint32_T n2yjwgze4q [ 625 ] ; int8_T eyr25c41uw
; int8_T pvnpyl41yz ; int8_T dxiowqubpb ; int8_T kdqmmbuvr3 ; int8_T
poms0znwf1 ; int8_T np5lb5q3v4 ; int8_T gw5aebdpal ; int8_T dyrwse4trj ;
int8_T l1an2vzzne ; int8_T o1o144q2ee ; int8_T kkbhj5rupm ; int8_T nquht41u0y
; int8_T ckzasqnwjx ; boolean_T gv4fu254xq ; boolean_T pk4uaaxwfa ; boolean_T
llvlsepr0c ; boolean_T cahwo2f04v ; boolean_T eljjgro1hu ; boolean_T
humf2uyi5m ; boolean_T m4mnewhzec ; boolean_T l3kas04ekx ; } DW ; typedef
struct { real_T n3fcvgunz5 [ 3 ] ; real_T fbzp2mgfcu [ 4 ] ; real_T
oxsdi5rguh ; real_T ojag5ytihq [ 6 ] ; real_T avwtd3ss0s [ 4 ] ; } X ;
typedef struct { real_T n3fcvgunz5 [ 3 ] ; real_T fbzp2mgfcu [ 4 ] ; real_T
oxsdi5rguh ; real_T ojag5ytihq [ 6 ] ; real_T avwtd3ss0s [ 4 ] ; } XDot ;
typedef struct { boolean_T n3fcvgunz5 [ 3 ] ; boolean_T fbzp2mgfcu [ 4 ] ;
boolean_T oxsdi5rguh ; boolean_T ojag5ytihq [ 6 ] ; boolean_T avwtd3ss0s [ 4
] ; } XDis ; typedef struct { real_T n3fcvgunz5 [ 3 ] ; real_T fbzp2mgfcu [ 4
] ; real_T oxsdi5rguh ; real_T ojag5ytihq [ 6 ] ; real_T avwtd3ss0s [ 4 ] ; }
CStateAbsTol ; typedef struct { real_T n3fcvgunz5 [ 3 ] ; real_T fbzp2mgfcu [
4 ] ; real_T oxsdi5rguh ; real_T ojag5ytihq [ 6 ] ; real_T avwtd3ss0s [ 4 ] ;
} CXPtMin ; typedef struct { real_T n3fcvgunz5 [ 3 ] ; real_T fbzp2mgfcu [ 4
] ; real_T oxsdi5rguh ; real_T ojag5ytihq [ 6 ] ; real_T avwtd3ss0s [ 4 ] ; }
CXPtMax ; typedef struct { real_T betpwbj5sj ; real_T pjnfnw41ee ; real_T
fe5rtnxu45 ; real_T f1nkynwq33 ; } ZCV ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
struct_7w53TUU7DCcZ7x9uyZNi4D spacecraft ; struct_6VLnJIBAzs7njiDlW7859C
sensors ; struct_0htfUdjkLFYdKkTnHEO71D constants ;
struct_02sbINq0GgZbgB2UPNkVmG orbit ; struct_q6QA5LqJxPb5tq5SB2ZLtD observer
; struct_S8UC4WbXnDFTTwt3KikjSD control ; real_T NormalizeVector_maxzero ;
real_T NormalizeVector_maxzero_pmmnk1unkt ; real_T
NormalizeVector_maxzero_mhggypqjqf ; real_T
NormalizeVector_maxzero_djt22qmkdo ; real_T vSun_n_Y0 ; real_T Constant_Value
; real_T Constant1_Value [ 3 ] ; real_T RandomNumber_Mean ; real_T
RandomNumber_StdDev ; real_T RandomNumber_Seed ; real_T RandomNumber1_Mean ;
real_T RandomNumber1_StdDev ; real_T RandomNumber1_Seed ; real_T
RandomNumber2_Mean ; real_T RandomNumber2_StdDev ; real_T RandomNumber2_Seed
; real_T Memory_InitialCondition [ 9 ] ; real_T RandomNumber_Mean_j325veq3h4
; real_T RandomNumber_StdDev_osyvkm1nbd ; real_T RandomNumber_Seed_bcyzbehizb
; real_T RandomNumber1_Mean_cglvlehpgy ; real_T
RandomNumber1_StdDev_pa113sydms ; real_T RandomNumber1_Seed_ddcozcfvqh ;
real_T RandomNumber2_Mean_iqxzkifvrj ; real_T RandomNumber2_StdDev_elwn2e223c
; real_T RandomNumber2_Seed_bxzdzv3qja ; real_T RandomNumber_Mean_alfcasepyf
; real_T RandomNumber_StdDev_a4g1wn2f41 ; real_T RandomNumber_Seed_muoxwvcrep
; real_T RandomNumber1_Mean_fpegcxuncp ; real_T
RandomNumber1_StdDev_dwmuwurpze ; real_T RandomNumber1_Seed_etksjukgo5 ;
real_T RandomNumber2_Mean_ozab14whuo ; real_T RandomNumber2_StdDev_ptcl32fe50
; real_T RandomNumber2_Seed_fet4qq2uda ; real_T Gain_Gain ; real_T Gain1_Gain
; real_T Gain2_Gain ; real_T Gain_Gain_ahnizkpkvu ; real_T
Gain1_Gain_elldija22u ; real_T Merge1_InitialOutput ; real_T Integrator_IC [
6 ] ; real_T Gain1_Gain_g1f04hzvel ; real_T Gain_Gain_gqfasdb0wy ; real_T
Gain_Gain_ovchahezfk ; real_T Gain_Gain_avjrptcnae ; real_T
Gain1_Gain_map4aqbp2o ; real_T Gain2_Gain_pf4c2t2zdn ; real_T
Gain1_Gain_lnkn1c2sqc ; real_T Merge_InitialOutput ; real_T
Gain_Gain_gzkwwfr5i5 ; real_T Gain1_Gain_kdpq0ktuun ; real_T
Gain2_Gain_irocmnpiyl ; real_T Gain_Gain_jwng3jwdax ; real_T
Gain1_Gain_pa3zraguct ; real_T Integrator_IC_hxmcczyvi1 ; real_T
Gain_Gain_gm0w0tp13r ; real_T RandomNumber_Mean_j21m43fvkk ; real_T
RandomNumber_StdDev_ergspd3esj ; real_T RandomNumber_Seed_hc1q2hdzfi ; real_T
RandomNumber1_Mean_folcsctbbm ; real_T RandomNumber1_StdDev_bfdu1ljjkh ;
real_T RandomNumber1_Seed_p2cqbf3h23 ; real_T RandomNumber2_Mean_atwzdqzftl ;
real_T RandomNumber2_StdDev_odwja0ie23 ; real_T RandomNumber2_Seed_dzfuypjyx1
; real_T RandomNumber3_Mean ; real_T RandomNumber3_StdDev [ 3 ] ; real_T
RandomNumber3_Seed ; real_T Gain_Gain_lezygxxwam ; real_T
Gain1_Gain_k0h4blrnoh ; real_T Gain2_Gain_at243adaqy ; real_T Gain3_Gain ;
real_T Gain4_Gain ; real_T Gain5_Gain ; real_T Gain_Gain_otymskpyft ; real_T
Gain_Gain_awbyjvpvae ; real_T Gain1_Gain_e4enzcc5io ; real_T
Constant_Value_lroc4o2obf ; real_T Constant_Value_kwdixjtgki [ 9 ] ; real_T
Constant_Value_glwqw0xiai ; real_T Constant1_Value_j1hh5rgit4 ; real_T
Constant2_Value ; real_T Constant_Value_l3g1zulttu [ 9 ] ; real_T
Constant_Value_mldwum2o1l ; real_T Constant1_Value_bhblxijpmx ; real_T
Constant2_Value_mlr4215lth ; real_T Constant_Value_owsqu1yt4f ; real_T
Constant_Value_ltm2gro5wx ; real_T Constant1_Value_bxxiag1xam ; real_T
Constant2_Value_iqulksquef ; real_T Constant3_Value ; real_T
Constant_Value_mvnthzwinm [ 3 ] ; real_T Constant_Value_bbkwb0ia13 ; real_T
Constant_Value_cn5rxzkzqi ; real_T Constant_Value_bgpplpzlth ; real_T
Constant_Value_ehamsmfwks ; real_T Constant1_Value_g2fcd0r1ax [ 3 ] ; real_T
R1i_Value [ 9 ] ; real_T Constant_Value_czomgcmo5z ; real_T
Constant3_Value_pu1m0gcxmv ; real_T Constant4_Value ; real_T Constant5_Value
; real_T Constant6_Value ; real_T R1i_Value_inxxofskdo [ 9 ] ; real_T
R3OM_Value [ 9 ] ; real_T R3om_Value [ 9 ] ; real_T
Constant1_Value_pn2byenzlv ; real_T Constant_Value_cfysieuu3n ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ;
extern DW rtDW ; extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
uncontrolled_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern
const int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ;
extern const char * gblInportFileName ; extern const int_T
gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern const
int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
