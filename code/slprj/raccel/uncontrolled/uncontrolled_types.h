#ifndef RTW_HEADER_uncontrolled_types_h_
#define RTW_HEADER_uncontrolled_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_ws3TBaK8kR1NHfxD4l548E_
#define DEFINED_TYPEDEF_FOR_struct_ws3TBaK8kR1NHfxD4l548E_
typedef struct { real_T FoV ; real_T sigmaPhi ; real_T sigmaTheta ; real_T
sigmaPsi ; real_T sigma ; real_T Ts ; real_T A_sb [ 9 ] ; }
struct_ws3TBaK8kR1NHfxD4l548E ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_wjWgYUT3DRjRqLWwlezJcG_
#define DEFINED_TYPEDEF_FOR_struct_wjWgYUT3DRjRqLWwlezJcG_
typedef struct { real_T nStars ; real_T FoV [ 2 ] ; real_T sigmaRoll ; real_T
sigmaCross ; real_T sigmaPhi ; real_T sigmaTheta ; real_T sigmaPsi ; real_T
sigma ; real_T Ts ; real_T A_sb [ 9 ] ; real_T vStars_n_init [ 12 ] ; }
struct_wjWgYUT3DRjRqLWwlezJcG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_CRnsmL4lZgkrabHhgIcET_
#define DEFINED_TYPEDEF_FOR_struct_CRnsmL4lZgkrabHhgIcET_
typedef struct { real_T sigmaPhi ; real_T sigmaTheta ; real_T sigmaPsi ;
real_T eps ; real_T Ts ; } struct_CRnsmL4lZgkrabHhgIcET ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_6VLnJIBAzs7njiDlW7859C_
#define DEFINED_TYPEDEF_FOR_struct_6VLnJIBAzs7njiDlW7859C_
typedef struct { struct_ws3TBaK8kR1NHfxD4l548E ss ;
struct_wjWgYUT3DRjRqLWwlezJcG st ; struct_CRnsmL4lZgkrabHhgIcET mm ; }
struct_6VLnJIBAzs7njiDlW7859C ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_7w53TUU7DCcZ7x9uyZNi4D_
#define DEFINED_TYPEDEF_FOR_struct_7w53TUU7DCcZ7x9uyZNi4D_
typedef struct { real_T nCubes ; real_T rCoM_cubes [ 18 ] ; real_T nPanels ;
real_T panelLength ; real_T panelWidth ; real_T panelThickness ; real_T
rCoM_panels [ 6 ] ; real_T mass ; real_T rCoM [ 3 ] ; real_T I [ 9 ] ; real_T
invI [ 9 ] ; real_T resDip [ 3 ] ; real_T w0 [ 3 ] ; real_T q0 [ 4 ] ; }
struct_7w53TUU7DCcZ7x9uyZNi4D ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_0htfUdjkLFYdKkTnHEO71D_
#define DEFINED_TYPEDEF_FOR_struct_0htfUdjkLFYdKkTnHEO71D_
typedef struct { real_T U ; real_T mu ; real_T wE ; real_T rho ; real_T
magneticTilt ; real_T H0 ; real_T REq ; real_T nSun ; real_T oblAngle ;
real_T AU ; real_T P ; } struct_0htfUdjkLFYdKkTnHEO71D ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_0gQV4VyplJ8zc1trNOizX_
#define DEFINED_TYPEDEF_FOR_struct_0gQV4VyplJ8zc1trNOizX_
typedef struct { real_T num [ 2 ] ; real_T n [ 30 ] ; real_T A [ 10 ] ;
real_T rSurf [ 30 ] ; real_T cd ; real_T rhoS [ 10 ] ; real_T rhoD [ 10 ] ; }
struct_0gQV4VyplJ8zc1trNOizX ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_02sbINq0GgZbgB2UPNkVmG_
#define DEFINED_TYPEDEF_FOR_struct_02sbINq0GgZbgB2UPNkVmG_
typedef struct { real_T a ; real_T e ; real_T i ; real_T OM ; real_T om ;
real_T theta0 ; real_T T ; } struct_02sbINq0GgZbgB2UPNkVmG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_q6QA5LqJxPb5tq5SB2ZLtD_
#define DEFINED_TYPEDEF_FOR_struct_q6QA5LqJxPb5tq5SB2ZLtD_
typedef struct { real_T Lw ; real_T Ld ; real_T estMd0 [ 3 ] ; }
struct_q6QA5LqJxPb5tq5SB2ZLtD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_MoyAGu2uMzj1dRvV0obSwC_
#define DEFINED_TYPEDEF_FOR_struct_MoyAGu2uMzj1dRvV0obSwC_
typedef struct { real_T kb ; } struct_MoyAGu2uMzj1dRvV0obSwC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_S8UC4WbXnDFTTwt3KikjSD_
#define DEFINED_TYPEDEF_FOR_struct_S8UC4WbXnDFTTwt3KikjSD_
typedef struct { struct_MoyAGu2uMzj1dRvV0obSwC detumbling ; }
struct_S8UC4WbXnDFTTwt3KikjSD ;
#endif
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T { real_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_g4hfrp4mjz
#define typedef_g4hfrp4mjz
typedef struct emxArray_real_T g4hfrp4mjz ;
#endif
typedef struct P_ P ;
#endif
