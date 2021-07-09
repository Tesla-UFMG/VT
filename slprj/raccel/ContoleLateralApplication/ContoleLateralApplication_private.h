#ifndef RTW_HEADER_ContoleLateralApplication_private_h_
#define RTW_HEADER_ContoleLateralApplication_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "ContoleLateralApplication.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)   if(!(ptr)) {\
  ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
  }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((ptr));\
  (ptr) = (NULL);\
  }
#else
#define rt_FREE(ptr)   if((ptr) != (NULL)) {\
  free((void *)(ptr));\
  (ptr) = (NULL);\
  }
#endif
#endif
extern real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern real_T
rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern real_T look1_binlcpw (
real_T u0 , const real_T bp0 [ ] , const real_T table [ ] , uint32_T maxIndex
) ; extern real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const
real_T table [ ] , uint32_T maxIndex ) ; extern real_T look1_binlcapw (
real_T u0 , const real_T bp0 [ ] , const real_T table [ ] , uint32_T maxIndex
) ; extern void oo0c00ipat ( jq4sjzevfh * localB , g3rr01glgf * localDW ,
joyf32pywz * localP ) ; extern void htvvb3wiwk ( SimStruct * rtS_e ,
boolean_T iy1pjazynl , real_T astab2hbil , jq4sjzevfh * localB , g3rr01glgf *
localDW , joyf32pywz * localP , mfim3kn51q * localZCE ) ; extern void
dlbunanlk3 ( real_T rtp_IC , cflrekwlxf * localB ) ; extern void aixhks31af (
SimStruct * rtS_i , knzpqmzeq5 * localDW ) ; extern void e0prdavftv (
knzpqmzeq5 * localDW ) ; extern void osjj2s24tk ( SimStruct * rtS_i ,
boolean_T bn2su4q2ro , real_T cu3fp4lmc2 , cflrekwlxf * localB , knzpqmzeq5 *
localDW ) ; extern void edtdmcgobo ( real_T nn4err54og , real_T nkknsqhn1j ,
real_T biwnilocf3 , real_T o4pofgxapx , real_T ppw02b25cd , real_T bagcshaodo
, real_T mzixj1q411 , real_T lxl1gou4lx , real_T bc3w5krrme , real_T
omd1ozvfnm , real_T mdqworkw2a , real_T eklao3eov1 , real_T ducgzmvmzo ,
real_T ospnnfaghl , real_T c2yyr4rbe1 , real_T atvahx00hr , real_T c5m1xfj0jj
, real_T nxofn4b0km , real_T cajax0p2xb , real_T bjxc1hn5wm , real_T
cpufb4r4es , real_T mi14ogpfko , real_T a3pe2atzbi , real_T iynhl4pkwl ,
real_T bt2yqn0gru , real_T evqah1y0oh , real_T nkosqlpejv , real_T lf2ckfwect
, real_T jrlqnedmkx , real_T j1ugea13aj , real_T nrvxctkdzk , real_T
dqjsxzz2ov , real_T dwjzrmeoez , real_T dqyqzxsbhu , real_T jvgada2bkf ,
real_T mxr4zeqv4b , real_T faxsjr0kji , real_T eavcvcphc5 , real_T dzdgk24nlc
, real_T oilwq1se13 , real_T bifatdod5g , real_T okaqgk14k4 , real_T
coeixtyint , const real_T j4cicndswe [ 3 ] , const real_T d1audi5k0h [ 3 ] ,
const real_T mzo5psvwzy [ 9 ] , real_T ckkgse2kl4 , real_T mzg1b2stw4 ,
real_T cdk2uodlww , real_T fvaujmgwqj , real_T o1avvhu50l , real_T eoscy4khv3
, real_T dhhvdqx0gr , real_T oni5rgefui , real_T lxogvuiowo , real_T
nyypyvuiow , real_T gcq0zlrzoj , real_T blfdzqv2r4 , real_T jp4aq4uuqu ,
real_T bsrlk5z5dq , real_T pgivpx3q4e , const real_T pnya0twja3 [ 3 ] , const
real_T ed2nmm3un2 [ 3 ] , const real_T mvci5xr2hb [ 9 ] , real_T n0dppfrnyz ,
real_T lxvdgeokcd , real_T i1nfemj5xe , real_T kaqjg5ksuw , real_T gaw3iglsfr
, real_T mkai00jzxw , real_T i0lfllinqe , real_T lixzgoolq0 , real_T
gcklikz0ge , real_T egsohmqzjx , real_T jfsqwfwzbn , real_T b3ti4tmlpg ,
real_T florhnxthn , real_T bl4lualf3o , real_T pf3qa23b3g , real_T ac5m5lbnqw
, real_T ixaxjuxb2p , real_T lyjhboinht , real_T mpdvzjcgr4 , real_T
ec2pjrg0ql , real_T dc4lxdudoc , real_T atx1qwu4bp , real_T iyuad5p3sz ,
real_T pbxsgxxcpr , real_T fmfuzk2ba0 , real_T jei4fjb4vn , real_T pefsysmkct
, real_T * epmsla4yrj , real_T * mvcf2joxu1 , real_T rtp_FZMAX , real_T
rtp_FZMIN , real_T rtp_VXLOW , real_T rtp_kappamax , k0a351zprl * localB ) ;
extern void o212f2ghps ( real_T rtp_omegao , gu2d1u3t5r * localB , of1genwmwx
* localDW , l3ruaejn4y * localP , bneugbcqrf * localX ) ; extern void
e4e3o5kmkl ( gu2d1u3t5r * localB ) ; extern void h1gjxkey50 ( gu2d1u3t5r *
localB , of1genwmwx * localDW , ccejl0ogc2 * localXdot ) ; extern void
bzrmbvlv5h ( SimStruct * rtS_m , real_T cfgeu4oux5 , real_T k5z5w4hnnk ,
real_T mkdyrwrxc1 , real_T rtp_omegao , real_T rtp_br , real_T rtp_Iyy ,
real_T rtp_OmegaTol , gu2d1u3t5r * localB , of1genwmwx * localDW , l3ruaejn4y
* localP , bneugbcqrf * localX ) ; extern void bzrmbvlv5hTID3 ( real_T rtp_br
, gu2d1u3t5r * localB , l3ruaejn4y * localP ) ; extern void ndtkogdbvh (
real_T rtp_omegao , kjgphjufh5 * localB , i2qsjznhcu * localDW , jwndialyja *
localP , bdqrkgokb2 * localX ) ; extern void dqqfqzhkcj ( kjgphjufh5 * localB
) ; extern void cybsisxnfc ( real_T oifrycyujk , real_T erufve5m2t , real_T
b5jhckgp0e , kjgphjufh5 * localB , i2qsjznhcu * localDW , plfar4j100 *
localXdot ) ; extern void noxrljyvsb ( SimStruct * rtS_g , real_T oifrycyujk
, real_T erufve5m2t , real_T b5jhckgp0e , real_T * o34nh42ofz , real_T
rtp_omegao , real_T rtp_br , real_T rtp_Iyy , real_T rtp_VXLOW , real_T
rtp_Re , kjgphjufh5 * localB , i2qsjznhcu * localDW , jwndialyja * localP ,
bdqrkgokb2 * localX ) ; extern void noxrljyvsbTID3 ( real_T oifrycyujk ,
real_T erufve5m2t , real_T b5jhckgp0e , real_T rtp_br , kjgphjufh5 * localB ,
jwndialyja * localP ) ; extern void jdo204epts ( void ) ; extern void
oavv3sjyzn ( int32_T mpsbjsff3n ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
