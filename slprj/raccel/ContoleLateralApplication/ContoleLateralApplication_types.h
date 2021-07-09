#ifndef RTW_HEADER_ContoleLateralApplication_types_h_
#define RTW_HEADER_ContoleLateralApplication_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_A6Yb21eKNPgaupJlKafAPB_
#define DEFINED_TYPEDEF_FOR_struct_A6Yb21eKNPgaupJlKafAPB_
typedef struct { real_T FR ; real_T FL ; } struct_A6Yb21eKNPgaupJlKafAPB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_NtCe3ohFvXuRZXQoDidoXH_
#define DEFINED_TYPEDEF_FOR_struct_NtCe3ohFvXuRZXQoDidoXH_
typedef struct { real_T RR ; real_T RL ; } struct_NtCe3ohFvXuRZXQoDidoXH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_wjXS3rIiQNI90M790LMxVG_
#define DEFINED_TYPEDEF_FOR_struct_wjXS3rIiQNI90M790LMxVG_
typedef struct { real_T FR ; real_T RR ; } struct_wjXS3rIiQNI90M790LMxVG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_5NGg6nxNHRWKsr0nLboB4F_
#define DEFINED_TYPEDEF_FOR_struct_5NGg6nxNHRWKsr0nLboB4F_
typedef struct { real_T Mass ; struct_A6Yb21eKNPgaupJlKafAPB
StaticNormalFrontLoad ; struct_NtCe3ohFvXuRZXQoDidoXH StaticNormalRearLoad ;
real_T WheelBase ; real_T FrontAxlePositionfromCG ; real_T
RearAxlePositionfromCG ; real_T HeightCG ; real_T FrontalArea ; real_T
DragCoefficient ; real_T NumberOfWheelsPerAxle ;
struct_wjXS3rIiQNI90M790LMxVG Thread ; real_T PitchMomentInertia ; real_T
RollMomentInertia ; real_T YawMomentInertia ; real_T SteeringRatio ; real_T
TrackWidth ; real_T SprungMass ; real_T InitialLongPosition ; real_T
InitialLatPosition ; real_T InitialVertPosition ; real_T InitialRollAngle ;
real_T InitialPitchAngle ; real_T InitialYawAngle ; real_T InitialLongVel ;
real_T InitialLatVel ; real_T InitialVertVel ; real_T InitialRollRate ;
real_T InitialPitchRate ; real_T InitialYawRate ; }
struct_5NGg6nxNHRWKsr0nLboB4F ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_IMeHRhCUQYmqCjojf8ThJC_
#define DEFINED_TYPEDEF_FOR_struct_IMeHRhCUQYmqCjojf8ThJC_
typedef struct { real_T Speed [ 8 ] ; real_T Torque [ 8 ] ; real_T Overpower
; real_T MaxTorque ; } struct_IMeHRhCUQYmqCjojf8ThJC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_zKiQBVfPwpWeAGF3nIRITH_
#define DEFINED_TYPEDEF_FOR_struct_zKiQBVfPwpWeAGF3nIRITH_
typedef struct { real_T DampingCoefficient ; real_T WheelInertia ; real_T
RelaxationLength ; real_T LoadedRadius ; real_T UnloadedRadius ; real_T
WheelInitAngVel ; } struct_zKiQBVfPwpWeAGF3nIRITH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_hgmnqvlij5jOAI9V1wZ3ZG_
#define DEFINED_TYPEDEF_FOR_struct_hgmnqvlij5jOAI9V1wZ3ZG_
typedef struct { real_T NumberOfWheelsPerAxle ; real_T Mass ; real_T
FrontAxlePositionfromCG ; real_T RearAxlePositionfromCG ; real_T WheelBase ;
real_T HeightCG ; real_T InitialLongPosition ; real_T InitialLongVel ; real_T
TrackWidth [ 2 ] ; real_T InitialLatPosition ; real_T InitialLatVel ; real_T
YawMomentInertia ; real_T InitialYawAngle ; real_T InitialYawRate ; real_T
FrontalArea ; real_T LongDragCoeff ; real_T CornerStiffFront ; real_T
CornerStiffRear ; } struct_hgmnqvlij5jOAI9V1wZ3ZG ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_YQNmUAShMCZdIMpk5KMNkC_
#define DEFINED_TYPEDEF_FOR_struct_YQNmUAShMCZdIMpk5KMNkC_
typedef struct { real_T Kp ; real_T Ki ; real_T Kd ; real_T P [ 9 ] ; real_T
I [ 9 ] ; real_T Angles [ 9 ] ; } struct_YQNmUAShMCZdIMpk5KMNkC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_AZjjEXmUyHbvyklo4YIYcD_
#define DEFINED_TYPEDEF_FOR_struct_AZjjEXmUyHbvyklo4YIYcD_
typedef struct { real_T Volante [ 13 ] ; real_T Right [ 13 ] ; real_T Left [
13 ] ; } struct_AZjjEXmUyHbvyklo4YIYcD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_sOX3LiStEfrXKFRloTKRnE_
#define DEFINED_TYPEDEF_FOR_struct_sOX3LiStEfrXKFRloTKRnE_
typedef struct { real_T SteerAvg [ 13 ] ; real_T APPSAcionado [ 6 ] ; real_T
APPS1 [ 6 ] ; } struct_sOX3LiStEfrXKFRloTKRnE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_FEnSr9k3XVyU96UtOo67RH_
#define DEFINED_TYPEDEF_FOR_struct_FEnSr9k3XVyU96UtOo67RH_
typedef struct { real_T Friction [ 4 ] ; } struct_FEnSr9k3XVyU96UtOo67RH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_DsnyaKzBOGCI4DCle3t1oB_
#define DEFINED_TYPEDEF_FOR_struct_DsnyaKzBOGCI4DCle3t1oB_
typedef struct { real_T Simulation ; } struct_DsnyaKzBOGCI4DCle3t1oB ;
#endif
typedef struct joyf32pywz_ joyf32pywz ; typedef struct l3ruaejn4y_ l3ruaejn4y
; typedef struct ejentuw24b_ ejentuw24b ; typedef struct jwndialyja_
jwndialyja ; typedef struct P_ P ;
#endif
