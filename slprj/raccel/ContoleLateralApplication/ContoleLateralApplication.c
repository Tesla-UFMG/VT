#include "rt_logging_mmi.h"
#include "ContoleLateralApplication_capi.h"
#include <math.h>
#include "ContoleLateralApplication.h"
#include "ContoleLateralApplication_private.h"
#include "ContoleLateralApplication_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.3 (R2021a) 14-Nov-2020" ; void
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
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define er52vx2pmt (2U)
#define halod3qimo (1U)
#define nhqpsplbup (-1)
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; static void coe4zy0014 ( real_T rhoz ,
real_T omega , real_T * Re , real_T * Fz ) ; static void ihu3wiojyc ( const
real_T a_data [ ] , const int32_T a_size [ 2 ] , real_T y_data [ ] , int32_T
y_size [ 2 ] ) ; static void g2upg1qxop ( real_T u , real_T tol , real_T * y
, real_T * yabs ) ; static void g2upg1qxopw ( real_T u , real_T * y , real_T
* yabs ) ; static real_T nahtsipn2r ( real_T kappa , real_T Vx , real_T Fz ,
real_T b_gamma , real_T LONGVL , real_T FNOMIN , real_T b_FZMIN , real_T
b_FZMAX , real_T press , real_T NOMPRES , real_T PRESMIN , real_T PRESMAX ,
real_T PCX1 , real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T
PEX2 , real_T PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 ,
real_T PHX1 , real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T
PPX2 , real_T PPX3 , real_T PPX4 , real_T lam_Fzo , real_T lam_muV , real_T
lam_mux , real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex , real_T lam_Hx
, real_T lam_Vx ) ; static real_T k0b2clfrrc ( real_T Fz , real_T omega ,
real_T Vx , real_T press , real_T QSY1 , real_T QSY2 , real_T QSY3 , real_T
QSY7 , real_T QSY8 , real_T UNLOADED_RADIUS , real_T b_FZMIN , real_T b_FZMAX
, real_T PRESMIN , real_T PRESMAX ) ; static real_T ethefka0n4 ( real_T Fx ,
real_T Fz , real_T Omega , real_T Vx , real_T press , real_T FNOMIN , real_T
NOMPRES , real_T QSY1 , real_T QSY2 , real_T QSY3 , real_T QSY4 , real_T QSY5
, real_T QSY6 , real_T QSY7 , real_T QSY8 , real_T b_gamma , real_T lam_My ,
real_T UNLOADED_RADIUS , real_T b_FZMAX , real_T PRESMIN , real_T PRESMAX ) ;
static real_T gtlabshtz2 ( real_T Fz , real_T omega , real_T Tamb , real_T
Fpl , real_T Cr , real_T Kt , real_T Tmeas , real_T Re , real_T b_FZMIN ,
real_T b_FZMAX , real_T TMIN , real_T TMAX ) ; static real_T povs05y3do (
const real_T varargin_1 [ 3 ] , const real_T varargin_2 [ 3 ] , const real_T
varargin_3 [ 9 ] , real_T varargin_4 , real_T varargin_5 ) ; static boolean_T
oyjuwaobkx ( real_T Tout , real_T Tfmaxs , gu2d1u3t5r * localB , of1genwmwx *
localDW ) ; static boolean_T gioqqisuqg ( real_T Tout , real_T Tfmaxs ,
gu2d1u3t5r * localB , of1genwmwx * localDW , l3ruaejn4y * localP ) ; static
real_T fkcvjldvc4 ( const real_T varargin_1 [ 13 ] , const real_T varargin_2
[ 13 ] , real_T varargin_3 ) ; static void bdsmwwbjop ( const real_T b_a_data
[ ] , const int32_T b_a_size [ 2 ] , real_T y_data [ ] , int32_T y_size [ 2 ]
) ; static void gbnefweovc ( real_T u , real_T tol , real_T * y , real_T *
yabs ) ; static void i3hwf03gep ( real_T Ftire_x , real_T Ftire_y , real_T
b_Fxtire_sat , real_T b_Fytire_sat , real_T * Ftire_xs , real_T * Ftire_ys )
; static real_T kwgfc1chu0 ( const real_T varargin_1 [ 2 ] , const real_T
varargin_2 [ 2 ] , real_T varargin_3 ) ; real_T look1_binlcpw ( real_T u0 ,
const real_T bp0 [ ] , const real_T table [ ] , uint32_T maxIndex ) { real_T
frac ; real_T yL_0d0 ; uint32_T bpIdx ; uint32_T iLeft ; uint32_T iRght ; if
( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac = 0.0 ; } else if ( u0 < bp0 [
maxIndex ] ) { bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while
( iRght - iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else {
iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [
iLeft ] ) / ( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft =
maxIndex - 1U ; frac = 1.0 ; } yL_0d0 = table [ iLeft ] ; return ( table [
iLeft + 1U ] - yL_0d0 ) * frac + yL_0d0 ; } real_T look1_binlxpw ( real_T u0
, const real_T bp0 [ ] , const real_T table [ ] , uint32_T maxIndex ) {
real_T frac ; real_T yL_0d0 ; uint32_T bpIdx ; uint32_T iLeft ; uint32_T
iRght ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac = ( u0 - bp0 [ 0U ] ) / (
bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [ maxIndex ] ) { bpIdx =
maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght - iLeft > 1U )
{ if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft = bpIdx ; }
bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) / ( bp0 [
iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex - 1U ; frac = ( u0
- bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] - bp0 [ maxIndex - 1U ] ) ; }
yL_0d0 = table [ iLeft ] ; return ( table [ iLeft + 1U ] - yL_0d0 ) * frac +
yL_0d0 ; } real_T look1_binlcapw ( real_T u0 , const real_T bp0 [ ] , const
real_T table [ ] , uint32_T maxIndex ) { real_T frac ; real_T y ; real_T
yL_0d0 ; uint32_T bpIdx ; uint32_T iLeft ; uint32_T iRght ; if ( u0 <= bp0 [
0U ] ) { iLeft = 0U ; frac = 0.0 ; } else if ( u0 < bp0 [ maxIndex ] ) {
bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght -
iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft =
bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) /
( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex ; frac =
0.0 ; } if ( iLeft == maxIndex ) { y = table [ iLeft ] ; } else { yL_0d0 =
table [ iLeft ] ; y = ( table [ iLeft + 1U ] - yL_0d0 ) * frac + yL_0d0 ; }
return y ; } void oo0c00ipat ( jq4sjzevfh * localB , g3rr01glgf * localDW ,
joyf32pywz * localP ) { localDW -> hbdm0crtqe = localP ->
UnitDelay_InitialCondition ; localB -> p1utvufnvy = localP -> Out1_Y0 ; }
void htvvb3wiwk ( SimStruct * rtS_e , boolean_T iy1pjazynl , real_T
astab2hbil , jq4sjzevfh * localB , g3rr01glgf * localDW , joyf32pywz * localP
, mfim3kn51q * localZCE ) { if ( ssIsMajorTimeStep ( rtS_e ) ) { if (
iy1pjazynl && ( localZCE -> b3ysuqtd44 != POS_ZCSIG ) ) { localB ->
p1utvufnvy = localDW -> hbdm0crtqe - muDoubleScalarSign ( astab2hbil ) *
localP -> Constant_Value ; localDW -> hbdm0crtqe = localB -> p1utvufnvy ;
localDW -> et0xhlvwqn = 4 ; } localZCE -> b3ysuqtd44 = iy1pjazynl ; } } void
dlbunanlk3 ( real_T rtp_IC , cflrekwlxf * localB ) { localB -> kj2hrwkm2p =
rtp_IC ; } void e0prdavftv ( knzpqmzeq5 * localDW ) { localDW -> lk3vufehxq =
false ; } void aixhks31af ( SimStruct * rtS_i , knzpqmzeq5 * localDW ) {
localDW -> lk3vufehxq = false ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS_i ) ; } void osjj2s24tk ( SimStruct * rtS_i , boolean_T bn2su4q2ro ,
real_T cu3fp4lmc2 , cflrekwlxf * localB , knzpqmzeq5 * localDW ) { if (
ssIsSampleHit ( rtS_i , 1 , 0 ) && ssIsMajorTimeStep ( rtS_i ) ) { if (
bn2su4q2ro ) { if ( ! localDW -> lk3vufehxq ) { if ( ssGetTaskTime ( rtS_i ,
1 ) != ssGetTStart ( rtS_i ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS_i ) ; } localDW -> lk3vufehxq = true ; } } else if ( localDW ->
lk3vufehxq ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ;
e0prdavftv ( localDW ) ; } } if ( localDW -> lk3vufehxq ) { localB ->
kj2hrwkm2p = cu3fp4lmc2 ; if ( ssIsMajorTimeStep ( rtS_i ) ) { srUpdateBC (
localDW -> k3vf3gqtaf ) ; } } } static void coe4zy0014 ( real_T rhoz , real_T
omega , real_T * Re , real_T * Fz ) { * Re = 0.0 * muDoubleScalarAbs ( omega
) + rhoz ; if ( * Re < 0.001 ) { * Re = 0.001 ; } * Fz = ( rtNaN ) ; } static
void ihu3wiojyc ( const real_T a_data [ ] , const int32_T a_size [ 2 ] ,
real_T y_data [ ] , int32_T y_size [ 2 ] ) { y_size [ 0 ] = 1 ; y_size [ 1 ]
= a_size [ 1 ] ; if ( 0 <= ( int8_T ) a_size [ 1 ] - 1 ) { y_data [ 0 ] =
a_data [ 0 ] * a_data [ 0 ] ; } } static void g2upg1qxop ( real_T u , real_T
tol , real_T * y , real_T * yabs ) { real_T tmp_data ; real_T yabs_data ;
int32_T tmp_size [ 2 ] ; int32_T yabs_size [ 2 ] ; int32_T trueCount ; * yabs
= muDoubleScalarAbs ( u ) ; trueCount = 0 ; if ( * yabs < tol ) { trueCount =
1 ; } yabs_size [ 0 ] = 1 ; yabs_size [ 1 ] = trueCount ; if ( 0 <= trueCount
- 1 ) { yabs_data = * yabs / tol ; } if ( 0 <= trueCount - 1 ) { ihu3wiojyc (
& yabs_data , yabs_size , & tmp_data , tmp_size ) ; yabs_data = 2.0 * tol / (
3.0 - tmp_data ) ; } if ( * yabs < tol ) { * yabs = yabs_data ; } trueCount =
0 ; if ( u < 0.0 ) { trueCount = 1 ; } if ( 0 <= trueCount - 1 ) { yabs_data
= - * yabs ; } * y = * yabs ; if ( u < 0.0 ) { * y = yabs_data ; } } static
void g2upg1qxopw ( real_T u , real_T * y , real_T * yabs ) { real_T tmp_data
; real_T yabs_data ; int32_T tmp_size [ 2 ] ; int32_T yabs_size [ 2 ] ;
int32_T trueCount ; * yabs = muDoubleScalarAbs ( u ) ; trueCount = 0 ; if ( *
yabs < 0.1 ) { trueCount = 1 ; } yabs_size [ 0 ] = 1 ; yabs_size [ 1 ] =
trueCount ; if ( 0 <= trueCount - 1 ) { yabs_data = * yabs / 0.1 ; } if ( 0
<= trueCount - 1 ) { ihu3wiojyc ( & yabs_data , yabs_size , & tmp_data ,
tmp_size ) ; yabs_data = 0.2 / ( 3.0 - tmp_data ) ; } if ( * yabs < 0.1 ) { *
yabs = yabs_data ; } trueCount = 0 ; if ( u < 0.0 ) { trueCount = 1 ; } if (
0 <= trueCount - 1 ) { yabs_data = - * yabs ; } * y = * yabs ; if ( u < 0.0 )
{ * y = yabs_data ; } } static real_T nahtsipn2r ( real_T kappa , real_T Vx ,
real_T Fz , real_T b_gamma , real_T LONGVL , real_T FNOMIN , real_T b_FZMIN ,
real_T b_FZMAX , real_T press , real_T NOMPRES , real_T PRESMIN , real_T
PRESMAX , real_T PCX1 , real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1
, real_T PEX2 , real_T PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 ,
real_T PKX3 , real_T PHX1 , real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T
PPX1 , real_T PPX2 , real_T PPX3 , real_T PPX4 , real_T lam_Fzo , real_T
lam_muV , real_T lam_mux , real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex
, real_T lam_Hx , real_T lam_Vx ) { real_T Cx ; real_T Fxo ; real_T Vsx ;
real_T a__1 ; real_T b_idx_0 ; real_T dfz ; real_T dpi ; real_T f_idx_0 ;
real_T g_idx_0 ; real_T h_idx_0 ; real_T kappa_x ; b_idx_0 = Fz ; if ( Fz <
b_FZMIN ) { b_idx_0 = b_FZMIN ; } if ( b_idx_0 > b_FZMAX ) { b_idx_0 =
b_FZMAX ; } dpi = press ; if ( press < PRESMIN ) { dpi = PRESMIN ; } if ( dpi
> PRESMAX ) { dpi = PRESMAX ; } dpi = ( dpi - NOMPRES ) / NOMPRES ; dfz = (
b_idx_0 - FNOMIN * lam_Fzo ) / FNOMIN * lam_Fzo ; kappa_x = ( PHX2 * dfz +
PHX1 ) * lam_Hx + kappa ; Vsx = - muDoubleScalarAbs ( Vx ) * kappa ; Vsx =
lam_mux / ( muDoubleScalarSqrt ( Vsx * Vsx ) * lam_muV / LONGVL + 1.0 ) ; Cx
= PCX1 * lam_Cx ; f_idx_0 = Cx ; if ( Cx < 0.0 ) { f_idx_0 = 0.0 ; } Cx = ( (
PPX3 * dpi + 1.0 ) + dpi * dpi * PPX4 ) * ( PDX2 * dfz + PDX1 ) * ( 1.0 -
b_gamma * b_gamma * PDX3 ) * Vsx * b_idx_0 ; g_idx_0 = Cx ; if ( Cx < 0.0 ) {
g_idx_0 = 0.0 ; } Cx = ( ( PEX2 * dfz + PEX1 ) + dfz * dfz * PEX3 ) * ( 1.0 -
muDoubleScalarTanh ( 10.0 * kappa_x ) * PEX4 ) * lam_Ex ; h_idx_0 = Cx ; if (
Cx > 1.0 ) { h_idx_0 = 1.0 ; } g2upg1qxopw ( f_idx_0 * g_idx_0 , & Cx , &
a__1 ) ; dpi = ( PKX2 * dfz + PKX1 ) * b_idx_0 * muDoubleScalarExp ( PKX3 *
dfz ) * ( ( PPX1 * dpi + 1.0 ) + dpi * dpi * PPX2 ) * lam_Kxkappa / Cx ; Fxo
= muDoubleScalarSin ( muDoubleScalarAtan ( dpi * kappa_x - ( dpi * kappa_x -
muDoubleScalarAtan ( dpi * kappa_x ) ) * h_idx_0 ) * f_idx_0 ) * g_idx_0 + (
PVX2 * dfz + PVX1 ) * b_idx_0 * ( Vsx * 10.0 / ( 9.0 * Vsx + 1.0 ) ) * lam_Vx
; return Fxo ; } static real_T k0b2clfrrc ( real_T Fz , real_T omega , real_T
Vx , real_T press , real_T QSY1 , real_T QSY2 , real_T QSY3 , real_T QSY7 ,
real_T QSY8 , real_T UNLOADED_RADIUS , real_T b_FZMIN , real_T b_FZMAX ,
real_T PRESMIN , real_T PRESMAX ) { real_T b_idx_0 ; real_T d_idx_0 ; b_idx_0
= press ; if ( press < PRESMIN ) { b_idx_0 = PRESMIN ; } if ( b_idx_0 >
PRESMAX ) { b_idx_0 = PRESMAX ; } d_idx_0 = Fz ; if ( Fz < b_FZMIN ) {
d_idx_0 = b_FZMIN ; } if ( d_idx_0 > b_FZMAX ) { d_idx_0 = b_FZMAX ; } return
( ( QSY2 * muDoubleScalarAbs ( Vx ) + QSY1 ) + Vx * Vx * QSY3 ) * (
muDoubleScalarTanh ( omega ) * UNLOADED_RADIUS ) * ( muDoubleScalarPower (
d_idx_0 , QSY7 ) * muDoubleScalarPower ( b_idx_0 , QSY8 ) ) ; } static real_T
ethefka0n4 ( real_T Fx , real_T Fz , real_T Omega , real_T Vx , real_T press
, real_T FNOMIN , real_T NOMPRES , real_T QSY1 , real_T QSY2 , real_T QSY3 ,
real_T QSY4 , real_T QSY5 , real_T QSY6 , real_T QSY7 , real_T QSY8 , real_T
b_gamma , real_T lam_My , real_T UNLOADED_RADIUS , real_T b_FZMAX , real_T
PRESMIN , real_T PRESMAX ) { real_T b_idx_0 ; real_T d_idx_0 ; b_idx_0 =
press ; if ( press < PRESMIN ) { b_idx_0 = PRESMIN ; } if ( b_idx_0 > PRESMAX
) { b_idx_0 = PRESMAX ; } d_idx_0 = Fz ; if ( Fz < 0.0 ) { d_idx_0 = 0.0 ; }
if ( d_idx_0 > b_FZMAX ) { d_idx_0 = b_FZMAX ; } return ( ( ( ( QSY2 * Fx /
FNOMIN + QSY1 ) + muDoubleScalarAbs ( Vx / 16.7 ) * QSY3 ) +
muDoubleScalarPower ( Vx / 16.7 , 4.0 ) * QSY4 ) + ( QSY6 * d_idx_0 / FNOMIN
+ QSY5 ) * ( b_gamma * b_gamma ) ) * ( muDoubleScalarTanh ( Omega ) * d_idx_0
* UNLOADED_RADIUS ) * ( muDoubleScalarPower ( d_idx_0 / FNOMIN , QSY7 ) *
muDoubleScalarPower ( b_idx_0 / NOMPRES , QSY8 ) ) * lam_My ; } static real_T
gtlabshtz2 ( real_T Fz , real_T omega , real_T Tamb , real_T Fpl , real_T Cr
, real_T Kt , real_T Tmeas , real_T Re , real_T b_FZMIN , real_T b_FZMAX ,
real_T TMIN , real_T TMAX ) { real_T b_idx_0 ; real_T d_idx_0 ; b_idx_0 =
Tamb ; if ( Tamb < TMIN ) { b_idx_0 = TMIN ; } if ( b_idx_0 > TMAX ) {
b_idx_0 = TMAX ; } d_idx_0 = Fz ; if ( Fz < b_FZMIN ) { d_idx_0 = b_FZMIN ; }
if ( d_idx_0 > b_FZMAX ) { d_idx_0 = b_FZMAX ; } return ( d_idx_0 * Cr *
0.001 / ( ( b_idx_0 - Tmeas ) * Kt + 1.0 ) + Fpl ) * ( - muDoubleScalarTanh (
omega ) * Re ) ; } static real_T povs05y3do ( const real_T varargin_1 [ 3 ] ,
const real_T varargin_2 [ 3 ] , const real_T varargin_3 [ 9 ] , real_T
varargin_4 , real_T varargin_5 ) { real_T Vq ; real_T qx1 ; real_T rx ;
int32_T low_i ; int32_T low_ip1 ; if ( ( varargin_4 >= varargin_1 [ 0 ] ) &&
( varargin_4 <= varargin_1 [ 2 ] ) && ( varargin_5 >= varargin_2 [ 0 ] ) && (
varargin_5 <= varargin_2 [ 2 ] ) ) { low_i = 0 ; if ( varargin_4 >=
varargin_1 [ 1 ] ) { low_i = 1 ; } low_ip1 = 0 ; if ( varargin_5 >=
varargin_2 [ 1 ] ) { low_ip1 = 1 ; } if ( varargin_4 == varargin_1 [ low_i ]
) { qx1 = varargin_3 [ 3 * low_i + low_ip1 ] ; Vq = varargin_3 [ ( 3 * low_i
+ low_ip1 ) + 1 ] ; } else if ( varargin_1 [ low_i + 1 ] == varargin_4 ) {
qx1 = varargin_3 [ ( low_i + 1 ) * 3 + low_ip1 ] ; Vq = varargin_3 [ ( (
low_i + 1 ) * 3 + low_ip1 ) + 1 ] ; } else { rx = ( varargin_4 - varargin_1 [
low_i ] ) / ( varargin_1 [ low_i + 1 ] - varargin_1 [ low_i ] ) ; if (
varargin_3 [ ( low_i + 1 ) * 3 + low_ip1 ] == varargin_3 [ 3 * low_i +
low_ip1 ] ) { qx1 = varargin_3 [ 3 * low_i + low_ip1 ] ; } else { qx1 =
varargin_3 [ ( low_i + 1 ) * 3 + low_ip1 ] * rx + varargin_3 [ 3 * low_i +
low_ip1 ] * ( 1.0 - rx ) ; } if ( varargin_3 [ ( ( low_i + 1 ) * 3 + low_ip1
) + 1 ] == varargin_3 [ ( 3 * low_i + low_ip1 ) + 1 ] ) { Vq = varargin_3 [ (
3 * low_i + low_ip1 ) + 1 ] ; } else { Vq = varargin_3 [ ( ( low_i + 1 ) * 3
+ low_ip1 ) + 1 ] * rx + varargin_3 [ ( 3 * low_i + low_ip1 ) + 1 ] * ( 1.0 -
rx ) ; } } if ( ( varargin_5 == varargin_2 [ low_ip1 ] ) || ( qx1 == Vq ) ) {
Vq = qx1 ; } else if ( ! ( varargin_2 [ low_ip1 + 1 ] == varargin_5 ) ) { rx
= ( varargin_5 - varargin_2 [ low_ip1 ] ) / ( varargin_2 [ low_ip1 + 1 ] -
varargin_2 [ low_ip1 ] ) ; Vq = ( 1.0 - rx ) * qx1 + rx * Vq ; } } else { Vq
= 0.0 ; } return Vq ; } void edtdmcgobo ( real_T nn4err54og , real_T
nkknsqhn1j , real_T biwnilocf3 , real_T o4pofgxapx , real_T ppw02b25cd ,
real_T bagcshaodo , real_T mzixj1q411 , real_T lxl1gou4lx , real_T bc3w5krrme
, real_T omd1ozvfnm , real_T mdqworkw2a , real_T eklao3eov1 , real_T
ducgzmvmzo , real_T ospnnfaghl , real_T c2yyr4rbe1 , real_T atvahx00hr ,
real_T c5m1xfj0jj , real_T nxofn4b0km , real_T cajax0p2xb , real_T bjxc1hn5wm
, real_T cpufb4r4es , real_T mi14ogpfko , real_T a3pe2atzbi , real_T
iynhl4pkwl , real_T bt2yqn0gru , real_T evqah1y0oh , real_T nkosqlpejv ,
real_T lf2ckfwect , real_T jrlqnedmkx , real_T j1ugea13aj , real_T nrvxctkdzk
, real_T dqjsxzz2ov , real_T dwjzrmeoez , real_T dqyqzxsbhu , real_T
jvgada2bkf , real_T mxr4zeqv4b , real_T faxsjr0kji , real_T eavcvcphc5 ,
real_T dzdgk24nlc , real_T oilwq1se13 , real_T bifatdod5g , real_T okaqgk14k4
, real_T coeixtyint , const real_T j4cicndswe [ 3 ] , const real_T d1audi5k0h
[ 3 ] , const real_T mzo5psvwzy [ 9 ] , real_T ckkgse2kl4 , real_T mzg1b2stw4
, real_T cdk2uodlww , real_T fvaujmgwqj , real_T o1avvhu50l , real_T
eoscy4khv3 , real_T dhhvdqx0gr , real_T oni5rgefui , real_T lxogvuiowo ,
real_T nyypyvuiow , real_T gcq0zlrzoj , real_T blfdzqv2r4 , real_T jp4aq4uuqu
, real_T bsrlk5z5dq , real_T pgivpx3q4e , const real_T pnya0twja3 [ 3 ] ,
const real_T ed2nmm3un2 [ 3 ] , const real_T mvci5xr2hb [ 9 ] , real_T
n0dppfrnyz , real_T lxvdgeokcd , real_T i1nfemj5xe , real_T kaqjg5ksuw ,
real_T gaw3iglsfr , real_T mkai00jzxw , real_T i0lfllinqe , real_T lixzgoolq0
, real_T gcklikz0ge , real_T egsohmqzjx , real_T jfsqwfwzbn , real_T
b3ti4tmlpg , real_T florhnxthn , real_T bl4lualf3o , real_T pf3qa23b3g ,
real_T ac5m5lbnqw , real_T ixaxjuxb2p , real_T lyjhboinht , real_T mpdvzjcgr4
, real_T ec2pjrg0ql , real_T dc4lxdudoc , real_T atx1qwu4bp , real_T
iyuad5p3sz , real_T pbxsgxxcpr , real_T fmfuzk2ba0 , real_T jei4fjb4vn ,
real_T pefsysmkct , real_T * epmsla4yrj , real_T * mvcf2joxu1 , real_T
rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW , real_T rtp_kappamax ,
k0a351zprl * localB ) { real_T mzo5psvwzy_p [ 9 ] ; real_T Re ; real_T Vxpabs
; real_T b_FzTire ; int32_T trueCount ; localB -> kvzzukibme [ 0 ] =
ppw02b25cd ; localB -> kvzzukibme [ 1 ] = bagcshaodo ; localB -> kvzzukibme [
2 ] = mzixj1q411 ; localB -> kvzzukibme [ 3 ] = lxl1gou4lx ; localB ->
kvzzukibme [ 4 ] = bc3w5krrme ; localB -> pldhr0ir00 [ 0 ] = omd1ozvfnm ;
localB -> pldhr0ir00 [ 1 ] = mdqworkw2a ; localB -> pldhr0ir00 [ 2 ] =
eklao3eov1 ; localB -> pldhr0ir00 [ 3 ] = ducgzmvmzo ; localB -> pldhr0ir00 [
4 ] = ospnnfaghl ; localB -> pldhr0ir00 [ 5 ] = c2yyr4rbe1 ; localB ->
pldhr0ir00 [ 6 ] = atvahx00hr ; localB -> pldhr0ir00 [ 7 ] = c5m1xfj0jj ;
localB -> pldhr0ir00 [ 8 ] = nxofn4b0km ; localB -> pldhr0ir00 [ 9 ] =
cajax0p2xb ; localB -> pldhr0ir00 [ 10 ] = bjxc1hn5wm ; localB -> pldhr0ir00
[ 11 ] = cpufb4r4es ; localB -> pldhr0ir00 [ 12 ] = mi14ogpfko ; localB ->
pldhr0ir00 [ 13 ] = a3pe2atzbi ; localB -> pldhr0ir00 [ 14 ] = iynhl4pkwl ;
localB -> pldhr0ir00 [ 15 ] = bt2yqn0gru ; localB -> pldhr0ir00 [ 16 ] =
evqah1y0oh ; localB -> pldhr0ir00 [ 17 ] = nkosqlpejv ; localB -> pldhr0ir00
[ 18 ] = lf2ckfwect ; localB -> pldhr0ir00 [ 19 ] = jrlqnedmkx ; localB ->
pldhr0ir00 [ 20 ] = j1ugea13aj ; localB -> pldhr0ir00 [ 21 ] = nrvxctkdzk ;
localB -> pldhr0ir00 [ 22 ] = dqjsxzz2ov ; localB -> pldhr0ir00 [ 23 ] =
dwjzrmeoez ; localB -> pldhr0ir00 [ 24 ] = dqyqzxsbhu ; localB -> pldhr0ir00
[ 25 ] = jvgada2bkf ; localB -> pldhr0ir00 [ 26 ] = mxr4zeqv4b ; localB ->
pldhr0ir00 [ 27 ] = faxsjr0kji ; localB -> pldhr0ir00 [ 28 ] = eavcvcphc5 ;
localB -> pldhr0ir00 [ 29 ] = dzdgk24nlc ; localB -> pldhr0ir00 [ 30 ] =
oilwq1se13 ; localB -> pldhr0ir00 [ 31 ] = bifatdod5g ; localB -> pldhr0ir00
[ 32 ] = okaqgk14k4 ; localB -> pldhr0ir00 [ 33 ] = coeixtyint ; localB ->
pesqmq44xv [ 0 ] = ducgzmvmzo ; localB -> pesqmq44xv [ 1 ] = ckkgse2kl4 ;
localB -> pesqmq44xv [ 2 ] = mzg1b2stw4 ; localB -> pesqmq44xv [ 3 ] =
cdk2uodlww ; localB -> pesqmq44xv [ 4 ] = fvaujmgwqj ; localB -> pesqmq44xv [
5 ] = o1avvhu50l ; localB -> pesqmq44xv [ 6 ] = eoscy4khv3 ; localB ->
pesqmq44xv [ 7 ] = dhhvdqx0gr ; localB -> pesqmq44xv [ 8 ] = oni5rgefui ;
localB -> pesqmq44xv [ 9 ] = lxogvuiowo ; localB -> pesqmq44xv [ 10 ] =
nyypyvuiow ; localB -> pesqmq44xv [ 11 ] = gcq0zlrzoj ; localB -> pesqmq44xv
[ 12 ] = blfdzqv2r4 ; localB -> pesqmq44xv [ 13 ] = jp4aq4uuqu ; localB ->
pesqmq44xv [ 14 ] = bsrlk5z5dq ; localB -> pesqmq44xv [ 15 ] = pgivpx3q4e ;
localB -> lysdlpkzoy [ 0 ] = ducgzmvmzo ; localB -> lysdlpkzoy [ 1 ] =
lxvdgeokcd ; localB -> lysdlpkzoy [ 2 ] = i1nfemj5xe ; localB -> lysdlpkzoy [
3 ] = kaqjg5ksuw ; localB -> lysdlpkzoy [ 4 ] = gaw3iglsfr ; localB ->
lysdlpkzoy [ 5 ] = mkai00jzxw ; localB -> lysdlpkzoy [ 6 ] = i0lfllinqe ;
localB -> lysdlpkzoy [ 7 ] = lixzgoolq0 ; localB -> lysdlpkzoy [ 8 ] =
gcklikz0ge ; localB -> lysdlpkzoy [ 9 ] = egsohmqzjx ; localB -> lysdlpkzoy [
10 ] = jfsqwfwzbn ; localB -> lysdlpkzoy [ 11 ] = b3ti4tmlpg ; localB ->
lysdlpkzoy [ 12 ] = florhnxthn ; localB -> lysdlpkzoy [ 13 ] = bl4lualf3o ;
localB -> lysdlpkzoy [ 14 ] = pf3qa23b3g ; localB -> lysdlpkzoy [ 15 ] =
ac5m5lbnqw ; localB -> lysdlpkzoy [ 16 ] = ixaxjuxb2p ; localB -> lysdlpkzoy
[ 17 ] = lyjhboinht ; localB -> lysdlpkzoy [ 18 ] = mpdvzjcgr4 ; localB ->
lysdlpkzoy [ 19 ] = ec2pjrg0ql ; localB -> lysdlpkzoy [ 20 ] = dc4lxdudoc ;
localB -> lysdlpkzoy [ 21 ] = atx1qwu4bp ; localB -> lysdlpkzoy [ 22 ] =
iyuad5p3sz ; localB -> lysdlpkzoy [ 23 ] = pbxsgxxcpr ; switch ( ( int32_T )
pefsysmkct ) { case 0 : Re = nn4err54og ; break ; case 1 : coe4zy0014 (
n0dppfrnyz , biwnilocf3 , & Re , & b_FzTire ) ; break ; case 2 : Re =
nn4err54og ; break ; default : Re = nn4err54og ; break ; } g2upg1qxop (
o4pofgxapx , rtp_VXLOW , & b_FzTire , & Vxpabs ) ; b_FzTire = ( nn4err54og *
biwnilocf3 - o4pofgxapx ) / Vxpabs ; trueCount = 0 ; if ( b_FzTire < -
rtp_kappamax ) { trueCount = 1 ; } if ( 0 <= trueCount - 1 ) { b_FzTire = -
rtp_kappamax ; } Vxpabs = b_FzTire ; if ( b_FzTire > rtp_kappamax ) { Vxpabs
= rtp_kappamax ; } * epmsla4yrj = Vxpabs ; switch ( ( int32_T ) fmfuzk2ba0 )
{ case 0 : b_FzTire = nkknsqhn1j ; if ( nkknsqhn1j < rtp_FZMIN ) { b_FzTire =
rtp_FZMIN ; } if ( b_FzTire > rtp_FZMAX ) { b_FzTire = rtp_FZMAX ; } b_FzTire
= muDoubleScalarSin ( muDoubleScalarAtan ( Vxpabs * localB -> kvzzukibme [ 2
] - ( Vxpabs * localB -> kvzzukibme [ 2 ] - muDoubleScalarAtan ( Vxpabs *
localB -> kvzzukibme [ 2 ] ) ) * localB -> kvzzukibme [ 3 ] ) * localB ->
kvzzukibme [ 1 ] ) * localB -> kvzzukibme [ 0 ] * ( b_FzTire * localB ->
kvzzukibme [ 4 ] ) ; break ; case 2 : b_FzTire = nahtsipn2r ( Vxpabs ,
o4pofgxapx , nkknsqhn1j , localB -> pldhr0ir00 [ 0 ] , localB -> pldhr0ir00 [
1 ] , localB -> pldhr0ir00 [ 2 ] , rtp_FZMIN , rtp_FZMAX , localB ->
pldhr0ir00 [ 3 ] , localB -> pldhr0ir00 [ 4 ] , localB -> pldhr0ir00 [ 5 ] ,
localB -> pldhr0ir00 [ 6 ] , localB -> pldhr0ir00 [ 7 ] , localB ->
pldhr0ir00 [ 8 ] , localB -> pldhr0ir00 [ 9 ] , localB -> pldhr0ir00 [ 10 ] ,
localB -> pldhr0ir00 [ 11 ] , localB -> pldhr0ir00 [ 12 ] , localB ->
pldhr0ir00 [ 13 ] , localB -> pldhr0ir00 [ 14 ] , localB -> pldhr0ir00 [ 15 ]
, localB -> pldhr0ir00 [ 16 ] , localB -> pldhr0ir00 [ 17 ] , localB ->
pldhr0ir00 [ 18 ] , localB -> pldhr0ir00 [ 19 ] , localB -> pldhr0ir00 [ 20 ]
, localB -> pldhr0ir00 [ 21 ] , localB -> pldhr0ir00 [ 22 ] , localB ->
pldhr0ir00 [ 23 ] , localB -> pldhr0ir00 [ 24 ] , localB -> pldhr0ir00 [ 25 ]
, localB -> pldhr0ir00 [ 26 ] , localB -> pldhr0ir00 [ 27 ] , localB ->
pldhr0ir00 [ 28 ] , localB -> pldhr0ir00 [ 29 ] , localB -> pldhr0ir00 [ 30 ]
, localB -> pldhr0ir00 [ 31 ] , localB -> pldhr0ir00 [ 32 ] , localB ->
pldhr0ir00 [ 33 ] ) ; break ; case 3 : b_FzTire = nkknsqhn1j ; if (
nkknsqhn1j < rtp_FZMIN ) { b_FzTire = rtp_FZMIN ; } if ( b_FzTire > rtp_FZMAX
) { b_FzTire = rtp_FZMAX ; } for ( trueCount = 0 ; trueCount < 3 ; trueCount
++ ) { mzo5psvwzy_p [ 3 * trueCount ] = mzo5psvwzy [ trueCount ] ;
mzo5psvwzy_p [ 3 * trueCount + 1 ] = mzo5psvwzy [ trueCount + 3 ] ;
mzo5psvwzy_p [ 3 * trueCount + 2 ] = mzo5psvwzy [ trueCount + 6 ] ; }
b_FzTire = povs05y3do ( j4cicndswe , d1audi5k0h , mzo5psvwzy_p , Vxpabs ,
b_FzTire ) * localB -> kvzzukibme [ 4 ] ; break ; default : b_FzTire = 0.0 ;
* epmsla4yrj = 0.0 ; break ; } switch ( ( int32_T ) jei4fjb4vn ) { case 0 :
localB -> lniimqwaxy = 0.0 ; break ; case 1 : localB -> lniimqwaxy =
k0b2clfrrc ( nkknsqhn1j , biwnilocf3 , o4pofgxapx , localB -> pesqmq44xv [ 0
] , localB -> pesqmq44xv [ 3 ] , localB -> pesqmq44xv [ 4 ] , localB ->
pesqmq44xv [ 5 ] , localB -> pesqmq44xv [ 9 ] , localB -> pesqmq44xv [ 10 ] ,
Re , rtp_FZMIN , rtp_FZMAX , localB -> pesqmq44xv [ 14 ] , localB ->
pesqmq44xv [ 15 ] ) ; break ; case 2 : localB -> lniimqwaxy = ethefka0n4 (
b_FzTire , nkknsqhn1j , biwnilocf3 , o4pofgxapx , localB -> pesqmq44xv [ 0 ]
, localB -> pesqmq44xv [ 1 ] , localB -> pesqmq44xv [ 2 ] , localB ->
pesqmq44xv [ 3 ] , localB -> pesqmq44xv [ 4 ] , localB -> pesqmq44xv [ 5 ] ,
localB -> pesqmq44xv [ 6 ] , localB -> pesqmq44xv [ 7 ] , localB ->
pesqmq44xv [ 8 ] , localB -> pesqmq44xv [ 9 ] , localB -> pesqmq44xv [ 10 ] ,
localB -> pesqmq44xv [ 11 ] , localB -> pesqmq44xv [ 12 ] , localB ->
pesqmq44xv [ 13 ] , rtp_FZMAX , localB -> pesqmq44xv [ 14 ] , localB ->
pesqmq44xv [ 15 ] ) ; break ; case 3 : Vxpabs = nkknsqhn1j ; if ( nkknsqhn1j
< 0.0 ) { Vxpabs = 0.0 ; } if ( Vxpabs > rtp_FZMAX ) { Vxpabs = rtp_FZMAX ; }
for ( trueCount = 0 ; trueCount < 3 ; trueCount ++ ) { mzo5psvwzy_p [ 3 *
trueCount ] = mvci5xr2hb [ trueCount ] ; mzo5psvwzy_p [ 3 * trueCount + 1 ] =
mvci5xr2hb [ trueCount + 3 ] ; mzo5psvwzy_p [ 3 * trueCount + 2 ] =
mvci5xr2hb [ trueCount + 6 ] ; } localB -> lniimqwaxy = - (
muDoubleScalarTanh ( biwnilocf3 ) * povs05y3do ( pnya0twja3 , ed2nmm3un2 ,
mzo5psvwzy_p , o4pofgxapx , Vxpabs ) ) ; break ; case 4 : localB ->
lniimqwaxy = - gtlabshtz2 ( nkknsqhn1j , biwnilocf3 , localB -> pesqmq44xv [
0 ] , localB -> pesqmq44xv [ 3 ] , localB -> pesqmq44xv [ 4 ] , localB ->
pesqmq44xv [ 5 ] , localB -> pesqmq44xv [ 6 ] , Re , rtp_FZMIN , rtp_FZMAX ,
localB -> pesqmq44xv [ 14 ] , localB -> pesqmq44xv [ 15 ] ) ; break ; default
: localB -> lniimqwaxy = 0.0 ; break ; } localB -> pfchf5chga = b_FzTire ; *
mvcf2joxu1 = Re ; } static boolean_T oyjuwaobkx ( real_T Tout , real_T Tfmaxs
, gu2d1u3t5r * localB , of1genwmwx * localDW ) { localB -> kwqxwq5vxc = Tout
; localB -> mtpqbcckqk = Tfmaxs ; localB -> gri1hwems4 = ( muDoubleScalarAbs
( localB -> kwqxwq5vxc ) >= localB -> mtpqbcckqk ) ; localDW -> ftesiynqap =
4 ; return localB -> gri1hwems4 ; } static boolean_T gioqqisuqg ( real_T Tout
, real_T Tfmaxs , gu2d1u3t5r * localB , of1genwmwx * localDW , l3ruaejn4y *
localP ) { localB -> mq031stjmt = Tout ; localB -> hswbee0aei = Tfmaxs ;
localB -> ocqpah2hh5 = localP -> CombinatorialLogic_table [ ( ( (
muDoubleScalarAbs ( ( ( 0.0 - localB -> mq031stjmt ) - localB -> gb3hspv0h3 )
+ localB -> gb3hspv0h3 ) >= localB -> hswbee0aei ) + ( ( uint32_T ) (
muDoubleScalarAbs ( - localB -> mq031stjmt ) <= localB -> hswbee0aei ) << 1 )
) << 1 ) + localDW -> oiwrxpxdcx ] ; localDW -> oiwrxpxdcx = localB ->
ocqpah2hh5 ; localDW -> lmrevddxcj = 4 ; return localB -> ocqpah2hh5 ; } void
o212f2ghps ( real_T rtp_omegao , gu2d1u3t5r * localB , of1genwmwx * localDW ,
l3ruaejn4y * localP , bneugbcqrf * localX ) { localDW -> exa4vdwbrv =
nhqpsplbup ; localDW -> lt4gid0hxl = 0U ; localDW -> bebqiw1dl1 = 0U ; localB
-> gpac3swnt3 = 0.0 ; localB -> ntz5rq4pu2 = 0.0 ; localB -> or5pwqbvrm = 0.0
; localB -> b4h3uttc2m = 0.0 ; localB -> gri1hwems4 = localP -> yn_Y0 ;
localDW -> oiwrxpxdcx = localP -> UnitDelay_InitialCondition ; localB ->
ocqpah2hh5 = localP -> yn_Y0_cejlgz0ere ; localX -> aia4xhywhu = rtp_omegao ;
} void e4e3o5kmkl ( gu2d1u3t5r * localB ) { localB -> kwqxwq5vxc = 0.0 ;
localB -> mtpqbcckqk = 0.0 ; localB -> mq031stjmt = 0.0 ; localB ->
hswbee0aei = 0.0 ; localB -> gpac3swnt3 = 0.0 ; localB -> ntz5rq4pu2 = 0.0 ;
localB -> b4h3uttc2m = 0.0 ; localB -> or5pwqbvrm = 0.0 ; localB ->
gri1hwems4 = false ; localB -> ocqpah2hh5 = false ; localB -> gb3hspv0h3 =
0.0 ; localB -> oyimgebi55 = 0.0 ; localB -> gn1fggjwwk = 0.0 ; localB ->
jsghhdyulc = 0.0 ; localB -> hroageih0k = 0.0 ; localB -> lqej5fxi2o = 0.0 ;
localB -> jpyqek45cd = 0.0 ; } void bzrmbvlv5h ( SimStruct * rtS_m , real_T
cfgeu4oux5 , real_T k5z5w4hnnk , real_T mkdyrwrxc1 , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , gu2d1u3t5r * localB ,
of1genwmwx * localDW , l3ruaejn4y * localP , bneugbcqrf * localX ) { if (
ssIsMajorTimeStep ( rtS_m ) ) { localDW -> p1sl2m4kvt = ssGetTaskTime ( rtS_m
, 0 ) ; localDW -> jgkvns5fgd = false ; localDW -> exa4vdwbrv = nhqpsplbup ;
if ( localDW -> lt4gid0hxl == 0U ) { localDW -> lt4gid0hxl = 1U ; localX ->
aia4xhywhu = rtp_omegao ; localDW -> jgkvns5fgd = true ; localDW ->
bebqiw1dl1 = er52vx2pmt ; localB -> oyimgebi55 = localX -> aia4xhywhu ;
localB -> gn1fggjwwk = localP -> u_Gain * localB -> oyimgebi55 ; localB ->
jsghhdyulc = mkdyrwrxc1 * muDoubleScalarTanh ( localB -> gn1fggjwwk ) ;
localB -> hroageih0k = rtp_br * localB -> oyimgebi55 ; localB -> or5pwqbvrm =
localB -> hroageih0k ; localB -> gpac3swnt3 = localB -> oyimgebi55 ; localB
-> lqej5fxi2o = ( localB -> jsghhdyulc - cfgeu4oux5 ) - localB -> hroageih0k
; localB -> jpyqek45cd = 1.0 / rtp_Iyy * localB -> lqej5fxi2o ; localB ->
ntz5rq4pu2 = localB -> jpyqek45cd ; localB -> b4h3uttc2m = localB ->
lqej5fxi2o ; } else if ( localDW -> bebqiw1dl1 == halod3qimo ) { if (
oyjuwaobkx ( cfgeu4oux5 , k5z5w4hnnk , localB , localDW ) ) { localX ->
aia4xhywhu = 0.0 ; localDW -> jgkvns5fgd = true ; localDW -> bebqiw1dl1 =
er52vx2pmt ; localB -> oyimgebi55 = localX -> aia4xhywhu ; localB ->
gn1fggjwwk = localP -> u_Gain * localB -> oyimgebi55 ; localB -> jsghhdyulc =
mkdyrwrxc1 * muDoubleScalarTanh ( localB -> gn1fggjwwk ) ; localB ->
hroageih0k = rtp_br * localB -> oyimgebi55 ; localB -> or5pwqbvrm = localB ->
hroageih0k ; localB -> gpac3swnt3 = localB -> oyimgebi55 ; localB ->
lqej5fxi2o = ( localB -> jsghhdyulc - cfgeu4oux5 ) - localB -> hroageih0k ;
localB -> jpyqek45cd = 1.0 / rtp_Iyy * localB -> lqej5fxi2o ; localB ->
ntz5rq4pu2 = localB -> jpyqek45cd ; localB -> b4h3uttc2m = localB ->
lqej5fxi2o ; } } else if ( gioqqisuqg ( cfgeu4oux5 , k5z5w4hnnk , localB ,
localDW , localP ) && ( muDoubleScalarAbs ( localB -> gpac3swnt3 ) <=
rtp_OmegaTol ) ) { localDW -> jgkvns5fgd = true ; localDW -> bebqiw1dl1 =
halod3qimo ; localB -> b4h3uttc2m = - cfgeu4oux5 ; if ( ssIsSampleHit ( rtS_m
, 1 , 0 ) ) { localB -> gpac3swnt3 = localP -> locked_Value ; localB ->
ntz5rq4pu2 = localP -> locked1_Value ; localB -> or5pwqbvrm = localP ->
locked2_Value ; } } if ( localDW -> jgkvns5fgd ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } } if ( localDW ->
bebqiw1dl1 == halod3qimo ) { localB -> b4h3uttc2m = - cfgeu4oux5 ; if (
ssIsSampleHit ( rtS_m , 1 , 0 ) ) { localB -> gpac3swnt3 = localP ->
locked_Value ; localB -> ntz5rq4pu2 = localP -> locked1_Value ; localB ->
or5pwqbvrm = localP -> locked2_Value ; } } else { localB -> oyimgebi55 =
localX -> aia4xhywhu ; localB -> gn1fggjwwk = localP -> u_Gain * localB ->
oyimgebi55 ; localB -> jsghhdyulc = mkdyrwrxc1 * muDoubleScalarTanh ( localB
-> gn1fggjwwk ) ; localB -> hroageih0k = rtp_br * localB -> oyimgebi55 ;
localB -> or5pwqbvrm = localB -> hroageih0k ; localB -> gpac3swnt3 = localB
-> oyimgebi55 ; localB -> lqej5fxi2o = ( localB -> jsghhdyulc - cfgeu4oux5 )
- localB -> hroageih0k ; localB -> jpyqek45cd = 1.0 / rtp_Iyy * localB ->
lqej5fxi2o ; localB -> ntz5rq4pu2 = localB -> jpyqek45cd ; localB ->
b4h3uttc2m = localB -> lqej5fxi2o ; } } void bzrmbvlv5hTID3 ( real_T rtp_br ,
gu2d1u3t5r * localB , l3ruaejn4y * localP ) { localB -> gb3hspv0h3 = rtp_br *
localP -> Constant_Value ; } void h1gjxkey50 ( gu2d1u3t5r * localB ,
of1genwmwx * localDW , ccejl0ogc2 * localXdot ) { localXdot -> aia4xhywhu =
0.0 ; if ( localDW -> bebqiw1dl1 == er52vx2pmt ) { localXdot -> aia4xhywhu =
localB -> jpyqek45cd ; } } void ndtkogdbvh ( real_T rtp_omegao , kjgphjufh5 *
localB , i2qsjznhcu * localDW , jwndialyja * localP , bdqrkgokb2 * localX ) {
int32_T hphfpdmdiw ; for ( hphfpdmdiw = 0 ; hphfpdmdiw < 1 ; hphfpdmdiw ++ )
{ o212f2ghps ( rtp_omegao , & localB -> c2pauqsk3t [ hphfpdmdiw ] .
e4olea1wzo , & localDW -> c2pauqsk3t [ hphfpdmdiw ] . e4olea1wzo , & localP
-> c2pauqsk3t . e4olea1wzo , & localX -> c2pauqsk3t [ hphfpdmdiw ] .
e4olea1wzo ) ; } } void dqqfqzhkcj ( kjgphjufh5 * localB ) { int32_T
hphfpdmdiw ; for ( hphfpdmdiw = 0 ; hphfpdmdiw < 1 ; hphfpdmdiw ++ ) {
e4e3o5kmkl ( & localB -> c2pauqsk3t [ hphfpdmdiw ] . e4olea1wzo ) ; } } void
noxrljyvsb ( SimStruct * rtS_g , real_T oifrycyujk , real_T erufve5m2t ,
real_T b5jhckgp0e , real_T * o34nh42ofz , real_T rtp_omegao , real_T rtp_br ,
real_T rtp_Iyy , real_T rtp_VXLOW , real_T rtp_Re , kjgphjufh5 * localB ,
i2qsjznhcu * localDW , jwndialyja * localP , bdqrkgokb2 * localX ) { real_T
putx0oyqez ; real_T knsyrxlx3q ; real_T bxecsr2iqb ; int32_T hphfpdmdiw ; for
( hphfpdmdiw = 0 ; hphfpdmdiw < 1 ; hphfpdmdiw ++ ) { putx0oyqez = oifrycyujk
; knsyrxlx3q = erufve5m2t ; bxecsr2iqb = b5jhckgp0e ; bzrmbvlv5h ( rtS_g ,
putx0oyqez , knsyrxlx3q , bxecsr2iqb , rtp_omegao , rtp_br , rtp_Iyy ,
rtp_VXLOW * rtp_Re * 0.0 , & localB -> c2pauqsk3t [ hphfpdmdiw ] . e4olea1wzo
, & localDW -> c2pauqsk3t [ hphfpdmdiw ] . e4olea1wzo , & localP ->
c2pauqsk3t . e4olea1wzo , & localX -> c2pauqsk3t [ hphfpdmdiw ] . e4olea1wzo
) ; * o34nh42ofz = localB -> c2pauqsk3t [ hphfpdmdiw ] . e4olea1wzo .
gpac3swnt3 ; } } void noxrljyvsbTID3 ( real_T oifrycyujk , real_T erufve5m2t
, real_T b5jhckgp0e , real_T rtp_br , kjgphjufh5 * localB , jwndialyja *
localP ) { real_T putx0oyqez ; real_T knsyrxlx3q ; real_T bxecsr2iqb ;
int32_T hphfpdmdiw ; for ( hphfpdmdiw = 0 ; hphfpdmdiw < 1 ; hphfpdmdiw ++ )
{ bzrmbvlv5hTID3 ( rtp_br , & localB -> c2pauqsk3t [ hphfpdmdiw ] .
e4olea1wzo , & localP -> c2pauqsk3t . e4olea1wzo ) ; putx0oyqez = oifrycyujk
; knsyrxlx3q = erufve5m2t ; bxecsr2iqb = b5jhckgp0e ; } } void cybsisxnfc (
real_T oifrycyujk , real_T erufve5m2t , real_T b5jhckgp0e , kjgphjufh5 *
localB , i2qsjznhcu * localDW , plfar4j100 * localXdot ) { real_T putx0oyqez
; real_T knsyrxlx3q ; real_T bxecsr2iqb ; int32_T hphfpdmdiw ; for (
hphfpdmdiw = 0 ; hphfpdmdiw < 1 ; hphfpdmdiw ++ ) { putx0oyqez = oifrycyujk ;
knsyrxlx3q = erufve5m2t ; bxecsr2iqb = b5jhckgp0e ; h1gjxkey50 ( & localB ->
c2pauqsk3t [ hphfpdmdiw ] . e4olea1wzo , & localDW -> c2pauqsk3t [ hphfpdmdiw
] . e4olea1wzo , & localXdot -> c2pauqsk3t [ hphfpdmdiw ] . e4olea1wzo ) ; }
} void jdo204epts ( void ) { int32_T mpsbjsff3n ; for ( mpsbjsff3n = 0 ;
mpsbjsff3n < 4 ; mpsbjsff3n ++ ) { rtB . pb1igtxdxp [ mpsbjsff3n ] .
de5rkf4e3p [ 0 ] = 0.0 ; rtB . pb1igtxdxp [ mpsbjsff3n ] . de5rkf4e3p [ 1 ] =
0.0 ; rtB . pb1igtxdxp [ mpsbjsff3n ] . de5rkf4e3p [ 2 ] = 0.0 ; memset ( &
rtB . pb1igtxdxp [ mpsbjsff3n ] . dysw0amhvq [ 0 ] , 0 , 9U * sizeof ( real_T
) ) ; rtB . pb1igtxdxp [ mpsbjsff3n ] . o4qfa2zehb [ 0 ] = 0.0 ; rtB .
pb1igtxdxp [ mpsbjsff3n ] . o4qfa2zehb [ 1 ] = 0.0 ; rtB . pb1igtxdxp [
mpsbjsff3n ] . o4qfa2zehb [ 2 ] = 0.0 ; } } void oavv3sjyzn ( int32_T
mpsbjsff3n ) { real_T nlta23wpd4 [ 3 ] ; real_T berg2vgdtq [ 3 ] ; nlta23wpd4
[ 0 ] = rtB . e0likot2u3 [ 3 * mpsbjsff3n ] ; berg2vgdtq [ 0 ] = rtB .
lal2lbdvnj [ 3 * mpsbjsff3n ] ; nlta23wpd4 [ 1 ] = rtB . e0likot2u3 [ 3 *
mpsbjsff3n + 1 ] ; berg2vgdtq [ 1 ] = rtB . lal2lbdvnj [ 3 * mpsbjsff3n + 1 ]
; nlta23wpd4 [ 2 ] = rtB . e0likot2u3 [ 3 * mpsbjsff3n + 2 ] ; berg2vgdtq [ 2
] = rtB . lal2lbdvnj [ 3 * mpsbjsff3n + 2 ] ; { real_T fv5sc1nh43_idx_0 ;
real_T fv5sc1nh43_idx_1 ; real_T fv5sc1nh43_idx_2 ; real_T njmv1xtg4k_idx_0 ;
real_T njmv1xtg4k_idx_1 ; real_T njmv1xtg4k_idx_2 ; int32_T i ; rtB .
pb1igtxdxp [ mpsbjsff3n ] . de5rkf4e3p [ 0 ] = nlta23wpd4 [ 2 ] ; rtB .
pb1igtxdxp [ mpsbjsff3n ] . de5rkf4e3p [ 1 ] = nlta23wpd4 [ 1 ] ; rtB .
pb1igtxdxp [ mpsbjsff3n ] . de5rkf4e3p [ 2 ] = nlta23wpd4 [ 0 ] ;
muDoubleScalarSinCos ( rtB . pb1igtxdxp [ mpsbjsff3n ] . de5rkf4e3p [ 0 ] , &
fv5sc1nh43_idx_0 , & njmv1xtg4k_idx_0 ) ; muDoubleScalarSinCos ( rtB .
pb1igtxdxp [ mpsbjsff3n ] . de5rkf4e3p [ 1 ] , & fv5sc1nh43_idx_1 , &
njmv1xtg4k_idx_1 ) ; muDoubleScalarSinCos ( rtB . pb1igtxdxp [ mpsbjsff3n ] .
de5rkf4e3p [ 2 ] , & fv5sc1nh43_idx_2 , & njmv1xtg4k_idx_2 ) ; rtB .
pb1igtxdxp [ mpsbjsff3n ] . dysw0amhvq [ 0 ] = njmv1xtg4k_idx_0 *
njmv1xtg4k_idx_1 ; rtB . pb1igtxdxp [ mpsbjsff3n ] . dysw0amhvq [ 1 ] =
fv5sc1nh43_idx_1 * fv5sc1nh43_idx_2 * njmv1xtg4k_idx_0 - fv5sc1nh43_idx_0 *
njmv1xtg4k_idx_2 ; rtB . pb1igtxdxp [ mpsbjsff3n ] . dysw0amhvq [ 2 ] =
fv5sc1nh43_idx_1 * njmv1xtg4k_idx_2 * njmv1xtg4k_idx_0 + fv5sc1nh43_idx_0 *
fv5sc1nh43_idx_2 ; rtB . pb1igtxdxp [ mpsbjsff3n ] . dysw0amhvq [ 3 ] =
fv5sc1nh43_idx_0 * njmv1xtg4k_idx_1 ; rtB . pb1igtxdxp [ mpsbjsff3n ] .
dysw0amhvq [ 4 ] = fv5sc1nh43_idx_1 * fv5sc1nh43_idx_2 * fv5sc1nh43_idx_0 +
njmv1xtg4k_idx_0 * njmv1xtg4k_idx_2 ; rtB . pb1igtxdxp [ mpsbjsff3n ] .
dysw0amhvq [ 5 ] = fv5sc1nh43_idx_1 * njmv1xtg4k_idx_2 * fv5sc1nh43_idx_0 -
njmv1xtg4k_idx_0 * fv5sc1nh43_idx_2 ; rtB . pb1igtxdxp [ mpsbjsff3n ] .
dysw0amhvq [ 6 ] = - fv5sc1nh43_idx_1 ; rtB . pb1igtxdxp [ mpsbjsff3n ] .
dysw0amhvq [ 7 ] = njmv1xtg4k_idx_1 * fv5sc1nh43_idx_2 ; rtB . pb1igtxdxp [
mpsbjsff3n ] . dysw0amhvq [ 8 ] = njmv1xtg4k_idx_1 * njmv1xtg4k_idx_2 ; for (
i = 0 ; i < 3 ; i ++ ) { rtB . pb1igtxdxp [ mpsbjsff3n ] . o4qfa2zehb [ i ] =
0.0 ; rtB . pb1igtxdxp [ mpsbjsff3n ] . o4qfa2zehb [ i ] += rtB . pb1igtxdxp
[ mpsbjsff3n ] . dysw0amhvq [ i ] * berg2vgdtq [ 0 ] ; rtB . pb1igtxdxp [
mpsbjsff3n ] . o4qfa2zehb [ i ] += rtB . pb1igtxdxp [ mpsbjsff3n ] .
dysw0amhvq [ i + 3 ] * berg2vgdtq [ 1 ] ; rtB . pb1igtxdxp [ mpsbjsff3n ] .
o4qfa2zehb [ i ] += rtB . pb1igtxdxp [ mpsbjsff3n ] . dysw0amhvq [ i + 6 ] *
berg2vgdtq [ 2 ] ; } } rtB . kqv234nfhx [ mpsbjsff3n ] = rtB . pb1igtxdxp [
mpsbjsff3n ] . o4qfa2zehb [ 0 ] ; } real_T rt_urand_Upu32_Yd_f_pw_snf (
uint32_T * u ) { uint32_T hi ; uint32_T lo ; lo = * u % 127773U * 16807U ; hi
= * u / 127773U * 2836U ; if ( lo < hi ) { * u = 2147483647U - ( hi - lo ) ;
} else { * u = lo - hi ; } return ( real_T ) * u * 4.6566128752457969E-10 ; }
real_T rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) { real_T si ; real_T sr ;
real_T y ; do { sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = 2.0
* rt_urand_Upu32_Yd_f_pw_snf ( u ) - 1.0 ; si = sr * sr + si * si ; } while (
si > 1.0 ) ; y = muDoubleScalarSqrt ( - 2.0 * muDoubleScalarLog ( si ) / si )
* sr ; return y ; } static real_T fkcvjldvc4 ( const real_T varargin_1 [ 13 ]
, const real_T varargin_2 [ 13 ] , real_T varargin_3 ) { real_T x [ 13 ] ;
real_T y [ 13 ] ; real_T Vq ; real_T xtmp ; int32_T exitg1 ; int32_T high_i ;
int32_T i ; int32_T low_ip1 ; int32_T mid_i ; memcpy ( & y [ 0 ] , &
varargin_2 [ 0 ] , 13U * sizeof ( real_T ) ) ; memcpy ( & x [ 0 ] , &
varargin_1 [ 0 ] , 13U * sizeof ( real_T ) ) ; i = 0 ; do { exitg1 = 0 ; if (
i < 13 ) { if ( muDoubleScalarIsNaN ( varargin_1 [ i ] ) ) { exitg1 = 1 ; }
else { i ++ ; } } else { if ( varargin_1 [ 1 ] < varargin_1 [ 0 ] ) { for ( i
= 0 ; i < 6 ; i ++ ) { xtmp = x [ i ] ; x [ i ] = x [ 12 - i ] ; x [ 12 - i ]
= xtmp ; } for ( i = 0 ; i < 6 ; i ++ ) { xtmp = y [ i ] ; y [ i ] = y [ 12 -
i ] ; y [ 12 - i ] = xtmp ; } } Vq = ( rtNaN ) ; if ( ( ! muDoubleScalarIsNaN
( varargin_3 ) ) && ( ! ( varargin_3 > x [ 12 ] ) ) && ( ! ( varargin_3 < x [
0 ] ) ) ) { i = 1 ; low_ip1 = 2 ; high_i = 13 ; while ( high_i > low_ip1 ) {
mid_i = ( i + high_i ) >> 1 ; if ( varargin_3 >= x [ mid_i - 1 ] ) { i =
mid_i ; low_ip1 = mid_i + 1 ; } else { high_i = mid_i ; } } xtmp = (
varargin_3 - x [ i - 1 ] ) / ( x [ i ] - x [ i - 1 ] ) ; if ( xtmp == 0.0 ) {
Vq = y [ i - 1 ] ; } else if ( xtmp == 1.0 ) { Vq = y [ i ] ; } else if ( y [
i - 1 ] == y [ i ] ) { Vq = y [ i - 1 ] ; } else { Vq = ( 1.0 - xtmp ) * y [
i - 1 ] + xtmp * y [ i ] ; } } exitg1 = 1 ; } } while ( exitg1 == 0 ) ;
return Vq ; } static void bdsmwwbjop ( const real_T b_a_data [ ] , const
int32_T b_a_size [ 2 ] , real_T y_data [ ] , int32_T y_size [ 2 ] ) { y_size
[ 0 ] = 1 ; y_size [ 1 ] = b_a_size [ 1 ] ; if ( 0 <= ( int8_T ) b_a_size [ 1
] - 1 ) { y_data [ 0 ] = b_a_data [ 0 ] * b_a_data [ 0 ] ; } } static void
gbnefweovc ( real_T u , real_T tol , real_T * y , real_T * yabs ) { real_T
tmp_data ; real_T yabs_data ; int32_T tmp_size [ 2 ] ; int32_T yabs_size [ 2
] ; int32_T trueCount ; * yabs = muDoubleScalarAbs ( u ) ; trueCount = 0 ; if
( * yabs < tol ) { trueCount = 1 ; } yabs_size [ 0 ] = 1 ; yabs_size [ 1 ] =
trueCount ; if ( 0 <= trueCount - 1 ) { yabs_data = * yabs / tol ; } if ( 0
<= trueCount - 1 ) { bdsmwwbjop ( & yabs_data , yabs_size , & tmp_data ,
tmp_size ) ; yabs_data = 2.0 * tol / ( 3.0 - tmp_data ) ; } if ( * yabs < tol
) { * yabs = yabs_data ; } trueCount = 0 ; if ( u < 0.0 ) { trueCount = 1 ; }
if ( 0 <= trueCount - 1 ) { yabs_data = - * yabs ; } * y = * yabs ; if ( u <
0.0 ) { * y = yabs_data ; } } static void i3hwf03gep ( real_T Ftire_x ,
real_T Ftire_y , real_T b_Fxtire_sat , real_T b_Fytire_sat , real_T *
Ftire_xs , real_T * Ftire_ys ) { real_T Ftire_mag ; real_T Ftire_x_max ;
real_T theta_Ftire ; theta_Ftire = muDoubleScalarAtan2 ( Ftire_x , Ftire_y )
; Ftire_x_max = b_Fxtire_sat * muDoubleScalarCos ( theta_Ftire ) ; Ftire_mag
= b_Fytire_sat * muDoubleScalarSin ( theta_Ftire ) ; Ftire_mag = b_Fxtire_sat
* b_Fytire_sat / muDoubleScalarSqrt ( Ftire_x_max * Ftire_x_max + Ftire_mag *
Ftire_mag ) ; Ftire_x_max = Ftire_mag * muDoubleScalarSin ( theta_Ftire ) ;
theta_Ftire = Ftire_mag * muDoubleScalarCos ( theta_Ftire ) ; * Ftire_xs =
Ftire_x ; if ( muDoubleScalarAbs ( Ftire_x ) > muDoubleScalarAbs (
Ftire_x_max ) ) { * Ftire_xs = Ftire_x_max ; } * Ftire_ys = Ftire_y ; if (
muDoubleScalarAbs ( Ftire_y ) > muDoubleScalarAbs ( theta_Ftire ) ) { *
Ftire_ys = theta_Ftire ; } } static real_T kwgfc1chu0 ( const real_T
varargin_1 [ 2 ] , const real_T varargin_2 [ 2 ] , real_T varargin_3 ) {
real_T Vq ; real_T r ; real_T x_idx_1 ; real_T y_idx_0 ; real_T y_idx_1 ;
int32_T exitg1 ; int32_T k ; y_idx_0 = varargin_2 [ 0 ] ; r = varargin_1 [ 0
] ; y_idx_1 = varargin_2 [ 1 ] ; x_idx_1 = varargin_1 [ 1 ] ; k = 0 ; do {
exitg1 = 0 ; if ( k < 2 ) { if ( muDoubleScalarIsNaN ( varargin_1 [ k ] ) ) {
exitg1 = 1 ; } else { k ++ ; } } else { if ( varargin_1 [ 1 ] < varargin_1 [
0 ] ) { r = varargin_1 [ 1 ] ; x_idx_1 = varargin_1 [ 0 ] ; y_idx_0 =
varargin_2 [ 1 ] ; y_idx_1 = varargin_2 [ 0 ] ; } Vq = ( rtNaN ) ; if ( ( !
muDoubleScalarIsNaN ( varargin_3 ) ) && ( ! ( varargin_3 > x_idx_1 ) ) && ( !
( varargin_3 < r ) ) ) { r = ( varargin_3 - r ) / ( x_idx_1 - r ) ; if ( r ==
0.0 ) { Vq = y_idx_0 ; } else if ( r == 1.0 ) { Vq = y_idx_1 ; } else if (
y_idx_0 == y_idx_1 ) { Vq = y_idx_0 ; } else { Vq = ( 1.0 - r ) * y_idx_0 + r
* y_idx_1 ; } } exitg1 = 1 ; } } while ( exitg1 == 0 ) ; return Vq ; } void
MdlInitialize ( void ) { real_T tmp_p ; int32_T r ; int32_T t ; uint32_T
tseed ; boolean_T tmp ; rtX . ew1hskbqsh [ 0 ] = rtP .
IntegratorSecondOrderLimited_ICX ; rtX . ew1hskbqsh [ 1 ] = rtP .
IntegratorSecondOrderLimited_ICX ; rtX . ew1hskbqsh [ 2 ] = rtP .
IntegratorSecondOrderLimited_ICX ; rtX . ew1hskbqsh [ 3 ] = rtP .
IntegratorSecondOrderLimited_ICDXDT ; rtDW . ioutqu0mzn [ 0 ] = 0 ; rtX .
ew1hskbqsh [ 4 ] = rtP . IntegratorSecondOrderLimited_ICDXDT ; rtDW .
ioutqu0mzn [ 1 ] = 0 ; rtX . ew1hskbqsh [ 5 ] = rtP .
IntegratorSecondOrderLimited_ICDXDT ; rtDW . ioutqu0mzn [ 2 ] = 0 ; rtDW .
cw5iqh3ouk = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { rtX . nvdrj2cjnk [ 0 ] =
0.0 ; rtX . nvdrj2cjnk [ 1 ] = 0.0 ; rtX . nvdrj2cjnk [ 2 ] = 0.0 ; rtX .
nvdrj2cjnk [ 3 ] = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp
) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . cw5iqh3ouk = !
tmp ; } else { rtDW . cw5iqh3ouk = 1 ; } rtX . jdftreuorv [ 0 ] = 0.0 ; rtX .
jdftreuorv [ 1 ] = 0.0 ; } rtDW . ju4msksctk = 1 ; if ( ssIsFirstInitCond (
rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . ju4msksctk = ! tmp ; }
else { rtDW . ju4msksctk = 1 ; } } rtDW . idqvj2pdci = rtP .
Memory1_InitialCondition ; rtDW . knzjkvs1ph = rtP .
Memory1_InitialCondition_hlvazagar1 ; rtX . ecgpmufv2h [ 0 ] = rtP .
Integrator1_IC ; rtX . ecgpmufv2h [ 1 ] = rtP . Integrator1_IC ; rtX .
ecgpmufv2h [ 2 ] = rtP . Integrator1_IC ; rtX . ecgpmufv2h [ 3 ] = rtP .
Integrator1_IC ; rtX . gaamg4vtxr = rtP . Integrator1_IC_oxgkoswmzi ; rtX .
jecjxd3eom = rtP . Integrator1_IC_ky4nrg4tcb ; rtX . nfusnuz14b = rtP .
Integrator_IC ; rtX . bmw50ts5q4 = rtP . Integrator_IC_clidxqllwz ; rtX .
p2fru1tfkf = rtP . Integrator_IC_ms50emixq4 ; rtX . kqdff1w3rv = rtP .
Integrator_IC_hlnnhd10qj ; rtX . klntojgsev = rtP . Integrator1_IC_aqsuygnqg0
; tmp_p = muDoubleScalarFloor ( rtP . ThreeaxisAccelerometer_a_seeds [ 0 ] )
; if ( muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) {
tmp_p = 0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ;
} tseed = tmp_p < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : (
uint32_T ) tmp_p ; r = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed
& 32768U ) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U
) + t ) + r ; if ( tseed < 1U ) { tseed = 1144108930U ; } else if ( tseed >
2147483646U ) { tseed = 2147483646U ; } rtDW . ccsmcmbqmb [ 0 ] = tseed ;
rtDW . if2nkbrvo2 [ 0 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ccsmcmbqmb [
0 ] ) * rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; rtX . dmhixvg5dr [
0 ] = rtP . IntegratorSecondOrderLimited_ICX_mbmho52uo4 ; tmp_p =
muDoubleScalarFloor ( rtP . ThreeaxisAccelerometer_a_seeds [ 1 ] ) ; if (
muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p =
0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed
= tmp_p < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T
) tmp_p ; r = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U
) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t )
+ r ; if ( tseed < 1U ) { tseed = 1144108930U ; } else if ( tseed >
2147483646U ) { tseed = 2147483646U ; } rtDW . ccsmcmbqmb [ 1 ] = tseed ;
rtDW . if2nkbrvo2 [ 1 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ccsmcmbqmb [
1 ] ) * rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; rtX . dmhixvg5dr [
1 ] = rtP . IntegratorSecondOrderLimited_ICX_mbmho52uo4 ; tmp_p =
muDoubleScalarFloor ( rtP . ThreeaxisAccelerometer_a_seeds [ 2 ] ) ; if (
muDoubleScalarIsNaN ( tmp_p ) || muDoubleScalarIsInf ( tmp_p ) ) { tmp_p =
0.0 ; } else { tmp_p = muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed
= tmp_p < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T
) tmp_p ; r = ( int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U
) ; tseed = ( ( ( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t )
+ r ; if ( tseed < 1U ) { tseed = 1144108930U ; } else if ( tseed >
2147483646U ) { tseed = 2147483646U ; } rtDW . ccsmcmbqmb [ 2 ] = tseed ;
rtDW . if2nkbrvo2 [ 2 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ccsmcmbqmb [
2 ] ) * rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; rtX . dmhixvg5dr [
2 ] = rtP . IntegratorSecondOrderLimited_ICX_mbmho52uo4 ; rtX . dmhixvg5dr [
3 ] = rtP . IntegratorSecondOrderLimited_ICDXDT_cygbcafyyf ; rtDW .
io5vwqal1m [ 0 ] = 0 ; tmp_p = muDoubleScalarFloor ( rtP .
ThreeaxisGyroscope_g_seeds [ 0 ] ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else if ( tseed > 2147483646U ) { tseed =
2147483646U ; } rtDW . clnxzkzwul [ 0 ] = tseed ; rtDW . jitwfcjega [ 0 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . clnxzkzwul [ 0 ] ) * rtP .
WhiteNoise_StdDev_dhvemjsox3 + rtP . WhiteNoise_Mean_dffhdtx5eq ; rtX .
dmhixvg5dr [ 4 ] = rtP . IntegratorSecondOrderLimited_ICDXDT_cygbcafyyf ;
rtDW . io5vwqal1m [ 1 ] = 0 ; tmp_p = muDoubleScalarFloor ( rtP .
ThreeaxisGyroscope_g_seeds [ 1 ] ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else if ( tseed > 2147483646U ) { tseed =
2147483646U ; } rtDW . clnxzkzwul [ 1 ] = tseed ; rtDW . jitwfcjega [ 1 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . clnxzkzwul [ 1 ] ) * rtP .
WhiteNoise_StdDev_dhvemjsox3 + rtP . WhiteNoise_Mean_dffhdtx5eq ; rtX .
dmhixvg5dr [ 5 ] = rtP . IntegratorSecondOrderLimited_ICDXDT_cygbcafyyf ;
rtDW . io5vwqal1m [ 2 ] = 0 ; tmp_p = muDoubleScalarFloor ( rtP .
ThreeaxisGyroscope_g_seeds [ 2 ] ) ; if ( muDoubleScalarIsNaN ( tmp_p ) ||
muDoubleScalarIsInf ( tmp_p ) ) { tmp_p = 0.0 ; } else { tmp_p =
muDoubleScalarRem ( tmp_p , 4.294967296E+9 ) ; } tseed = tmp_p < 0.0 ? (
uint32_T ) - ( int32_T ) ( uint32_T ) - tmp_p : ( uint32_T ) tmp_p ; r = (
int32_T ) ( tseed >> 16U ) ; t = ( int32_T ) ( tseed & 32768U ) ; tseed = ( (
( ( tseed - ( ( uint32_T ) r << 16U ) ) + t ) << 16U ) + t ) + r ; if ( tseed
< 1U ) { tseed = 1144108930U ; } else if ( tseed > 2147483646U ) { tseed =
2147483646U ; } rtDW . clnxzkzwul [ 2 ] = tseed ; rtDW . jitwfcjega [ 2 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . clnxzkzwul [ 2 ] ) * rtP .
WhiteNoise_StdDev_dhvemjsox3 + rtP . WhiteNoise_Mean_dffhdtx5eq ; rtX .
a2uhtc4qab = rtP . PIDController_InitialConditionForIntegrator ; rtX .
pxjrlp0doi = rtP . PIDController1_InitialConditionForIntegrator ; rtX .
ddoib4fzt3 = rtP . Integrator1_IC_m13335t34z ; rtX . ogw3fpytzv = rtP .
Integrator1_IC_flkqwlwg0v ; rtX . ey4qfao5lu = rtP . Integrator_IC_fmnrqfpmne
; rtX . kf1ocexm5v = rtP . Integrator_IC_g2jt3nwaqi ; rtX . cehthaubuh = rtP
. Integrator_IC_gscjbyoubu ; rtX . kr5v2kihrz [ 0 ] = 0.0 ; rtX . kkmmegedxf
[ 0 ] = 0.0 ; rtX . lx1mpujr22 [ 0 ] = rtP . Integrator_IC_nf2gzhzq4q ; rtX .
kr5v2kihrz [ 1 ] = 0.0 ; rtX . kkmmegedxf [ 1 ] = 0.0 ; rtX . lx1mpujr22 [ 1
] = rtP . Integrator_IC_nf2gzhzq4q ; rtDW . n2hvy13sko [ 0 ] = rtP .
Memory_InitialCondition [ 0 ] ; rtDW . n2hvy13sko [ 1 ] = rtP .
Memory_InitialCondition [ 1 ] ; rtDW . n2hvy13sko [ 2 ] = rtP .
Memory_InitialCondition [ 2 ] ; rtDW . n2hvy13sko [ 3 ] = rtP .
Memory_InitialCondition [ 3 ] ; rtX . dztonrd310 = rtP .
Integrator1_IC_lsnovgb5mz ; rtX . efvbjs3y34 = rtP .
Integrator1_IC_gw3lb4ptgj ; rtX . egw32dj1nn = rtP . Integrator2_IC ; rtDW .
b1zu5y4c1e [ 0 ] = rtP . Memory_InitialCondition_l10e3jks55 [ 0 ] ; rtDW .
b1zu5y4c1e [ 1 ] = rtP . Memory_InitialCondition_l10e3jks55 [ 1 ] ; rtDW .
n4s3ahy5yb [ 0 ] = rtP . UnitDelay_InitialCondition ; rtDW . n4s3ahy5yb [ 1 ]
= rtP . UnitDelay_InitialCondition ; rtDW . n4s3ahy5yb [ 2 ] = rtP .
UnitDelay_InitialCondition ; rtX . pdm1gqxnsc [ 0 ] = rtP . lateral_IC ; rtX
. pdm1gqxnsc [ 1 ] = rtP . lateral_IC ; rtX . pdm1gqxnsc [ 2 ] = rtP .
lateral_IC ; rtX . pdm1gqxnsc [ 3 ] = rtP . lateral_IC ; oo0c00ipat ( & rtB .
htvvb3wiwks , & rtDW . htvvb3wiwks , & rtP . htvvb3wiwks ) ; oo0c00ipat ( &
rtB . apfzndjc5l , & rtDW . apfzndjc5l , & rtP . apfzndjc5l ) ; dlbunanlk3 (
rtP . SignalHold_IC , & rtB . osjj2s24tkm ) ; ndtkogdbvh ( rtP . WHL .
WheelInitAngVel , & rtB . noxrljyvsbq , & rtDW . noxrljyvsbq , & rtP .
noxrljyvsbq , & rtX . noxrljyvsbq ) ; ndtkogdbvh ( rtP . WHL .
WheelInitAngVel , & rtB . cakr3inwfo , & rtDW . cakr3inwfo , & rtP .
cakr3inwfo , & rtX . cakr3inwfo ) ; ndtkogdbvh ( rtP . WHL . WheelInitAngVel
, & rtB . mxxvrdjd12 , & rtDW . mxxvrdjd12 , & rtP . mxxvrdjd12 , & rtX .
mxxvrdjd12 ) ; ndtkogdbvh ( rtP . WHL . WheelInitAngVel , & rtB . gjwrbmtmpz
, & rtDW . gjwrbmtmpz , & rtP . gjwrbmtmpz , & rtX . gjwrbmtmpz ) ; rtDW .
ljrsfho0wx = 6.2831853071795862 ; rtDW . ph55yq4rg2 = 0.0 ; rtDW . plhevtqgqm
= 0.0 ; rtDW . c435izcp3j = 0.0 ; rtDW . ec3u5hsjjx = 0.0 ; rtDW . paxgd2l2yo
= 0.0 ; rtDW . dzezmfjqg2 = 0.0 ; rtDW . ebj5snmy5k = 0.0 ; rtDW . cxgys2dwdy
= false ; rtDW . bmqmtm0dew = false ; rtDW . b2jkiu5223 = 180.0 ; rtDW .
bw5qeffbbw = 0.0 ; rtDW . hu0lal024o = 0.0 ; rtDW . bifdt1dwkt = 0.0 ; rtDW .
avustsyiau = 0.0 ; rtDW . hocsygpcrl = false ; dlbunanlk3 ( rtP .
SignalHold_IC_k2hqhxwbjn , & rtB . l1ngv2u4wj ) ; dlbunanlk3 ( rtP .
SignalHold_IC_cwurlh1ogd , & rtB . e2qkfxuvdy ) ; } void MdlStart ( void ) {
{ bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} { { { { sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName =
sdiGetLabelFromChars ( "<Brake>" ) ; sdiLabelU origSigName =
sdiGetLabelFromChars ( "<Brake>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"ContoleLateralApplication/Visualization/Bus Selector2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<Brake>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 1 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. jbferm2qpe . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"47b27730-7afa-4f27-8ac0-888d14eb9053" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . jbferm2qpe . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . jbferm2qpe . AQHandles , "Parameter"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . jbferm2qpe .
AQHandles , ssGetTaskTime ( rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . jbferm2qpe . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . jbferm2qpe . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { int_T
numCols = 2 ; rtDW . as5segj51q . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "ScopeData_y" , SS_DOUBLE , 0 , 0 , 0 , 2 , 1
, ( int_T * ) & numCols , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.0 ,
1 ) ; if ( rtDW . as5segj51q . LoggedData == ( NULL ) ) return ; } { int_T
numCols = 2 ; rtDW . czc2ir0435 . LoggedData = rt_CreateLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "ScopeData_u" , SS_DOUBLE , 0 , 0 , 0 , 2 , 1
, ( int_T * ) & numCols , NO_LOGVALDIMS , ( NULL ) , ( NULL ) , 0 , 1 , 0.0 ,
1 ) ; if ( rtDW . czc2ir0435 . LoggedData == ( NULL ) ) return ; } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<Accel>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<Accel>" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
"ContoleLateralApplication/Visualization/Bus Selector2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<Accel>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. itvkmqwddr . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"231533c5-2f07-43df-9b39-c968a8f1bf2e" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; if ( rtDW . itvkmqwddr . AQHandles )
{ sdiSetSignalSampleTimeString ( rtDW . itvkmqwddr . AQHandles , "Continuous"
, 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW . itvkmqwddr .
AQHandles , ssGetTaskTime ( rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings
( rtDW . itvkmqwddr . AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName (
rtDW . itvkmqwddr . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } } } } { { { {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"<ay>" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "<ay>" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "ContoleLateralApplication/Visualization/Bus Selector"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<ay>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 2 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. ow1hokcqe2 . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"5f69c1f8-a485-435c-88de-c8da7406e2ee" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "gn" ) ; if ( rtDW . ow1hokcqe2 . AQHandles
) { sdiSetSignalSampleTimeString ( rtDW . ow1hokcqe2 . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
ow1hokcqe2 . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . ow1hokcqe2 . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . ow1hokcqe2 . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } } { { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "xdot_mph" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "xdot_mph" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"ContoleLateralApplication/Visualization/Signal Specification1" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "xdot_mph" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. lnsrt2x1pu . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"65d480c6-af16-4b38-88cf-6171f9b64308" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "mph" ) ; if ( rtDW . lnsrt2x1pu . AQHandles
) { sdiSetSignalSampleTimeString ( rtDW . lnsrt2x1pu . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
lnsrt2x1pu . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . lnsrt2x1pu . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . lnsrt2x1pu . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } } { { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Engine_rpm" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "Engine_rpm" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"ContoleLateralApplication/Visualization/Signal Specification2" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Engine_rpm" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. g041etusks . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"78171da8-683d-45d2-b56e-f8a4620bfe1b" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rpm" ) ; if ( rtDW . g041etusks . AQHandles
) { sdiSetSignalSampleTimeString ( rtDW . g041etusks . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
g041etusks . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . g041etusks . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . g041etusks . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } } { { { { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "SteerAngle" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "SteerAngle" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"ContoleLateralApplication/Visualization/Signal Specification" ) ; sdiLabelU
blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "SteerAngle" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; rtDW
. m0kvuadgsa . AQHandles = sdiAsyncRepoCreateAsyncioQueue ( hDT , & srcInfo ,
rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"e22a4bc7-ac6e-4f41-a36b-f51da0bccd50" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "deg" ) ; if ( rtDW . m0kvuadgsa . AQHandles
) { sdiSetSignalSampleTimeString ( rtDW . m0kvuadgsa . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetRunStartTime ( rtDW .
m0kvuadgsa . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( rtDW . m0kvuadgsa . AQHandles , 1 , 0 )
; sdiAsyncRepoSetSignalExportName ( rtDW . m0kvuadgsa . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } } } } rtDW . j0xyivirlp = 0 ; rtDW .
h5n0zvxyf2 = 0 ; rtDW . k5iobck5su = 0 ; rtDW . bi1cenloak = 0 ; dqqfqzhkcj (
& rtB . noxrljyvsbq ) ; dqqfqzhkcj ( & rtB . cakr3inwfo ) ; dqqfqzhkcj ( &
rtB . mxxvrdjd12 ) ; dqqfqzhkcj ( & rtB . gjwrbmtmpz ) ; aixhks31af ( rtS , &
rtDW . osjj2s24tkm ) ; jdo204epts ( ) ; rtDW . jntluapbyr = 0 ; aixhks31af (
rtS , & rtDW . l1ngv2u4wj ) ; aixhks31af ( rtS , & rtDW . e2qkfxuvdy ) ; rtDW
. bny0mcq4qa = true ; MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) {
real_T end320ix4n ; real_T pfy3d5jcon [ 4 ] ; real_T mqicia51cy [ 4 ] ;
boolean_T j3k3p0lkes ; boolean_T owtmgr1og4 ; real_T mnhgivn0jt [ 3 ] ;
real_T VB [ 2 ] ; real_T XB [ 2 ] ; real_T B1 ; real_T B2 ; real_T B3 ;
real_T Fx_rl ; real_T Fx_rr ; real_T Fz_idx_0 ; real_T Fz_idx_1 ; real_T
Fz_idx_3 ; real_T Vwheel_fl ; real_T Vwheel_rl ; real_T alfa_fl ; real_T
alfa_rl ; real_T alfa_rr ; real_T b_B3 ; real_T bnzda1xddq_idx_1 ; real_T
bnzda1xddq_idx_2 ; real_T delta_fl ; real_T delta_fr ; real_T delta_rl ;
real_T delta_rr ; real_T i0ssdtjwt1_idx_0 ; real_T i0ssdtjwt1_idx_1 ; real_T
i0ssdtjwt1_idx_2 ; real_T ju2qheifh2 ; real_T o3n3jqkno2 ; real_T r ; real_T
xddot ; real_T xdot ; real_T yddot ; real_T ydot ; real_T ys ; int32_T i ;
boolean_T tmp ; srClearBC ( rtDW . htvvb3wiwks . et0xhlvwqn ) ; srClearBC (
rtDW . osjj2s24tkm . k3vf3gqtaf ) ; rtB . il0etatu3t [ 0 ] = rtX . ew1hskbqsh
[ 0 ] ; rtB . meumugomqr [ 0 ] = rtX . ew1hskbqsh [ 3 ] ; rtB . il0etatu3t [
1 ] = rtX . ew1hskbqsh [ 1 ] ; rtB . meumugomqr [ 1 ] = rtX . ew1hskbqsh [ 4
] ; rtB . il0etatu3t [ 2 ] = rtX . ew1hskbqsh [ 2 ] ; rtB . meumugomqr [ 2 ]
= rtX . ew1hskbqsh [ 5 ] ; tmp = ssGetIsOkayToUpdateMode ( rtS ) ; if ( tmp )
{ if ( rtDW . cw5iqh3ouk != 0 ) { rtX . nvdrj2cjnk [ 0 ] = rtB . msys3swj00 [
0 ] ; rtX . nvdrj2cjnk [ 1 ] = rtB . msys3swj00 [ 1 ] ; rtX . nvdrj2cjnk [ 2
] = rtB . msys3swj00 [ 2 ] ; rtX . nvdrj2cjnk [ 3 ] = rtB . msys3swj00 [ 3 ]
; } rtB . jblxcxbmeg [ 0 ] = rtX . nvdrj2cjnk [ 0 ] ; rtB . jblxcxbmeg [ 1 ]
= rtX . nvdrj2cjnk [ 1 ] ; rtB . jblxcxbmeg [ 2 ] = rtX . nvdrj2cjnk [ 2 ] ;
rtB . jblxcxbmeg [ 3 ] = rtX . nvdrj2cjnk [ 3 ] ; } else { rtB . jblxcxbmeg [
0 ] = rtX . nvdrj2cjnk [ 0 ] ; rtB . jblxcxbmeg [ 1 ] = rtX . nvdrj2cjnk [ 1
] ; rtB . jblxcxbmeg [ 2 ] = rtX . nvdrj2cjnk [ 2 ] ; rtB . jblxcxbmeg [ 3 ]
= rtX . nvdrj2cjnk [ 3 ] ; } rtB . i0t2sz5yu2 = rtB . jblxcxbmeg [ 1 ] * rtB
. jblxcxbmeg [ 3 ] ; tmp = ssGetIsOkayToUpdateMode ( rtS ) ; if ( tmp ) { if
( rtDW . ju4msksctk != 0 ) { rtX . jdftreuorv [ 0 ] = rtB . g3zkmqy3qm [ 0 ]
; rtX . jdftreuorv [ 1 ] = rtB . g3zkmqy3qm [ 1 ] ; } rtB . i3r2qvsck4 [ 0 ]
= rtX . jdftreuorv [ 0 ] ; rtB . i3r2qvsck4 [ 1 ] = rtX . jdftreuorv [ 1 ] ;
} else { rtB . i3r2qvsck4 [ 0 ] = rtX . jdftreuorv [ 0 ] ; rtB . i3r2qvsck4 [
1 ] = rtX . jdftreuorv [ 1 ] ; } rtB . f1prcbszsd [ 0 ] = rtB . jblxcxbmeg [
2 ] ; rtB . f1prcbszsd [ 1 ] = rtP . Constant7_Value ; rtB . f1prcbszsd [ 2 ]
= rtP . Constant2_Value_o0uqnepleb ; muDoubleScalarSinCos ( rtB . f1prcbszsd
[ 0 ] , & mnhgivn0jt [ 0 ] , & i0ssdtjwt1_idx_0 ) ; muDoubleScalarSinCos (
rtB . f1prcbszsd [ 1 ] , & mnhgivn0jt [ 1 ] , & i0ssdtjwt1_idx_1 ) ;
muDoubleScalarSinCos ( rtB . f1prcbszsd [ 2 ] , & mnhgivn0jt [ 2 ] , &
i0ssdtjwt1_idx_2 ) ; rtB . k1is2mf1se [ 0 ] = i0ssdtjwt1_idx_0 *
i0ssdtjwt1_idx_1 ; rtB . k1is2mf1se [ 1 ] = mnhgivn0jt [ 1 ] * mnhgivn0jt [ 2
] * i0ssdtjwt1_idx_0 - mnhgivn0jt [ 0 ] * i0ssdtjwt1_idx_2 ; rtB . k1is2mf1se
[ 2 ] = mnhgivn0jt [ 1 ] * i0ssdtjwt1_idx_2 * i0ssdtjwt1_idx_0 + mnhgivn0jt [
0 ] * mnhgivn0jt [ 2 ] ; rtB . k1is2mf1se [ 3 ] = mnhgivn0jt [ 0 ] *
i0ssdtjwt1_idx_1 ; rtB . k1is2mf1se [ 4 ] = mnhgivn0jt [ 1 ] * mnhgivn0jt [ 2
] * mnhgivn0jt [ 0 ] + i0ssdtjwt1_idx_0 * i0ssdtjwt1_idx_2 ; rtB . k1is2mf1se
[ 5 ] = mnhgivn0jt [ 1 ] * i0ssdtjwt1_idx_2 * mnhgivn0jt [ 0 ] -
i0ssdtjwt1_idx_0 * mnhgivn0jt [ 2 ] ; rtB . k1is2mf1se [ 6 ] = - mnhgivn0jt [
1 ] ; rtB . k1is2mf1se [ 7 ] = i0ssdtjwt1_idx_1 * mnhgivn0jt [ 2 ] ; rtB .
k1is2mf1se [ 8 ] = i0ssdtjwt1_idx_1 * i0ssdtjwt1_idx_2 ; for ( i = 0 ; i < 3
; i ++ ) { rtB . bj3lssycrr [ 3 * i ] = rtB . k1is2mf1se [ i ] ; rtB .
bj3lssycrr [ 3 * i + 1 ] = rtB . k1is2mf1se [ i + 3 ] ; rtB . bj3lssycrr [ 3
* i + 2 ] = rtB . k1is2mf1se [ i + 6 ] ; } for ( i = 0 ; i < 3 ; i ++ ) { rtB
. hu3dhumohw [ i ] = 0.0 ; rtB . hu3dhumohw [ i ] += rtB . bj3lssycrr [ i ] *
rtB . orqox2gjfp [ 0 ] ; rtB . hu3dhumohw [ i ] += rtB . bj3lssycrr [ i + 3 ]
* rtB . orqox2gjfp [ 1 ] ; rtB . hu3dhumohw [ i ] += rtB . bj3lssycrr [ i + 6
] * rtB . orqox2gjfp [ 2 ] ; } rtB . btlr1jutxk [ 0 ] = rtB . i3r2qvsck4 [ 0
] + rtB . hu3dhumohw [ 0 ] ; rtB . btlr1jutxk [ 1 ] = rtB . i3r2qvsck4 [ 1 ]
+ rtB . hu3dhumohw [ 1 ] ; rtB . btlr1jutxk [ 2 ] = rtP .
Constant_Value_jdhlsaexwq + rtB . hu3dhumohw [ 2 ] ; rtB . bkkwbsaqfr [ 0 ] =
rtP . Constant2_Value_o0uqnepleb ; rtB . bkkwbsaqfr [ 1 ] = rtP .
Constant7_Value ; rtB . bkkwbsaqfr [ 2 ] = rtB . jblxcxbmeg [ 2 ] ; rtB .
eucfvib3zj [ 0 ] = muDoubleScalarAtan ( ( ( rtB . d25xxhghbu [ 0 ] - rtB .
d25xxhghbu [ 1 ] ) + ( rtB . d25xxhghbu [ 2 ] - rtB . d25xxhghbu [ 3 ] ) ) /
rtP . VEH . TrackWidth / 2.0 ) ; rtB . eucfvib3zj [ 1 ] = muDoubleScalarAtan
( ( ( rtB . d25xxhghbu [ 0 ] - rtB . d25xxhghbu [ 2 ] ) + ( rtB . d25xxhghbu
[ 1 ] - rtB . d25xxhghbu [ 3 ] ) ) / ( rtP . VEH . FrontAxlePositionfromCG +
rtP . VEH . RearAxlePositionfromCG ) / 2.0 ) ; rtB . eucfvib3zj [ 2 ] = rtB .
bkkwbsaqfr [ 2 ] ; rtB . ay4ux3o1eo [ 0 ] = rtB . btlr1jutxk [ 0 ] ; rtB .
ay4ux3o1eo [ 1 ] = rtB . btlr1jutxk [ 1 ] ; rtB . ay4ux3o1eo [ 2 ] = - ( ( (
( rtB . d25xxhghbu [ 0 ] + rtB . d25xxhghbu [ 1 ] ) + rtB . d25xxhghbu [ 2 ]
) + rtB . d25xxhghbu [ 3 ] ) / 4.0 ) ; rtB . etm3xiejch = muDoubleScalarSin (
- rtB . eucfvib3zj [ 2 ] + 0.31415926535897931 ) * 7.625 ; rtB . ipghb0hi1r =
muDoubleScalarCos ( - rtB . eucfvib3zj [ 2 ] + 0.31415926535897931 ) * 7.625
- 7.625 ; rtB . ov0czh1aqm = - ( - rtB . eucfvib3zj [ 2 ] +
0.31415926535897931 ) ; ys = muDoubleScalarSin ( ( rtB . i3r2qvsck4 [ 1 ] +
1.5707963267948966 ) / 5.0 ) ; rtB . coaewo5abi = ys ; rtB . pcganxdvhf = rtB
. i3r2qvsck4 [ 1 ] + 1.5707963267948966 ; if ( ys >= 0.0 ) { rtB . lgqduiwqqv
= rtB . eucfvib3zj [ 2 ] + 0.1 ; } else { rtB . lgqduiwqqv = rtB . eucfvib3zj
[ 2 ] - 0.1 ; } if ( rtP . ManualSwitch_CurrentSetting == 1 ) { rtB .
hpwrv4ugir [ 2 ] = rtB . ov0czh1aqm ; rtB . hpwrv4ugir [ 1 ] = rtB .
ipghb0hi1r ; rtB . hpwrv4ugir [ 0 ] = rtB . etm3xiejch ; rtB . ort1oa3yt2 [ 0
] = rtB . hpwrv4ugir [ 0 ] ; rtB . ort1oa3yt2 [ 1 ] = rtB . hpwrv4ugir [ 1 ]
; rtB . ort1oa3yt2 [ 2 ] = rtB . hpwrv4ugir [ 2 ] ; } else { rtB . p5jm2dnchs
[ 2 ] = rtB . lgqduiwqqv ; rtB . p5jm2dnchs [ 1 ] = rtB . pcganxdvhf ; rtB .
p5jm2dnchs [ 0 ] = rtB . coaewo5abi ; rtB . ort1oa3yt2 [ 0 ] = rtB .
p5jm2dnchs [ 0 ] ; rtB . ort1oa3yt2 [ 1 ] = rtB . p5jm2dnchs [ 1 ] ; rtB .
ort1oa3yt2 [ 2 ] = rtB . p5jm2dnchs [ 2 ] ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { rtB . gf5mbh3pdf = rtDW . idqvj2pdci ; } rtB . nla3wo302k =
muDoubleScalarAbs ( rtB . ort1oa3yt2 [ 2 ] - rtB . gf5mbh3pdf ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssGetIsOkayToUpdateMode ( rtS ) ) {
rtDW . nofoaw1myc = ( rtB . nla3wo302k >= rtP . CompareToConstant_const ) ; }
j3k3p0lkes = rtDW . nofoaw1myc ; htvvb3wiwk ( rtS , j3k3p0lkes , rtB .
ort1oa3yt2 [ 2 ] , & rtB . htvvb3wiwks , & rtDW . htvvb3wiwks , & rtP .
htvvb3wiwks , & rtPrevZCX . htvvb3wiwks ) ; rtB . muausztbb4 = rtDW .
knzjkvs1ph ; } rtB . gplvcvhjic = rtB . htvvb3wiwks . p1utvufnvy + rtB .
ort1oa3yt2 [ 2 ] ; rtB . i5ebqyedfw [ 0 ] = rtB . i3r2qvsck4 [ 0 ] ; rtB .
i5ebqyedfw [ 1 ] = rtB . i3r2qvsck4 [ 1 ] ; rtB . i5ebqyedfw [ 2 ] = rtB .
eucfvib3zj [ 2 ] ; rtB . l4qwphkvnp = muDoubleScalarAbs ( rtB . i5ebqyedfw [
2 ] - rtB . muausztbb4 ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . ijqkc2l1q2 = ( rtB . l4qwphkvnp >=
rtP . CompareToConstant_const_h1s0vqwvxz ) ; } owtmgr1og4 = rtDW . ijqkc2l1q2
; htvvb3wiwk ( rtS , owtmgr1og4 , rtB . i5ebqyedfw [ 2 ] , & rtB . apfzndjc5l
, & rtDW . apfzndjc5l , & rtP . apfzndjc5l , & rtPrevZCX . apfzndjc5l ) ; }
rtB . nciukp42sl = rtB . apfzndjc5l . p1utvufnvy + rtB . i5ebqyedfw [ 2 ] ;
rtB . ecnmk5xlda = rtB . nciukp42sl - rtB . gplvcvhjic ; muDoubleScalarSinCos
( rtB . gplvcvhjic , & ys , & i0ssdtjwt1_idx_1 ) ; muDoubleScalarSinCos ( rtB
. nciukp42sl , & ju2qheifh2 , & o3n3jqkno2 ) ; xdot = rtP .
PredictiveDriver1_a + rtP . PredictiveDriver1_b ; rtB . hhdyekl5de [ 0 ] =
xdot * o3n3jqkno2 ; rtB . hhdyekl5de [ 1 ] = xdot * ju2qheifh2 ; rtB .
djemdlk43r [ 0 ] = rtB . hhdyekl5de [ 0 ] + rtB . i5ebqyedfw [ 0 ] ; rtB .
defglkvaeg [ 0 ] = rtB . ort1oa3yt2 [ 0 ] - rtB . djemdlk43r [ 0 ] ; rtB .
djemdlk43r [ 1 ] = rtB . hhdyekl5de [ 1 ] + rtB . i5ebqyedfw [ 1 ] ; rtB .
defglkvaeg [ 1 ] = rtB . ort1oa3yt2 [ 1 ] - rtB . djemdlk43r [ 1 ] ; rtB .
mp3ipplayt [ 0 ] = ys * rtB . defglkvaeg [ 0 ] ; rtB . mp3ipplayt [ 1 ] =
i0ssdtjwt1_idx_1 * rtB . defglkvaeg [ 1 ] ; rtB . knvlc3ltii = rtB .
mp3ipplayt [ 0 ] - rtB . mp3ipplayt [ 1 ] ; if ( ssGetIsOkayToUpdateMode (
rtS ) ) { rtDW . ic5wrhkshl = ( rtB . jblxcxbmeg [ 0 ] >= 0.0 ) ; } rtB .
caiqwkcf2z = rtDW . ic5wrhkshl > 0 ? rtB . jblxcxbmeg [ 0 ] : - rtB .
jblxcxbmeg [ 0 ] ; rtB . jmd2blgngw = rtP . Constant_Value_opsf2dtcbo + rtB .
caiqwkcf2z ; rtB . e1rx1emhto = rtB . knvlc3ltii / rtB . jmd2blgngw ; if (
rtB . jblxcxbmeg [ 0 ] >= rtP . Switch1_Threshold ) { rtB . crjezne4hr = rtP
. PredictiveDriver1_PositionGainF * rtB . e1rx1emhto ; rtB . ghmmjonve0 = rtB
. crjezne4hr ; } else { rtB . blqttio3ag = rtP .
PredictiveDriver1_PositionGainF * rtB . e1rx1emhto ; rtB . ghmmjonve0 = rtB .
blqttio3ag ; } rtB . ix1gdnr0kt = rtB . ecnmk5xlda + muDoubleScalarAtan ( rtB
. ghmmjonve0 ) ; if ( rtB . a4yxlohvrw ) { rtB . dja4oazfgv = rtB .
lfx25jiz4m ; } else { if ( rtB . jblxcxbmeg [ 0 ] >= rtP . Switch2_Threshold
) { rtB . erphranciq = - rtB . ix1gdnr0kt ; } else { rtB . erphranciq = rtB .
ix1gdnr0kt ; } rtB . dja4oazfgv = rtB . erphranciq ; } if ( rtB . dja4oazfgv
> rtP . PredictiveDriver1_theta ) { rtB . i4ru1u0q2f = rtP .
PredictiveDriver1_theta ; } else if ( rtB . dja4oazfgv < - rtP .
PredictiveDriver1_theta ) { rtB . i4ru1u0q2f = - rtP .
PredictiveDriver1_theta ; } else { rtB . i4ru1u0q2f = rtB . dja4oazfgv ; }
osjj2s24tk ( rtS , rtB . jclfiq2n4d , rtB . i4ru1u0q2f , & rtB . osjj2s24tkm
, & rtDW . osjj2s24tkm ) ; if ( rtP . steerOut_Value_lublqohdan > rtP .
Switch_Threshold ) { rtB . pxquxvlqjz = rtP . Gain2_Gain * rtB . osjj2s24tkm
. kj2hrwkm2p ; rtB . hxklhjvjkk = rtB . pxquxvlqjz ; } else { rtB .
ketwrgceem = 1.0 / rtP . PredictiveDriver1_theta * rtB . osjj2s24tkm .
kj2hrwkm2p ; rtB . hxklhjvjkk = rtB . ketwrgceem ; } rtB . n5t3y1ndwd = rtB .
hxklhjvjkk ; rtB . op44qlqeyu [ 0 ] = fkcvjldvc4 ( rtP . STEER . Volante ,
rtP . STEER . Left , rtB . n5t3y1ndwd ) ; rtB . op44qlqeyu [ 1 ] = fkcvjldvc4
( rtP . STEER . Volante , rtP . STEER . Right , rtB . n5t3y1ndwd ) ; rtB .
op44qlqeyu [ 2 ] = rtB . kfxhjc530w [ 0 ] ; rtB . op44qlqeyu [ 3 ] = rtB .
kfxhjc530w [ 1 ] ; rtB . eilcu1yst5 [ 0 ] = rtX . ecgpmufv2h [ 0 ] ; rtB .
eilcu1yst5 [ 1 ] = rtX . ecgpmufv2h [ 1 ] ; rtB . eilcu1yst5 [ 2 ] = rtX .
ecgpmufv2h [ 2 ] ; rtB . eilcu1yst5 [ 3 ] = rtX . ecgpmufv2h [ 3 ] ; rtB .
dcq221einf [ 0 ] = 0.0 ; rtB . dcq221einf [ 1 ] = 0.0 ; rtB . nr0yvvf3bw =
rtX . gaamg4vtxr ; rtB . dcq221einf [ 2 ] = rtB . nr0yvvf3bw ; rtB .
eczxx3pwi3 = rtX . jecjxd3eom ; rtB . dcq221einf [ 3 ] = rtB . eczxx3pwi3 ;
rtB . or52k223hd = rtX . nfusnuz14b ; rtB . dvpmtxo0be = rtB . or52k223hd *
rtB . eu2132pgmw ; rtB . k2czyaew51 = rtB . dcq221einf [ 0 ] - rtB .
dvpmtxo0be ; rtB . lntq3i31aa = rtP . Signconvention_Gain * rtB . k2czyaew51
; noxrljyvsb ( rtS , rtB . lntq3i31aa , rtB . ncbfjdrw0i , 0.0 , & rtB .
mizmyi1de5 , rtP . WHL . WheelInitAngVel , rtP . WHL . DampingCoefficient ,
rtP . WHL . WheelInertia , rtP . LongitudinalWheelDiskBrake_VXLOW , rtP . WHL
. LoadedRadius , & rtB . noxrljyvsbq , & rtDW . noxrljyvsbq , & rtP .
noxrljyvsbq , & rtX . noxrljyvsbq ) ; rtB . hxp5a21ecw = rtB . b12vq1lhyh [ 0
] * rtB . jblxcxbmeg [ 3 ] ; rtB . ka5i5r2ocn = rtB . b12vq1lhyh [ 1 ] * rtB
. jblxcxbmeg [ 3 ] ; rtB . jrwlqx50md [ 0 ] = rtB . gj1umy1s2b - rtB .
ka5i5r2ocn ; rtB . jrwlqx50md [ 1 ] = rtB . hxp5a21ecw - rtB . egwiniboj3 ;
rtB . jrwlqx50md [ 2 ] = rtB . pdumfua25b - rtB . iow4cazdde ; rtB .
lal2lbdvnj [ 2 ] = rtB . jrwlqx50md [ 2 ] + rtP . Constant6_Value_kpny5rfalz
; rtB . eyg420i1qa = rtB . ldpqikv0lm [ 0 ] * rtB . jblxcxbmeg [ 3 ] ; rtB .
jvnbz21qcr = rtB . ldpqikv0lm [ 1 ] * rtB . jblxcxbmeg [ 3 ] ; rtB .
enyebnwuzs [ 0 ] = rtB . de12wpbxsj - rtB . jvnbz21qcr ; rtB . enyebnwuzs [ 1
] = rtB . eyg420i1qa - rtB . lwk4hkx1ck ; rtB . enyebnwuzs [ 2 ] = rtB .
iibbndjvjh - rtB . keata0at5s ; rtB . lal2lbdvnj [ 5 ] = rtB . enyebnwuzs [ 2
] + rtP . Constant6_Value_kpny5rfalz ; rtB . bfx11es1pz = rtB . py0a4e1hap [
0 ] * rtB . jblxcxbmeg [ 3 ] ; rtB . hgkjq355ga = rtB . py0a4e1hap [ 1 ] *
rtB . jblxcxbmeg [ 3 ] ; rtB . m4vbyuv50v [ 0 ] = rtB . jviyno5c5w - rtB .
hgkjq355ga ; rtB . m4vbyuv50v [ 1 ] = rtB . bfx11es1pz - rtB . cqholczoxt ;
rtB . m4vbyuv50v [ 2 ] = rtB . hjzkl2kwf3 - rtB . gjvexudexj ; rtB .
lal2lbdvnj [ 8 ] = rtB . m4vbyuv50v [ 2 ] + rtP . Constant6_Value_kpny5rfalz
; rtB . eprmfstcl0 = rtB . hb11ykgyzf [ 0 ] * rtB . jblxcxbmeg [ 3 ] ; rtB .
mlv2z4cnpk = rtB . hb11ykgyzf [ 1 ] * rtB . jblxcxbmeg [ 3 ] ; rtB .
ihoukxcl2n [ 0 ] = rtB . btnju2sxw4 - rtB . mlv2z4cnpk ; rtB . ihoukxcl2n [ 1
] = rtB . eprmfstcl0 - rtB . en3la4kxu1 ; rtB . ihoukxcl2n [ 2 ] = rtB .
mdhxk4ypyo - rtB . lstnprzd0c ; rtB . lal2lbdvnj [ 0 ] = rtB . jrwlqx50md [ 0
] + rtB . jblxcxbmeg [ 0 ] ; rtB . lal2lbdvnj [ 3 ] = rtB . enyebnwuzs [ 0 ]
+ rtB . jblxcxbmeg [ 0 ] ; rtB . lal2lbdvnj [ 6 ] = rtB . m4vbyuv50v [ 0 ] +
rtB . jblxcxbmeg [ 0 ] ; rtB . lal2lbdvnj [ 9 ] = rtB . ihoukxcl2n [ 0 ] +
rtB . jblxcxbmeg [ 0 ] ; rtB . lal2lbdvnj [ 1 ] = rtB . jrwlqx50md [ 1 ] +
rtB . jblxcxbmeg [ 1 ] ; rtB . lal2lbdvnj [ 4 ] = rtB . enyebnwuzs [ 1 ] +
rtB . jblxcxbmeg [ 1 ] ; rtB . lal2lbdvnj [ 7 ] = rtB . m4vbyuv50v [ 1 ] +
rtB . jblxcxbmeg [ 1 ] ; rtB . lal2lbdvnj [ 10 ] = rtB . ihoukxcl2n [ 1 ] +
rtB . jblxcxbmeg [ 1 ] ; rtB . lal2lbdvnj [ 11 ] = rtB . ihoukxcl2n [ 2 ] +
rtP . Constant6_Value_kpny5rfalz ; rtB . jydmtoquew [ 0 ] = rtB . op44qlqeyu
[ 0 ] ; rtB . ehegsvesam [ 0 ] = rtB . op44qlqeyu [ 1 ] + rtP .
Constant2_Value_em50tflyjf ; rtB . ehegsvesam [ 1 ] = rtB . op44qlqeyu [ 3 ]
+ rtP . Constant2_Value_em50tflyjf ; rtB . jydmtoquew [ 1 ] = rtB .
ehegsvesam [ 0 ] ; rtB . jydmtoquew [ 2 ] = rtB . op44qlqeyu [ 2 ] ; rtB .
jydmtoquew [ 3 ] = rtB . ehegsvesam [ 1 ] ; rtB . e0likot2u3 [ 0 ] = rtP .
Constant3_Value_kjml2mst5l [ 0 ] ; rtB . e0likot2u3 [ 1 ] = rtP .
Constant3_Value [ 0 ] ; rtB . e0likot2u3 [ 2 ] = rtB . jydmtoquew [ 0 ] ; rtB
. e0likot2u3 [ 3 ] = rtP . Constant3_Value_kjml2mst5l [ 1 ] ; rtB .
e0likot2u3 [ 4 ] = rtP . Constant3_Value [ 1 ] ; rtB . e0likot2u3 [ 5 ] = rtB
. jydmtoquew [ 1 ] ; rtB . e0likot2u3 [ 6 ] = rtP .
Constant3_Value_kjml2mst5l [ 2 ] ; rtB . e0likot2u3 [ 7 ] = rtP .
Constant3_Value [ 2 ] ; rtB . e0likot2u3 [ 8 ] = rtB . jydmtoquew [ 2 ] ; rtB
. e0likot2u3 [ 9 ] = rtP . Constant3_Value_kjml2mst5l [ 3 ] ; rtB .
e0likot2u3 [ 10 ] = rtP . Constant3_Value [ 3 ] ; rtB . e0likot2u3 [ 11 ] =
rtB . jydmtoquew [ 3 ] ; parallel_for ( 4 , oavv3sjyzn , 1 , "oavv3sjyzn" ) ;
edtdmcgobo ( rtB . eu2132pgmw , rtB . eilcu1yst5 [ 0 ] , rtB . mizmyi1de5 ,
rtB . kqv234nfhx [ 0 ] , rtP . Constant_Value_b31a0ftszp , rtP .
Constant1_Value_d0mkimaknr , rtP . Constant21_Value , rtP .
Constant7_Value_laudg2el00 , rtP . Constant6_Value , rtP .
LongitudinalWheelDiskBrake_gamma , rtP . LongitudinalWheelDiskBrake_LONGVL ,
rtP . Constant10_Value , rtP . Constant1_Value_hzaqq3euyu [ 0 ] , rtP .
LongitudinalWheelDiskBrake_NOMPRES , rtP . Constant2_Value_cjiby13swq , rtP .
Constant8_Value , rtP . LongitudinalWheelDiskBrake_PCX1 , rtP .
LongitudinalWheelDiskBrake_PDX1 , rtP . LongitudinalWheelDiskBrake_PDX2 , rtP
. LongitudinalWheelDiskBrake_PDX3 , rtP . LongitudinalWheelDiskBrake_PEX1 ,
rtP . LongitudinalWheelDiskBrake_PEX2 , rtP . LongitudinalWheelDiskBrake_PEX3
, rtP . LongitudinalWheelDiskBrake_PEX4 , rtP .
LongitudinalWheelDiskBrake_PKX1 , rtP . LongitudinalWheelDiskBrake_PKX2 , rtP
. LongitudinalWheelDiskBrake_PKX3 , rtP . LongitudinalWheelDiskBrake_PHX1 ,
rtP . LongitudinalWheelDiskBrake_PHX2 , rtP . LongitudinalWheelDiskBrake_PVX1
, rtP . LongitudinalWheelDiskBrake_PVX2 , rtP .
LongitudinalWheelDiskBrake_PPX1 , rtP . LongitudinalWheelDiskBrake_PPX2 , rtP
. LongitudinalWheelDiskBrake_PPX3 , rtP . LongitudinalWheelDiskBrake_PPX4 ,
rtP . Constant4_Value_awm5evched , rtP . LongitudinalWheelDiskBrake_lam_muV ,
rtB . ezve0fzsgm [ 0 ] , rtP . LongitudinalWheelDiskBrake_lam_Kxkappa , rtP .
LongitudinalWheelDiskBrake_lam_Cx , rtP . LongitudinalWheelDiskBrake_lam_Ex ,
rtP . LongitudinalWheelDiskBrake_lam_Hx , rtP .
LongitudinalWheelDiskBrake_lam_Vx , rtP . Constant19_Value , rtP .
Constant12_Value , rtP . Constant14_Value_cm1iaadx3q , rtP .
Constant5_Value_g0cymkbbny , rtP . LongitudinalWheelDiskBrake_NOMPRES , rtP .
LongitudinalWheelDiskBrake_QSY1 , rtP . LongitudinalWheelDiskBrake_QSY2 , rtP
. LongitudinalWheelDiskBrake_QSY3 , rtP . LongitudinalWheelDiskBrake_QSY4 ,
rtP . LongitudinalWheelDiskBrake_QSY5 , rtP . LongitudinalWheelDiskBrake_QSY6
, rtP . LongitudinalWheelDiskBrake_QSY7 , rtP .
LongitudinalWheelDiskBrake_QSY8 , rtP . LongitudinalWheelDiskBrake_gamma ,
rtP . LongitudinalWheelDiskBrake_lam_My , rtP . WHL . UnloadedRadius , rtP .
Constant1_Value_iplpmxjzxr , rtP . Constant3_Value_g3mg5jylp3 , rtP .
Constant19_Value_orug4n0sxc , rtP . Constant12_Value_l2gbjkvj00 , rtP .
Constant14_Value_en5e35tytu , 0.0 , rtP . Constant14_Value_hic1gb1llh , rtP .
Constant1_Value_kcfoaql2pq , rtP . Constant19_Value_nhqbp0bzti , rtP .
Constant2_Value_gz5bhq1flv , rtP . Constant3_Value_ncgz3qcyjv , rtP .
Constant4_Value_ntvqdkz2pq , rtP . Constant5_Value_mlh2nxzwxo , rtP .
Constant6_Value_ddozzpjtqi , rtP . Constant7_Value_exa5s4n3p5 , rtP .
Constant8_Value_fyo5g42mrm , rtP . Constant9_Value , rtP .
Constant10_Value_lb3gvazgl3 , rtP . Constant11_Value , rtP .
Constant16_Value_koib3b3k20 , rtP . Constant17_Value , rtP .
Constant13_Value_bmpf0tegvx , rtP . Constant15_Value , rtP .
Constant21_Value_gmnmhqy4my , rtP . Constant22_Value_p0vgly5awa , rtP .
Constant18_Value , rtP . Constant20_Value , rtP . Constant24_Value , rtP .
Constant23_Value , rtP . FxType_Value , rtP . rollType_Value , rtP .
vertType_Value , & mqicia51cy [ 0 ] , & pfy3d5jcon [ 0 ] , rtP .
LongitudinalWheelDiskBrake_FZMAX , rtP . LongitudinalWheelDiskBrake_FZMIN ,
rtP . LongitudinalWheelDiskBrake_VXLOW , rtP .
LongitudinalWheelDiskBrake_kappamax , & rtB . eyli315csa ) ; rtB . iwgmnzxtcj
[ 0 ] = rtB . eyli315csa . pfchf5chga ; rtB . npm2zr3upl = rtX . bmw50ts5q4 ;
rtB . d3z3vaxpr1 = rtB . npm2zr3upl * rtB . csqivoi424 ; rtB . jxdryj32t2 =
rtB . dcq221einf [ 1 ] - rtB . d3z3vaxpr1 ; rtB . kydysjnam0 = rtP .
Signconvention_Gain_jhil4frzun * rtB . jxdryj32t2 ; noxrljyvsb ( rtS , rtB .
kydysjnam0 , rtB . e2sy13a3rb , 0.0 , & rtB . osnlaugfya , rtP . WHL .
WheelInitAngVel , rtP . WHL . DampingCoefficient , rtP . WHL . WheelInertia ,
rtP . LongitudinalWheelDiskBrake1_VXLOW , rtP . WHL . LoadedRadius , & rtB .
cakr3inwfo , & rtDW . cakr3inwfo , & rtP . cakr3inwfo , & rtX . cakr3inwfo )
; edtdmcgobo ( rtB . csqivoi424 , rtB . eilcu1yst5 [ 1 ] , rtB . osnlaugfya ,
rtB . kqv234nfhx [ 1 ] , rtP . Constant_Value_o5p4g210jz , rtP .
Constant1_Value_j10eemu0nh , rtP . Constant21_Value_inu01fzg5w , rtP .
Constant7_Value_a5t0wvqm4e , rtP . Constant6_Value_jzggnm5gxu , rtP .
LongitudinalWheelDiskBrake1_gamma , rtP . LongitudinalWheelDiskBrake1_LONGVL
, rtP . Constant10_Value_fe3uciq2ej , rtP . Constant1_Value_hzaqq3euyu [ 1 ]
, rtP . LongitudinalWheelDiskBrake1_NOMPRES , rtP .
Constant2_Value_giy1eu2sav , rtP . Constant8_Value_h03xyi2fkr , rtP .
LongitudinalWheelDiskBrake1_PCX1 , rtP . LongitudinalWheelDiskBrake1_PDX1 ,
rtP . LongitudinalWheelDiskBrake1_PDX2 , rtP .
LongitudinalWheelDiskBrake1_PDX3 , rtP . LongitudinalWheelDiskBrake1_PEX1 ,
rtP . LongitudinalWheelDiskBrake1_PEX2 , rtP .
LongitudinalWheelDiskBrake1_PEX3 , rtP . LongitudinalWheelDiskBrake1_PEX4 ,
rtP . LongitudinalWheelDiskBrake1_PKX1 , rtP .
LongitudinalWheelDiskBrake1_PKX2 , rtP . LongitudinalWheelDiskBrake1_PKX3 ,
rtP . LongitudinalWheelDiskBrake1_PHX1 , rtP .
LongitudinalWheelDiskBrake1_PHX2 , rtP . LongitudinalWheelDiskBrake1_PVX1 ,
rtP . LongitudinalWheelDiskBrake1_PVX2 , rtP .
LongitudinalWheelDiskBrake1_PPX1 , rtP . LongitudinalWheelDiskBrake1_PPX2 ,
rtP . LongitudinalWheelDiskBrake1_PPX3 , rtP .
LongitudinalWheelDiskBrake1_PPX4 , rtP . Constant4_Value_dhlnoyt1ns , rtP .
LongitudinalWheelDiskBrake1_lam_muV , rtB . ezve0fzsgm [ 1 ] , rtP .
LongitudinalWheelDiskBrake1_lam_Kxkappa , rtP .
LongitudinalWheelDiskBrake1_lam_Cx , rtP . LongitudinalWheelDiskBrake1_lam_Ex
, rtP . LongitudinalWheelDiskBrake1_lam_Hx , rtP .
LongitudinalWheelDiskBrake1_lam_Vx , rtP . Constant19_Value_ozzfdyucl4 , rtP
. Constant12_Value_ll4vo200da , rtP . Constant14_Value_crgiad2wqr , rtP .
Constant5_Value_esz1up2oil , rtP . LongitudinalWheelDiskBrake1_NOMPRES , rtP
. LongitudinalWheelDiskBrake1_QSY1 , rtP . LongitudinalWheelDiskBrake1_QSY2 ,
rtP . LongitudinalWheelDiskBrake1_QSY3 , rtP .
LongitudinalWheelDiskBrake1_QSY4 , rtP . LongitudinalWheelDiskBrake1_QSY5 ,
rtP . LongitudinalWheelDiskBrake1_QSY6 , rtP .
LongitudinalWheelDiskBrake1_QSY7 , rtP . LongitudinalWheelDiskBrake1_QSY8 ,
rtP . LongitudinalWheelDiskBrake1_gamma , rtP .
LongitudinalWheelDiskBrake1_lam_My , rtP . WHL . UnloadedRadius , rtP .
Constant1_Value_aohjq1cffg , rtP . Constant3_Value_dthjqdhyta , rtP .
Constant19_Value_m2gxulihv5 , rtP . Constant12_Value_mcnvofxepq , rtP .
Constant14_Value_is5zyztpny , 0.0 , rtP . Constant14_Value_kn114burg5 , rtP .
Constant1_Value_essfdieb0v , rtP . Constant19_Value_acrnlrg0it , rtP .
Constant2_Value_exmoo4tfl4 , rtP . Constant3_Value_mremi1f40y , rtP .
Constant4_Value_bntc5mnpxm , rtP . Constant5_Value_ptfhcn4rg3 , rtP .
Constant6_Value_bpfq2peawo , rtP . Constant7_Value_hh14tkomr5 , rtP .
Constant8_Value_jrmtlsq2ph , rtP . Constant9_Value_armvz3ltmw , rtP .
Constant10_Value_agslcilzqf , rtP . Constant11_Value_kt1ejf5vhm , rtP .
Constant16_Value_kb1wkvqt3t , rtP . Constant17_Value_li32rekzqm , rtP .
Constant13_Value_pbghjdfltp , rtP . Constant15_Value_krq5zhrdas , rtP .
Constant21_Value_dgp5mymac4 , rtP . Constant22_Value_fambei4kxm , rtP .
Constant18_Value_b0tbvm5s0s , rtP . Constant20_Value_dl5hixnvaz , rtP .
Constant24_Value_h31110yfqt , rtP . Constant23_Value_l0ui5ialrq , rtP .
FxType_Value_ek5xvfczli , rtP . rollType_Value_fxekvynz4q , rtP .
vertType_Value_kiuwehenmp , & mqicia51cy [ 1 ] , & pfy3d5jcon [ 1 ] , rtP .
LongitudinalWheelDiskBrake1_FZMAX , rtP . LongitudinalWheelDiskBrake1_FZMIN ,
rtP . LongitudinalWheelDiskBrake1_VXLOW , rtP .
LongitudinalWheelDiskBrake1_kappamax , & rtB . poyrgpcj11 ) ; rtB .
iwgmnzxtcj [ 1 ] = rtB . poyrgpcj11 . pfchf5chga ; rtB . osxsmxcu11 = rtX .
p2fru1tfkf ; rtB . dno0g3kku3 = rtB . osxsmxcu11 * rtB . jevg3hxxfu ; rtB .
do2i3e4mnj = rtB . dcq221einf [ 2 ] - rtB . dno0g3kku3 ; rtB . bsr5mnxogb =
rtP . Signconvention_Gain_p13ojhqoz3 * rtB . do2i3e4mnj ; noxrljyvsb ( rtS ,
rtB . bsr5mnxogb , rtB . b1jibjaalt , 0.0 , & rtB . nlbjicxf4k , rtP . WHL .
WheelInitAngVel , rtP . WHL . DampingCoefficient , rtP . WHL . WheelInertia ,
rtP . LongitudinalWheelDiskBrake2_VXLOW , rtP . WHL . LoadedRadius , & rtB .
mxxvrdjd12 , & rtDW . mxxvrdjd12 , & rtP . mxxvrdjd12 , & rtX . mxxvrdjd12 )
; edtdmcgobo ( rtB . jevg3hxxfu , rtB . eilcu1yst5 [ 2 ] , rtB . nlbjicxf4k ,
rtB . kqv234nfhx [ 2 ] , rtP . Constant_Value_bnusumcwfg , rtP .
Constant1_Value_gfxqx3n4fe , rtP . Constant21_Value_exx410gmmk , rtP .
Constant7_Value_lu4dbtatxf , rtP . Constant6_Value_mxx2m2walo , rtP .
LongitudinalWheelDiskBrake2_gamma , rtP . LongitudinalWheelDiskBrake2_LONGVL
, rtP . Constant10_Value_gmaxayxkcg , rtP . Constant1_Value_hzaqq3euyu [ 2 ]
, rtP . LongitudinalWheelDiskBrake2_NOMPRES , rtP .
Constant2_Value_hvez15fvgm , rtP . Constant8_Value_hnzhk5nffp , rtP .
LongitudinalWheelDiskBrake2_PCX1 , rtP . LongitudinalWheelDiskBrake2_PDX1 ,
rtP . LongitudinalWheelDiskBrake2_PDX2 , rtP .
LongitudinalWheelDiskBrake2_PDX3 , rtP . LongitudinalWheelDiskBrake2_PEX1 ,
rtP . LongitudinalWheelDiskBrake2_PEX2 , rtP .
LongitudinalWheelDiskBrake2_PEX3 , rtP . LongitudinalWheelDiskBrake2_PEX4 ,
rtP . LongitudinalWheelDiskBrake2_PKX1 , rtP .
LongitudinalWheelDiskBrake2_PKX2 , rtP . LongitudinalWheelDiskBrake2_PKX3 ,
rtP . LongitudinalWheelDiskBrake2_PHX1 , rtP .
LongitudinalWheelDiskBrake2_PHX2 , rtP . LongitudinalWheelDiskBrake2_PVX1 ,
rtP . LongitudinalWheelDiskBrake2_PVX2 , rtP .
LongitudinalWheelDiskBrake2_PPX1 , rtP . LongitudinalWheelDiskBrake2_PPX2 ,
rtP . LongitudinalWheelDiskBrake2_PPX3 , rtP .
LongitudinalWheelDiskBrake2_PPX4 , rtP . Constant4_Value_gr0nzbusb4 , rtP .
LongitudinalWheelDiskBrake2_lam_muV , rtB . ezve0fzsgm [ 2 ] , rtP .
LongitudinalWheelDiskBrake2_lam_Kxkappa , rtP .
LongitudinalWheelDiskBrake2_lam_Cx , rtP . LongitudinalWheelDiskBrake2_lam_Ex
, rtP . LongitudinalWheelDiskBrake2_lam_Hx , rtP .
LongitudinalWheelDiskBrake2_lam_Vx , rtP . Constant19_Value_leohajathy , rtP
. Constant12_Value_d3fkkrdjup , rtP . Constant14_Value_occkolaj2d , rtP .
Constant5_Value_mbcb2wkrv5 , rtP . LongitudinalWheelDiskBrake2_NOMPRES , rtP
. LongitudinalWheelDiskBrake2_QSY1 , rtP . LongitudinalWheelDiskBrake2_QSY2 ,
rtP . LongitudinalWheelDiskBrake2_QSY3 , rtP .
LongitudinalWheelDiskBrake2_QSY4 , rtP . LongitudinalWheelDiskBrake2_QSY5 ,
rtP . LongitudinalWheelDiskBrake2_QSY6 , rtP .
LongitudinalWheelDiskBrake2_QSY7 , rtP . LongitudinalWheelDiskBrake2_QSY8 ,
rtP . LongitudinalWheelDiskBrake2_gamma , rtP .
LongitudinalWheelDiskBrake2_lam_My , rtP . WHL . UnloadedRadius , rtP .
Constant1_Value_kbypylresx , rtP . Constant3_Value_inowih5vrf , rtP .
Constant19_Value_o4et452ezr , rtP . Constant12_Value_kbdyjqaf01 , rtP .
Constant14_Value_nuoisfgmja , 0.0 , rtP . Constant14_Value_hmumstuhsy , rtP .
Constant1_Value_f1q0yad1p5 , rtP . Constant19_Value_lrpmzqnjut , rtP .
Constant2_Value_ockxqjdmyw , rtP . Constant3_Value_htcj3hsrgf , rtP .
Constant4_Value_jkqfrial2h , rtP . Constant5_Value_nlptmftxcf , rtP .
Constant6_Value_jiisk0yaaj , rtP . Constant7_Value_jy4rqkoia0 , rtP .
Constant8_Value_cykxqmjmde , rtP . Constant9_Value_m4a0rbq343 , rtP .
Constant10_Value_ppnbp4vtqf , rtP . Constant11_Value_ggkjvmp4y4 , rtP .
Constant16_Value_c5k5de5vz4 , rtP . Constant17_Value_ljswctb2sm , rtP .
Constant13_Value_dzm3sahwha , rtP . Constant15_Value_gkrfu5n52s , rtP .
Constant21_Value_bp2hi2k31j , rtP . Constant22_Value_hpob3pokk1 , rtP .
Constant18_Value_gc4ykz150t , rtP . Constant20_Value_beybli4zjq , rtP .
Constant24_Value_jmeh0zbgqk , rtP . Constant23_Value_ka0nxdifi3 , rtP .
FxType_Value_lgdqhqcr0t , rtP . rollType_Value_ffaom4emgl , rtP .
vertType_Value_o0oqk35aq3 , & mqicia51cy [ 2 ] , & pfy3d5jcon [ 2 ] , rtP .
LongitudinalWheelDiskBrake2_FZMAX , rtP . LongitudinalWheelDiskBrake2_FZMIN ,
rtP . LongitudinalWheelDiskBrake2_VXLOW , rtP .
LongitudinalWheelDiskBrake2_kappamax , & rtB . mfn3ngkfa2 ) ; rtB .
iwgmnzxtcj [ 2 ] = rtB . mfn3ngkfa2 . pfchf5chga ; rtB . p5ymjmcd3s = rtX .
kqdff1w3rv ; rtB . cfguotgkw0 = rtB . p5ymjmcd3s * rtB . mer25mymto ; rtB .
hscsk3udek = rtB . dcq221einf [ 3 ] - rtB . cfguotgkw0 ; rtB . n4c0eyic5z =
rtP . Signconvention_Gain_d3epx2gwud * rtB . hscsk3udek ; noxrljyvsb ( rtS ,
rtB . n4c0eyic5z , rtB . lscft13zqo , 0.0 , & rtB . on55mw5phh , rtP . WHL .
WheelInitAngVel , rtP . WHL . DampingCoefficient , rtP . WHL . WheelInertia ,
rtP . LongitudinalWheelDiskBrake3_VXLOW , rtP . WHL . LoadedRadius , & rtB .
gjwrbmtmpz , & rtDW . gjwrbmtmpz , & rtP . gjwrbmtmpz , & rtX . gjwrbmtmpz )
; edtdmcgobo ( rtB . mer25mymto , rtB . eilcu1yst5 [ 3 ] , rtB . on55mw5phh ,
rtB . kqv234nfhx [ 3 ] , rtP . Constant_Value_ecv500tmeb , rtP .
Constant1_Value_nuzulivnnk , rtP . Constant21_Value_m20ka1bgwz , rtP .
Constant7_Value_l5epqldb0j , rtP . Constant6_Value_dl1z1mqzqt , rtP .
LongitudinalWheelDiskBrake3_gamma , rtP . LongitudinalWheelDiskBrake3_LONGVL
, rtP . Constant10_Value_jp2ihp4v1p , rtP . Constant1_Value_hzaqq3euyu [ 3 ]
, rtP . LongitudinalWheelDiskBrake3_NOMPRES , rtP .
Constant2_Value_f1c31ebol1 , rtP . Constant8_Value_mwkqhrbjbp , rtP .
LongitudinalWheelDiskBrake3_PCX1 , rtP . LongitudinalWheelDiskBrake3_PDX1 ,
rtP . LongitudinalWheelDiskBrake3_PDX2 , rtP .
LongitudinalWheelDiskBrake3_PDX3 , rtP . LongitudinalWheelDiskBrake3_PEX1 ,
rtP . LongitudinalWheelDiskBrake3_PEX2 , rtP .
LongitudinalWheelDiskBrake3_PEX3 , rtP . LongitudinalWheelDiskBrake3_PEX4 ,
rtP . LongitudinalWheelDiskBrake3_PKX1 , rtP .
LongitudinalWheelDiskBrake3_PKX2 , rtP . LongitudinalWheelDiskBrake3_PKX3 ,
rtP . LongitudinalWheelDiskBrake3_PHX1 , rtP .
LongitudinalWheelDiskBrake3_PHX2 , rtP . LongitudinalWheelDiskBrake3_PVX1 ,
rtP . LongitudinalWheelDiskBrake3_PVX2 , rtP .
LongitudinalWheelDiskBrake3_PPX1 , rtP . LongitudinalWheelDiskBrake3_PPX2 ,
rtP . LongitudinalWheelDiskBrake3_PPX3 , rtP .
LongitudinalWheelDiskBrake3_PPX4 , rtP . Constant4_Value_moz4ecoe4h , rtP .
LongitudinalWheelDiskBrake3_lam_muV , rtB . ezve0fzsgm [ 3 ] , rtP .
LongitudinalWheelDiskBrake3_lam_Kxkappa , rtP .
LongitudinalWheelDiskBrake3_lam_Cx , rtP . LongitudinalWheelDiskBrake3_lam_Ex
, rtP . LongitudinalWheelDiskBrake3_lam_Hx , rtP .
LongitudinalWheelDiskBrake3_lam_Vx , rtP . Constant19_Value_etwirqyveh , rtP
. Constant12_Value_pth5jus2gw , rtP . Constant14_Value_okzecomyla , rtP .
Constant5_Value_pvppmmlgji , rtP . LongitudinalWheelDiskBrake3_NOMPRES , rtP
. LongitudinalWheelDiskBrake3_QSY1 , rtP . LongitudinalWheelDiskBrake3_QSY2 ,
rtP . LongitudinalWheelDiskBrake3_QSY3 , rtP .
LongitudinalWheelDiskBrake3_QSY4 , rtP . LongitudinalWheelDiskBrake3_QSY5 ,
rtP . LongitudinalWheelDiskBrake3_QSY6 , rtP .
LongitudinalWheelDiskBrake3_QSY7 , rtP . LongitudinalWheelDiskBrake3_QSY8 ,
rtP . LongitudinalWheelDiskBrake3_gamma , rtP .
LongitudinalWheelDiskBrake3_lam_My , rtP . WHL . UnloadedRadius , rtP .
Constant1_Value_no1buficy0 , rtP . Constant3_Value_fxsakgeryy , rtP .
Constant19_Value_ddjj4cjtl0 , rtP . Constant12_Value_dunswvso43 , rtP .
Constant14_Value_njxwz13fop , 0.0 , rtP . Constant14_Value_lfzxknncyb , rtP .
Constant1_Value_fcrf4zjlhx , rtP . Constant19_Value_m1fgbtaupm , rtP .
Constant2_Value_kbvvnvh00h , rtP . Constant3_Value_io233cu3w3 , rtP .
Constant4_Value_i0dmebil5o , rtP . Constant5_Value_hl0sdlmzh1 , rtP .
Constant6_Value_a1g45xi0ik , rtP . Constant7_Value_e4ozcq1q1y , rtP .
Constant8_Value_e2ygkdvend , rtP . Constant9_Value_b3fq5bgts1 , rtP .
Constant10_Value_nrlltm0vb5 , rtP . Constant11_Value_b1okoewuqj , rtP .
Constant16_Value_gkle53u5qm , rtP . Constant17_Value_dx3vopggna , rtP .
Constant13_Value_pen3hto5l3 , rtP . Constant15_Value_njogms3uja , rtP .
Constant21_Value_blrzhj43bj , rtP . Constant22_Value_eloqcisbpk , rtP .
Constant18_Value_la1oqyo3ew , rtP . Constant20_Value_jvpxpasvuk , rtP .
Constant24_Value_ae1gyk5y5z , rtP . Constant23_Value_kmuvgwa3dl , rtP .
FxType_Value_ir1uubdpxu , rtP . rollType_Value_jmsnbyje2v , rtP .
vertType_Value_hxpwacy5lu , & mqicia51cy [ 3 ] , & pfy3d5jcon [ 3 ] , rtP .
LongitudinalWheelDiskBrake3_FZMAX , rtP . LongitudinalWheelDiskBrake3_FZMIN ,
rtP . LongitudinalWheelDiskBrake3_VXLOW , rtP .
LongitudinalWheelDiskBrake3_kappamax , & rtB . ksccswp5ae ) ; rtB .
iwgmnzxtcj [ 3 ] = rtB . ksccswp5ae . pfchf5chga ; if ( rtB . iwgmnzxtcj [ 0
] > rtP . DeadZone2_End ) { rtB . p4l0q5m2zp [ 0 ] = rtB . iwgmnzxtcj [ 0 ] -
rtP . DeadZone2_End ; } else if ( rtB . iwgmnzxtcj [ 0 ] >= rtP .
DeadZone2_Start ) { rtB . p4l0q5m2zp [ 0 ] = 0.0 ; } else { rtB . p4l0q5m2zp
[ 0 ] = rtB . iwgmnzxtcj [ 0 ] - rtP . DeadZone2_Start ; } if ( rtB .
iwgmnzxtcj [ 1 ] > rtP . DeadZone2_End ) { rtB . p4l0q5m2zp [ 1 ] = rtB .
iwgmnzxtcj [ 1 ] - rtP . DeadZone2_End ; } else if ( rtB . iwgmnzxtcj [ 1 ]
>= rtP . DeadZone2_Start ) { rtB . p4l0q5m2zp [ 1 ] = 0.0 ; } else { rtB .
p4l0q5m2zp [ 1 ] = rtB . iwgmnzxtcj [ 1 ] - rtP . DeadZone2_Start ; } if (
rtB . iwgmnzxtcj [ 2 ] > rtP . DeadZone2_End ) { rtB . p4l0q5m2zp [ 2 ] = rtB
. iwgmnzxtcj [ 2 ] - rtP . DeadZone2_End ; } else if ( rtB . iwgmnzxtcj [ 2 ]
>= rtP . DeadZone2_Start ) { rtB . p4l0q5m2zp [ 2 ] = 0.0 ; } else { rtB .
p4l0q5m2zp [ 2 ] = rtB . iwgmnzxtcj [ 2 ] - rtP . DeadZone2_Start ; } if (
rtB . iwgmnzxtcj [ 3 ] > rtP . DeadZone2_End ) { rtB . p4l0q5m2zp [ 3 ] = rtB
. iwgmnzxtcj [ 3 ] - rtP . DeadZone2_End ; } else if ( rtB . iwgmnzxtcj [ 3 ]
>= rtP . DeadZone2_Start ) { rtB . p4l0q5m2zp [ 3 ] = 0.0 ; } else { rtB .
p4l0q5m2zp [ 3 ] = rtB . iwgmnzxtcj [ 3 ] - rtP . DeadZone2_Start ; } rtB .
klxqd1kpmy [ 0 ] = rtB . p4l0q5m2zp [ 0 ] ; rtB . klxqd1kpmy [ 1 ] = 0.0 ;
rtB . mohuvfpwqf [ 0 ] = rtB . p4l0q5m2zp [ 1 ] ; rtB . mohuvfpwqf [ 1 ] =
0.0 ; rtB . htdiicmgu3 [ 0 ] = rtB . p4l0q5m2zp [ 2 ] ; rtB . htdiicmgu3 [ 1
] = 0.0 ; rtB . fhdbndmo2w [ 0 ] = rtB . p4l0q5m2zp [ 3 ] ; rtB . fhdbndmo2w
[ 1 ] = 0.0 ; rtB . b52ktbsian [ 0 ] = rtB . klxqd1kpmy [ 0 ] ; rtB .
b52ktbsian [ 1 ] = rtB . mohuvfpwqf [ 0 ] ; rtB . bb0j4ldsw5 [ 0 ] = rtB .
htdiicmgu3 [ 0 ] ; rtB . bb0j4ldsw5 [ 1 ] = rtB . fhdbndmo2w [ 0 ] ; rtB .
b52ktbsian [ 2 ] = rtB . klxqd1kpmy [ 1 ] ; rtB . b52ktbsian [ 3 ] = rtB .
mohuvfpwqf [ 1 ] ; rtB . bb0j4ldsw5 [ 2 ] = rtB . htdiicmgu3 [ 1 ] ; rtB .
bb0j4ldsw5 [ 3 ] = rtB . fhdbndmo2w [ 1 ] ; rtB . izvtaoatv2 [ 0 ] = rtB .
jblxcxbmeg [ 0 ] ; rtB . izvtaoatv2 [ 1 ] = rtB . jblxcxbmeg [ 1 ] ; rtB .
izvtaoatv2 [ 2 ] = rtP . Constant_Value_iwq4q5pvk4 ; muDoubleScalarSinCos (
rtB . jblxcxbmeg [ 2 ] , & ys , & i0ssdtjwt1_idx_1 ) ; rtB . ce4albcsmy =
i0ssdtjwt1_idx_1 * rtB . mi1o4jcssm [ 0 ] ; rtB . jj4xvsloor = ys * rtB .
mi1o4jcssm [ 1 ] ; rtB . bkbmbwuukb [ 0 ] = rtB . ce4albcsmy + rtB .
jj4xvsloor ; rtB . n2l3ampztw = ys * rtB . mi1o4jcssm [ 0 ] ; rtB .
eanxbrkudf = i0ssdtjwt1_idx_1 * rtB . mi1o4jcssm [ 1 ] ; rtB . bkbmbwuukb [ 1
] = rtB . eanxbrkudf - rtB . n2l3ampztw ; rtB . bkbmbwuukb [ 2 ] = rtB .
mi1o4jcssm [ 2 ] ; rtB . pkpsezd2kc [ 0 ] = rtB . izvtaoatv2 [ 0 ] - rtB .
bkbmbwuukb [ 0 ] ; rtB . djwgtq0y1t [ 0 ] = rtP . u_Gain [ 0 ] * rtB .
pkpsezd2kc [ 0 ] ; i0ssdtjwt1_idx_0 = muDoubleScalarTanh ( rtB . djwgtq0y1t [
0 ] ) ; rtB . nntb3jtaei [ 0 ] = rtB . pkpsezd2kc [ 0 ] * rtB . pkpsezd2kc [
0 ] ; rtB . pkpsezd2kc [ 1 ] = rtB . izvtaoatv2 [ 1 ] - rtB . bkbmbwuukb [ 1
] ; rtB . djwgtq0y1t [ 1 ] = rtP . u_Gain [ 1 ] * rtB . pkpsezd2kc [ 1 ] ;
i0ssdtjwt1_idx_1 = muDoubleScalarTanh ( rtB . djwgtq0y1t [ 1 ] ) ; rtB .
nntb3jtaei [ 1 ] = rtB . pkpsezd2kc [ 1 ] * rtB . pkpsezd2kc [ 1 ] ; rtB .
pkpsezd2kc [ 2 ] = rtB . izvtaoatv2 [ 2 ] - rtB . bkbmbwuukb [ 2 ] ; rtB .
djwgtq0y1t [ 2 ] = rtP . u_Gain [ 2 ] * rtB . pkpsezd2kc [ 2 ] ;
i0ssdtjwt1_idx_2 = muDoubleScalarTanh ( rtB . djwgtq0y1t [ 2 ] ) ; rtB .
nntb3jtaei [ 2 ] = rtB . pkpsezd2kc [ 2 ] * rtB . pkpsezd2kc [ 2 ] ; rtB .
gloj4ntcd3 = ( rtB . nntb3jtaei [ 0 ] + rtB . nntb3jtaei [ 1 ] ) + rtB .
nntb3jtaei [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . jntluapbyr
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW .
jntluapbyr = 0 ; } ys = muDoubleScalarSqrt ( rtB . gloj4ntcd3 ) ; } else { if
( rtB . gloj4ntcd3 < 0.0 ) { ys = - muDoubleScalarSqrt ( muDoubleScalarAbs (
rtB . gloj4ntcd3 ) ) ; } else { ys = muDoubleScalarSqrt ( rtB . gloj4ntcd3 )
; } if ( rtB . gloj4ntcd3 < 0.0 ) { rtDW . jntluapbyr = 1 ; } } rtB .
bcmt4kc43t = ys * ys ; rtB . n1yoj2fyso [ 0 ] = rtP . EV . LongDragCoeff ; ys
= muDoubleScalarAtan2 ( rtB . pkpsezd2kc [ 1 ] , rtB . pkpsezd2kc [ 0 ] ) ;
rtB . n1yoj2fyso [ 1 ] = look1_binlcpw ( ys , rtP .
VehicleBody3DOFDualTrack_beta_w , rtP . VehicleBody3DOFDualTrack_Cs , 30U ) ;
rtB . n1yoj2fyso [ 2 ] = rtP . VehicleBody3DOFDualTrack_Cl ; rtB . n1yoj2fyso
[ 3 ] = look1_binlxpw ( ys , rtP . Crm_bp01Data , rtP . Crm_tableData , 1U )
; rtB . n1yoj2fyso [ 4 ] = i0ssdtjwt1_idx_0 * rtP .
VehicleBody3DOFDualTrack_Cpm ; rtB . n1yoj2fyso [ 5 ] = look1_binlxpw ( ys ,
rtP . VehicleBody3DOFDualTrack_beta_w , rtP . VehicleBody3DOFDualTrack_Cym ,
30U ) ; xdot = 0.5 * rtP . EV . FrontalArea * rtP .
VehicleBody3DOFDualTrack_Pabs / rtP . DragForce_R ; for ( i = 0 ; i < 6 ; i
++ ) { rtB . ez013j13lu [ i ] = rtB . bcmt4kc43t * rtB . n1yoj2fyso [ i ] /
rtP . VehicleBody3DOFDualTrack_Tair ; rtB . co3tegqkmg [ i ] = xdot * rtB .
ez013j13lu [ i ] ; } xdot = rtP . EV . FrontAxlePositionfromCG + rtP . EV .
RearAxlePositionfromCG ; rtB . e1n4f15aet [ 0 ] = i0ssdtjwt1_idx_0 * rtB .
co3tegqkmg [ 0 ] ; rtB . jgjsvwltnt [ 0 ] = - rtB . e1n4f15aet [ 0 ] ; rtB .
mbz4uqeymk [ 0 ] = rtB . co3tegqkmg [ 3 ] * xdot ; rtB . o1bgby3op5 [ 0 ] = -
rtB . mbz4uqeymk [ 0 ] ; rtB . jb0wfcgmvy [ 0 ] = 0.0 ; rtB . ba2xdwdiit [ 0
] = 0.0 ; rtB . e1n4f15aet [ 1 ] = i0ssdtjwt1_idx_1 * rtB . co3tegqkmg [ 1 ]
; rtB . jgjsvwltnt [ 1 ] = - rtB . e1n4f15aet [ 1 ] ; rtB . mbz4uqeymk [ 1 ]
= rtB . co3tegqkmg [ 4 ] * xdot ; rtB . o1bgby3op5 [ 1 ] = - rtB . mbz4uqeymk
[ 1 ] ; rtB . jb0wfcgmvy [ 1 ] = 0.0 ; rtB . ba2xdwdiit [ 1 ] = 0.0 ; rtB .
e1n4f15aet [ 2 ] = i0ssdtjwt1_idx_2 * rtB . co3tegqkmg [ 2 ] ; rtB .
jgjsvwltnt [ 2 ] = - rtB . e1n4f15aet [ 2 ] ; rtB . mbz4uqeymk [ 2 ] = rtB .
co3tegqkmg [ 5 ] * xdot ; rtB . o1bgby3op5 [ 2 ] = - rtB . mbz4uqeymk [ 2 ] ;
rtB . jb0wfcgmvy [ 2 ] = 0.0 ; rtB . ba2xdwdiit [ 2 ] = 0.0 ; ys = rtP . EV .
FrontAxlePositionfromCG ; i0ssdtjwt1_idx_1 = rtP . EV .
RearAxlePositionfromCG ; ju2qheifh2 = rtP . EV . HeightCG ; o3n3jqkno2 = rtP
. EV . Mass ; xdot = rtB . jblxcxbmeg [ 0 ] ; ydot = rtB . jblxcxbmeg [ 1 ] ;
r = rtB . jblxcxbmeg [ 3 ] ; Vwheel_fl = rtP . EV . TrackWidth [ 0 ] / 2.0 ;
Vwheel_rl = rtP . EV . TrackWidth [ 1 ] / 2.0 ; Vwheel_fl =
muDoubleScalarSqrt ( rtP . EV . FrontAxlePositionfromCG * rtP . EV .
FrontAxlePositionfromCG + Vwheel_fl * Vwheel_fl ) * rtB . jblxcxbmeg [ 3 ] +
rtB . jblxcxbmeg [ 1 ] ; Vwheel_fl = muDoubleScalarSqrt ( Vwheel_fl *
Vwheel_fl + rtB . jblxcxbmeg [ 0 ] * rtB . jblxcxbmeg [ 0 ] ) ; Vwheel_rl =
rtB . jblxcxbmeg [ 1 ] - muDoubleScalarSqrt ( rtP . EV .
RearAxlePositionfromCG * rtP . EV . RearAxlePositionfromCG + Vwheel_rl *
Vwheel_rl ) * rtB . jblxcxbmeg [ 3 ] ; Vwheel_rl = muDoubleScalarSqrt (
Vwheel_rl * Vwheel_rl + rtB . jblxcxbmeg [ 0 ] * rtB . jblxcxbmeg [ 0 ] ) ;
gbnefweovc ( rtB . jblxcxbmeg [ 0 ] , rtP . VehicleBody3DOFDualTrack_xdot_tol
, & alfa_rr , & delta_fl ) ; delta_fl = rtB . op44qlqeyu [ 0 ] ; delta_fr =
rtB . op44qlqeyu [ 1 ] ; delta_rl = rtB . ks2tcvhkgr [ 0 ] ; delta_rr = rtB .
ks2tcvhkgr [ 1 ] ; alfa_fl = muDoubleScalarAtan2 ( rtP . EV .
FrontAxlePositionfromCG * rtB . jblxcxbmeg [ 3 ] + rtB . jblxcxbmeg [ 1 ] ,
muDoubleScalarAbs ( rtP . EV . TrackWidth [ 0 ] / 2.0 * rtB . jblxcxbmeg [ 3
] + alfa_rr ) ) - muDoubleScalarTanh ( 4.0 * rtB . jblxcxbmeg [ 0 ] ) * rtB .
op44qlqeyu [ 0 ] ; i0ssdtjwt1_idx_0 = muDoubleScalarAtan2 ( rtP . EV .
FrontAxlePositionfromCG * rtB . jblxcxbmeg [ 3 ] + rtB . jblxcxbmeg [ 1 ] ,
muDoubleScalarAbs ( alfa_rr - rtP . EV . TrackWidth [ 0 ] / 2.0 * rtB .
jblxcxbmeg [ 3 ] ) ) - muDoubleScalarTanh ( 4.0 * rtB . jblxcxbmeg [ 0 ] ) *
rtB . op44qlqeyu [ 1 ] ; alfa_rl = muDoubleScalarAtan2 ( rtB . jblxcxbmeg [ 1
] - rtP . EV . RearAxlePositionfromCG * rtB . jblxcxbmeg [ 3 ] ,
muDoubleScalarAbs ( rtP . EV . TrackWidth [ 1 ] / 2.0 * rtB . jblxcxbmeg [ 3
] + alfa_rr ) ) - muDoubleScalarTanh ( 4.0 * rtB . jblxcxbmeg [ 0 ] ) * rtB .
ks2tcvhkgr [ 0 ] ; alfa_rr = muDoubleScalarAtan2 ( rtB . jblxcxbmeg [ 1 ] -
rtP . EV . RearAxlePositionfromCG * rtB . jblxcxbmeg [ 3 ] ,
muDoubleScalarAbs ( alfa_rr - rtP . EV . TrackWidth [ 1 ] / 2.0 * rtB .
jblxcxbmeg [ 3 ] ) ) - muDoubleScalarTanh ( 4.0 * rtB . jblxcxbmeg [ 0 ] ) *
rtB . ks2tcvhkgr [ 1 ] ; Fz_idx_0 = 0.0 ; Fz_idx_1 = 0.0 ; i0ssdtjwt1_idx_2 =
0.0 ; Fz_idx_3 = 0.0 ; b_B3 = ( - rtB . jgjsvwltnt [ 2 ] - rtB . jb0wfcgmvy [
2 ] ) - rtP . VehicleBody3DOFDualTrack_g * rtP . EV . Mass ; for ( i = 0 ; i
< 11 ; i ++ ) { if ( i == 0 ) { B1 = ( ( ( rtB . jb0wfcgmvy [ 1 ] *
ju2qheifh2 - rtB . ba2xdwdiit [ 0 ] ) - rtB . o1bgby3op5 [ 0 ] ) - ( 0.0 -
rtP . VehicleBody3DOFDualTrack_d ) * rtB . jb0wfcgmvy [ 2 ] ) - ( ( rtB .
jgjsvwltnt [ 1 ] + rtB . jb0wfcgmvy [ 1 ] ) - r * xdot * o3n3jqkno2 ) *
ju2qheifh2 ; B2 = ( ( ( ( ( ( rtB . jgjsvwltnt [ 0 ] + rtB . jb0wfcgmvy [ 0 ]
) - ( 0.0 - r * ydot ) * o3n3jqkno2 ) - rtP . VehicleBody3DOFDualTrack_g *
o3n3jqkno2 * 0.0 ) * ju2qheifh2 - rtB . ba2xdwdiit [ 1 ] ) - rtB . jb0wfcgmvy
[ 2 ] * 0.0 ) - rtB . jb0wfcgmvy [ 0 ] * ju2qheifh2 ) - rtB . o1bgby3op5 [ 1
] ; B3 = ( - rtB . jgjsvwltnt [ 2 ] - rtB . jb0wfcgmvy [ 2 ] ) - rtP .
VehicleBody3DOFDualTrack_g * o3n3jqkno2 ; Fz_idx_0 = - ( - ( ( ( ( ( ( ( 2.0
* B1 * ys + 2.0 * B1 * i0ssdtjwt1_idx_1 ) + B2 * rtP . EV . TrackWidth [ 0 ]
) + B2 * rtP . EV . TrackWidth [ 1 ] ) + 2.0 * B3 * ys * rtP .
VehicleBody3DOFDualTrack_d ) + 2.0 * B3 * i0ssdtjwt1_idx_1 * rtP .
VehicleBody3DOFDualTrack_d ) - B3 * i0ssdtjwt1_idx_1 * rtP . EV . TrackWidth
[ 0 ] ) - B3 * i0ssdtjwt1_idx_1 * rtP . EV . TrackWidth [ 1 ] ) / ( ( ys +
i0ssdtjwt1_idx_1 ) * 2.0 * ( rtP . EV . TrackWidth [ 0 ] + rtP . EV .
TrackWidth [ 1 ] ) ) ) * 2.0 ; if ( Fz_idx_0 < 0.0 ) { Fz_idx_0 = 0.0 ; }
Fz_idx_1 = - ( ( ( ( ( ( ( ( 2.0 * B1 * ys + 2.0 * B1 * i0ssdtjwt1_idx_1 ) -
B2 * rtP . EV . TrackWidth [ 0 ] ) - B2 * rtP . EV . TrackWidth [ 1 ] ) + 2.0
* B3 * ys * rtP . VehicleBody3DOFDualTrack_d ) + 2.0 * B3 * i0ssdtjwt1_idx_1
* rtP . VehicleBody3DOFDualTrack_d ) + B3 * i0ssdtjwt1_idx_1 * rtP . EV .
TrackWidth [ 0 ] ) + B3 * i0ssdtjwt1_idx_1 * rtP . EV . TrackWidth [ 1 ] ) /
( ( ys + i0ssdtjwt1_idx_1 ) * 2.0 * ( rtP . EV . TrackWidth [ 0 ] + rtP . EV
. TrackWidth [ 1 ] ) ) ) * 2.0 ; if ( Fz_idx_1 < 0.0 ) { Fz_idx_1 = 0.0 ; }
i0ssdtjwt1_idx_2 = - ( - ( ( ( ( ( ( ( 2.0 * B1 * ys + 2.0 * B1 *
i0ssdtjwt1_idx_1 ) - B2 * rtP . EV . TrackWidth [ 0 ] ) - B2 * rtP . EV .
TrackWidth [ 1 ] ) + 2.0 * B3 * ys * rtP . VehicleBody3DOFDualTrack_d ) + 2.0
* B3 * i0ssdtjwt1_idx_1 * rtP . VehicleBody3DOFDualTrack_d ) - B3 * ys * rtP
. EV . TrackWidth [ 0 ] ) - B3 * ys * rtP . EV . TrackWidth [ 1 ] ) / ( ( ys
+ i0ssdtjwt1_idx_1 ) * 2.0 * ( rtP . EV . TrackWidth [ 0 ] + rtP . EV .
TrackWidth [ 1 ] ) ) ) * 2.0 ; if ( i0ssdtjwt1_idx_2 < 0.0 ) {
i0ssdtjwt1_idx_2 = 0.0 ; } Fz_idx_3 = - ( ( ( ( ( ( ( ( 2.0 * B1 * ys + 2.0 *
B1 * i0ssdtjwt1_idx_1 ) + B2 * rtP . EV . TrackWidth [ 0 ] ) + B2 * rtP . EV
. TrackWidth [ 1 ] ) + 2.0 * B3 * ys * rtP . VehicleBody3DOFDualTrack_d ) +
2.0 * B3 * i0ssdtjwt1_idx_1 * rtP . VehicleBody3DOFDualTrack_d ) + B3 * ys *
rtP . EV . TrackWidth [ 0 ] ) + B3 * ys * rtP . EV . TrackWidth [ 1 ] ) / ( (
ys + i0ssdtjwt1_idx_1 ) * 2.0 * ( rtP . EV . TrackWidth [ 0 ] + rtP . EV .
TrackWidth [ 1 ] ) ) ) * 2.0 ; if ( Fz_idx_3 < 0.0 ) { Fz_idx_3 = 0.0 ; } }
i3hwf03gep ( rtB . b52ktbsian [ 0 ] , - rtB . lufthx0epg [ 0 ] / 2.0 *
alfa_fl * rtB . ezve0fzsgm [ 0 ] * Fz_idx_0 / rtP .
VehicleBody3DOFDualTrack_Fznom , rtP . vehiclemodel_Fxtire_sat * Fz_idx_0 /
rtP . VehicleBody3DOFDualTrack_Fznom , rtP . vehiclemodel_Fytire_sat *
Fz_idx_0 / rtP . VehicleBody3DOFDualTrack_Fznom , & B2 , & B3 ) ; i3hwf03gep
( rtB . b52ktbsian [ 1 ] , - rtB . lufthx0epg [ 1 ] / 2.0 * i0ssdtjwt1_idx_0
* rtB . ezve0fzsgm [ 2 ] * Fz_idx_1 / rtP . VehicleBody3DOFDualTrack_Fznom ,
rtP . vehiclemodel_Fxtire_sat * Fz_idx_1 / rtP .
VehicleBody3DOFDualTrack_Fznom , rtP . vehiclemodel_Fytire_sat * Fz_idx_1 /
rtP . VehicleBody3DOFDualTrack_Fznom , & Fz_idx_0 , & Fx_rl ) ; i3hwf03gep (
rtB . bb0j4ldsw5 [ 0 ] , - rtB . dvwaoy2qi5 [ 0 ] / 2.0 * alfa_rl * rtB .
ezve0fzsgm [ 1 ] * i0ssdtjwt1_idx_2 / rtP . VehicleBody3DOFDualTrack_Fznom ,
rtP . vehiclemodel_Fxtire_sat * i0ssdtjwt1_idx_2 / rtP .
VehicleBody3DOFDualTrack_Fznom , rtP . vehiclemodel_Fytire_sat *
i0ssdtjwt1_idx_2 / rtP . VehicleBody3DOFDualTrack_Fznom , & Fz_idx_1 , &
Fx_rr ) ; i3hwf03gep ( rtB . bb0j4ldsw5 [ 1 ] , - rtB . dvwaoy2qi5 [ 1 ] /
2.0 * alfa_rr * rtB . ezve0fzsgm [ 3 ] * Fz_idx_3 / rtP .
VehicleBody3DOFDualTrack_Fznom , rtP . vehiclemodel_Fxtire_sat * Fz_idx_3 /
rtP . VehicleBody3DOFDualTrack_Fznom , rtP . vehiclemodel_Fytire_sat *
Fz_idx_3 / rtP . VehicleBody3DOFDualTrack_Fznom , & i0ssdtjwt1_idx_2 , &
xddot ) ; B1 = B2 * muDoubleScalarCos ( delta_fl ) - B3 * muDoubleScalarSin (
delta_fl ) ; B2 = B3 * muDoubleScalarCos ( delta_fl ) - B2 *
muDoubleScalarSin ( delta_fl ) ; B3 = Fz_idx_0 * muDoubleScalarCos ( delta_fr
) - Fx_rl * muDoubleScalarSin ( delta_fr ) ; Fz_idx_0 = Fx_rl *
muDoubleScalarCos ( delta_fr ) - Fz_idx_0 * muDoubleScalarSin ( delta_fr ) ;
Fx_rl = Fz_idx_1 * muDoubleScalarCos ( delta_rl ) - Fx_rr * muDoubleScalarSin
( delta_rl ) ; Fz_idx_1 = Fx_rr * muDoubleScalarCos ( delta_rl ) - Fz_idx_1 *
muDoubleScalarSin ( delta_rl ) ; Fx_rr = i0ssdtjwt1_idx_2 * muDoubleScalarCos
( delta_rr ) - xddot * muDoubleScalarSin ( delta_rr ) ; i0ssdtjwt1_idx_2 =
xddot * muDoubleScalarCos ( delta_rr ) - i0ssdtjwt1_idx_2 * muDoubleScalarSin
( delta_rr ) ; xddot = ( ( ( ( ( ( B1 + B3 ) + Fx_rl ) + Fx_rr ) - o3n3jqkno2
* rtP . VehicleBody3DOFDualTrack_g * 0.0 ) + rtB . jgjsvwltnt [ 0 ] ) + rtB .
jb0wfcgmvy [ 0 ] ) / o3n3jqkno2 + ydot * r ; yddot = ( ( ( ( ( B2 + Fz_idx_0
) + Fz_idx_1 ) + i0ssdtjwt1_idx_2 ) + rtB . jgjsvwltnt [ 1 ] ) + rtB .
jb0wfcgmvy [ 1 ] ) / o3n3jqkno2 + - xdot * r ; B1 = ( ( ( ( ( ( ( ( B2 +
Fz_idx_0 ) * ys - ( Fz_idx_1 + i0ssdtjwt1_idx_2 ) * i0ssdtjwt1_idx_1 ) + rtP
. EV . TrackWidth [ 0 ] / 2.0 * ( B1 - B3 ) ) + rtP . EV . TrackWidth [ 1 ] /
2.0 * ( Fx_rl - Fx_rr ) ) + rtB . o1bgby3op5 [ 2 ] ) + rtB . ba2xdwdiit [ 2 ]
) - ( 0.0 - rtP . VehicleBody3DOFDualTrack_d ) * rtB . jb0wfcgmvy [ 0 ] ) -
rtB . jb0wfcgmvy [ 1 ] * 0.0 ) / rtP . EV . YawMomentInertia ; B2 = ( ( ( rtB
. jb0wfcgmvy [ 1 ] * ju2qheifh2 - rtB . ba2xdwdiit [ 0 ] ) - rtB . o1bgby3op5
[ 0 ] ) - ( 0.0 - rtP . VehicleBody3DOFDualTrack_d ) * rtB . jb0wfcgmvy [ 2 ]
) - ( ( rtB . jgjsvwltnt [ 1 ] + rtB . jb0wfcgmvy [ 1 ] ) - ( r * xdot +
yddot ) * o3n3jqkno2 ) * ju2qheifh2 ; Fz_idx_3 = ( ( ( ( ( ( rtB . jgjsvwltnt
[ 0 ] + rtB . jb0wfcgmvy [ 0 ] ) - ( xddot - r * ydot ) * o3n3jqkno2 ) - rtP
. VehicleBody3DOFDualTrack_g * o3n3jqkno2 * 0.0 ) * ju2qheifh2 - rtB .
ba2xdwdiit [ 1 ] ) - rtB . jb0wfcgmvy [ 2 ] * 0.0 ) - rtB . jb0wfcgmvy [ 0 ]
* ju2qheifh2 ) - rtB . o1bgby3op5 [ 1 ] ; Fz_idx_0 = - ( - ( ( ( ( ( ( ( 2.0
* B2 * ys + 2.0 * B2 * i0ssdtjwt1_idx_1 ) + Fz_idx_3 * rtP . EV . TrackWidth
[ 0 ] ) + Fz_idx_3 * rtP . EV . TrackWidth [ 1 ] ) + 2.0 * b_B3 * ys * rtP .
VehicleBody3DOFDualTrack_d ) + 2.0 * b_B3 * i0ssdtjwt1_idx_1 * rtP .
VehicleBody3DOFDualTrack_d ) - b_B3 * i0ssdtjwt1_idx_1 * rtP . EV .
TrackWidth [ 0 ] ) - b_B3 * i0ssdtjwt1_idx_1 * rtP . EV . TrackWidth [ 1 ] )
/ ( ( ys + i0ssdtjwt1_idx_1 ) * 2.0 * ( rtP . EV . TrackWidth [ 0 ] + rtP .
EV . TrackWidth [ 1 ] ) ) ) * 2.0 ; if ( Fz_idx_0 < 0.0 ) { Fz_idx_0 = 0.0 ;
} Fz_idx_1 = - ( ( ( ( ( ( ( ( 2.0 * B2 * ys + 2.0 * B2 * i0ssdtjwt1_idx_1 )
- Fz_idx_3 * rtP . EV . TrackWidth [ 0 ] ) - Fz_idx_3 * rtP . EV . TrackWidth
[ 1 ] ) + 2.0 * b_B3 * ys * rtP . VehicleBody3DOFDualTrack_d ) + 2.0 * b_B3 *
i0ssdtjwt1_idx_1 * rtP . VehicleBody3DOFDualTrack_d ) + b_B3 *
i0ssdtjwt1_idx_1 * rtP . EV . TrackWidth [ 0 ] ) + b_B3 * i0ssdtjwt1_idx_1 *
rtP . EV . TrackWidth [ 1 ] ) / ( ( ys + i0ssdtjwt1_idx_1 ) * 2.0 * ( rtP .
EV . TrackWidth [ 0 ] + rtP . EV . TrackWidth [ 1 ] ) ) ) * 2.0 ; if (
Fz_idx_1 < 0.0 ) { Fz_idx_1 = 0.0 ; } i0ssdtjwt1_idx_2 = - ( - ( ( ( ( ( ( (
2.0 * B2 * ys + 2.0 * B2 * i0ssdtjwt1_idx_1 ) - Fz_idx_3 * rtP . EV .
TrackWidth [ 0 ] ) - Fz_idx_3 * rtP . EV . TrackWidth [ 1 ] ) + 2.0 * b_B3 *
ys * rtP . VehicleBody3DOFDualTrack_d ) + 2.0 * b_B3 * i0ssdtjwt1_idx_1 * rtP
. VehicleBody3DOFDualTrack_d ) - b_B3 * ys * rtP . EV . TrackWidth [ 0 ] ) -
b_B3 * ys * rtP . EV . TrackWidth [ 1 ] ) / ( ( ys + i0ssdtjwt1_idx_1 ) * 2.0
* ( rtP . EV . TrackWidth [ 0 ] + rtP . EV . TrackWidth [ 1 ] ) ) ) * 2.0 ;
if ( i0ssdtjwt1_idx_2 < 0.0 ) { i0ssdtjwt1_idx_2 = 0.0 ; } Fz_idx_3 = - ( ( (
( ( ( ( ( 2.0 * B2 * ys + 2.0 * B2 * i0ssdtjwt1_idx_1 ) + Fz_idx_3 * rtP . EV
. TrackWidth [ 0 ] ) + Fz_idx_3 * rtP . EV . TrackWidth [ 1 ] ) + 2.0 * b_B3
* ys * rtP . VehicleBody3DOFDualTrack_d ) + 2.0 * b_B3 * i0ssdtjwt1_idx_1 *
rtP . VehicleBody3DOFDualTrack_d ) + b_B3 * ys * rtP . EV . TrackWidth [ 0 ]
) + b_B3 * ys * rtP . EV . TrackWidth [ 1 ] ) / ( ( ys + i0ssdtjwt1_idx_1 ) *
2.0 * ( rtP . EV . TrackWidth [ 0 ] + rtP . EV . TrackWidth [ 1 ] ) ) ) * 2.0
; if ( Fz_idx_3 < 0.0 ) { Fz_idx_3 = 0.0 ; } } i0ssdtjwt1_idx_1 = Fz_idx_0 /
rtP . EV . NumberOfWheelsPerAxle / 2.0 * 2.0 ; ju2qheifh2 = Fz_idx_1 / rtP .
EV . NumberOfWheelsPerAxle / 2.0 * 2.0 ; o3n3jqkno2 = i0ssdtjwt1_idx_2 / rtP
. EV . NumberOfWheelsPerAxle / 2.0 * 2.0 ; i0ssdtjwt1_idx_2 = Fz_idx_3 / rtP
. EV . NumberOfWheelsPerAxle / 2.0 * 2.0 ; rtB . j1nkqcwf2g [ 0 ] = xddot ;
rtB . j1nkqcwf2g [ 1 ] = yddot ; rtB . j1nkqcwf2g [ 2 ] = rtB . jblxcxbmeg [
3 ] ; rtB . j1nkqcwf2g [ 3 ] = B1 ; rtB . hvq2sqpr1r = xddot - rtB .
i0t2sz5yu2 ; B1 = 0.10197162129779282 * rtB . hvq2sqpr1r ; rtB . bqdwgkvkvj =
rtB . jblxcxbmeg [ 0 ] * rtB . jblxcxbmeg [ 3 ] ; rtB . bbjoiy4rko = yddot +
rtB . bqdwgkvkvj ; rtB . cp1tr53ril = 0.10197162129779282 * rtB . bbjoiy4rko
; rtB . pdkpeabqzw [ 0 ] = rtP . ZeroOrderHold1_Gain * B1 ; rtB . pdkpeabqzw
[ 1 ] = rtP . ZeroOrderHold1_Gain * rtB . cp1tr53ril ; rtB . pdkpeabqzw [ 2 ]
= rtP . ZeroOrderHold1_Gain * rtP . Constant1_Value_c1g2ofuupz ; rtB .
ady40l2b2i [ 0 ] = rtP . ZeroOrderHold_Gain * rtP .
Constant4_Value_k0imludnhg ; rtB . ady40l2b2i [ 1 ] = rtP .
ZeroOrderHold_Gain * rtP . Constant5_Value_dhotn1uupu ; rtB . ady40l2b2i [ 2
] = rtP . ZeroOrderHold_Gain * rtB . jblxcxbmeg [ 3 ] ; rtB . nyegssewho =
rtB . ady40l2b2i [ 1 ] * rtB . g4ozzpxilu [ 2 ] ; rtB . enny3fpzvj = rtB .
g4ozzpxilu [ 0 ] * rtB . ady40l2b2i [ 2 ] ; rtB . itetgznxhu = rtB .
ady40l2b2i [ 0 ] * rtB . g4ozzpxilu [ 1 ] ; rtB . pafgvysl2t = rtB .
g4ozzpxilu [ 1 ] * rtB . ady40l2b2i [ 2 ] ; rtB . oom5rztyu1 = rtB .
ady40l2b2i [ 0 ] * rtB . g4ozzpxilu [ 2 ] ; rtB . b00jmpsrde = rtB .
g4ozzpxilu [ 0 ] * rtB . ady40l2b2i [ 1 ] ; rtB . lfa0ahayfn [ 0 ] = rtB .
nyegssewho - rtB . pafgvysl2t ; rtB . lfa0ahayfn [ 1 ] = rtB . enny3fpzvj -
rtB . oom5rztyu1 ; rtB . lfa0ahayfn [ 2 ] = rtB . itetgznxhu - rtB .
b00jmpsrde ; rtB . ak4t1jni5n = rtB . ady40l2b2i [ 1 ] * rtB . lfa0ahayfn [ 2
] ; rtB . iiub2jjbsp = rtB . lfa0ahayfn [ 0 ] * rtB . ady40l2b2i [ 2 ] ; rtB
. iouy0scb2h = rtB . ady40l2b2i [ 0 ] * rtB . lfa0ahayfn [ 1 ] ; rtB .
ly1vg5f0r4 = rtB . lfa0ahayfn [ 1 ] * rtB . ady40l2b2i [ 2 ] ; rtB .
a5cwffagc3 = rtB . ady40l2b2i [ 0 ] * rtB . lfa0ahayfn [ 2 ] ; rtB .
ijtaj2u1g1 = rtB . lfa0ahayfn [ 0 ] * rtB . ady40l2b2i [ 1 ] ; rtB .
bzzwf1ecty [ 0 ] = rtB . ak4t1jni5n - rtB . ly1vg5f0r4 ; rtB . bzzwf1ecty [ 1
] = rtB . iiub2jjbsp - rtB . a5cwffagc3 ; rtB . bzzwf1ecty [ 2 ] = rtB .
iouy0scb2h - rtB . ijtaj2u1g1 ; rtB . paembovz2w [ 0 ] = rtP .
ZeroOrderHold3_Gain * xddot ; rtB . paembovz2w [ 1 ] = rtP .
ZeroOrderHold3_Gain * yddot ; rtB . paembovz2w [ 2 ] = rtP .
ZeroOrderHold3_Gain * rtP . Constant3_Value_jfykirfye0 ; rtB . bfyarqnluy =
rtB . paembovz2w [ 1 ] * rtB . g4ozzpxilu [ 2 ] ; rtB . iiwttvv404 = rtB .
g4ozzpxilu [ 0 ] * rtB . paembovz2w [ 2 ] ; rtB . ezqqqfgpce = rtB .
paembovz2w [ 0 ] * rtB . g4ozzpxilu [ 1 ] ; rtB . owhho2exe3 = rtB .
g4ozzpxilu [ 1 ] * rtB . paembovz2w [ 2 ] ; rtB . ddrbja50tp = rtB .
paembovz2w [ 0 ] * rtB . g4ozzpxilu [ 2 ] ; rtB . bbdudxzqnc = rtB .
g4ozzpxilu [ 0 ] * rtB . paembovz2w [ 1 ] ; rtB . b51qsa2wyx [ 0 ] = rtB .
bfyarqnluy - rtB . owhho2exe3 ; rtB . b51qsa2wyx [ 1 ] = rtB . iiwttvv404 -
rtB . ddrbja50tp ; rtB . b51qsa2wyx [ 2 ] = rtB . ezqqqfgpce - rtB .
bbdudxzqnc ; rtB . lo0hy2u115 [ 0 ] = ( ( rtB . pdkpeabqzw [ 0 ] - rtB .
pvktgoo0vx [ 0 ] ) + rtB . bzzwf1ecty [ 0 ] ) + rtB . b51qsa2wyx [ 0 ] ; rtB
. lo0hy2u115 [ 1 ] = ( ( rtB . pdkpeabqzw [ 1 ] - rtB . pvktgoo0vx [ 1 ] ) +
rtB . bzzwf1ecty [ 1 ] ) + rtB . b51qsa2wyx [ 1 ] ; rtB . lo0hy2u115 [ 2 ] =
( ( rtB . pdkpeabqzw [ 2 ] - rtB . pvktgoo0vx [ 2 ] ) + rtB . bzzwf1ecty [ 2
] ) + rtB . b51qsa2wyx [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { rtB .
a1c52jyyas [ i ] = 0.0 ; rtB . a1c52jyyas [ i ] += rtP .
ThreeaxisInertialMeasurementUnit_a_sf_cc [ i ] * rtB . lo0hy2u115 [ 0 ] ; rtB
. a1c52jyyas [ i ] += rtP . ThreeaxisInertialMeasurementUnit_a_sf_cc [ i + 3
] * rtB . lo0hy2u115 [ 1 ] ; rtB . a1c52jyyas [ i ] += rtP .
ThreeaxisInertialMeasurementUnit_a_sf_cc [ i + 6 ] * rtB . lo0hy2u115 [ 2 ] ;
rtB . f52wachjwu [ i ] = rtB . a1c52jyyas [ i ] + rtP .
ThreeaxisInertialMeasurementUnit_a_bias [ i ] ; } if ( ssIsSampleHit ( rtS ,
2 , 0 ) ) { rtB . f3cjgvrs4t [ 0 ] = rtB . ktw2bfmndg [ 0 ] * rtDW .
if2nkbrvo2 [ 0 ] ; rtB . f3cjgvrs4t [ 1 ] = rtB . ktw2bfmndg [ 1 ] * rtDW .
if2nkbrvo2 [ 1 ] ; rtB . f3cjgvrs4t [ 2 ] = rtB . ktw2bfmndg [ 2 ] * rtDW .
if2nkbrvo2 [ 2 ] ; } if ( rtP . Constant_Value_m02bm4pqxl >= rtP .
Switch_Threshold_hdzzjqtwqi ) { ys = rtB . il0etatu3t [ 0 ] ; } else { ys =
rtB . f52wachjwu [ 0 ] ; } rtB . fhs05iqj03 [ 0 ] = ys + rtB . f3cjgvrs4t [ 0
] ; if ( rtP . Constant_Value_m02bm4pqxl >= rtP . Switch_Threshold_hdzzjqtwqi
) { ys = rtB . il0etatu3t [ 1 ] ; } else { ys = rtB . f52wachjwu [ 1 ] ; }
rtB . fhs05iqj03 [ 1 ] = ys + rtB . f3cjgvrs4t [ 1 ] ; if ( rtP .
Constant_Value_m02bm4pqxl >= rtP . Switch_Threshold_hdzzjqtwqi ) { ys = rtB .
il0etatu3t [ 2 ] ; } else { ys = rtB . f52wachjwu [ 2 ] ; } rtB . fhs05iqj03
[ 2 ] = ys + rtB . f3cjgvrs4t [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW
. h1gscmcbjv [ 0 ] = rtB . fhs05iqj03 [ 0 ] >= rtP . Saturation_UpperSat [ 0
] ? 1 : rtB . fhs05iqj03 [ 0 ] > rtP . Saturation_LowerSat [ 0 ] ? 0 : - 1 ;
rtDW . h1gscmcbjv [ 1 ] = rtB . fhs05iqj03 [ 1 ] >= rtP . Saturation_UpperSat
[ 1 ] ? 1 : rtB . fhs05iqj03 [ 1 ] > rtP . Saturation_LowerSat [ 1 ] ? 0 : -
1 ; rtDW . h1gscmcbjv [ 2 ] = rtB . fhs05iqj03 [ 2 ] >= rtP .
Saturation_UpperSat [ 2 ] ? 1 : rtB . fhs05iqj03 [ 2 ] > rtP .
Saturation_LowerSat [ 2 ] ? 0 : - 1 ; } rtB . bbmop3k4xy [ 0 ] = rtDW .
h1gscmcbjv [ 0 ] == 1 ? rtP . Saturation_UpperSat [ 0 ] : rtDW . h1gscmcbjv [
0 ] == - 1 ? rtP . Saturation_LowerSat [ 0 ] : rtB . fhs05iqj03 [ 0 ] ; rtB .
bbmop3k4xy [ 1 ] = rtDW . h1gscmcbjv [ 1 ] == 1 ? rtP . Saturation_UpperSat [
1 ] : rtDW . h1gscmcbjv [ 1 ] == - 1 ? rtP . Saturation_LowerSat [ 1 ] : rtB
. fhs05iqj03 [ 1 ] ; rtB . bbmop3k4xy [ 2 ] = rtDW . h1gscmcbjv [ 2 ] == 1 ?
rtP . Saturation_UpperSat [ 2 ] : rtDW . h1gscmcbjv [ 2 ] == - 1 ? rtP .
Saturation_LowerSat [ 2 ] : rtB . fhs05iqj03 [ 2 ] ; rtB . htcdef2vji = rtX .
klntojgsev ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { B2 = rtB . eucfvib3zj [ 2
] ; if ( rtB . eucfvib3zj [ 2 ] < 0.0 ) { B2 = - rtB . eucfvib3zj [ 2 ] ; }
if ( B2 < rtDW . ljrsfho0wx ) { rtDW . paxgd2l2yo = B2 ; rtDW . ec3u5hsjjx =
rtB . htcdef2vji ; } if ( ( B2 >= rtDW . ljrsfho0wx ) && ( ! rtDW .
cxgys2dwdy ) ) { XB [ 0 ] = rtDW . paxgd2l2yo ; XB [ 1 ] = B2 ; VB [ 0 ] =
rtDW . ec3u5hsjjx ; VB [ 1 ] = rtB . htcdef2vji ; rtDW . c435izcp3j =
kwgfc1chu0 ( XB , VB , rtDW . ljrsfho0wx ) ; rtDW . cxgys2dwdy = true ; } if
( B2 < rtDW . ljrsfho0wx + 6.2831853071795862 ) { rtDW . ebj5snmy5k = B2 ;
rtDW . dzezmfjqg2 = rtB . htcdef2vji ; } if ( ( B2 >= rtDW . ljrsfho0wx +
6.2831853071795862 ) && ( ! rtDW . bmqmtm0dew ) ) { XB [ 0 ] = rtDW .
ebj5snmy5k ; XB [ 1 ] = B2 ; VB [ 0 ] = rtDW . dzezmfjqg2 ; VB [ 1 ] = rtB .
htcdef2vji ; rtDW . ph55yq4rg2 = ( kwgfc1chu0 ( XB , VB , rtDW . ljrsfho0wx +
6.2831853071795862 ) - rtDW . c435izcp3j ) / 3.1415926535897931 ; rtDW .
plhevtqgqm = ( kwgfc1chu0 ( XB , VB , rtDW . ljrsfho0wx + 6.2831853071795862
) - rtDW . c435izcp3j ) / rtB . jblxcxbmeg [ 0 ] ; rtDW . bmqmtm0dew = true ;
} rtB . pzf3urynfg = rtDW . ph55yq4rg2 ; rtB . h2zbyr3cyp = rtDW . plhevtqgqm
; } rtB . ihxn2ccgzc [ 0 ] = rtP . ZeroOrderHold_Gain_llrbulmr51 * rtP .
Constant4_Value_k0imludnhg ; rtB . ihxn2ccgzc [ 1 ] = rtP .
ZeroOrderHold_Gain_llrbulmr51 * rtP . Constant5_Value_dhotn1uupu ; rtB .
ihxn2ccgzc [ 2 ] = rtP . ZeroOrderHold_Gain_llrbulmr51 * rtB . jblxcxbmeg [ 3
] ; rtB . mnz4wgiqmc [ 0 ] = rtP . ZeroOrderHold1_Gain_glpx1ehscp * B1 ; rtB
. mnz4wgiqmc [ 1 ] = rtP . ZeroOrderHold1_Gain_glpx1ehscp * rtB . cp1tr53ril
; rtB . mnz4wgiqmc [ 2 ] = rtP . ZeroOrderHold1_Gain_glpx1ehscp * rtP .
Constant1_Value_c1g2ofuupz ; for ( i = 0 ; i < 3 ; i ++ ) { rtB . m3cl00tirv
[ i ] = rtX . dmhixvg5dr [ i ] ; rtB . lyoxiq4v2n [ i ] = rtX . dmhixvg5dr [
i + 3 ] ; rtB . f4pijre3pd [ i ] = 0.0 ; rtB . f4pijre3pd [ i ] += rtP .
ThreeaxisInertialMeasurementUnit_g_sf_cc [ i ] * rtB . ihxn2ccgzc [ 0 ] ; rtB
. f4pijre3pd [ i ] += rtP . ThreeaxisInertialMeasurementUnit_g_sf_cc [ i + 3
] * rtB . ihxn2ccgzc [ 1 ] ; rtB . f4pijre3pd [ i ] += rtP .
ThreeaxisInertialMeasurementUnit_g_sf_cc [ i + 6 ] * rtB . ihxn2ccgzc [ 2 ] ;
rtB . lc5tzsaajy [ i ] = rtB . mnz4wgiqmc [ i ] * rtP .
ThreeaxisInertialMeasurementUnit_g_sens [ i ] ; rtB . kxjjc5bdzp [ i ] = (
rtB . f4pijre3pd [ i ] + rtP . ThreeaxisInertialMeasurementUnit_g_bias [ i ]
) + rtB . lc5tzsaajy [ i ] ; if ( rtP . Constant_Value_ou5jit20w0 >= rtP .
Switch_Threshold_drowwnc0fs ) { rtB . kh10sd24bc [ i ] = rtB . m3cl00tirv [ i
] ; } else { rtB . kh10sd24bc [ i ] = rtB . kxjjc5bdzp [ i ] ; } } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . j25w0xwyrm [ 0 ] = rtB . btjm0q2rtx [
0 ] * rtDW . jitwfcjega [ 0 ] ; rtB . j25w0xwyrm [ 1 ] = rtB . btjm0q2rtx [ 1
] * rtDW . jitwfcjega [ 1 ] ; rtB . j25w0xwyrm [ 2 ] = rtB . btjm0q2rtx [ 2 ]
* rtDW . jitwfcjega [ 2 ] ; } rtB . aip03mn2dd [ 0 ] = rtB . kh10sd24bc [ 0 ]
+ rtB . j25w0xwyrm [ 0 ] ; rtB . aip03mn2dd [ 1 ] = rtB . kh10sd24bc [ 1 ] +
rtB . j25w0xwyrm [ 1 ] ; rtB . aip03mn2dd [ 2 ] = rtB . kh10sd24bc [ 2 ] +
rtB . j25w0xwyrm [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . anbsxboymw
[ 0 ] = rtB . aip03mn2dd [ 0 ] >= rtP . Saturation_UpperSat_ojovnnjyll [ 0 ]
? 1 : rtB . aip03mn2dd [ 0 ] > rtP . Saturation_LowerSat_jjanzakcpx [ 0 ] ? 0
: - 1 ; rtDW . anbsxboymw [ 1 ] = rtB . aip03mn2dd [ 1 ] >= rtP .
Saturation_UpperSat_ojovnnjyll [ 1 ] ? 1 : rtB . aip03mn2dd [ 1 ] > rtP .
Saturation_LowerSat_jjanzakcpx [ 1 ] ? 0 : - 1 ; rtDW . anbsxboymw [ 2 ] =
rtB . aip03mn2dd [ 2 ] >= rtP . Saturation_UpperSat_ojovnnjyll [ 2 ] ? 1 :
rtB . aip03mn2dd [ 2 ] > rtP . Saturation_LowerSat_jjanzakcpx [ 2 ] ? 0 : - 1
; } rtB . j1bh4yi3by [ 0 ] = rtDW . anbsxboymw [ 0 ] == 1 ? rtP .
Saturation_UpperSat_ojovnnjyll [ 0 ] : rtDW . anbsxboymw [ 0 ] == - 1 ? rtP .
Saturation_LowerSat_jjanzakcpx [ 0 ] : rtB . aip03mn2dd [ 0 ] ; rtB .
j1bh4yi3by [ 1 ] = rtDW . anbsxboymw [ 1 ] == 1 ? rtP .
Saturation_UpperSat_ojovnnjyll [ 1 ] : rtDW . anbsxboymw [ 1 ] == - 1 ? rtP .
Saturation_LowerSat_jjanzakcpx [ 1 ] : rtB . aip03mn2dd [ 1 ] ; rtB .
j1bh4yi3by [ 2 ] = rtDW . anbsxboymw [ 2 ] == 1 ? rtP .
Saturation_UpperSat_ojovnnjyll [ 2 ] : rtDW . anbsxboymw [ 2 ] == - 1 ? rtP .
Saturation_LowerSat_jjanzakcpx [ 2 ] : rtB . aip03mn2dd [ 2 ] ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( rtB . i3r2qvsck4 [ 1 ] < rtDW .
b2jkiu5223 ) { rtDW . bifdt1dwkt = rtB . i3r2qvsck4 [ 1 ] ; } if ( ( rtB .
i3r2qvsck4 [ 1 ] >= rtDW . b2jkiu5223 ) && ( rtB . i3r2qvsck4 [ 1 ] < rtDW .
b2jkiu5223 + 100.0 ) ) { rtDW . avustsyiau = rtB . i3r2qvsck4 [ 1 ] ; if (
rtB . i3r2qvsck4 [ 0 ] > rtDW . hu0lal024o ) { rtDW . hu0lal024o = rtB .
i3r2qvsck4 [ 0 ] ; } } if ( ( rtB . i3r2qvsck4 [ 1 ] >= rtDW . b2jkiu5223 +
100.0 ) && ( ! rtDW . hocsygpcrl ) ) { rtDW . bw5qeffbbw = ( rtDW .
avustsyiau - rtDW . bifdt1dwkt ) / rtB . jblxcxbmeg [ 0 ] ; rtDW . hocsygpcrl
= true ; } rtB . nuo2mgk13f = rtDW . bw5qeffbbw ; rtB . cam5pwn2wz = rtDW .
hu0lal024o ; } rtB . a4mnjoeoqc [ 0 ] = rtB . mizmyi1de5 ; rtB . a4mnjoeoqc [
1 ] = rtB . osnlaugfya ; rtB . a4mnjoeoqc [ 2 ] = rtB . nlbjicxf4k ; rtB .
a4mnjoeoqc [ 3 ] = rtB . on55mw5phh ; rtB . mnxndmxld0 = rtB . a4mnjoeoqc [ 0
] + rtB . a4mnjoeoqc [ 1 ] ; rtB . gzywhfis5h = rtP . Gain9_Gain * rtB .
mnxndmxld0 ; rtB . guad3bm5gw = rtP . WHL . LoadedRadius * rtB . gzywhfis5h ;
rtB . chyfaeo2yo = ( rtP . EV . RearAxlePositionfromCG * rtP . EV . Mass / (
rtP . EV . CornerStiffFront * rtP . EV . WheelBase ) - rtP . EV .
FrontAxlePositionfromCG * rtP . EV . Mass / ( rtP . EV . CornerStiffRear *
rtP . EV . WheelBase ) ) * ( rtB . guad3bm5gw * rtB . guad3bm5gw ) ; rtB .
iqubn5qffr = rtP . EV . WheelBase + rtB . chyfaeo2yo ; rtB . glpgxupphn = rtB
. guad3bm5gw / rtB . iqubn5qffr ; rtB . iudmjwlul4 = rtB . j1bh4yi3by [ 2 ] *
rtB . glpgxupphn ; rtB . gcb0w03ihj = rtP . Gain4_Gain * rtB . iudmjwlul4 ;
rtB . a2hgjiud0k = 0.0 ; rtB . a2hgjiud0k += rtP . TransferFcnFiltroVolante_C
[ 0 ] * rtX . kr5v2kihrz [ 0 ] ; rtB . a2hgjiud0k += rtP .
TransferFcnFiltroVolante_C [ 1 ] * rtX . kr5v2kihrz [ 1 ] ; rtB . fjyioa2tk1
= look1_binlxpw ( rtB . a2hgjiud0k , rtP . STEER . Volante , rtP . SENSOR .
SteerAvg , 12U ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtB .
fjyioa2tk1 > 0.0 ) { rtDW . fadx5rbkb5 = 1 ; } else if ( rtB . fjyioa2tk1 <
0.0 ) { rtDW . fadx5rbkb5 = - 1 ; } else { rtDW . fadx5rbkb5 = 0 ; } rtB .
opwc2ep2yl = ( real_T ) rtDW . fadx5rbkb5 * rtB . ozxsezzdp0 ; } rtB .
oc04ompsbk = rtB . opwc2ep2yl / rtB . guad3bm5gw ; if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . aurk3irgno = ( rtB . gcb0w03ihj >=
0.0 ) ; } rtB . ccovgenhbr = rtDW . aurk3irgno > 0 ? rtB . gcb0w03ihj : - rtB
. gcb0w03ihj ; if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . efxiqqkwdi = (
rtB . oc04ompsbk >= 0.0 ) ; } rtB . p0epkt2khf = rtDW . efxiqqkwdi > 0 ? rtB
. oc04ompsbk : - rtB . oc04ompsbk ; rtB . gd2e55z4sz = rtB . ccovgenhbr - rtB
. p0epkt2khf ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . hamjs1juhq = ( rtB .
gd2e55z4sz > rtP . Switch3_Threshold ) ; } if ( rtDW . hamjs1juhq ) { rtB .
bzw0mlxrof = rtB . oc04ompsbk ; } else { rtB . bzw0mlxrof = rtB . gcb0w03ihj
; } rtB . gcwgxti1gl = rtB . bzw0mlxrof - rtB . j1bh4yi3by [ 2 ] ; rtB .
mkjro5pgq0 = look1_binlxpw ( rtB . a2hgjiud0k , rtP . CTRL . Angles , rtP .
CTRL . P , 8U ) ; rtB . m2k1yz01ki = rtX . a2uhtc4qab ; rtB . mbnbhs0ixy =
rtB . gcwgxti1gl * rtB . mkjro5pgq0 + rtB . m2k1yz01ki ; rtB . jgoo3zfwzh =
rtP . PIDController1_P * rtB . gcwgxti1gl ; rtB . kmutfdps50 = rtX .
pxjrlp0doi ; if ( rtP . ManualSwitch1_CurrentSetting == 1 ) { rtB .
iyyn2fy2g4 = 0.0 ; } else { rtB . huahnozcox = rtB . jgoo3zfwzh + rtB .
kmutfdps50 ; rtB . iyyn2fy2g4 = rtB . huahnozcox ; } if (
ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . e2ochzlmai = ( rtB . iyyn2fy2g4 >=
0.0 ) ; } rtB . lsnzrwdtkp = rtDW . e2ochzlmai > 0 ? rtB . iyyn2fy2g4 : - rtB
. iyyn2fy2g4 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . ki4dwjzmsy = ( rtB .
iyyn2fy2g4 > rtP . Switch1_Threshold_hmxcklihzo ) ; } if ( rtDW . ki4dwjzmsy
) { rtB . b4gug11lub = rtB . lsnzrwdtkp ; } else { rtB . b4gug11lub = 0.0 ; }
if ( ssGetIsOkayToUpdateMode ( rtS ) ) { rtDW . ojhqn5nj5v = ( rtB .
iyyn2fy2g4 >= 0.0 ) ; } rtB . byz1ehz01l = rtDW . ojhqn5nj5v > 0 ? rtB .
iyyn2fy2g4 : - rtB . iyyn2fy2g4 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
ggqlzk0dih = ( rtB . iyyn2fy2g4 >= rtP . Switch2_Threshold_hgm2a54gp5 ) ; }
if ( rtDW . ggqlzk0dih ) { rtB . hrsz1jtc3z = 0.0 ; } else { rtB . hrsz1jtc3z
= rtB . byz1ehz01l ; } if ( ssGetLogOutput ( rtS ) ) { real_T u [ 2 ] ; u [ 0
] = ssGetTaskTime ( rtS , 0 ) ; ; u [ 1 ] = rtB . j1bh4yi3by [ 2 ] ;
rt_UpdateLogVar ( ( LogVar * ) rtDW . as5segj51q . LoggedData , u , 0 ) ; }
if ( ssGetLogOutput ( rtS ) ) { real_T u [ 2 ] ; u [ 0 ] = ssGetTaskTime (
rtS , 0 ) ; ; u [ 1 ] = rtB . hrsz1jtc3z ; rt_UpdateLogVar ( ( LogVar * )
rtDW . czc2ir0435 . LoggedData , u , 0 ) ; } rtB . lwho5ornvw = rtP .
Gain7_Gain * rtB . j1bh4yi3by [ 2 ] ; rtB . hooybd52iu = 0.0 ; rtB .
hooybd52iu += rtP . TransferFcnFiltroAPPS_C [ 0 ] * rtX . kkmmegedxf [ 0 ] ;
rtB . hooybd52iu += rtP . TransferFcnFiltroAPPS_C [ 1 ] * rtX . kkmmegedxf [
1 ] ; rtB . dkvwdz1glf = rtP . Gain6_Gain * rtB . hooybd52iu ; if ( ( rtB .
dkvwdz1glf >= 260.0 ) && ( rtB . dkvwdz1glf < 467.0 ) ) { ys = 1.162 * rtB .
dkvwdz1glf - 342.9 ; } else if ( ( rtB . dkvwdz1glf >= 467.0 ) && ( rtB .
dkvwdz1glf < 1065.0 ) ) { ys = 0.3344 * rtB . dkvwdz1glf + 43.8 ; } else if (
( rtB . dkvwdz1glf >= 1065.0 ) && ( rtB . dkvwdz1glf < 2253.0 ) ) { ys =
0.1684 * rtB . dkvwdz1glf + 220.7 ; } else if ( ( rtB . dkvwdz1glf >= 2253.0
) && ( rtB . dkvwdz1glf < 3211.0 ) ) { ys = 0.2087 * rtB . dkvwdz1glf + 129.9
; } else if ( ( rtB . dkvwdz1glf >= 3211.0 ) && ( rtB . dkvwdz1glf < 3720.0 )
) { ys = 0.6598 * rtB . dkvwdz1glf - 1319.0 ; } else { ys = 0.0 ; } rtB .
mr2w2zkuh2 = rtP . Gain5_Gain * ys ; rtB . muge10tpzh = rtX . ddoib4fzt3 ; if
( rtB . cttqks3f5r ) { rtB . blrtq4s0h2 = 0.0 ; } else { rtB . blrtq4s0h2 =
rtB . muge10tpzh ; } if ( rtB . blrtq4s0h2 > rtP .
Saturation_UpperSat_fidkza0lel ) { rtB . auuht2xqvc = rtP .
Saturation_UpperSat_fidkza0lel ; } else if ( rtB . blrtq4s0h2 < rtP .
Saturation_LowerSat_jfjibpft5h ) { rtB . auuht2xqvc = rtP .
Saturation_LowerSat_jfjibpft5h ; } else { rtB . auuht2xqvc = rtB . blrtq4s0h2
; } osjj2s24tk ( rtS , rtB . m4eybcvflx , rtB . auuht2xqvc , & rtB .
l1ngv2u4wj , & rtDW . l1ngv2u4wj ) ; rtB . iebn0yh0ie = rtP . AccelCmd_Gain *
rtB . l1ngv2u4wj . kj2hrwkm2p ; rtB . frpygu4ewl [ 0 ] = rtB . nr0yvvf3bw ;
rtB . frpygu4ewl [ 1 ] = rtB . eczxx3pwi3 ; rtB . f3hntfh4z2 = rtP . MTR .
MaxTorque * 0.01 * rtB . mr2w2zkuh2 ; rtB . kdz1kganxz = look1_binlxpw ( rtB
. a2hgjiud0k , rtP . CTRL . Angles , rtP . CTRL . I , 8U ) ; rtB . axobkcnxkz
= 57.295779513082323 * rtB . n5t3y1ndwd ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { { if ( rtDW . itvkmqwddr . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . itvkmqwddr . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . iebn0yh0ie + 0 ) ; } } { if ( rtDW . ow1hokcqe2 .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . ow1hokcqe2 .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . cp1tr53ril + 0 ) ;
} } } rtB . at0lcle2gj = 2.236936292054402 * rtB . jblxcxbmeg [ 0 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { if ( rtDW . lnsrt2x1pu . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . lnsrt2x1pu . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . at0lcle2gj + 0 ) ; } } } rtB .
obeirguqx1 = rtP . Gain_Gain * rtB . a4mnjoeoqc [ 2 ] ; rtB . h3dpuvmqqk =
9.5492965855137211 * rtB . obeirguqx1 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ { if ( rtDW . g041etusks . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . g041etusks . AQHandles , ssGetTaskTime ( rtS , 1 ) ,
( char * ) & rtB . h3dpuvmqqk + 0 ) ; } } { if ( rtDW . m0kvuadgsa .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( rtDW . m0kvuadgsa .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & rtB . axobkcnxkz + 0 ) ;
} } if ( rtDW . hishvdtdyh == 0 ) { rtDW . copyj3c0zm [ 0 ] = rtB .
ay4ux3o1eo [ 0 ] ; rtDW . copyj3c0zm [ 1 ] = rtB . ay4ux3o1eo [ 1 ] ; rtDW .
copyj3c0zm [ 2 ] = rtB . ay4ux3o1eo [ 2 ] ; } if ( rtDW . mmnksj2b0q == 0 ) {
rtDW . fomvocwhzx [ 0 ] = rtB . eucfvib3zj [ 0 ] ; rtDW . fomvocwhzx [ 1 ] =
rtB . eucfvib3zj [ 1 ] ; rtDW . fomvocwhzx [ 2 ] = rtB . eucfvib3zj [ 2 ] ; }
} if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . hishvdtdyh = 1 ; rtDW .
hishvdtdyh = 0 ; rtDW . mmnksj2b0q = 1 ; rtDW . mmnksj2b0q = 0 ; } rtB .
btptht1tk0 [ 0 ] = rtB . jblxcxbmeg [ 0 ] * muDoubleScalarCos ( rtB .
jblxcxbmeg [ 2 ] ) - rtB . jblxcxbmeg [ 1 ] * muDoubleScalarSin ( rtB .
jblxcxbmeg [ 2 ] ) ; rtB . btptht1tk0 [ 1 ] = rtB . jblxcxbmeg [ 0 ] *
muDoubleScalarSin ( rtB . jblxcxbmeg [ 2 ] ) + rtB . jblxcxbmeg [ 1 ] *
muDoubleScalarCos ( rtB . jblxcxbmeg [ 2 ] ) ; xddot = rtB . okojbmod0o - rtB
. orqox2gjfp [ 1 ] * rtB . jblxcxbmeg [ 3 ] ; yddot = rtB . orqox2gjfp [ 0 ]
* rtB . jblxcxbmeg [ 3 ] - rtB . mco3ns0lny ; B1 = rtB . ezvh0rk4nc - rtB .
o2dpkdu3fe ; for ( i = 0 ; i < 3 ; i ++ ) { mnhgivn0jt [ i ] = rtB .
bj3lssycrr [ i + 6 ] * B1 + ( rtB . bj3lssycrr [ i + 3 ] * yddot + rtB .
bj3lssycrr [ i ] * xddot ) ; } rtB . ah1c4aiwzh [ 0 ] = rtB . btptht1tk0 [ 0
] + mnhgivn0jt [ 0 ] ; rtB . ah1c4aiwzh [ 1 ] = rtB . btptht1tk0 [ 1 ] +
mnhgivn0jt [ 1 ] ; rtB . ah1c4aiwzh [ 2 ] = rtP . Constant8_Value_kfoe35jn3i
+ mnhgivn0jt [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW .
jun1bqxvdu == 0 ) { rtDW . n0qtkktk4b [ 0 ] = rtB . ah1c4aiwzh [ 0 ] ; rtDW .
n0qtkktk4b [ 1 ] = rtB . ah1c4aiwzh [ 1 ] ; rtDW . n0qtkktk4b [ 2 ] = rtB .
ah1c4aiwzh [ 2 ] ; } if ( rtDW . h5vcx1hl24 == 0 ) { rtDW . iss5bo4bt1 [ 0 ]
= rtB . op44qlqeyu [ 0 ] ; rtDW . iss5bo4bt1 [ 1 ] = rtB . op44qlqeyu [ 1 ] ;
rtDW . iss5bo4bt1 [ 2 ] = rtB . op44qlqeyu [ 2 ] ; rtDW . iss5bo4bt1 [ 3 ] =
rtB . op44qlqeyu [ 3 ] ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW .
jun1bqxvdu = 1 ; rtDW . jun1bqxvdu = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 )
&& ( rtDW . jjoe3tarlt == 0 ) ) { rtDW . hwbnwagtqg [ 0 ] = rtP .
Constant_Value ; rtDW . hwbnwagtqg [ 1 ] = rtP . Constant1_Value ; rtDW .
hwbnwagtqg [ 2 ] = rtP . Constant2_Value ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { rtDW . h5vcx1hl24 = 1 ; rtDW . h5vcx1hl24 = 0 ; rtDW . jjoe3tarlt = 1 ;
rtDW . jjoe3tarlt = 0 ; } rtB . lmk40ohxl3 = rtX . ogw3fpytzv ; rtB .
bbo0yescg2 = rtB . f3hntfh4z2 - rtB . lmk40ohxl3 ; rtB . ka2fgmunz2 = rtB .
bbo0yescg2 * rtP . ElectronicThrottleActuatorDynamics_wc ; B1 =
look1_binlcapw ( rtB . obeirguqx1 , rtP . MaxTorqueLimit_bp01Data , rtP .
MaxTorqueLimit_tableData , 14U ) ; rtB . aaiavjw5hm = rtX . ey4qfao5lu ; rtB
. aweasameoe = 1.0 / rtP . MappedLeftMotor_Tc * rtB . aaiavjw5hm ; rtB .
dxqsu20edf = 1.0 / B1 * rtB . aweasameoe ; rtB . jndyofuu4h = B1 *
look1_binlcpw ( rtB . dxqsu20edf , rtP . Interpolatedzerocrossing_bp01Data ,
rtP . Interpolatedzerocrossing_tableData , 1U ) ; rtB . cezkuwumms = rtP .
Gain1_Gain * rtB . jndyofuu4h ; rtB . ljrxrwugmw = rtB . cezkuwumms - rtB .
nr0yvvf3bw ; rtB . kxxvpaqn2a = rtB . ljrxrwugmw * rtP . EngineResponse_wc ;
rtB . krmgelrbzy = rtP . Gain3_Gain * rtB . a4mnjoeoqc [ 3 ] ; B1 =
look1_binlcapw ( rtB . krmgelrbzy , rtP . MaxTorqueLimit_bp01Data_j3bf1kzkep
, rtP . MaxTorqueLimit_tableData_m1dajuzjrc , 14U ) ; rtB . gin4uzsi2m = rtX
. kf1ocexm5v ; rtB . pozhgj5ix4 = 1.0 / rtP . MappedRightMotor_Tc * rtB .
gin4uzsi2m ; rtB . d3srggvawd = 1.0 / B1 * rtB . pozhgj5ix4 ; rtB .
adhennr231 = B1 * look1_binlcpw ( rtB . d3srggvawd , rtP .
Interpolatedzerocrossing_bp01Data_mwkxwysuer , rtP .
Interpolatedzerocrossing_tableData_mniicvlrw2 , 1U ) ; rtB . olc1lmrrhe = rtP
. Gain2_Gain_iyrcycllcs * rtB . adhennr231 ; rtB . ewppic2zbk = rtB .
olc1lmrrhe - rtB . eczxx3pwi3 ; rtB . f2fy5jjhga = rtB . ewppic2zbk * rtP .
EngineResponse1_wc ; rtB . khm1mymbsl = rtB . lmk40ohxl3 - rtB . hrsz1jtc3z ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . aae2rkk5zx = rtB . khm1mymbsl >=
rtP . Saturation_UpperSat_kq4nfxdnia ? 1 : rtB . khm1mymbsl > rtP .
Saturation_LowerSat_fe4nmgk5ze ? 0 : - 1 ; } rtB . ifzfndv4pn = rtDW .
aae2rkk5zx == 1 ? rtP . Saturation_UpperSat_kq4nfxdnia : rtDW . aae2rkk5zx ==
- 1 ? rtP . Saturation_LowerSat_fe4nmgk5ze : rtB . khm1mymbsl ; rtB .
fvklswfmdc = rtB . ifzfndv4pn - rtB . aweasameoe ; rtB . jwoxguc42j = rtB .
lmk40ohxl3 - rtB . b4gug11lub ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
llwxvtrg40 = rtB . jwoxguc42j >= rtP . Saturation1_UpperSat ? 1 : rtB .
jwoxguc42j > rtP . Saturation1_LowerSat ? 0 : - 1 ; } rtB . amjaof1u4h = rtDW
. llwxvtrg40 == 1 ? rtP . Saturation1_UpperSat : rtDW . llwxvtrg40 == - 1 ?
rtP . Saturation1_LowerSat : rtB . jwoxguc42j ; rtB . cciox55klk = rtB .
amjaof1u4h - rtB . pozhgj5ix4 ; rtB . aa1i3dae21 = rtB . gcwgxti1gl * rtB .
kdz1kganxz ; rtB . n554izgqk5 = rtP . PIDController1_I * rtB . gcwgxti1gl ;
rtB . ljs20igqkh = look1_binlxpw ( rtB . iebn0yh0ie , rtP . SENSOR .
APPSAcionado , rtP . SENSOR . APPS1 , 5U ) ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { rtB . gw5a22y1wf = 1.0 / rtP . PredictiveDriver1_tauerr ; } rtB .
lfdm23fwj4 = rtX . cehthaubuh ; if ( rtB . goqumcrvhe ) { rtB . mffikfnqzd =
rtP . Zero_Value ; } else { rtB . oet0nupw1k = rtP . EV . InitialLongVel -
rtB . jblxcxbmeg [ 0 ] ; rtB . mffikfnqzd = rtB . oet0nupw1k ; } rtB .
n41fppahra = rtB . mffikfnqzd - rtB . lfdm23fwj4 ; rtB . hk0q4axsjn = rtB .
gw5a22y1wf * rtB . n41fppahra ; rtB . ppbfigd4hk [ 0 ] = rtB . knvlc3ltii ;
rtB . ppbfigd4hk [ 1 ] = rtB . ecnmk5xlda ; if ( ssIsSampleHit ( rtS , 1 , 0
) ) { rtB . gaqtx0qrsz [ 0 ] = rtDW . n2hvy13sko [ 0 ] ; rtB . gaqtx0qrsz [ 1
] = rtDW . n2hvy13sko [ 1 ] ; rtB . gaqtx0qrsz [ 2 ] = rtDW . n2hvy13sko [ 2
] ; rtB . gaqtx0qrsz [ 3 ] = rtDW . n2hvy13sko [ 3 ] ; } rtB . nqz4ndil0s [ 0
] = rtB . ppbfigd4hk [ 0 ] * rtB . ppbfigd4hk [ 0 ] ; rtB . nqz4ndil0s [ 1 ]
= rtB . ppbfigd4hk [ 1 ] * rtB . ppbfigd4hk [ 1 ] ; if ( rtB . ppbfigd4hk [ 0
] > rtB . gaqtx0qrsz [ 0 ] ) { rtB . jkwei5usbq [ 0 ] = rtB . ppbfigd4hk [ 0
] ; } else { rtB . jkwei5usbq [ 0 ] = rtB . gaqtx0qrsz [ 0 ] ; } if ( rtB .
ppbfigd4hk [ 1 ] > rtB . gaqtx0qrsz [ 1 ] ) { rtB . jkwei5usbq [ 1 ] = rtB .
ppbfigd4hk [ 1 ] ; } else { rtB . jkwei5usbq [ 1 ] = rtB . gaqtx0qrsz [ 1 ] ;
} if ( rtB . ppbfigd4hk [ 0 ] < rtB . gaqtx0qrsz [ 2 ] ) { rtB . jkwei5usbq [
2 ] = rtB . ppbfigd4hk [ 0 ] ; } else { rtB . jkwei5usbq [ 2 ] = rtB .
gaqtx0qrsz [ 2 ] ; } if ( rtB . ppbfigd4hk [ 1 ] < rtB . gaqtx0qrsz [ 3 ] ) {
rtB . jkwei5usbq [ 3 ] = rtB . ppbfigd4hk [ 1 ] ; } else { rtB . jkwei5usbq [
3 ] = rtB . gaqtx0qrsz [ 3 ] ; } rtB . kmol4owuqp = rtP .
PredictiveDriver1_Kp / rtP . PredictiveDriver1_vnom * rtB . lfdm23fwj4 ; tmp
= ssGetIsOkayToUpdateMode ( rtS ) ; if ( tmp ) { if ( rtX . dztonrd310 >= rtP
. Integrator1_UpperSat ) { if ( rtX . dztonrd310 != rtP .
Integrator1_UpperSat ) { rtX . dztonrd310 = rtP . Integrator1_UpperSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . pjruxozaqy = 3
; } else if ( rtX . dztonrd310 <= rtP . Integrator1_LowerSat ) { if ( rtX .
dztonrd310 != rtP . Integrator1_LowerSat ) { rtX . dztonrd310 = rtP .
Integrator1_LowerSat ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
rtDW . pjruxozaqy = 4 ; } else { if ( rtDW . pjruxozaqy != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtDW . pjruxozaqy = 0
; } rtB . fdy0s00am2 = rtX . dztonrd310 ; } else { rtB . fdy0s00am2 = rtX .
dztonrd310 ; } rtB . hwyepwzcge = ( ( rtB . ivx21ub2uh + rtB . kmol4owuqp ) +
rtB . fdy0s00am2 ) + rtB . fnxobboyf5 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . hurgr1gioy = rtB . hwyepwzcge >= rtP . uto1_UpperSat ? 1 : rtB .
hwyepwzcge > rtP . uto1_LowerSat ? 0 : - 1 ; } rtB . lmn1zfkkus = rtDW .
hurgr1gioy == 1 ? rtP . uto1_UpperSat : rtDW . hurgr1gioy == - 1 ? rtP .
uto1_LowerSat : rtB . hwyepwzcge ; if ( rtB . lmn1zfkkus > rtP . u1_UpperSat
) { rtB . mu2d4tzysj = rtP . u1_UpperSat ; } else if ( rtB . lmn1zfkkus < rtP
. u1_LowerSat ) { rtB . mu2d4tzysj = rtP . u1_LowerSat ; } else { rtB .
mu2d4tzysj = rtB . lmn1zfkkus ; } if ( rtB . mu2d4tzysj > rtP .
u1_UpperSat_mbuegf0x1j ) { rtB . e0eg2echuf = rtP . u1_UpperSat_mbuegf0x1j ;
} else if ( rtB . mu2d4tzysj < rtP . u1_LowerSat_guyrgk45lz ) { rtB .
e0eg2echuf = rtP . u1_LowerSat_guyrgk45lz ; } else { rtB . e0eg2echuf = rtB .
mu2d4tzysj ; } rtB . lmmqsk2uae = rtB . e0eg2echuf ; rtB . lyfzkfzyqo = rtB .
lmmqsk2uae - rtB . muge10tpzh ; rtB . h4bqvvotgx = rtB . lyfzkfzyqo * rtP .
ContLPF_wc ; if ( rtB . lmn1zfkkus > rtP . u0_UpperSat ) { rtB . j5nazvuckk =
rtP . u0_UpperSat ; } else if ( rtB . lmn1zfkkus < rtP . u0_LowerSat ) { rtB
. j5nazvuckk = rtP . u0_LowerSat ; } else { rtB . j5nazvuckk = rtB .
lmn1zfkkus ; } rtB . j1k1ltnmni = - rtB . j5nazvuckk ; rtB . ghj4bqrdbz = rtX
. efvbjs3y34 ; rtB . bl4db4jbzd = rtB . j1k1ltnmni - rtB . ghj4bqrdbz ; rtB .
mgcoykf3hl = rtB . bl4db4jbzd * rtP . ContLPF_wc_kgprcofxkm ; if ( rtB .
j3lllf3huv ) { ys = 0.0 ; } else { ys = rtB . ghj4bqrdbz ; } if ( ys > rtP .
Saturation_UpperSat_epfsxvlpi1 ) { end320ix4n = rtP .
Saturation_UpperSat_epfsxvlpi1 ; } else if ( ys < rtP .
Saturation_LowerSat_gezd2otg2p ) { end320ix4n = rtP .
Saturation_LowerSat_gezd2otg2p ; } else { end320ix4n = ys ; } osjj2s24tk (
rtS , rtB . fbjkyu0wck , end320ix4n , & rtB . e2qkfxuvdy , & rtDW .
e2qkfxuvdy ) ; rtB . d1jbjnkjny = rtB . lmn1zfkkus - rtB . hwyepwzcge ; rtB .
lxneab0zxp = rtP . PredictiveDriver1_Kaw * rtB . d1jbjnkjny ; rtB .
ie20muwjvx = rtP . PredictiveDriver1_Ki / rtP . PredictiveDriver1_vnom * rtB
. lfdm23fwj4 ; rtB . mm0bpljwv1 = rtB . ie20muwjvx + rtB . lxneab0zxp ; rtB .
bep4b34jnp = rtP . EV . InitialLongVel - rtB . jblxcxbmeg [ 0 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . nff32zxnkp [ 0 ] = rtDW . b1zu5y4c1e
[ 0 ] ; rtB . nff32zxnkp [ 1 ] = rtDW . b1zu5y4c1e [ 1 ] ; } rtB . ntueai12qw
= rtB . bep4b34jnp * rtB . bep4b34jnp ; if ( rtB . bep4b34jnp > rtB .
nff32zxnkp [ 0 ] ) { rtB . jw3hbd3t4s [ 0 ] = rtB . bep4b34jnp ; } else { rtB
. jw3hbd3t4s [ 0 ] = rtB . nff32zxnkp [ 0 ] ; } if ( rtB . bep4b34jnp < rtB .
nff32zxnkp [ 1 ] ) { rtB . jw3hbd3t4s [ 1 ] = rtB . bep4b34jnp ; } else { rtB
. jw3hbd3t4s [ 1 ] = rtB . nff32zxnkp [ 1 ] ; } rtB . hjke4nmuoj = ( (
muDoubleScalarAbs ( rtB . cp1tr53ril ) >= muDoubleScalarAbs ( rtP .
ConstantRadius_ay_max ) ) && ( rtP . ConstantRadius_ay_stop != 0.0 ) ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtB . hjke4nmuoj ) {
ssSetStopRequested ( rtS , 1 ) ; } if ( rtDW . bny0mcq4qa ) { rtDW .
bny0mcq4qa = false ; rtB . f55gvto5kw = rtP . IC_Value ; } else { rtB .
f55gvto5kw = rtP . Constant5_Value_c0krqxlzsa ; } } if ( ssIsSampleHit ( rtS
, 2 , 0 ) ) { rtB . kzxjlhnmel [ 0 ] = rtDW . n4s3ahy5yb [ 0 ] ; rtB .
kzxjlhnmel [ 1 ] = rtDW . n4s3ahy5yb [ 1 ] ; rtB . kzxjlhnmel [ 2 ] = rtDW .
n4s3ahy5yb [ 2 ] ; } if ( rtB . f55gvto5kw > rtP .
Switch_Threshold_olrv4yiiot ) { rtB . cff35i114u [ 2 ] = rtB . kzxjlhnmel [ 2
] ; rtB . cff35i114u [ 0 ] = rtB . kzxjlhnmel [ 0 ] ; } else { rtB .
cff35i114u [ 2 ] = rtB . eucfvib3zj [ 2 ] ; rtB . cff35i114u [ 0 ] = rtB .
i3r2qvsck4 [ 0 ] ; } rtB . fdjhwhcfgp [ 0 ] = rtB . i3r2qvsck4 [ 0 ] ; if (
rtB . f55gvto5kw > rtP . Switch_Threshold_olrv4yiiot ) { rtB . cff35i114u [ 1
] = rtB . kzxjlhnmel [ 1 ] ; } else { rtB . cff35i114u [ 1 ] = rtB .
i3r2qvsck4 [ 1 ] ; } rtB . fdjhwhcfgp [ 1 ] = rtB . i3r2qvsck4 [ 1 ] ; rtB .
fdjhwhcfgp [ 2 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW .
oztywmgwo0 = ( ssGetTaskTime ( rtS , 1 ) >= rtP . ReferenceGenerator_t_start
) ; } xdot = 2.0 * rtP . ThreeaxisInertialMeasurementUnit_z_a * rtP .
ThreeaxisInertialMeasurementUnit_w_a ; rtB . flzvxohler [ 0 ] = xdot * rtB .
meumugomqr [ 0 ] ; if ( rtP . Constant_Value_m02bm4pqxl >= rtP .
Switch1_Threshold_jcrfw5slcx ) { rtB . dupofgjkdl [ 0 ] = rtB . f52wachjwu [
0 ] ; } else { rtB . dupofgjkdl [ 0 ] = rtP . u_Value [ 0 ] ; } rtB .
pu0pgi33zq [ 0 ] = rtB . dupofgjkdl [ 0 ] - rtB . il0etatu3t [ 0 ] ; rtB .
flzvxohler [ 1 ] = xdot * rtB . meumugomqr [ 1 ] ; if ( rtP .
Constant_Value_m02bm4pqxl >= rtP . Switch1_Threshold_jcrfw5slcx ) { rtB .
dupofgjkdl [ 1 ] = rtB . f52wachjwu [ 1 ] ; } else { rtB . dupofgjkdl [ 1 ] =
rtP . u_Value [ 1 ] ; } rtB . pu0pgi33zq [ 1 ] = rtB . dupofgjkdl [ 1 ] - rtB
. il0etatu3t [ 1 ] ; rtB . flzvxohler [ 2 ] = xdot * rtB . meumugomqr [ 2 ] ;
if ( rtP . Constant_Value_m02bm4pqxl >= rtP . Switch1_Threshold_jcrfw5slcx )
{ rtB . dupofgjkdl [ 2 ] = rtB . f52wachjwu [ 2 ] ; } else { rtB . dupofgjkdl
[ 2 ] = rtP . u_Value [ 2 ] ; } rtB . pu0pgi33zq [ 2 ] = rtB . dupofgjkdl [ 2
] - rtB . il0etatu3t [ 2 ] ; xdot = rtP .
ThreeaxisInertialMeasurementUnit_w_a * rtP .
ThreeaxisInertialMeasurementUnit_w_a ; rtB . cygjwmbszv [ 0 ] = xdot * rtB .
pu0pgi33zq [ 0 ] ; rtB . jdpct03ihe [ 0 ] = rtB . cygjwmbszv [ 0 ] - rtB .
flzvxohler [ 0 ] ; rtB . cygjwmbszv [ 1 ] = xdot * rtB . pu0pgi33zq [ 1 ] ;
rtB . jdpct03ihe [ 1 ] = rtB . cygjwmbszv [ 1 ] - rtB . flzvxohler [ 1 ] ;
rtB . cygjwmbszv [ 2 ] = xdot * rtB . pu0pgi33zq [ 2 ] ; rtB . jdpct03ihe [ 2
] = rtB . cygjwmbszv [ 2 ] - rtB . flzvxohler [ 2 ] ; xdot = 2.0 * rtP .
ThreeaxisInertialMeasurementUnit_z_g * rtP .
ThreeaxisInertialMeasurementUnit_w_g ; rtB . lljut341ju [ 0 ] = xdot * rtB .
lyoxiq4v2n [ 0 ] ; if ( rtP . Constant_Value_ou5jit20w0 >= rtP .
Switch1_Threshold_mvgkfperj4 ) { rtB . ajlzkmiuas [ 0 ] = rtB . kxjjc5bdzp [
0 ] ; } else { rtB . ajlzkmiuas [ 0 ] = rtP . u_Value_lyklh2qhwj [ 0 ] ; }
rtB . ohxnjps2ji [ 0 ] = rtB . ajlzkmiuas [ 0 ] - rtB . m3cl00tirv [ 0 ] ;
rtB . lljut341ju [ 1 ] = xdot * rtB . lyoxiq4v2n [ 1 ] ; if ( rtP .
Constant_Value_ou5jit20w0 >= rtP . Switch1_Threshold_mvgkfperj4 ) { rtB .
ajlzkmiuas [ 1 ] = rtB . kxjjc5bdzp [ 1 ] ; } else { rtB . ajlzkmiuas [ 1 ] =
rtP . u_Value_lyklh2qhwj [ 1 ] ; } rtB . ohxnjps2ji [ 1 ] = rtB . ajlzkmiuas
[ 1 ] - rtB . m3cl00tirv [ 1 ] ; rtB . lljut341ju [ 2 ] = xdot * rtB .
lyoxiq4v2n [ 2 ] ; if ( rtP . Constant_Value_ou5jit20w0 >= rtP .
Switch1_Threshold_mvgkfperj4 ) { rtB . ajlzkmiuas [ 2 ] = rtB . kxjjc5bdzp [
2 ] ; } else { rtB . ajlzkmiuas [ 2 ] = rtP . u_Value_lyklh2qhwj [ 2 ] ; }
rtB . ohxnjps2ji [ 2 ] = rtB . ajlzkmiuas [ 2 ] - rtB . m3cl00tirv [ 2 ] ;
xdot = rtP . ThreeaxisInertialMeasurementUnit_w_g * rtP .
ThreeaxisInertialMeasurementUnit_w_g ; rtB . c1hrcypiut [ 0 ] = xdot * rtB .
ohxnjps2ji [ 0 ] ; rtB . jumo3hkdvn [ 0 ] = rtB . c1hrcypiut [ 0 ] - rtB .
lljut341ju [ 0 ] ; rtB . c1hrcypiut [ 1 ] = xdot * rtB . ohxnjps2ji [ 1 ] ;
rtB . jumo3hkdvn [ 1 ] = rtB . c1hrcypiut [ 1 ] - rtB . lljut341ju [ 1 ] ;
rtB . c1hrcypiut [ 2 ] = xdot * rtB . ohxnjps2ji [ 2 ] ; rtB . jumo3hkdvn [ 2
] = rtB . c1hrcypiut [ 2 ] - rtB . lljut341ju [ 2 ] ; rtB . mmccsrz4af = rtB
. eyli315csa . lniimqwaxy / rtB . eu2132pgmw ; rtB . kfcgjqq4cu = rtB .
eyli315csa . pfchf5chga + rtB . mmccsrz4af ; rtB . aamnzpdedd = rtB .
mizmyi1de5 * rtB . eu2132pgmw ; if ( ( rtB . aamnzpdedd >= - rtP .
LongitudinalWheelDiskBrake_VXLOW ) && ( rtB . aamnzpdedd <= rtP .
LongitudinalWheelDiskBrake_VXLOW ) ) { rtB . boklg5hjkm = 0.2 / ( 3.0 -
muDoubleScalarPower ( rtB . aamnzpdedd / 0.1 , 2.0 ) ) ; } else { rtB .
aj2c0ibubc = muDoubleScalarAbs ( rtB . aamnzpdedd ) ; rtB . boklg5hjkm = rtB
. aj2c0ibubc ; } rtB . catleqbg5e = rtB . boklg5hjkm / rtP . WHL .
RelaxationLength ; rtB . honpeimuaj = rtB . kfcgjqq4cu - rtB . or52k223hd ;
rtB . fiocnv2h1j = rtB . catleqbg5e * rtB . honpeimuaj ; rtB . emmuil4ouj =
rtB . poyrgpcj11 . lniimqwaxy / rtB . csqivoi424 ; rtB . btwaezglz2 = rtB .
poyrgpcj11 . pfchf5chga + rtB . emmuil4ouj ; rtB . pjotg11uvb = rtB .
osnlaugfya * rtB . csqivoi424 ; if ( ( rtB . pjotg11uvb >= - rtP .
LongitudinalWheelDiskBrake1_VXLOW ) && ( rtB . pjotg11uvb <= rtP .
LongitudinalWheelDiskBrake1_VXLOW ) ) { rtB . nn1sq2k4zb = 0.2 / ( 3.0 -
muDoubleScalarPower ( rtB . pjotg11uvb / 0.1 , 2.0 ) ) ; } else { rtB .
ggytg1k2zh = muDoubleScalarAbs ( rtB . pjotg11uvb ) ; rtB . nn1sq2k4zb = rtB
. ggytg1k2zh ; } rtB . bkbnzydkil = rtB . nn1sq2k4zb / rtP . WHL .
RelaxationLength ; rtB . ifn1zaq4jj = rtB . btwaezglz2 - rtB . npm2zr3upl ;
rtB . bnbhfm0nao = rtB . bkbnzydkil * rtB . ifn1zaq4jj ; rtB . fwzan15owz =
rtB . mfn3ngkfa2 . lniimqwaxy / rtB . jevg3hxxfu ; rtB . gpyybdsilh = rtB .
mfn3ngkfa2 . pfchf5chga + rtB . fwzan15owz ; rtB . cnr0bua02n = rtB .
nlbjicxf4k * rtB . jevg3hxxfu ; if ( ( rtB . cnr0bua02n >= - rtP .
LongitudinalWheelDiskBrake2_VXLOW ) && ( rtB . cnr0bua02n <= rtP .
LongitudinalWheelDiskBrake2_VXLOW ) ) { rtB . pqgd5hrhqs = 0.2 / ( 3.0 -
muDoubleScalarPower ( rtB . cnr0bua02n / 0.1 , 2.0 ) ) ; } else { rtB .
krkyxg4dzc = muDoubleScalarAbs ( rtB . cnr0bua02n ) ; rtB . pqgd5hrhqs = rtB
. krkyxg4dzc ; } rtB . nrcsmiyxoq = rtB . pqgd5hrhqs / rtP . WHL .
RelaxationLength ; rtB . cabpwvhlvo = rtB . gpyybdsilh - rtB . osxsmxcu11 ;
rtB . cdno43ohoy = rtB . nrcsmiyxoq * rtB . cabpwvhlvo ; rtB . h3ooj25pp5 =
rtB . ksccswp5ae . lniimqwaxy / rtB . mer25mymto ; rtB . ocgamkinbg = rtB .
ksccswp5ae . pfchf5chga + rtB . h3ooj25pp5 ; rtB . ohj5ftgoqe = rtB .
on55mw5phh * rtB . mer25mymto ; if ( ( rtB . ohj5ftgoqe >= - rtP .
LongitudinalWheelDiskBrake3_VXLOW ) && ( rtB . ohj5ftgoqe <= rtP .
LongitudinalWheelDiskBrake3_VXLOW ) ) { rtB . jrp0aoz5wu = 0.2 / ( 3.0 -
muDoubleScalarPower ( rtB . ohj5ftgoqe / 0.1 , 2.0 ) ) ; } else { rtB .
ie5qebpz5z = muDoubleScalarAbs ( rtB . ohj5ftgoqe ) ; rtB . jrp0aoz5wu = rtB
. ie5qebpz5z ; } rtB . bwefnginvi = rtB . jrp0aoz5wu / rtP . WHL .
RelaxationLength ; rtB . pg2qq1nzez = rtB . ocgamkinbg - rtB . p5ymjmcd3s ;
rtB . exbxduxy2v = rtB . bwefnginvi * rtB . pg2qq1nzez ; muDoubleScalarSinCos
( rtB . f1prcbszsd [ 0 ] , & mnhgivn0jt [ 0 ] , & xddot ) ;
muDoubleScalarSinCos ( rtB . f1prcbszsd [ 1 ] , & mnhgivn0jt [ 1 ] , &
bnzda1xddq_idx_1 ) ; muDoubleScalarSinCos ( rtB . f1prcbszsd [ 2 ] , &
mnhgivn0jt [ 2 ] , & bnzda1xddq_idx_2 ) ; muDoubleScalarSinCos ( rtB .
f1prcbszsd [ 0 ] , & xddot , & mnhgivn0jt [ 0 ] ) ; muDoubleScalarSinCos (
rtB . f1prcbszsd [ 1 ] , & bnzda1xddq_idx_1 , & mnhgivn0jt [ 1 ] ) ;
muDoubleScalarSinCos ( rtB . f1prcbszsd [ 2 ] , & bnzda1xddq_idx_2 , &
mnhgivn0jt [ 2 ] ) ; muDoubleScalarSinCos ( rtB . f1prcbszsd [ 0 ] , & xddot
, & mnhgivn0jt [ 0 ] ) ; muDoubleScalarSinCos ( rtB . f1prcbszsd [ 1 ] , &
bnzda1xddq_idx_1 , & mnhgivn0jt [ 1 ] ) ; muDoubleScalarSinCos ( rtB .
f1prcbszsd [ 2 ] , & bnzda1xddq_idx_2 , & mnhgivn0jt [ 2 ] ) ;
muDoubleScalarSinCos ( rtB . f1prcbszsd [ 0 ] , & xddot , & mnhgivn0jt [ 0 ]
) ; muDoubleScalarSinCos ( rtB . f1prcbszsd [ 1 ] , & bnzda1xddq_idx_1 , &
mnhgivn0jt [ 1 ] ) ; muDoubleScalarSinCos ( rtB . f1prcbszsd [ 2 ] , &
bnzda1xddq_idx_2 , & mnhgivn0jt [ 2 ] ) ; muDoubleScalarSinCos ( rtB .
f1prcbszsd [ 0 ] , & xddot , & mnhgivn0jt [ 0 ] ) ; muDoubleScalarSinCos (
rtB . f1prcbszsd [ 1 ] , & bnzda1xddq_idx_1 , & mnhgivn0jt [ 1 ] ) ;
muDoubleScalarSinCos ( rtB . f1prcbszsd [ 2 ] , & bnzda1xddq_idx_2 , &
mnhgivn0jt [ 2 ] ) ; muDoubleScalarSinCos ( rtB . f1prcbszsd [ 0 ] , &
mnhgivn0jt [ 0 ] , & xddot ) ; muDoubleScalarSinCos ( rtB . f1prcbszsd [ 1 ]
, & mnhgivn0jt [ 1 ] , & bnzda1xddq_idx_1 ) ; muDoubleScalarSinCos ( rtB .
f1prcbszsd [ 2 ] , & mnhgivn0jt [ 2 ] , & bnzda1xddq_idx_2 ) ; rtB .
mvulyit5qy [ 0 ] = i0ssdtjwt1_idx_1 ; rtB . mvulyit5qy [ 1 ] = ju2qheifh2 ;
rtB . mvulyit5qy [ 2 ] = o3n3jqkno2 ; rtB . mvulyit5qy [ 3 ] =
i0ssdtjwt1_idx_2 ; rtB . k34ff2woyp [ 0 ] = rtX . pdm1gqxnsc [ 0 ] ; rtB .
kmpsmr4bu1 [ 0 ] = alfa_fl - rtB . k34ff2woyp [ 0 ] ; rtB . ok0nex3a10 [ 0 ]
= rtB . kmpsmr4bu1 [ 0 ] * Vwheel_fl / rtB . azrnjxg4j4 [ 0 ] ; if ( rtB .
mvulyit5qy [ 0 ] > rtP . Saturation_UpperSat_grpbnmsvx2 ) { rtB . n0pt5s35mg
[ 0 ] = rtP . Saturation_UpperSat_grpbnmsvx2 ; } else if ( rtB . mvulyit5qy [
0 ] < rtP . Saturation_LowerSat_fwzdhlo31v ) { rtB . n0pt5s35mg [ 0 ] = rtP .
Saturation_LowerSat_fwzdhlo31v ; } else { rtB . n0pt5s35mg [ 0 ] = rtB .
mvulyit5qy [ 0 ] ; } rtB . ewq3x4haz5 [ 0 ] = rtB . n0pt5s35mg [ 0 ] - rtB .
eilcu1yst5 [ 0 ] ; rtB . exw1fos1zh [ 0 ] = rtB . ewq3x4haz5 [ 0 ] * rtP .
ContLPF_wc_mk3xswwxyb ; rtB . k34ff2woyp [ 1 ] = rtX . pdm1gqxnsc [ 1 ] ; rtB
. kmpsmr4bu1 [ 1 ] = i0ssdtjwt1_idx_0 - rtB . k34ff2woyp [ 1 ] ; rtB .
ok0nex3a10 [ 1 ] = rtB . kmpsmr4bu1 [ 1 ] * Vwheel_fl / rtB . azrnjxg4j4 [ 1
] ; if ( rtB . mvulyit5qy [ 1 ] > rtP . Saturation_UpperSat_grpbnmsvx2 ) {
rtB . n0pt5s35mg [ 1 ] = rtP . Saturation_UpperSat_grpbnmsvx2 ; } else if (
rtB . mvulyit5qy [ 1 ] < rtP . Saturation_LowerSat_fwzdhlo31v ) { rtB .
n0pt5s35mg [ 1 ] = rtP . Saturation_LowerSat_fwzdhlo31v ; } else { rtB .
n0pt5s35mg [ 1 ] = rtB . mvulyit5qy [ 1 ] ; } rtB . ewq3x4haz5 [ 1 ] = rtB .
n0pt5s35mg [ 1 ] - rtB . eilcu1yst5 [ 1 ] ; rtB . exw1fos1zh [ 1 ] = rtB .
ewq3x4haz5 [ 1 ] * rtP . ContLPF_wc_mk3xswwxyb ; rtB . k34ff2woyp [ 2 ] = rtX
. pdm1gqxnsc [ 2 ] ; rtB . kmpsmr4bu1 [ 2 ] = alfa_rl - rtB . k34ff2woyp [ 2
] ; rtB . ok0nex3a10 [ 2 ] = rtB . kmpsmr4bu1 [ 2 ] * Vwheel_rl / rtB .
azrnjxg4j4 [ 2 ] ; if ( rtB . mvulyit5qy [ 2 ] > rtP .
Saturation_UpperSat_grpbnmsvx2 ) { rtB . n0pt5s35mg [ 2 ] = rtP .
Saturation_UpperSat_grpbnmsvx2 ; } else if ( rtB . mvulyit5qy [ 2 ] < rtP .
Saturation_LowerSat_fwzdhlo31v ) { rtB . n0pt5s35mg [ 2 ] = rtP .
Saturation_LowerSat_fwzdhlo31v ; } else { rtB . n0pt5s35mg [ 2 ] = rtB .
mvulyit5qy [ 2 ] ; } rtB . ewq3x4haz5 [ 2 ] = rtB . n0pt5s35mg [ 2 ] - rtB .
eilcu1yst5 [ 2 ] ; rtB . exw1fos1zh [ 2 ] = rtB . ewq3x4haz5 [ 2 ] * rtP .
ContLPF_wc_mk3xswwxyb ; rtB . k34ff2woyp [ 3 ] = rtX . pdm1gqxnsc [ 3 ] ; rtB
. kmpsmr4bu1 [ 3 ] = alfa_rr - rtB . k34ff2woyp [ 3 ] ; rtB . ok0nex3a10 [ 3
] = rtB . kmpsmr4bu1 [ 3 ] * Vwheel_rl / rtB . azrnjxg4j4 [ 3 ] ; if ( rtB .
mvulyit5qy [ 3 ] > rtP . Saturation_UpperSat_grpbnmsvx2 ) { rtB . n0pt5s35mg
[ 3 ] = rtP . Saturation_UpperSat_grpbnmsvx2 ; } else if ( rtB . mvulyit5qy [
3 ] < rtP . Saturation_LowerSat_fwzdhlo31v ) { rtB . n0pt5s35mg [ 3 ] = rtP .
Saturation_LowerSat_fwzdhlo31v ; } else { rtB . n0pt5s35mg [ 3 ] = rtB .
mvulyit5qy [ 3 ] ; } rtB . ewq3x4haz5 [ 3 ] = rtB . n0pt5s35mg [ 3 ] - rtB .
eilcu1yst5 [ 3 ] ; rtB . exw1fos1zh [ 3 ] = rtB . ewq3x4haz5 [ 3 ] * rtP .
ContLPF_wc_mk3xswwxyb ; rtB . fz2bb5idjc = ssGetT ( rtS ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . cfm1r3cml5 = ( ssGetTaskTime ( rtS ,
1 ) >= rtP . Ramp_start ) ; if ( rtDW . cfm1r3cml5 == 1 ) { rtB . owg1r45cyy
= rtP . Ramp_slope ; } else { rtB . owg1r45cyy = rtP . Step_Y0_hgfim40kul ; }
} if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . f4zdfu1pt1 = ( rtB . fz2bb5idjc >
rtP . Switch_Threshold_kbix0det2b ) ; } if ( ! rtDW . f4zdfu1pt1 ) { rtB .
jkma31c4bs = ( ssGetT ( rtS ) - rtP . Ramp_start ) * rtB . owg1r45cyy + rtP .
Ramp_InitialOutput ; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 (
int_T tid ) { real_T ane0wjmzvu_idx_0 ; real_T ane0wjmzvu_idx_1 ; real_T
ane0wjmzvu_idx_2 ; real_T ivx12qmw1f_idx_0 ; real_T ivx12qmw1f_idx_1 ; real_T
ivx12qmw1f_idx_2 ; real_T iwnfwtpmsq ; int32_T i ; boolean_T tmp [ 6 ] ;
boolean_T p41xvpukrj ; rtB . ezve0fzsgm [ 0 ] = rtP . GND . Friction [ 0 ] ;
rtB . ezve0fzsgm [ 1 ] = rtP . GND . Friction [ 1 ] ; rtB . ezve0fzsgm [ 2 ]
= rtP . GND . Friction [ 2 ] ; rtB . ezve0fzsgm [ 3 ] = rtP . GND . Friction
[ 3 ] ; { if ( rtDW . jbferm2qpe . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( rtDW . jbferm2qpe . AQHandles , ssGetTaskTime ( rtS , 3 ) ,
( char * ) & rtP . Constant14_Value + 0 ) ; } } rtB . d25xxhghbu [ 0 ] = rtP
. Constant1_Value_k4pvabrprp [ 0 ] ; rtB . d25xxhghbu [ 1 ] = rtP .
Constant1_Value_k4pvabrprp [ 1 ] ; rtB . d25xxhghbu [ 2 ] = rtP .
Constant1_Value_k4pvabrprp [ 2 ] ; rtB . d25xxhghbu [ 3 ] = rtP .
Constant1_Value_k4pvabrprp [ 3 ] ; rtB . kfxhjc530w [ 0 ] = 0.0 ; rtB .
kfxhjc530w [ 1 ] = 0.0 ; ane0wjmzvu_idx_0 = rtP . Constant3_Value_gnx4c1u1ls
; ane0wjmzvu_idx_1 = rtP . Constant4_Value ; ane0wjmzvu_idx_2 = rtP .
Constant5_Value ; rtB . a4yxlohvrw = false ; rtB . jclfiq2n4d = true ; if (
rtP . steerOut_Value > rtP . Switch3_Threshold_inzq1ozihl ) { rtB .
lfx25jiz4m = rtP . Gain1_Gain_aapnp35q3g * 0.0 ; } else { rtB . lfx25jiz4m =
rtP . PredictiveDriver1_theta * 0.0 ; } p41xvpukrj = false ; tmp [ 0 ] =
false ; tmp [ 1 ] = false ; tmp [ 2 ] = false ; tmp [ 3 ] = false ; tmp [ 4 ]
= false ; tmp [ 5 ] = false ; for ( i = 0 ; i < 5 ; i ++ ) { p41xvpukrj = (
p41xvpukrj || tmp [ i + 1 ] ) ; } rtB . goqumcrvhe = p41xvpukrj ; rtB .
cttqks3f5r = false ; rtB . m4eybcvflx = true ; rtB . j3lllf3huv = false ; rtB
. fbjkyu0wck = true ; rtB . ivx21ub2uh = rtP . PredictiveDriver1_Kff / rtP .
PredictiveDriver1_vnom * rtP . EV . InitialLongVel ; rtB . fnxobboyf5 = rtP .
PredictiveDriver1_Kg * rtP . Constant22_Value ; rtB . ozxsezzdp0 = rtP .
Coefiatritog_Value * rtP . Fatordeajustabilidade_Value ; rtB . g4ozzpxilu [ 0
] = ( rtP . ZeroOrderHold4_Gain * rtP . Constant13_Value [ 0 ] - rtP .
ThreeaxisInertialMeasurementUnit_imu [ 0 ] ) * rtP . Gain_Gain_lc3fs3llo4 [ 0
] ; rtB . g4ozzpxilu [ 1 ] = ( rtP . ZeroOrderHold4_Gain * rtP .
Constant13_Value [ 1 ] - rtP . ThreeaxisInertialMeasurementUnit_imu [ 1 ] ) *
rtP . Gain_Gain_lc3fs3llo4 [ 1 ] ; rtB . g4ozzpxilu [ 2 ] = ( rtP .
ZeroOrderHold4_Gain * rtP . Constant13_Value [ 2 ] - rtP .
ThreeaxisInertialMeasurementUnit_imu [ 2 ] ) * rtP . Gain_Gain_lc3fs3llo4 [ 2
] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtDW . j0xyivirlp != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . j0xyivirlp = 0 ;
} ivx12qmw1f_idx_0 = muDoubleScalarSqrt ( rtP . ThreeaxisAccelerometer_a_pow
[ 0 ] ) ; ivx12qmw1f_idx_1 = muDoubleScalarSqrt ( rtP .
ThreeaxisAccelerometer_a_pow [ 1 ] ) ; ivx12qmw1f_idx_2 = muDoubleScalarSqrt
( rtP . ThreeaxisAccelerometer_a_pow [ 2 ] ) ; if ( rtDW . h5n0zvxyf2 != 0 )
{ ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . h5n0zvxyf2 = 0
; } iwnfwtpmsq = muDoubleScalarSqrt ( rtP . Randombias_Ts ) ; } else { if (
rtP . ThreeaxisAccelerometer_a_pow [ 0 ] < 0.0 ) { ivx12qmw1f_idx_0 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtP . ThreeaxisAccelerometer_a_pow [
0 ] ) ) ; rtDW . j0xyivirlp = 1 ; } else { ivx12qmw1f_idx_0 =
muDoubleScalarSqrt ( rtP . ThreeaxisAccelerometer_a_pow [ 0 ] ) ; } if ( rtP
. ThreeaxisAccelerometer_a_pow [ 1 ] < 0.0 ) { ivx12qmw1f_idx_1 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtP . ThreeaxisAccelerometer_a_pow [
1 ] ) ) ; rtDW . j0xyivirlp = 1 ; } else { ivx12qmw1f_idx_1 =
muDoubleScalarSqrt ( rtP . ThreeaxisAccelerometer_a_pow [ 1 ] ) ; } if ( rtP
. ThreeaxisAccelerometer_a_pow [ 2 ] < 0.0 ) { ivx12qmw1f_idx_2 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtP . ThreeaxisAccelerometer_a_pow [
2 ] ) ) ; rtDW . j0xyivirlp = 1 ; } else { ivx12qmw1f_idx_2 =
muDoubleScalarSqrt ( rtP . ThreeaxisAccelerometer_a_pow [ 2 ] ) ; } if ( rtP
. Randombias_Ts < 0.0 ) { iwnfwtpmsq = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtP . Randombias_Ts ) ) ; rtDW . h5n0zvxyf2 = 1 ; } else
{ iwnfwtpmsq = muDoubleScalarSqrt ( rtP . Randombias_Ts ) ; } } rtB .
ktw2bfmndg [ 0 ] = ivx12qmw1f_idx_0 / iwnfwtpmsq ; rtB . pvktgoo0vx [ 0 ] =
rtP . ZeroOrderHold2_Gain * - rtP . Constant16_Value [ 0 ] ; rtB . ktw2bfmndg
[ 1 ] = ivx12qmw1f_idx_1 / iwnfwtpmsq ; rtB . pvktgoo0vx [ 1 ] = rtP .
ZeroOrderHold2_Gain * - rtP . Constant16_Value [ 1 ] ; rtB . ktw2bfmndg [ 2 ]
= ivx12qmw1f_idx_2 / iwnfwtpmsq ; rtB . pvktgoo0vx [ 2 ] = rtP .
ZeroOrderHold2_Gain * - rtP . Constant16_Value [ 2 ] ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( rtDW . k5iobck5su != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . k5iobck5su = 0 ;
} ivx12qmw1f_idx_0 = muDoubleScalarSqrt ( rtP . ThreeaxisGyroscope_g_pow [ 0
] ) ; ivx12qmw1f_idx_1 = muDoubleScalarSqrt ( rtP . ThreeaxisGyroscope_g_pow
[ 1 ] ) ; ivx12qmw1f_idx_2 = muDoubleScalarSqrt ( rtP .
ThreeaxisGyroscope_g_pow [ 2 ] ) ; if ( rtDW . bi1cenloak != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . bi1cenloak = 0 ;
} iwnfwtpmsq = muDoubleScalarSqrt ( rtP . Randombias_Ts_as2pyn1hb1 ) ; } else
{ if ( rtP . ThreeaxisGyroscope_g_pow [ 0 ] < 0.0 ) { ivx12qmw1f_idx_0 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtP . ThreeaxisGyroscope_g_pow [ 0 ]
) ) ; rtDW . k5iobck5su = 1 ; } else { ivx12qmw1f_idx_0 = muDoubleScalarSqrt
( rtP . ThreeaxisGyroscope_g_pow [ 0 ] ) ; } if ( rtP .
ThreeaxisGyroscope_g_pow [ 1 ] < 0.0 ) { ivx12qmw1f_idx_1 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtP . ThreeaxisGyroscope_g_pow [ 1 ]
) ) ; rtDW . k5iobck5su = 1 ; } else { ivx12qmw1f_idx_1 = muDoubleScalarSqrt
( rtP . ThreeaxisGyroscope_g_pow [ 1 ] ) ; } if ( rtP .
ThreeaxisGyroscope_g_pow [ 2 ] < 0.0 ) { ivx12qmw1f_idx_2 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( rtP . ThreeaxisGyroscope_g_pow [ 2 ]
) ) ; rtDW . k5iobck5su = 1 ; } else { ivx12qmw1f_idx_2 = muDoubleScalarSqrt
( rtP . ThreeaxisGyroscope_g_pow [ 2 ] ) ; } if ( rtP .
Randombias_Ts_as2pyn1hb1 < 0.0 ) { iwnfwtpmsq = - muDoubleScalarSqrt (
muDoubleScalarAbs ( rtP . Randombias_Ts_as2pyn1hb1 ) ) ; rtDW . bi1cenloak =
1 ; } else { iwnfwtpmsq = muDoubleScalarSqrt ( rtP . Randombias_Ts_as2pyn1hb1
) ; } } rtB . btjm0q2rtx [ 0 ] = ivx12qmw1f_idx_0 / iwnfwtpmsq ; rtB .
btjm0q2rtx [ 1 ] = ivx12qmw1f_idx_1 / iwnfwtpmsq ; rtB . btjm0q2rtx [ 2 ] =
ivx12qmw1f_idx_2 / iwnfwtpmsq ; if ( rtP . WHL . LoadedRadius > rtP .
Saturation_UpperSat_gvxzlt42ct ) { rtB . eu2132pgmw = rtP .
Saturation_UpperSat_gvxzlt42ct ; } else if ( rtP . WHL . LoadedRadius < rtP .
Saturation_LowerSat_c5tt540suj ) { rtB . eu2132pgmw = rtP .
Saturation_LowerSat_c5tt540suj ; } else { rtB . eu2132pgmw = rtP . WHL .
LoadedRadius ; } rtB . ncbfjdrw0i = rtP . Ratioofstatictokinetic_Gain * 0.0 ;
noxrljyvsbTID3 ( rtB . lntq3i31aa , rtB . ncbfjdrw0i , 0.0 , rtP . WHL .
DampingCoefficient , & rtB . noxrljyvsbq , & rtP . noxrljyvsbq ) ; if ( rtP .
WHL . LoadedRadius > rtP . Saturation_UpperSat_hcxwsaqrsd ) { rtB .
csqivoi424 = rtP . Saturation_UpperSat_hcxwsaqrsd ; } else if ( rtP . WHL .
LoadedRadius < rtP . Saturation_LowerSat_hyimqnoohc ) { rtB . csqivoi424 =
rtP . Saturation_LowerSat_hyimqnoohc ; } else { rtB . csqivoi424 = rtP . WHL
. LoadedRadius ; } rtB . e2sy13a3rb = rtP .
Ratioofstatictokinetic_Gain_l4qobhfvhy * 0.0 ; noxrljyvsbTID3 ( rtB .
kydysjnam0 , rtB . e2sy13a3rb , 0.0 , rtP . WHL . DampingCoefficient , & rtB
. cakr3inwfo , & rtP . cakr3inwfo ) ; if ( rtP . WHL . LoadedRadius > rtP .
Saturation_UpperSat_fb4yxihzdf ) { rtB . jevg3hxxfu = rtP .
Saturation_UpperSat_fb4yxihzdf ; } else if ( rtP . WHL . LoadedRadius < rtP .
Saturation_LowerSat_d231bjnmuh ) { rtB . jevg3hxxfu = rtP .
Saturation_LowerSat_d231bjnmuh ; } else { rtB . jevg3hxxfu = rtP . WHL .
LoadedRadius ; } rtB . b1jibjaalt = rtP .
Ratioofstatictokinetic_Gain_a0bsrvz5lm * 0.0 ; noxrljyvsbTID3 ( rtB .
bsr5mnxogb , rtB . b1jibjaalt , 0.0 , rtP . WHL . DampingCoefficient , & rtB
. mxxvrdjd12 , & rtP . mxxvrdjd12 ) ; if ( rtP . WHL . LoadedRadius > rtP .
Saturation_UpperSat_ciqkwvx5cy ) { rtB . mer25mymto = rtP .
Saturation_UpperSat_ciqkwvx5cy ; } else if ( rtP . WHL . LoadedRadius < rtP .
Saturation_LowerSat_mgfjtcbogb ) { rtB . mer25mymto = rtP .
Saturation_LowerSat_mgfjtcbogb ; } else { rtB . mer25mymto = rtP . WHL .
LoadedRadius ; } rtB . lscft13zqo = rtP .
Ratioofstatictokinetic_Gain_n4qb4h1gtd * 0.0 ; noxrljyvsbTID3 ( rtB .
n4c0eyic5z , rtB . lscft13zqo , 0.0 , rtP . WHL . DampingCoefficient , & rtB
. gjwrbmtmpz , & rtP . gjwrbmtmpz ) ; rtB . g3zkmqy3qm [ 0 ] = rtP . EV .
InitialLongPosition ; rtB . g3zkmqy3qm [ 1 ] = rtP . EV . InitialLatPosition
; rtB . msys3swj00 [ 0 ] = rtP . EV . InitialLongVel ; rtB . msys3swj00 [ 1 ]
= rtP . EV . InitialLatVel ; rtB . msys3swj00 [ 2 ] = rtP . EV .
InitialYawAngle ; rtB . msys3swj00 [ 3 ] = rtP . EV . InitialYawRate ; rtB .
lufthx0epg [ 0 ] = rtP . VehicleBody3DOFDualTrack_Cy_f ; rtB . lufthx0epg [ 1
] = rtP . VehicleBody3DOFDualTrack_Cy_f ; rtB . dvwaoy2qi5 [ 0 ] = rtP .
VehicleBody3DOFDualTrack_Cy_r ; rtB . dvwaoy2qi5 [ 1 ] = rtP .
VehicleBody3DOFDualTrack_Cy_r ; rtB . b12vq1lhyh [ 0 ] = rtP . EV .
FrontAxlePositionfromCG ; rtB . b12vq1lhyh [ 1 ] = rtP . Gain_Gain_plb3tw03ee
* rtP . EV . TrackWidth [ 0 ] - rtP . VehicleBody3DOFDualTrack_d ; rtB .
b12vq1lhyh [ 2 ] = rtP . EV . HeightCG ; rtB . pdumfua25b = rtP .
Constant4_Value_k0imludnhg * rtB . b12vq1lhyh [ 1 ] ; rtB . gj1umy1s2b = rtP
. Constant5_Value_dhotn1uupu * rtB . b12vq1lhyh [ 2 ] ; rtB . egwiniboj3 =
rtP . Constant4_Value_k0imludnhg * rtB . b12vq1lhyh [ 2 ] ; rtB . iow4cazdde
= rtP . Constant5_Value_dhotn1uupu * rtB . b12vq1lhyh [ 0 ] ; rtB .
ldpqikv0lm [ 0 ] = rtP . EV . FrontAxlePositionfromCG ; rtB . ldpqikv0lm [ 1
] = rtP . Gain_Gain_cdrhj5xx4u * rtP . EV . TrackWidth [ 0 ] - rtP .
VehicleBody3DOFDualTrack_d ; rtB . ldpqikv0lm [ 2 ] = rtP . EV . HeightCG ;
rtB . iibbndjvjh = rtP . Constant4_Value_k0imludnhg * rtB . ldpqikv0lm [ 1 ]
; rtB . de12wpbxsj = rtP . Constant5_Value_dhotn1uupu * rtB . ldpqikv0lm [ 2
] ; rtB . lwk4hkx1ck = rtP . Constant4_Value_k0imludnhg * rtB . ldpqikv0lm [
2 ] ; rtB . keata0at5s = rtP . Constant5_Value_dhotn1uupu * rtB . ldpqikv0lm
[ 0 ] ; rtB . orqox2gjfp [ 0 ] = rtP . VehicleBody3DOFDualTrack_longOff ; rtB
. orqox2gjfp [ 1 ] = rtP . VehicleBody3DOFDualTrack_latOff ; rtB . orqox2gjfp
[ 2 ] = rtP . VehicleBody3DOFDualTrack_vertOff ; rtB . ezvh0rk4nc = rtP .
Constant4_Value_k0imludnhg * rtB . orqox2gjfp [ 1 ] ; rtB . okojbmod0o = rtP
. Constant5_Value_dhotn1uupu * rtB . orqox2gjfp [ 2 ] ; rtB . mco3ns0lny =
rtP . Constant4_Value_k0imludnhg * rtB . orqox2gjfp [ 2 ] ; rtB . o2dpkdu3fe
= rtP . Constant5_Value_dhotn1uupu * rtB . orqox2gjfp [ 0 ] ; rtB .
py0a4e1hap [ 0 ] = - rtP . EV . RearAxlePositionfromCG ; rtB . py0a4e1hap [ 1
] = rtP . Gain_Gain_mt55r1hbxj * rtP . EV . TrackWidth [ 1 ] - rtP .
VehicleBody3DOFDualTrack_d ; rtB . py0a4e1hap [ 2 ] = rtP . EV . HeightCG ;
rtB . hjzkl2kwf3 = rtP . Constant4_Value_k0imludnhg * rtB . py0a4e1hap [ 1 ]
; rtB . jviyno5c5w = rtP . Constant5_Value_dhotn1uupu * rtB . py0a4e1hap [ 2
] ; rtB . cqholczoxt = rtP . Constant4_Value_k0imludnhg * rtB . py0a4e1hap [
2 ] ; rtB . gjvexudexj = rtP . Constant5_Value_dhotn1uupu * rtB . py0a4e1hap
[ 0 ] ; rtB . hb11ykgyzf [ 0 ] = - rtP . EV . RearAxlePositionfromCG ; rtB .
hb11ykgyzf [ 1 ] = rtP . Gain_Gain_apgswtmo0d * rtP . EV . TrackWidth [ 1 ] -
rtP . VehicleBody3DOFDualTrack_d ; rtB . hb11ykgyzf [ 2 ] = rtP . EV .
HeightCG ; rtB . mdhxk4ypyo = rtP . Constant4_Value_k0imludnhg * rtB .
hb11ykgyzf [ 1 ] ; rtB . btnju2sxw4 = rtP . Constant5_Value_dhotn1uupu * rtB
. hb11ykgyzf [ 2 ] ; rtB . en3la4kxu1 = rtP . Constant4_Value_k0imludnhg *
rtB . hb11ykgyzf [ 2 ] ; rtB . lstnprzd0c = rtP . Constant5_Value_dhotn1uupu
* rtB . hb11ykgyzf [ 0 ] ; rtB . buizfe5hvb [ 0 ] = - rtP .
Constant_Value_pzfo3en5e3 ; rtB . buizfe5hvb [ 1 ] = rtP .
Constant4_Value_eiyjx3guaz - rtP . VehicleBody3DOFDualTrack_d ; rtB .
buizfe5hvb [ 2 ] = rtP . EV . HeightCG - rtP . Constant3_Value_mzba2zhg53 ;
rtB . cowmqsshow = rtP . Constant4_Value_k0imludnhg * rtB . buizfe5hvb [ 1 ]
; rtB . jtyfp1uu51 = rtP . Constant5_Value_dhotn1uupu * rtB . buizfe5hvb [ 2
] ; rtB . pnnpxsfjlb = rtP . Constant4_Value_k0imludnhg * rtB . buizfe5hvb [
2 ] ; rtB . fvu055jlv2 = rtP . Constant5_Value_dhotn1uupu * rtB . buizfe5hvb
[ 0 ] ; rtB . ks2tcvhkgr [ 0 ] = rtP . Constant_Value_gtmzyzr35c ; rtB .
ks2tcvhkgr [ 1 ] = rtP . Constant_Value_gtmzyzr35c ; rtB . azrnjxg4j4 [ 0 ] =
rtP . VehicleBody3DOFDualTrack_sigma_f ; rtB . azrnjxg4j4 [ 1 ] = rtP .
VehicleBody3DOFDualTrack_sigma_f ; rtB . azrnjxg4j4 [ 2 ] = rtP .
VehicleBody3DOFDualTrack_sigma_r ; rtB . azrnjxg4j4 [ 3 ] = rtP .
VehicleBody3DOFDualTrack_sigma_r ; rtB . mi1o4jcssm [ 0 ] = ane0wjmzvu_idx_0
; rtB . mi1o4jcssm [ 1 ] = ane0wjmzvu_idx_1 ; rtB . mi1o4jcssm [ 2 ] =
ane0wjmzvu_idx_2 ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid )
{ XDis * _rtXdis ; _rtXdis = ( ( XDis * ) ssGetContStateDisabled ( rtS ) ) ;
rtDW . cw5iqh3ouk = 0 ; rtDW . ju4msksctk = 0 ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { rtDW . idqvj2pdci = rtB . ort1oa3yt2 [ 2 ] ; rtDW . knzjkvs1ph =
rtB . i5ebqyedfw [ 2 ] ; rtDW . n2hvy13sko [ 0 ] = rtB . jkwei5usbq [ 0 ] ;
rtDW . n2hvy13sko [ 1 ] = rtB . jkwei5usbq [ 1 ] ; rtDW . n2hvy13sko [ 2 ] =
rtB . jkwei5usbq [ 2 ] ; rtDW . n2hvy13sko [ 3 ] = rtB . jkwei5usbq [ 3 ] ; }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . if2nkbrvo2 [ 0 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ccsmcmbqmb [ 0 ] ) * rtP .
WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; rtDW . jitwfcjega [ 0 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . clnxzkzwul [ 0 ] ) * rtP .
WhiteNoise_StdDev_dhvemjsox3 + rtP . WhiteNoise_Mean_dffhdtx5eq ; rtDW .
if2nkbrvo2 [ 1 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ccsmcmbqmb [ 1 ] ) *
rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; rtDW . jitwfcjega [ 1 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . clnxzkzwul [ 1 ] ) * rtP .
WhiteNoise_StdDev_dhvemjsox3 + rtP . WhiteNoise_Mean_dffhdtx5eq ; rtDW .
if2nkbrvo2 [ 2 ] = rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . ccsmcmbqmb [ 2 ] ) *
rtP . WhiteNoise_StdDev + rtP . WhiteNoise_Mean ; rtDW . jitwfcjega [ 2 ] =
rt_nrand_Upu32_Yd_f_pw_snf ( & rtDW . clnxzkzwul [ 2 ] ) * rtP .
WhiteNoise_StdDev_dhvemjsox3 + rtP . WhiteNoise_Mean_dffhdtx5eq ; } switch (
rtDW . pjruxozaqy ) { case 3 : if ( rtB . mm0bpljwv1 < 0.0 ) { rtDW .
pjruxozaqy = 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break
; case 4 : if ( rtB . mm0bpljwv1 > 0.0 ) { rtDW . pjruxozaqy = 2 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } break ; } _rtXdis ->
dztonrd310 = ( ( rtDW . pjruxozaqy == 3 ) || ( rtDW . pjruxozaqy == 4 ) ) ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . b1zu5y4c1e [ 0 ] = rtB .
jw3hbd3t4s [ 0 ] ; rtDW . b1zu5y4c1e [ 1 ] = rtB . jw3hbd3t4s [ 1 ] ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . n4s3ahy5yb [ 0 ] = rtB . cff35i114u
[ 0 ] ; rtDW . n4s3ahy5yb [ 1 ] = rtB . cff35i114u [ 1 ] ; rtDW . n4s3ahy5yb
[ 2 ] = rtB . cff35i114u [ 2 ] ; } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDis * _rtXdis ; XDot * _rtXdot ; _rtXdis = ( (
XDis * ) ssGetContStateDisabled ( rtS ) ) ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; if ( rtDW . ioutqu0mzn [ 0 ] == 0 ) { _rtXdot -> ew1hskbqsh [ 0 ] =
rtX . ew1hskbqsh [ 3 ] ; _rtXdot -> ew1hskbqsh [ 3 ] = rtB . jdpct03ihe [ 0 ]
; } if ( rtDW . ioutqu0mzn [ 1 ] == 0 ) { _rtXdot -> ew1hskbqsh [ 1 ] = rtX .
ew1hskbqsh [ 4 ] ; _rtXdot -> ew1hskbqsh [ 4 ] = rtB . jdpct03ihe [ 1 ] ; }
if ( rtDW . ioutqu0mzn [ 2 ] == 0 ) { _rtXdot -> ew1hskbqsh [ 2 ] = rtX .
ew1hskbqsh [ 5 ] ; _rtXdot -> ew1hskbqsh [ 5 ] = rtB . jdpct03ihe [ 2 ] ; }
_rtXdot -> nvdrj2cjnk [ 0 ] = rtB . j1nkqcwf2g [ 0 ] ; _rtXdot -> nvdrj2cjnk
[ 1 ] = rtB . j1nkqcwf2g [ 1 ] ; _rtXdot -> nvdrj2cjnk [ 2 ] = rtB .
j1nkqcwf2g [ 2 ] ; _rtXdot -> nvdrj2cjnk [ 3 ] = rtB . j1nkqcwf2g [ 3 ] ;
_rtXdot -> jdftreuorv [ 0 ] = rtB . btptht1tk0 [ 0 ] ; _rtXdot -> jdftreuorv
[ 1 ] = rtB . btptht1tk0 [ 1 ] ; _rtXdot -> ecgpmufv2h [ 0 ] = rtB .
exw1fos1zh [ 0 ] ; _rtXdot -> ecgpmufv2h [ 1 ] = rtB . exw1fos1zh [ 1 ] ;
_rtXdot -> ecgpmufv2h [ 2 ] = rtB . exw1fos1zh [ 2 ] ; _rtXdot -> ecgpmufv2h
[ 3 ] = rtB . exw1fos1zh [ 3 ] ; _rtXdot -> gaamg4vtxr = rtB . kxxvpaqn2a ;
_rtXdot -> jecjxd3eom = rtB . f2fy5jjhga ; _rtXdot -> nfusnuz14b = rtB .
fiocnv2h1j ; cybsisxnfc ( rtB . lntq3i31aa , rtB . ncbfjdrw0i , 0.0 , & rtB .
noxrljyvsbq , & rtDW . noxrljyvsbq , & _rtXdot -> noxrljyvsbq ) ; _rtXdot ->
bmw50ts5q4 = rtB . bnbhfm0nao ; cybsisxnfc ( rtB . kydysjnam0 , rtB .
e2sy13a3rb , 0.0 , & rtB . cakr3inwfo , & rtDW . cakr3inwfo , & _rtXdot ->
cakr3inwfo ) ; _rtXdot -> p2fru1tfkf = rtB . cdno43ohoy ; cybsisxnfc ( rtB .
bsr5mnxogb , rtB . b1jibjaalt , 0.0 , & rtB . mxxvrdjd12 , & rtDW .
mxxvrdjd12 , & _rtXdot -> mxxvrdjd12 ) ; _rtXdot -> kqdff1w3rv = rtB .
exbxduxy2v ; cybsisxnfc ( rtB . n4c0eyic5z , rtB . lscft13zqo , 0.0 , & rtB .
gjwrbmtmpz , & rtDW . gjwrbmtmpz , & _rtXdot -> gjwrbmtmpz ) ; _rtXdot ->
klntojgsev = rtB . jblxcxbmeg [ 0 ] ; if ( rtDW . io5vwqal1m [ 0 ] == 0 ) {
_rtXdot -> dmhixvg5dr [ 0 ] = rtX . dmhixvg5dr [ 3 ] ; _rtXdot -> dmhixvg5dr
[ 3 ] = rtB . jumo3hkdvn [ 0 ] ; } if ( rtDW . io5vwqal1m [ 1 ] == 0 ) {
_rtXdot -> dmhixvg5dr [ 1 ] = rtX . dmhixvg5dr [ 4 ] ; _rtXdot -> dmhixvg5dr
[ 4 ] = rtB . jumo3hkdvn [ 1 ] ; } if ( rtDW . io5vwqal1m [ 2 ] == 0 ) {
_rtXdot -> dmhixvg5dr [ 2 ] = rtX . dmhixvg5dr [ 5 ] ; _rtXdot -> dmhixvg5dr
[ 5 ] = rtB . jumo3hkdvn [ 2 ] ; } _rtXdot -> kr5v2kihrz [ 0 ] = 0.0 ;
_rtXdot -> kr5v2kihrz [ 0 ] += rtP . TransferFcnFiltroVolante_A [ 0 ] * rtX .
kr5v2kihrz [ 0 ] ; _rtXdot -> kr5v2kihrz [ 1 ] = 0.0 ; _rtXdot -> kr5v2kihrz
[ 0 ] += rtP . TransferFcnFiltroVolante_A [ 1 ] * rtX . kr5v2kihrz [ 1 ] ;
_rtXdot -> kr5v2kihrz [ 1 ] += rtX . kr5v2kihrz [ 0 ] ; _rtXdot -> kr5v2kihrz
[ 0 ] += rtB . n5t3y1ndwd ; _rtXdot -> a2uhtc4qab = rtB . aa1i3dae21 ;
_rtXdot -> pxjrlp0doi = rtB . n554izgqk5 ; _rtXdot -> ddoib4fzt3 = rtB .
h4bqvvotgx ; _rtXdot -> ogw3fpytzv = rtB . ka2fgmunz2 ; _rtXdot -> ey4qfao5lu
= rtB . fvklswfmdc ; _rtXdot -> kf1ocexm5v = rtB . cciox55klk ; _rtXdot ->
cehthaubuh = rtB . hk0q4axsjn ; _rtXdot -> kkmmegedxf [ 0 ] = 0.0 ; _rtXdot
-> kkmmegedxf [ 0 ] += rtP . TransferFcnFiltroAPPS_A [ 0 ] * rtX . kkmmegedxf
[ 0 ] ; _rtXdot -> lx1mpujr22 [ 0 ] = rtB . nqz4ndil0s [ 0 ] ; _rtXdot ->
kkmmegedxf [ 1 ] = 0.0 ; _rtXdot -> kkmmegedxf [ 0 ] += rtP .
TransferFcnFiltroAPPS_A [ 1 ] * rtX . kkmmegedxf [ 1 ] ; _rtXdot ->
lx1mpujr22 [ 1 ] = rtB . nqz4ndil0s [ 1 ] ; _rtXdot -> kkmmegedxf [ 1 ] +=
rtX . kkmmegedxf [ 0 ] ; _rtXdot -> kkmmegedxf [ 0 ] += rtB . ljs20igqkh ; if
( _rtXdis -> dztonrd310 ) { _rtXdot -> dztonrd310 = 0.0 ; } else { _rtXdot ->
dztonrd310 = rtB . mm0bpljwv1 ; } _rtXdot -> efvbjs3y34 = rtB . mgcoykf3hl ;
_rtXdot -> egw32dj1nn = rtB . ntueai12qw ; _rtXdot -> pdm1gqxnsc [ 0 ] = rtB
. ok0nex3a10 [ 0 ] ; _rtXdot -> pdm1gqxnsc [ 1 ] = rtB . ok0nex3a10 [ 1 ] ;
_rtXdot -> pdm1gqxnsc [ 2 ] = rtB . ok0nex3a10 [ 2 ] ; _rtXdot -> pdm1gqxnsc
[ 3 ] = rtB . ok0nex3a10 [ 3 ] ; } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> m4lyohi4bb = rtB .
nla3wo302k - rtP . CompareToConstant_const ; _rtZCSV -> noyon1j1wa = rtB .
l4qwphkvnp - rtP . CompareToConstant_const_h1s0vqwvxz ; _rtZCSV -> j3rikkwalv
= rtB . jblxcxbmeg [ 0 ] ; _rtZCSV -> fvzivjb5nx [ 0 ] = rtB . fhs05iqj03 [ 0
] - rtP . Saturation_UpperSat [ 0 ] ; _rtZCSV -> hbsoqyvk0c [ 0 ] = rtB .
fhs05iqj03 [ 0 ] - rtP . Saturation_LowerSat [ 0 ] ; _rtZCSV -> bpey3dh3yu [
0 ] = rtB . aip03mn2dd [ 0 ] - rtP . Saturation_UpperSat_ojovnnjyll [ 0 ] ;
_rtZCSV -> lowtd33d5y [ 0 ] = rtB . aip03mn2dd [ 0 ] - rtP .
Saturation_LowerSat_jjanzakcpx [ 0 ] ; _rtZCSV -> fvzivjb5nx [ 1 ] = rtB .
fhs05iqj03 [ 1 ] - rtP . Saturation_UpperSat [ 1 ] ; _rtZCSV -> hbsoqyvk0c [
1 ] = rtB . fhs05iqj03 [ 1 ] - rtP . Saturation_LowerSat [ 1 ] ; _rtZCSV ->
bpey3dh3yu [ 1 ] = rtB . aip03mn2dd [ 1 ] - rtP .
Saturation_UpperSat_ojovnnjyll [ 1 ] ; _rtZCSV -> lowtd33d5y [ 1 ] = rtB .
aip03mn2dd [ 1 ] - rtP . Saturation_LowerSat_jjanzakcpx [ 1 ] ; _rtZCSV ->
fvzivjb5nx [ 2 ] = rtB . fhs05iqj03 [ 2 ] - rtP . Saturation_UpperSat [ 2 ] ;
_rtZCSV -> hbsoqyvk0c [ 2 ] = rtB . fhs05iqj03 [ 2 ] - rtP .
Saturation_LowerSat [ 2 ] ; _rtZCSV -> bpey3dh3yu [ 2 ] = rtB . aip03mn2dd [
2 ] - rtP . Saturation_UpperSat_ojovnnjyll [ 2 ] ; _rtZCSV -> lowtd33d5y [ 2
] = rtB . aip03mn2dd [ 2 ] - rtP . Saturation_LowerSat_jjanzakcpx [ 2 ] ;
_rtZCSV -> lcpg5gp1ew = rtB . fjyioa2tk1 ; _rtZCSV -> nalktpihmk = rtB .
gcb0w03ihj ; _rtZCSV -> fnqxusaplu = rtB . oc04ompsbk ; _rtZCSV -> la2mwb2524
= rtB . gd2e55z4sz - rtP . Switch3_Threshold ; _rtZCSV -> dbk42030of = rtB .
iyyn2fy2g4 ; _rtZCSV -> abfmmc31ji = rtB . iyyn2fy2g4 - rtP .
Switch1_Threshold_hmxcklihzo ; _rtZCSV -> j4slavakz0 = rtB . iyyn2fy2g4 ;
_rtZCSV -> prl3pxg4vg = rtB . iyyn2fy2g4 - rtP . Switch2_Threshold_hgm2a54gp5
; _rtZCSV -> mm5lciufmr = rtB . khm1mymbsl - rtP .
Saturation_UpperSat_kq4nfxdnia ; _rtZCSV -> govoo1cxe4 = rtB . khm1mymbsl -
rtP . Saturation_LowerSat_fe4nmgk5ze ; _rtZCSV -> jkvbyeg0j5 = rtB .
jwoxguc42j - rtP . Saturation1_UpperSat ; _rtZCSV -> nvn5k5lh0d = rtB .
jwoxguc42j - rtP . Saturation1_LowerSat ; switch ( rtDW . pjruxozaqy ) { case
1 : _rtZCSV -> fcjkvyg0ss = 0.0 ; _rtZCSV -> km1jij2vdl = rtP .
Integrator1_UpperSat - rtP . Integrator1_LowerSat ; break ; case 2 : _rtZCSV
-> fcjkvyg0ss = rtP . Integrator1_LowerSat - rtP . Integrator1_UpperSat ;
_rtZCSV -> km1jij2vdl = 0.0 ; break ; default : _rtZCSV -> fcjkvyg0ss = rtX .
dztonrd310 - rtP . Integrator1_UpperSat ; _rtZCSV -> km1jij2vdl = rtX .
dztonrd310 - rtP . Integrator1_LowerSat ; break ; } if ( ( rtDW . pjruxozaqy
== 3 ) || ( rtDW . pjruxozaqy == 4 ) ) { _rtZCSV -> kr3mwfsucp = rtB .
mm0bpljwv1 ; } else { _rtZCSV -> kr3mwfsucp = 0.0 ; } _rtZCSV -> oyv53swvnw =
rtB . hwyepwzcge - rtP . uto1_UpperSat ; _rtZCSV -> pucdiaqs50 = rtB .
hwyepwzcge - rtP . uto1_LowerSat ; _rtZCSV -> cdhnvut0hq = ssGetT ( rtS ) -
rtP . ReferenceGenerator_t_start ; _rtZCSV -> nuwlcxd550 = ssGetT ( rtS ) -
rtP . Ramp_start ; _rtZCSV -> mhgajttkxw = rtB . fz2bb5idjc - rtP .
Switch_Threshold_kbix0det2b ; } void MdlTerminate ( void ) { { if ( rtDW .
jbferm2qpe . AQHandles ) { sdiTerminateStreaming ( & rtDW . jbferm2qpe .
AQHandles ) ; } } { if ( rtDW . itvkmqwddr . AQHandles ) {
sdiTerminateStreaming ( & rtDW . itvkmqwddr . AQHandles ) ; } } { if ( rtDW .
ow1hokcqe2 . AQHandles ) { sdiTerminateStreaming ( & rtDW . ow1hokcqe2 .
AQHandles ) ; } } { if ( rtDW . lnsrt2x1pu . AQHandles ) {
sdiTerminateStreaming ( & rtDW . lnsrt2x1pu . AQHandles ) ; } } { if ( rtDW .
g041etusks . AQHandles ) { sdiTerminateStreaming ( & rtDW . g041etusks .
AQHandles ) ; } } { if ( rtDW . m0kvuadgsa . AQHandles ) {
sdiTerminateStreaming ( & rtDW . m0kvuadgsa . AQHandles ) ; } } } static void
mr_ContoleLateralApplication_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_ContoleLateralApplication_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_ContoleLateralApplication_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_ContoleLateralApplication_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_ContoleLateralApplication_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_ContoleLateralApplication_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_ContoleLateralApplication_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_ContoleLateralApplication_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_ContoleLateralApplication_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_ContoleLateralApplication_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_ContoleLateralApplication_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_ContoleLateralApplication_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_ContoleLateralApplication_GetDWork (
) { static const char * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "rtPrevZCX"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void
* ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char * rtdwDataFieldNames [
133 ] = { "rtDW.n4s3ahy5yb" , "rtDW.idqvj2pdci" , "rtDW.knzjkvs1ph" ,
"rtDW.if2nkbrvo2" , "rtDW.jitwfcjega" , "rtDW.copyj3c0zm" , "rtDW.fomvocwhzx"
, "rtDW.n0qtkktk4b" , "rtDW.iss5bo4bt1" , "rtDW.hwbnwagtqg" ,
"rtDW.n2hvy13sko" , "rtDW.b1zu5y4c1e" , "rtDW.bw5qeffbbw" , "rtDW.hu0lal024o"
, "rtDW.bifdt1dwkt" , "rtDW.avustsyiau" , "rtDW.b2jkiu5223" ,
"rtDW.plhevtqgqm" , "rtDW.ph55yq4rg2" , "rtDW.c435izcp3j" , "rtDW.ec3u5hsjjx"
, "rtDW.paxgd2l2yo" , "rtDW.dzezmfjqg2" , "rtDW.ebj5snmy5k" ,
"rtDW.ljrsfho0wx" , "rtDW.ccsmcmbqmb" , "rtDW.clnxzkzwul" , "rtDW.cw5iqh3ouk"
, "rtDW.ju4msksctk" , "rtDW.ioutqu0mzn" , "rtDW.ic5wrhkshl" ,
"rtDW.h1gscmcbjv" , "rtDW.io5vwqal1m" , "rtDW.anbsxboymw" , "rtDW.fadx5rbkb5"
, "rtDW.aurk3irgno" , "rtDW.efxiqqkwdi" , "rtDW.e2ochzlmai" ,
"rtDW.ojhqn5nj5v" , "rtDW.aae2rkk5zx" , "rtDW.llwxvtrg40" , "rtDW.pjruxozaqy"
, "rtDW.hurgr1gioy" , "rtDW.oztywmgwo0" , "rtDW.cfm1r3cml5" ,
"rtDW.jntluapbyr" , "rtDW.hishvdtdyh" , "rtDW.mmnksj2b0q" , "rtDW.jun1bqxvdu"
, "rtDW.h5vcx1hl24" , "rtDW.jjoe3tarlt" , "rtDW.j0xyivirlp" ,
"rtDW.h5n0zvxyf2" , "rtDW.k5iobck5su" , "rtDW.bi1cenloak" , "rtDW.nxkoaebnan"
, "rtDW.nofoaw1myc" , "rtDW.ijqkc2l1q2" , "rtDW.ozcr3kl5lj" ,
"rtDW.hamjs1juhq" , "rtDW.ki4dwjzmsy" , "rtDW.ggqlzk0dih" , "rtDW.bny0mcq4qa"
, "rtDW.f4zdfu1pt1" , "rtDW.hocsygpcrl" , "rtDW.cxgys2dwdy" ,
"rtDW.bmqmtm0dew" , "rtDW.e2qkfxuvdy.k3vf3gqtaf" ,
"rtDW.e2qkfxuvdy.lk3vufehxq" , "rtDW.l1ngv2u4wj.k3vf3gqtaf" ,
"rtDW.l1ngv2u4wj.lk3vufehxq" , "rtDW.apfzndjc5l.hbdm0crtqe" ,
"rtDW.apfzndjc5l.et0xhlvwqn" , "rtDW.osjj2s24tkm.k3vf3gqtaf" ,
"rtDW.osjj2s24tkm.lk3vufehxq" , "rtDW.htvvb3wiwks.hbdm0crtqe" ,
"rtDW.htvvb3wiwks.et0xhlvwqn" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.p1sl2m4kvt" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.jcrgjnicyz" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.ejzedrzuqd" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.exa4vdwbrv" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.bebqiw1dl1" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.oiwrxpxdcx" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.b3o452e4eu" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.hu5bc5mu3c" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.bsjeyglnik" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.ecmnwkv0b1" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.lmrevddxcj" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.ftesiynqap" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.lt4gid0hxl" ,
"rtDW.gjwrbmtmpz.c2pauqsk3t[0].e4olea1wzo.jgkvns5fgd" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.p1sl2m4kvt" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.jcrgjnicyz" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.ejzedrzuqd" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.exa4vdwbrv" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.bebqiw1dl1" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.oiwrxpxdcx" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.b3o452e4eu" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.hu5bc5mu3c" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.bsjeyglnik" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.ecmnwkv0b1" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.lmrevddxcj" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.ftesiynqap" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.lt4gid0hxl" ,
"rtDW.mxxvrdjd12.c2pauqsk3t[0].e4olea1wzo.jgkvns5fgd" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.p1sl2m4kvt" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.jcrgjnicyz" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.ejzedrzuqd" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.exa4vdwbrv" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.bebqiw1dl1" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.oiwrxpxdcx" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.b3o452e4eu" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.hu5bc5mu3c" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.bsjeyglnik" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.ecmnwkv0b1" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.lmrevddxcj" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.ftesiynqap" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.lt4gid0hxl" ,
"rtDW.cakr3inwfo.c2pauqsk3t[0].e4olea1wzo.jgkvns5fgd" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.p1sl2m4kvt" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.jcrgjnicyz" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.ejzedrzuqd" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.exa4vdwbrv" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.bebqiw1dl1" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.oiwrxpxdcx" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.b3o452e4eu" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.hu5bc5mu3c" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.bsjeyglnik" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.ecmnwkv0b1" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.lmrevddxcj" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.ftesiynqap" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.lt4gid0hxl" ,
"rtDW.noxrljyvsbq.c2pauqsk3t[0].e4olea1wzo.jgkvns5fgd" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 133 , rtdwDataFieldNames ) ; int k0
; mxSetFieldByNumber ( rtdwData , 0 , 77 , mxCreateUninitNumericMatrix ( 1 ,
1 * sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . p1sl2m4kvt )
, mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 78 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t
[ 0 ] . e4olea1wzo . jcrgjnicyz ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 79 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . ejzedrzuqd ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 80 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t
[ 0 ] . e4olea1wzo . exa4vdwbrv ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 81 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . bebqiw1dl1 ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 82 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t
[ 0 ] . e4olea1wzo . oiwrxpxdcx ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 83 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . b3o452e4eu ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 84 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t
[ 0 ] . e4olea1wzo . hu5bc5mu3c ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 85 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . bsjeyglnik ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 86 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t
[ 0 ] . e4olea1wzo . ecmnwkv0b1 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 87 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . lmrevddxcj ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 88 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t
[ 0 ] . e4olea1wzo . ftesiynqap ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 89 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . lt4gid0hxl ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 90 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t
[ 0 ] . e4olea1wzo . jgkvns5fgd ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 91 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . p1sl2m4kvt ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 92 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t
[ 0 ] . e4olea1wzo . jcrgjnicyz ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 93 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . ejzedrzuqd ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 94 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t
[ 0 ] . e4olea1wzo . exa4vdwbrv ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 95 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . bebqiw1dl1 ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 96 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t
[ 0 ] . e4olea1wzo . oiwrxpxdcx ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 97 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . b3o452e4eu ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 98 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t
[ 0 ] . e4olea1wzo . hu5bc5mu3c ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 99 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . bsjeyglnik ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 100 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t
[ 0 ] . e4olea1wzo . ecmnwkv0b1 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 101 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . lmrevddxcj ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 102 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t
[ 0 ] . e4olea1wzo . ftesiynqap ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 103 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . lt4gid0hxl ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 104 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t
[ 0 ] . e4olea1wzo . jgkvns5fgd ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 105 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . p1sl2m4kvt ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 106 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . cakr3inwfo . c2pauqsk3t
[ 0 ] . e4olea1wzo . jcrgjnicyz ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 107 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . ejzedrzuqd ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 108 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . cakr3inwfo . c2pauqsk3t
[ 0 ] . e4olea1wzo . exa4vdwbrv ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 109 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . bebqiw1dl1 ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 110 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . cakr3inwfo . c2pauqsk3t
[ 0 ] . e4olea1wzo . oiwrxpxdcx ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 111 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . b3o452e4eu ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 112 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . cakr3inwfo . c2pauqsk3t
[ 0 ] . e4olea1wzo . hu5bc5mu3c ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 113 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . bsjeyglnik ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 114 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . cakr3inwfo . c2pauqsk3t
[ 0 ] . e4olea1wzo . ecmnwkv0b1 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 115 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . lmrevddxcj ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 116 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . cakr3inwfo . c2pauqsk3t
[ 0 ] . e4olea1wzo . ftesiynqap ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 117 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . lt4gid0hxl ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 118 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . cakr3inwfo . c2pauqsk3t
[ 0 ] . e4olea1wzo . jgkvns5fgd ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 119 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . p1sl2m4kvt )
, mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 120 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . jcrgjnicyz ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 121 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . ejzedrzuqd )
, mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 122 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . exa4vdwbrv ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 123 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . bebqiw1dl1 )
, mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 124 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . oiwrxpxdcx ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 125 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . b3o452e4eu )
, mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 126 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . hu5bc5mu3c ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 127 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . bsjeyglnik )
, mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 128 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . ecmnwkv0b1 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 129 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . lmrevddxcj )
, mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 130 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . ftesiynqap ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 131 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . lt4gid0hxl )
, mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 132 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . jgkvns5fgd ) , mxUINT8_CLASS , mxREAL ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( rtDW . n4s3ahy5yb ) , sizeof ( rtDW . n4s3ahy5yb ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const
void * ) & ( rtDW . idqvj2pdci ) , sizeof ( rtDW . idqvj2pdci ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . knzjkvs1ph ) , sizeof ( rtDW . knzjkvs1ph ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const
void * ) & ( rtDW . if2nkbrvo2 ) , sizeof ( rtDW . if2nkbrvo2 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( rtDW . jitwfcjega ) , sizeof ( rtDW . jitwfcjega ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . copyj3c0zm ) , sizeof ( rtDW . copyj3c0zm ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( rtDW . fomvocwhzx ) , sizeof ( rtDW . fomvocwhzx ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( rtDW . n0qtkktk4b ) , sizeof ( rtDW . n0qtkktk4b ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . iss5bo4bt1 ) , sizeof ( rtDW . iss5bo4bt1 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const
void * ) & ( rtDW . hwbnwagtqg ) , sizeof ( rtDW . hwbnwagtqg ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( rtDW . n2hvy13sko ) , sizeof ( rtDW . n2hvy13sko ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . b1zu5y4c1e ) , sizeof ( rtDW . b1zu5y4c1e ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( rtDW . bw5qeffbbw ) , sizeof ( rtDW . bw5qeffbbw ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const
void * ) & ( rtDW . hu0lal024o ) , sizeof ( rtDW . hu0lal024o ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( rtDW . bifdt1dwkt ) , sizeof ( rtDW . bifdt1dwkt ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const
void * ) & ( rtDW . avustsyiau ) , sizeof ( rtDW . avustsyiau ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( rtDW . b2jkiu5223 ) , sizeof ( rtDW . b2jkiu5223 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( rtDW . plhevtqgqm ) , sizeof ( rtDW . plhevtqgqm ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( rtDW . ph55yq4rg2 ) , sizeof ( rtDW . ph55yq4rg2 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const
void * ) & ( rtDW . c435izcp3j ) , sizeof ( rtDW . c435izcp3j ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const
void * ) & ( rtDW . ec3u5hsjjx ) , sizeof ( rtDW . ec3u5hsjjx ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const
void * ) & ( rtDW . paxgd2l2yo ) , sizeof ( rtDW . paxgd2l2yo ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( rtDW . dzezmfjqg2 ) , sizeof ( rtDW . dzezmfjqg2 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const
void * ) & ( rtDW . ebj5snmy5k ) , sizeof ( rtDW . ebj5snmy5k ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( rtDW . ljrsfho0wx ) , sizeof ( rtDW . ljrsfho0wx ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const
void * ) & ( rtDW . ccsmcmbqmb ) , sizeof ( rtDW . ccsmcmbqmb ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const
void * ) & ( rtDW . clnxzkzwul ) , sizeof ( rtDW . clnxzkzwul ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const
void * ) & ( rtDW . cw5iqh3ouk ) , sizeof ( rtDW . cw5iqh3ouk ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const
void * ) & ( rtDW . ju4msksctk ) , sizeof ( rtDW . ju4msksctk ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const
void * ) & ( rtDW . ioutqu0mzn ) , sizeof ( rtDW . ioutqu0mzn ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const
void * ) & ( rtDW . ic5wrhkshl ) , sizeof ( rtDW . ic5wrhkshl ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const
void * ) & ( rtDW . h1gscmcbjv ) , sizeof ( rtDW . h1gscmcbjv ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const
void * ) & ( rtDW . io5vwqal1m ) , sizeof ( rtDW . io5vwqal1m ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const
void * ) & ( rtDW . anbsxboymw ) , sizeof ( rtDW . anbsxboymw ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const
void * ) & ( rtDW . fadx5rbkb5 ) , sizeof ( rtDW . fadx5rbkb5 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const
void * ) & ( rtDW . aurk3irgno ) , sizeof ( rtDW . aurk3irgno ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const
void * ) & ( rtDW . efxiqqkwdi ) , sizeof ( rtDW . efxiqqkwdi ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const
void * ) & ( rtDW . e2ochzlmai ) , sizeof ( rtDW . e2ochzlmai ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const
void * ) & ( rtDW . ojhqn5nj5v ) , sizeof ( rtDW . ojhqn5nj5v ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const
void * ) & ( rtDW . aae2rkk5zx ) , sizeof ( rtDW . aae2rkk5zx ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const
void * ) & ( rtDW . llwxvtrg40 ) , sizeof ( rtDW . llwxvtrg40 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const
void * ) & ( rtDW . pjruxozaqy ) , sizeof ( rtDW . pjruxozaqy ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const
void * ) & ( rtDW . hurgr1gioy ) , sizeof ( rtDW . hurgr1gioy ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const
void * ) & ( rtDW . oztywmgwo0 ) , sizeof ( rtDW . oztywmgwo0 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const
void * ) & ( rtDW . cfm1r3cml5 ) , sizeof ( rtDW . cfm1r3cml5 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const
void * ) & ( rtDW . jntluapbyr ) , sizeof ( rtDW . jntluapbyr ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const
void * ) & ( rtDW . hishvdtdyh ) , sizeof ( rtDW . hishvdtdyh ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const
void * ) & ( rtDW . mmnksj2b0q ) , sizeof ( rtDW . mmnksj2b0q ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const
void * ) & ( rtDW . jun1bqxvdu ) , sizeof ( rtDW . jun1bqxvdu ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const
void * ) & ( rtDW . h5vcx1hl24 ) , sizeof ( rtDW . h5vcx1hl24 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const
void * ) & ( rtDW . jjoe3tarlt ) , sizeof ( rtDW . jjoe3tarlt ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const
void * ) & ( rtDW . j0xyivirlp ) , sizeof ( rtDW . j0xyivirlp ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const
void * ) & ( rtDW . h5n0zvxyf2 ) , sizeof ( rtDW . h5n0zvxyf2 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const
void * ) & ( rtDW . k5iobck5su ) , sizeof ( rtDW . k5iobck5su ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const
void * ) & ( rtDW . bi1cenloak ) , sizeof ( rtDW . bi1cenloak ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const
void * ) & ( rtDW . nxkoaebnan ) , sizeof ( rtDW . nxkoaebnan ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const
void * ) & ( rtDW . nofoaw1myc ) , sizeof ( rtDW . nofoaw1myc ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const
void * ) & ( rtDW . ijqkc2l1q2 ) , sizeof ( rtDW . ijqkc2l1q2 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const
void * ) & ( rtDW . ozcr3kl5lj ) , sizeof ( rtDW . ozcr3kl5lj ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const
void * ) & ( rtDW . hamjs1juhq ) , sizeof ( rtDW . hamjs1juhq ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const
void * ) & ( rtDW . ki4dwjzmsy ) , sizeof ( rtDW . ki4dwjzmsy ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const
void * ) & ( rtDW . ggqlzk0dih ) , sizeof ( rtDW . ggqlzk0dih ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const
void * ) & ( rtDW . bny0mcq4qa ) , sizeof ( rtDW . bny0mcq4qa ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const
void * ) & ( rtDW . f4zdfu1pt1 ) , sizeof ( rtDW . f4zdfu1pt1 ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const
void * ) & ( rtDW . hocsygpcrl ) , sizeof ( rtDW . hocsygpcrl ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const
void * ) & ( rtDW . cxgys2dwdy ) , sizeof ( rtDW . cxgys2dwdy ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const
void * ) & ( rtDW . bmqmtm0dew ) , sizeof ( rtDW . bmqmtm0dew ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const
void * ) & ( rtDW . e2qkfxuvdy . k3vf3gqtaf ) , sizeof ( rtDW . e2qkfxuvdy .
k3vf3gqtaf ) ) ; mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData ,
0 , 68 , ( const void * ) & ( rtDW . e2qkfxuvdy . lk3vufehxq ) , sizeof (
rtDW . e2qkfxuvdy . lk3vufehxq ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const
void * ) & ( rtDW . l1ngv2u4wj . k3vf3gqtaf ) , sizeof ( rtDW . l1ngv2u4wj .
k3vf3gqtaf ) ) ; mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData ,
0 , 70 , ( const void * ) & ( rtDW . l1ngv2u4wj . lk3vufehxq ) , sizeof (
rtDW . l1ngv2u4wj . lk3vufehxq ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const
void * ) & ( rtDW . apfzndjc5l . hbdm0crtqe ) , sizeof ( rtDW . apfzndjc5l .
hbdm0crtqe ) ) ; mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData ,
0 , 72 , ( const void * ) & ( rtDW . apfzndjc5l . et0xhlvwqn ) , sizeof (
rtDW . apfzndjc5l . et0xhlvwqn ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const
void * ) & ( rtDW . osjj2s24tkm . k3vf3gqtaf ) , sizeof ( rtDW . osjj2s24tkm
. k3vf3gqtaf ) ) ; mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData
, 0 , 74 , ( const void * ) & ( rtDW . osjj2s24tkm . lk3vufehxq ) , sizeof (
rtDW . osjj2s24tkm . lk3vufehxq ) ) ;
mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const
void * ) & ( rtDW . htvvb3wiwks . hbdm0crtqe ) , sizeof ( rtDW . htvvb3wiwks
. hbdm0crtqe ) ) ; mr_ContoleLateralApplication_cacheDataAsMxArray ( rtdwData
, 0 , 76 , ( const void * ) & ( rtDW . htvvb3wiwks . et0xhlvwqn ) , sizeof (
rtDW . htvvb3wiwks . et0xhlvwqn ) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 77
, offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo .
p1sl2m4kvt ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
p1sl2m4kvt ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 78 , offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] .
e4olea1wzo . jcrgjnicyz ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] .
e4olea1wzo . jcrgjnicyz ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 79
, offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo .
ejzedrzuqd ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
ejzedrzuqd ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 80 , offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] .
e4olea1wzo . exa4vdwbrv ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] .
e4olea1wzo . exa4vdwbrv ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 81
, offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo .
bebqiw1dl1 ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
bebqiw1dl1 ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 82 , offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] .
e4olea1wzo . oiwrxpxdcx ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] .
e4olea1wzo . oiwrxpxdcx ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 83
, offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo .
b3o452e4eu ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 84 , offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] .
e4olea1wzo . hu5bc5mu3c ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] .
e4olea1wzo . hu5bc5mu3c ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 85
, offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo .
bsjeyglnik ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 86 , offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] .
e4olea1wzo . ecmnwkv0b1 ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] .
e4olea1wzo . ecmnwkv0b1 ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 87
, offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo .
lmrevddxcj ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 88 , offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] .
e4olea1wzo . ftesiynqap ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] .
e4olea1wzo . ftesiynqap ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 89
, offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo .
lt4gid0hxl ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 90 , offset0 , & ( rtDW . gjwrbmtmpz . c2pauqsk3t [ k0 ] .
e4olea1wzo . jgkvns5fgd ) , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] .
e4olea1wzo . jgkvns5fgd ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 91
, offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo .
p1sl2m4kvt ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
p1sl2m4kvt ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 92 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] .
e4olea1wzo . jcrgjnicyz ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] .
e4olea1wzo . jcrgjnicyz ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 93
, offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo .
ejzedrzuqd ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
ejzedrzuqd ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 94 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] .
e4olea1wzo . exa4vdwbrv ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] .
e4olea1wzo . exa4vdwbrv ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 95
, offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo .
bebqiw1dl1 ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
bebqiw1dl1 ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 96 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] .
e4olea1wzo . oiwrxpxdcx ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] .
e4olea1wzo . oiwrxpxdcx ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 97
, offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo .
b3o452e4eu ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 98 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] .
e4olea1wzo . hu5bc5mu3c ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] .
e4olea1wzo . hu5bc5mu3c ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 99
, offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo .
bsjeyglnik ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 100 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] .
e4olea1wzo . ecmnwkv0b1 ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] .
e4olea1wzo . ecmnwkv0b1 ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
101 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo .
lmrevddxcj ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 102 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] .
e4olea1wzo . ftesiynqap ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] .
e4olea1wzo . ftesiynqap ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
103 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo .
lt4gid0hxl ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 104 , offset0 , & ( rtDW . mxxvrdjd12 . c2pauqsk3t [ k0 ] .
e4olea1wzo . jgkvns5fgd ) , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] .
e4olea1wzo . jgkvns5fgd ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
105 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo .
p1sl2m4kvt ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
p1sl2m4kvt ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 106 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] .
e4olea1wzo . jcrgjnicyz ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . jcrgjnicyz ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
107 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo .
ejzedrzuqd ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
ejzedrzuqd ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 108 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] .
e4olea1wzo . exa4vdwbrv ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . exa4vdwbrv ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
109 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo .
bebqiw1dl1 ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
bebqiw1dl1 ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 110 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] .
e4olea1wzo . oiwrxpxdcx ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . oiwrxpxdcx ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
111 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo .
b3o452e4eu ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 112 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] .
e4olea1wzo . hu5bc5mu3c ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . hu5bc5mu3c ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
113 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo .
bsjeyglnik ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 114 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] .
e4olea1wzo . ecmnwkv0b1 ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . ecmnwkv0b1 ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
115 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo .
lmrevddxcj ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 116 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] .
e4olea1wzo . ftesiynqap ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . ftesiynqap ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
117 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo .
lt4gid0hxl ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 118 , offset0 , & ( rtDW . cakr3inwfo . c2pauqsk3t [ k0 ] .
e4olea1wzo . jgkvns5fgd ) , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . jgkvns5fgd ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
119 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo .
p1sl2m4kvt ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
p1sl2m4kvt ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 120 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] .
e4olea1wzo . jcrgjnicyz ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] .
e4olea1wzo . jcrgjnicyz ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
121 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo .
ejzedrzuqd ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
ejzedrzuqd ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 122 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] .
e4olea1wzo . exa4vdwbrv ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] .
e4olea1wzo . exa4vdwbrv ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
123 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo .
bebqiw1dl1 ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
bebqiw1dl1 ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 124 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] .
e4olea1wzo . oiwrxpxdcx ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] .
e4olea1wzo . oiwrxpxdcx ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
125 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo .
b3o452e4eu ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 126 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] .
e4olea1wzo . hu5bc5mu3c ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] .
e4olea1wzo . hu5bc5mu3c ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
127 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo .
bsjeyglnik ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 128 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] .
e4olea1wzo . ecmnwkv0b1 ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] .
e4olea1wzo . ecmnwkv0b1 ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
129 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo .
lmrevddxcj ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 130 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] .
e4olea1wzo . ftesiynqap ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] .
e4olea1wzo . ftesiynqap ) ) ;
mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
131 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo .
lt4gid0hxl ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) ) ; mr_ContoleLateralApplication_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 132 , offset0 , & ( rtDW . noxrljyvsbq . c2pauqsk3t [ k0 ] .
e4olea1wzo . jgkvns5fgd ) , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] .
e4olea1wzo . jgkvns5fgd ) ) ; } mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } mr_ContoleLateralApplication_cacheDataAsMxArray ( ssDW , 0 , 2 , (
const void * ) & ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; }
void mr_ContoleLateralApplication_SetDWork ( const mxArray * ssDW ) { ( void
) ssDW ; mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & (
rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
n4s3ahy5yb ) , rtdwData , 0 , 0 , sizeof ( rtDW . n4s3ahy5yb ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
idqvj2pdci ) , rtdwData , 0 , 1 , sizeof ( rtDW . idqvj2pdci ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
knzjkvs1ph ) , rtdwData , 0 , 2 , sizeof ( rtDW . knzjkvs1ph ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
if2nkbrvo2 ) , rtdwData , 0 , 3 , sizeof ( rtDW . if2nkbrvo2 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jitwfcjega ) , rtdwData , 0 , 4 , sizeof ( rtDW . jitwfcjega ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
copyj3c0zm ) , rtdwData , 0 , 5 , sizeof ( rtDW . copyj3c0zm ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fomvocwhzx ) , rtdwData , 0 , 6 , sizeof ( rtDW . fomvocwhzx ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
n0qtkktk4b ) , rtdwData , 0 , 7 , sizeof ( rtDW . n0qtkktk4b ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iss5bo4bt1 ) , rtdwData , 0 , 8 , sizeof ( rtDW . iss5bo4bt1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hwbnwagtqg ) , rtdwData , 0 , 9 , sizeof ( rtDW . hwbnwagtqg ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
n2hvy13sko ) , rtdwData , 0 , 10 , sizeof ( rtDW . n2hvy13sko ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b1zu5y4c1e ) , rtdwData , 0 , 11 , sizeof ( rtDW . b1zu5y4c1e ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bw5qeffbbw ) , rtdwData , 0 , 12 , sizeof ( rtDW . bw5qeffbbw ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hu0lal024o ) , rtdwData , 0 , 13 , sizeof ( rtDW . hu0lal024o ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bifdt1dwkt ) , rtdwData , 0 , 14 , sizeof ( rtDW . bifdt1dwkt ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
avustsyiau ) , rtdwData , 0 , 15 , sizeof ( rtDW . avustsyiau ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b2jkiu5223 ) , rtdwData , 0 , 16 , sizeof ( rtDW . b2jkiu5223 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
plhevtqgqm ) , rtdwData , 0 , 17 , sizeof ( rtDW . plhevtqgqm ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ph55yq4rg2 ) , rtdwData , 0 , 18 , sizeof ( rtDW . ph55yq4rg2 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c435izcp3j ) , rtdwData , 0 , 19 , sizeof ( rtDW . c435izcp3j ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ec3u5hsjjx ) , rtdwData , 0 , 20 , sizeof ( rtDW . ec3u5hsjjx ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
paxgd2l2yo ) , rtdwData , 0 , 21 , sizeof ( rtDW . paxgd2l2yo ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dzezmfjqg2 ) , rtdwData , 0 , 22 , sizeof ( rtDW . dzezmfjqg2 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ebj5snmy5k ) , rtdwData , 0 , 23 , sizeof ( rtDW . ebj5snmy5k ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ljrsfho0wx ) , rtdwData , 0 , 24 , sizeof ( rtDW . ljrsfho0wx ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ccsmcmbqmb ) , rtdwData , 0 , 25 , sizeof ( rtDW . ccsmcmbqmb ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
clnxzkzwul ) , rtdwData , 0 , 26 , sizeof ( rtDW . clnxzkzwul ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cw5iqh3ouk ) , rtdwData , 0 , 27 , sizeof ( rtDW . cw5iqh3ouk ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ju4msksctk ) , rtdwData , 0 , 28 , sizeof ( rtDW . ju4msksctk ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ioutqu0mzn ) , rtdwData , 0 , 29 , sizeof ( rtDW . ioutqu0mzn ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ic5wrhkshl ) , rtdwData , 0 , 30 , sizeof ( rtDW . ic5wrhkshl ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h1gscmcbjv ) , rtdwData , 0 , 31 , sizeof ( rtDW . h1gscmcbjv ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
io5vwqal1m ) , rtdwData , 0 , 32 , sizeof ( rtDW . io5vwqal1m ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
anbsxboymw ) , rtdwData , 0 , 33 , sizeof ( rtDW . anbsxboymw ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fadx5rbkb5 ) , rtdwData , 0 , 34 , sizeof ( rtDW . fadx5rbkb5 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aurk3irgno ) , rtdwData , 0 , 35 , sizeof ( rtDW . aurk3irgno ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
efxiqqkwdi ) , rtdwData , 0 , 36 , sizeof ( rtDW . efxiqqkwdi ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e2ochzlmai ) , rtdwData , 0 , 37 , sizeof ( rtDW . e2ochzlmai ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ojhqn5nj5v ) , rtdwData , 0 , 38 , sizeof ( rtDW . ojhqn5nj5v ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aae2rkk5zx ) , rtdwData , 0 , 39 , sizeof ( rtDW . aae2rkk5zx ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
llwxvtrg40 ) , rtdwData , 0 , 40 , sizeof ( rtDW . llwxvtrg40 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pjruxozaqy ) , rtdwData , 0 , 41 , sizeof ( rtDW . pjruxozaqy ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hurgr1gioy ) , rtdwData , 0 , 42 , sizeof ( rtDW . hurgr1gioy ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
oztywmgwo0 ) , rtdwData , 0 , 43 , sizeof ( rtDW . oztywmgwo0 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cfm1r3cml5 ) , rtdwData , 0 , 44 , sizeof ( rtDW . cfm1r3cml5 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jntluapbyr ) , rtdwData , 0 , 45 , sizeof ( rtDW . jntluapbyr ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hishvdtdyh ) , rtdwData , 0 , 46 , sizeof ( rtDW . hishvdtdyh ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mmnksj2b0q ) , rtdwData , 0 , 47 , sizeof ( rtDW . mmnksj2b0q ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jun1bqxvdu ) , rtdwData , 0 , 48 , sizeof ( rtDW . jun1bqxvdu ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h5vcx1hl24 ) , rtdwData , 0 , 49 , sizeof ( rtDW . h5vcx1hl24 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jjoe3tarlt ) , rtdwData , 0 , 50 , sizeof ( rtDW . jjoe3tarlt ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j0xyivirlp ) , rtdwData , 0 , 51 , sizeof ( rtDW . j0xyivirlp ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
h5n0zvxyf2 ) , rtdwData , 0 , 52 , sizeof ( rtDW . h5n0zvxyf2 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
k5iobck5su ) , rtdwData , 0 , 53 , sizeof ( rtDW . k5iobck5su ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bi1cenloak ) , rtdwData , 0 , 54 , sizeof ( rtDW . bi1cenloak ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nxkoaebnan ) , rtdwData , 0 , 55 , sizeof ( rtDW . nxkoaebnan ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nofoaw1myc ) , rtdwData , 0 , 56 , sizeof ( rtDW . nofoaw1myc ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ijqkc2l1q2 ) , rtdwData , 0 , 57 , sizeof ( rtDW . ijqkc2l1q2 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ozcr3kl5lj ) , rtdwData , 0 , 58 , sizeof ( rtDW . ozcr3kl5lj ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hamjs1juhq ) , rtdwData , 0 , 59 , sizeof ( rtDW . hamjs1juhq ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ki4dwjzmsy ) , rtdwData , 0 , 60 , sizeof ( rtDW . ki4dwjzmsy ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ggqlzk0dih ) , rtdwData , 0 , 61 , sizeof ( rtDW . ggqlzk0dih ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bny0mcq4qa ) , rtdwData , 0 , 62 , sizeof ( rtDW . bny0mcq4qa ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
f4zdfu1pt1 ) , rtdwData , 0 , 63 , sizeof ( rtDW . f4zdfu1pt1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hocsygpcrl ) , rtdwData , 0 , 64 , sizeof ( rtDW . hocsygpcrl ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cxgys2dwdy ) , rtdwData , 0 , 65 , sizeof ( rtDW . cxgys2dwdy ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bmqmtm0dew ) , rtdwData , 0 , 66 , sizeof ( rtDW . bmqmtm0dew ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e2qkfxuvdy . k3vf3gqtaf ) , rtdwData , 0 , 67 , sizeof ( rtDW . e2qkfxuvdy .
k3vf3gqtaf ) ) ; mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void
* ) & ( rtDW . e2qkfxuvdy . lk3vufehxq ) , rtdwData , 0 , 68 , sizeof ( rtDW
. e2qkfxuvdy . lk3vufehxq ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l1ngv2u4wj . k3vf3gqtaf ) , rtdwData , 0 , 69 , sizeof ( rtDW . l1ngv2u4wj .
k3vf3gqtaf ) ) ; mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void
* ) & ( rtDW . l1ngv2u4wj . lk3vufehxq ) , rtdwData , 0 , 70 , sizeof ( rtDW
. l1ngv2u4wj . lk3vufehxq ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
apfzndjc5l . hbdm0crtqe ) , rtdwData , 0 , 71 , sizeof ( rtDW . apfzndjc5l .
hbdm0crtqe ) ) ; mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void
* ) & ( rtDW . apfzndjc5l . et0xhlvwqn ) , rtdwData , 0 , 72 , sizeof ( rtDW
. apfzndjc5l . et0xhlvwqn ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
osjj2s24tkm . k3vf3gqtaf ) , rtdwData , 0 , 73 , sizeof ( rtDW . osjj2s24tkm
. k3vf3gqtaf ) ) ; mr_ContoleLateralApplication_restoreDataFromMxArray ( (
void * ) & ( rtDW . osjj2s24tkm . lk3vufehxq ) , rtdwData , 0 , 74 , sizeof (
rtDW . osjj2s24tkm . lk3vufehxq ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArray ( ( void * ) & ( rtDW .
htvvb3wiwks . hbdm0crtqe ) , rtdwData , 0 , 75 , sizeof ( rtDW . htvvb3wiwks
. hbdm0crtqe ) ) ; mr_ContoleLateralApplication_restoreDataFromMxArray ( (
void * ) & ( rtDW . htvvb3wiwks . et0xhlvwqn ) , rtdwData , 0 , 76 , sizeof (
rtDW . htvvb3wiwks . et0xhlvwqn ) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . p1sl2m4kvt ) , rtdwData , 0 ,
77 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
p1sl2m4kvt ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . jcrgjnicyz ) , rtdwData , 0 ,
78 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
jcrgjnicyz ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . ejzedrzuqd ) , rtdwData , 0 ,
79 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
ejzedrzuqd ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . exa4vdwbrv ) , rtdwData , 0 ,
80 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
exa4vdwbrv ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . bebqiw1dl1 ) , rtdwData , 0 ,
81 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
bebqiw1dl1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . oiwrxpxdcx ) , rtdwData , 0 ,
82 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
oiwrxpxdcx ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . b3o452e4eu ) , rtdwData , 0 ,
83 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . hu5bc5mu3c ) , rtdwData , 0 ,
84 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
hu5bc5mu3c ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . bsjeyglnik ) , rtdwData , 0 ,
85 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . ecmnwkv0b1 ) , rtdwData , 0 ,
86 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
ecmnwkv0b1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . lmrevddxcj ) , rtdwData , 0 ,
87 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . ftesiynqap ) , rtdwData , 0 ,
88 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
ftesiynqap ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . lt4gid0hxl ) , rtdwData , 0 ,
89 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
gjwrbmtmpz . c2pauqsk3t [ k0 ] . e4olea1wzo . jgkvns5fgd ) , rtdwData , 0 ,
90 , offset0 , sizeof ( rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
jgkvns5fgd ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 =
k0 ; mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW
. mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . p1sl2m4kvt ) , rtdwData , 0 ,
91 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
p1sl2m4kvt ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . jcrgjnicyz ) , rtdwData , 0 ,
92 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
jcrgjnicyz ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . ejzedrzuqd ) , rtdwData , 0 ,
93 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
ejzedrzuqd ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . exa4vdwbrv ) , rtdwData , 0 ,
94 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
exa4vdwbrv ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . bebqiw1dl1 ) , rtdwData , 0 ,
95 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
bebqiw1dl1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . oiwrxpxdcx ) , rtdwData , 0 ,
96 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
oiwrxpxdcx ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . b3o452e4eu ) , rtdwData , 0 ,
97 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . hu5bc5mu3c ) , rtdwData , 0 ,
98 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
hu5bc5mu3c ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . bsjeyglnik ) , rtdwData , 0 ,
99 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . ecmnwkv0b1 ) , rtdwData , 0 ,
100 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
ecmnwkv0b1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . lmrevddxcj ) , rtdwData , 0 ,
101 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . ftesiynqap ) , rtdwData , 0 ,
102 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
ftesiynqap ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . lt4gid0hxl ) , rtdwData , 0 ,
103 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
mxxvrdjd12 . c2pauqsk3t [ k0 ] . e4olea1wzo . jgkvns5fgd ) , rtdwData , 0 ,
104 , offset0 , sizeof ( rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
jgkvns5fgd ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 =
k0 ; mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW
. cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . p1sl2m4kvt ) , rtdwData , 0 ,
105 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
p1sl2m4kvt ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . jcrgjnicyz ) , rtdwData , 0 ,
106 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
jcrgjnicyz ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . ejzedrzuqd ) , rtdwData , 0 ,
107 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
ejzedrzuqd ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . exa4vdwbrv ) , rtdwData , 0 ,
108 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
exa4vdwbrv ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . bebqiw1dl1 ) , rtdwData , 0 ,
109 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
bebqiw1dl1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . oiwrxpxdcx ) , rtdwData , 0 ,
110 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
oiwrxpxdcx ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . b3o452e4eu ) , rtdwData , 0 ,
111 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . hu5bc5mu3c ) , rtdwData , 0 ,
112 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
hu5bc5mu3c ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . bsjeyglnik ) , rtdwData , 0 ,
113 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . ecmnwkv0b1 ) , rtdwData , 0 ,
114 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
ecmnwkv0b1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . lmrevddxcj ) , rtdwData , 0 ,
115 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . ftesiynqap ) , rtdwData , 0 ,
116 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
ftesiynqap ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . lt4gid0hxl ) , rtdwData , 0 ,
117 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
cakr3inwfo . c2pauqsk3t [ k0 ] . e4olea1wzo . jgkvns5fgd ) , rtdwData , 0 ,
118 , offset0 , sizeof ( rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
jgkvns5fgd ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 =
k0 ; mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW
. noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . p1sl2m4kvt ) , rtdwData , 0
, 119 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo
. p1sl2m4kvt ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . jcrgjnicyz ) , rtdwData , 0 ,
120 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
jcrgjnicyz ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . ejzedrzuqd ) , rtdwData , 0 ,
121 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
ejzedrzuqd ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . exa4vdwbrv ) , rtdwData , 0 ,
122 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
exa4vdwbrv ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . bebqiw1dl1 ) , rtdwData , 0 ,
123 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
bebqiw1dl1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . oiwrxpxdcx ) , rtdwData , 0 ,
124 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
oiwrxpxdcx ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . b3o452e4eu ) , rtdwData , 0 ,
125 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . hu5bc5mu3c ) , rtdwData , 0 ,
126 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
hu5bc5mu3c ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . bsjeyglnik ) , rtdwData , 0 ,
127 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . ecmnwkv0b1 ) , rtdwData , 0 ,
128 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
ecmnwkv0b1 ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . lmrevddxcj ) , rtdwData , 0 ,
129 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . ftesiynqap ) , rtdwData , 0 ,
130 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
ftesiynqap ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . lt4gid0hxl ) , rtdwData , 0 ,
131 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) ) ;
mr_ContoleLateralApplication_restoreDataFromMxArrayWithOffset ( & ( rtDW .
noxrljyvsbq . c2pauqsk3t [ k0 ] . e4olea1wzo . jgkvns5fgd ) , rtdwData , 0 ,
132 , offset0 , sizeof ( rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
jgkvns5fgd ) ) ; } } mr_ContoleLateralApplication_restoreDataFromMxArray ( (
void * ) & ( rtPrevZCX ) , ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; } mxArray
* mr_ContoleLateralApplication_GetSimStateDisallowedBlocks ( ) { mxArray *
data = mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static
const char * blockType [ 10 ] = { "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static const
char * blockPath [ 10 ] = { "ContoleLateralApplication/Accelerometer" ,
"ContoleLateralApplication/Gyroscope" , "ContoleLateralApplication/Scope" ,
"ContoleLateralApplication/Scope1" , "ContoleLateralApplication/Scope10" ,
"ContoleLateralApplication/Scope11" , "ContoleLateralApplication/Scope12" ,
"ContoleLateralApplication/Scope13" , "ContoleLateralApplication/Scope14" ,
"ContoleLateralApplication/Scope15" , } ; static const int reason [ 10 ] = {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ]
< 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript
( data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType
[ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data ,
2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [
0 ] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs
) ; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [
subs [ 0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 53 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 1363 ) ;
ssSetNumBlockIO ( rtS , 495 ) ; ssSetNumBlockParams ( rtS , 990 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.1 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1994083296U ) ; ssSetChecksumVal ( rtS , 1 ,
3386305887U ) ; ssSetChecksumVal ( rtS , 2 , 460212317U ) ; ssSetChecksumVal
( rtS , 3 , 3911252674U ) ; }
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
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 26 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
ContoleLateralApplication_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"ContoleLateralApplication" ) ; ssSetPath ( rtS , "ContoleLateralApplication"
) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 16.0 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL
) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 6 , 4 , 2 , 4 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 6 ,
2 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 1 , 4 , 3 , 1 , 1 } ; static
int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
} ; static int_T rt_LoggedStateDimensions [ ] = { 6 , 4 , 2 , 4 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 6 , 2 , 1 , 1 , 2 , 1 , 1 , 1 , 1 , 1 , 2 , 1 , 1 , 1 , 4 , 3
, 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] =
{ SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "DSTATE" , "DSTATE" , "DSTATE" }
; static const char_T * rt_LoggedStateBlockNames [ ] = {
 "ContoleLateralApplication/Three-axis Inertial\nMeasurement Unit/Three-axis Accelerometer/Dynamics/Second-order Dynamics/Integrator,\nSecond-Order\nLimited"
,
 "ContoleLateralApplication/Vehicle Body 3DOF Dual Track/state/xdot int/Integrator"
,
 "ContoleLateralApplication/Vehicle Body 3DOF Dual Track/Signal Routing/Signal Routing Dual/state2bus/Integrator"
,
 "ContoleLateralApplication/Velocity and Vertical Load/Dual/Dual Fz/Cont LPF/Integrator1"
, "ContoleLateralApplication/Engine Response/Integrator1" ,
"ContoleLateralApplication/Engine Response1/Integrator1" ,
 "ContoleLateralApplication/Tires/Longitudinal Wheel - Disk Brake/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
,
 "ContoleLateralApplication/Tires/Longitudinal Wheel - Disk Brake1/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
,
 "ContoleLateralApplication/Tires/Longitudinal Wheel - Disk Brake2/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
,
 "ContoleLateralApplication/Tires/Longitudinal Wheel - Disk Brake3/Wheel Module/relaxation/Cont LPF Dyn/Integrator"
, "ContoleLateralApplication/Integrator1" ,
 "ContoleLateralApplication/Three-axis Inertial\nMeasurement Unit/Three-axis Gyroscope/Dynamics/Second-order Dynamics/Integrator,\nSecond-Order\nLimited"
, "ContoleLateralApplication/Transfer Fcn \nFiltro Volante" ,
"ContoleLateralApplication/PID Controller/Integrator/Continuous/Integrator" ,
"ContoleLateralApplication/PID Controller1/Integrator/Continuous/Integrator"
, "ContoleLateralApplication/Transfer Fcn \nFiltro APPS" ,
 "ContoleLateralApplication/Predictive Driver1/Control/Decoupled/Longitudinal Control/Scalar/Accel Override/Cont LPF/Integrator1"
,
"ContoleLateralApplication/Electronic Throttle\nActuator Dynamics/Integrator1"
,
 "ContoleLateralApplication/Mapped Left\nMotor\n/Mapped Motor Core Speed 3/Tabulated Torque-speed Envelope/Integrator"
,
 "ContoleLateralApplication/Mapped Right \nMotor /Mapped Motor Core Speed 3/Tabulated Torque-speed Envelope/Integrator"
,
 "ContoleLateralApplication/Predictive Driver1/Control/Decoupled/LPF/LPF/Error LPF/Integrator"
,
 "ContoleLateralApplication/Predictive Driver1/Control/Decoupled/Lateral Control/Stanley Kinematic/Lateral Driver/LateralType/Stanley/Bus Routing/Error Metrics/Integrator"
,
 "ContoleLateralApplication/Predictive Driver1/Control/Decoupled/Longitudinal Control/Scalar/Integrator1"
,
 "ContoleLateralApplication/Predictive Driver1/Control/Decoupled/Longitudinal Control/Scalar/Deccel Override/Cont LPF/Integrator1"
,
"ContoleLateralApplication/Predictive Driver1/Routing/Error Metrics/Integrator2"
,
 "ContoleLateralApplication/Vehicle Body 3DOF Dual Track/sigma/sigma dual/relaxation/lateral"
,
 "ContoleLateralApplication/Reference Generator/Reference Generator/Constant Radius/Constant Radius/Unit Delay"
,
 "ContoleLateralApplication/Predictive Driver1/Control/Decoupled/Lateral Control/Stanley Kinematic/Lateral Driver/LateralType/Stanley/UnwrapFdbk/Function-Call\nSubsystem/Unit Delay"
,
 "ContoleLateralApplication/Predictive Driver1/Control/Decoupled/Lateral Control/Stanley Kinematic/Lateral Driver/LateralType/Stanley/KinematicSteerCmd/UnwrapRef/Function-Call\nSubsystem/Unit Delay"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" , "" ,
"" , "" , "" , "" , "" , "" , "DSTATE" , "DSTATE" , "DSTATE" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 } ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 ,
22 , 23 , 24 , 25 , 0 , 167 , 171 } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 29 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 29 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ew1hskbqsh [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . nvdrj2cjnk [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . jdftreuorv [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . ecgpmufv2h [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . gaamg4vtxr ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . jecjxd3eom ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . nfusnuz14b ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . bmw50ts5q4 ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . p2fru1tfkf ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . kqdff1w3rv ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . klntojgsev ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . dmhixvg5dr [ 0 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . kr5v2kihrz [ 0 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . a2uhtc4qab ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . pxjrlp0doi ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . kkmmegedxf [ 0 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . ddoib4fzt3 ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . ogw3fpytzv ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . ey4qfao5lu ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . kf1ocexm5v ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . cehthaubuh ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . lx1mpujr22 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . dztonrd310 ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . efvbjs3y34 ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . egw32dj1nn ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . pdm1gqxnsc [ 0 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) rtDW . n4s3ahy5yb ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtDW . apfzndjc5l . hbdm0crtqe
; rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtDW . htvvb3wiwks .
hbdm0crtqe ; } rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX
( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS )
, "" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
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
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 53 ] ;
static real_T absTol [ 53 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ;
static uint8_T absTolControl [ 53 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ;
static real_T contStateJacPerturbBoundMinVec [ 53 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 53 ] ; static uint8_T zcAttributes [ 37 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) ,
( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL ) , ( 0xc0 |
ZC_EVENT_ALL_UP ) , ( 0xc0 | ZC_EVENT_ALL_UP ) } ; static uint8_T zcEvents [
37 ] = { ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_DN ) , (
0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , (
ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 13 ] = { { 1 * sizeof ( real_T )
, ( char * ) ( & rtB . gw5a22y1wf ) , ( NULL ) } , { 1 * sizeof ( real_T ) ,
( char * ) ( & rtB . opwc2ep2yl ) , ( NULL ) } , { 3 * sizeof ( real_T ) , (
char * ) ( & rtB . j25w0xwyrm [ 0 ] ) , ( NULL ) } , { 1 * sizeof ( boolean_T
) , ( char * ) ( & rtB . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
gri1hwems4 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , ( char * ) ( & rtB .
gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . ocqpah2hh5 ) , ( NULL ) } , { 1
* sizeof ( boolean_T ) , ( char * ) ( & rtB . mxxvrdjd12 . c2pauqsk3t [ 0 ] .
e4olea1wzo . gri1hwems4 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , ( char
* ) ( & rtB . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . ocqpah2hh5 ) , (
NULL ) } , { 1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . cakr3inwfo .
c2pauqsk3t [ 0 ] . e4olea1wzo . gri1hwems4 ) , ( NULL ) } , { 1 * sizeof (
boolean_T ) , ( char * ) ( & rtB . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo
. ocqpah2hh5 ) , ( NULL ) } , { 1 * sizeof ( boolean_T ) , ( char * ) ( & rtB
. noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . gri1hwems4 ) , ( NULL ) } , {
1 * sizeof ( boolean_T ) , ( char * ) ( & rtB . noxrljyvsbq . c2pauqsk3t [ 0
] . e4olea1wzo . ocqpah2hh5 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char
* ) ( & rtB . apfzndjc5l . p1utvufnvy ) , ( NULL ) } , { 1 * sizeof ( real_T
) , ( char * ) ( & rtB . htvvb3wiwks . p1utvufnvy ) , ( NULL ) } } ; { int i
; for ( i = 0 ; i < 53 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.1 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 1 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
13 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode23tb" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 1 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
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
ssSetSolverZcEventsVector ( rtS , zcEvents ) ; ssSetSolverNumZcSignals ( rtS
, 37 ) ; ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 0 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ; ssSetSolverZcThreshold ( rtS ,
0.001 ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 35 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; } {
ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS ,
zc ) ; } { rtPrevZCX . apfzndjc5l . b3ysuqtd44 = POS_ZCSIG ; rtPrevZCX .
htvvb3wiwks . b3ysuqtd44 = POS_ZCSIG ; } ssSetChecksumVal ( rtS , 0 ,
1994083296U ) ; ssSetChecksumVal ( rtS , 1 , 3386305887U ) ; ssSetChecksumVal
( rtS , 2 , 460212317U ) ; ssSetChecksumVal ( rtS , 3 , 3911252674U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 72 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = (
sysRanDType * ) & rtDW . htvvb3wiwks . et0xhlvwqn ; systemRan [ 8 ] = (
sysRanDType * ) & rtDW . osjj2s24tkm . k3vf3gqtaf ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = (
sysRanDType * ) & rtDW . apfzndjc5l . et0xhlvwqn ; systemRan [ 14 ] = (
sysRanDType * ) & rtDW . l1ngv2u4wj . k3vf3gqtaf ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = ( sysRanDType * ) & rtDW . e2qkfxuvdy .
k3vf3gqtaf ; systemRan [ 17 ] = & rtAlwaysEnabled ; systemRan [ 18 ] = &
rtAlwaysEnabled ; systemRan [ 19 ] = & rtAlwaysEnabled ; systemRan [ 20 ] = &
rtAlwaysEnabled ; systemRan [ 21 ] = & rtAlwaysEnabled ; systemRan [ 22 ] = &
rtAlwaysEnabled ; systemRan [ 23 ] = ( sysRanDType * ) & rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . ecmnwkv0b1 ; systemRan [ 24 ] = ( sysRanDType
* ) & rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . bsjeyglnik ;
systemRan [ 25 ] = ( sysRanDType * ) & rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ]
. e4olea1wzo . lmrevddxcj ; systemRan [ 26 ] = ( sysRanDType * ) & rtDW .
noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . ftesiynqap ; systemRan [ 27 ] =
& rtAlwaysEnabled ; systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] =
& rtAlwaysEnabled ; systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan [ 31 ] =
& rtAlwaysEnabled ; systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan [ 33 ] =
( sysRanDType * ) & rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
ecmnwkv0b1 ; systemRan [ 34 ] = ( sysRanDType * ) & rtDW . cakr3inwfo .
c2pauqsk3t [ 0 ] . e4olea1wzo . bsjeyglnik ; systemRan [ 35 ] = ( sysRanDType
* ) & rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . lmrevddxcj ;
systemRan [ 36 ] = ( sysRanDType * ) & rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . ftesiynqap ; systemRan [ 37 ] = & rtAlwaysEnabled ; systemRan [
38 ] = & rtAlwaysEnabled ; systemRan [ 39 ] = & rtAlwaysEnabled ; systemRan [
40 ] = & rtAlwaysEnabled ; systemRan [ 41 ] = & rtAlwaysEnabled ; systemRan [
42 ] = & rtAlwaysEnabled ; systemRan [ 43 ] = ( sysRanDType * ) & rtDW .
mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . ecmnwkv0b1 ; systemRan [ 44 ] =
( sysRanDType * ) & rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
bsjeyglnik ; systemRan [ 45 ] = ( sysRanDType * ) & rtDW . mxxvrdjd12 .
c2pauqsk3t [ 0 ] . e4olea1wzo . lmrevddxcj ; systemRan [ 46 ] = ( sysRanDType
* ) & rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . ftesiynqap ;
systemRan [ 47 ] = & rtAlwaysEnabled ; systemRan [ 48 ] = & rtAlwaysEnabled ;
systemRan [ 49 ] = & rtAlwaysEnabled ; systemRan [ 50 ] = & rtAlwaysEnabled ;
systemRan [ 51 ] = & rtAlwaysEnabled ; systemRan [ 52 ] = & rtAlwaysEnabled ;
systemRan [ 53 ] = ( sysRanDType * ) & rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] .
e4olea1wzo . ecmnwkv0b1 ; systemRan [ 54 ] = ( sysRanDType * ) & rtDW .
gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . bsjeyglnik ; systemRan [ 55 ] =
( sysRanDType * ) & rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
lmrevddxcj ; systemRan [ 56 ] = ( sysRanDType * ) & rtDW . gjwrbmtmpz .
c2pauqsk3t [ 0 ] . e4olea1wzo . ftesiynqap ; systemRan [ 57 ] = &
rtAlwaysEnabled ; systemRan [ 58 ] = & rtAlwaysEnabled ; systemRan [ 59 ] = &
rtAlwaysEnabled ; systemRan [ 60 ] = & rtAlwaysEnabled ; systemRan [ 61 ] = &
rtAlwaysEnabled ; systemRan [ 62 ] = & rtAlwaysEnabled ; systemRan [ 63 ] = &
rtAlwaysEnabled ; systemRan [ 64 ] = & rtAlwaysEnabled ; systemRan [ 65 ] = &
rtAlwaysEnabled ; systemRan [ 66 ] = & rtAlwaysEnabled ; systemRan [ 67 ] = &
rtAlwaysEnabled ; systemRan [ 68 ] = & rtAlwaysEnabled ; systemRan [ 69 ] = &
rtAlwaysEnabled ; systemRan [ 70 ] = & rtAlwaysEnabled ; systemRan [ 71 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_ContoleLateralApplication_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_ContoleLateralApplication_GetDWork )
; slsaSetWorkFcnForSimTargetOP ( rtS , mr_ContoleLateralApplication_SetDWork
) ; rtP . Saturation_UpperSat [ 0 ] = rtInf ; rtP . Saturation_UpperSat [ 1 ]
= rtInf ; rtP . Saturation_UpperSat [ 2 ] = rtInf ; rtP . Saturation_LowerSat
[ 0 ] = rtMinusInf ; rtP . Saturation_LowerSat [ 1 ] = rtMinusInf ; rtP .
Saturation_LowerSat [ 2 ] = rtMinusInf ; rtP . Saturation_UpperSat_ojovnnjyll
[ 0 ] = rtInf ; rtP . Saturation_UpperSat_ojovnnjyll [ 1 ] = rtInf ; rtP .
Saturation_UpperSat_ojovnnjyll [ 2 ] = rtInf ; rtP .
Saturation_LowerSat_jjanzakcpx [ 0 ] = rtMinusInf ; rtP .
Saturation_LowerSat_jjanzakcpx [ 1 ] = rtMinusInf ; rtP .
Saturation_LowerSat_jjanzakcpx [ 2 ] = rtMinusInf ; rtP .
Saturation_UpperSat_gvxzlt42ct = rtInf ; rtP . Saturation_UpperSat_hcxwsaqrsd
= rtInf ; rtP . Saturation_UpperSat_fb4yxihzdf = rtInf ; rtP .
Saturation_UpperSat_ciqkwvx5cy = rtInf ; rt_RapidReadMatFileAndUpdateParams (
rtS ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
