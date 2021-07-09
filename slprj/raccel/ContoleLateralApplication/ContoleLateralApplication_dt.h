#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "struct_A6Yb21eKNPgaupJlKafAPB" , 14 ,
16 } , { "struct_NtCe3ohFvXuRZXQoDidoXH" , 15 , 16 } , {
"struct_wjXS3rIiQNI90M790LMxVG" , 16 , 16 } , {
"struct_5NGg6nxNHRWKsr0nLboB4F" , 17 , 256 } , {
"struct_IMeHRhCUQYmqCjojf8ThJC" , 18 , 144 } , {
"struct_zKiQBVfPwpWeAGF3nIRITH" , 19 , 48 } , {
"struct_hgmnqvlij5jOAI9V1wZ3ZG" , 20 , 152 } , {
"struct_YQNmUAShMCZdIMpk5KMNkC" , 21 , 240 } , {
"struct_AZjjEXmUyHbvyklo4YIYcD" , 22 , 312 } , {
"struct_sOX3LiStEfrXKFRloTKRnE" , 23 , 200 } , {
"struct_FEnSr9k3XVyU96UtOo67RH" , 24 , 32 } , {
"struct_DsnyaKzBOGCI4DCle3t1oB" , 25 , 8 } } ; static uint_T rtDataTypeSizes
[ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof
( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( void * ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( struct_A6Yb21eKNPgaupJlKafAPB ) , sizeof (
struct_NtCe3ohFvXuRZXQoDidoXH ) , sizeof ( struct_wjXS3rIiQNI90M790LMxVG ) ,
sizeof ( struct_5NGg6nxNHRWKsr0nLboB4F ) , sizeof (
struct_IMeHRhCUQYmqCjojf8ThJC ) , sizeof ( struct_zKiQBVfPwpWeAGF3nIRITH ) ,
sizeof ( struct_hgmnqvlij5jOAI9V1wZ3ZG ) , sizeof (
struct_YQNmUAShMCZdIMpk5KMNkC ) , sizeof ( struct_AZjjEXmUyHbvyklo4YIYcD ) ,
sizeof ( struct_sOX3LiStEfrXKFRloTKRnE ) , sizeof (
struct_FEnSr9k3XVyU96UtOo67RH ) , sizeof ( struct_DsnyaKzBOGCI4DCle3t1oB ) }
; static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" , "struct_A6Yb21eKNPgaupJlKafAPB" ,
"struct_NtCe3ohFvXuRZXQoDidoXH" , "struct_wjXS3rIiQNI90M790LMxVG" ,
"struct_5NGg6nxNHRWKsr0nLboB4F" , "struct_IMeHRhCUQYmqCjojf8ThJC" ,
"struct_zKiQBVfPwpWeAGF3nIRITH" , "struct_hgmnqvlij5jOAI9V1wZ3ZG" ,
"struct_YQNmUAShMCZdIMpk5KMNkC" , "struct_AZjjEXmUyHbvyklo4YIYcD" ,
"struct_sOX3LiStEfrXKFRloTKRnE" , "struct_FEnSr9k3XVyU96UtOo67RH" ,
"struct_DsnyaKzBOGCI4DCle3t1oB" } ; static DataTypeTransition rtBTransitions
[ ] = { { ( char_T * ) ( & rtB . il0etatu3t [ 0 ] ) , 0 , 0 , 686 } , { (
char_T * ) ( & rtB . hjke4nmuoj ) , 8 , 0 , 8 } , { ( char_T * ) ( & rtB .
pb1igtxdxp [ 3 ] . de5rkf4e3p [ 0 ] ) , 0 , 0 , 15 } , { ( char_T * ) ( & rtB
. gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . kwqxwq5vxc ) , 0 , 0 , 15 } ,
{ ( char_T * ) ( & rtB . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
ocqpah2hh5 ) , 8 , 0 , 2 } , { ( char_T * ) ( & rtB . ksccswp5ae . kvzzukibme
[ 0 ] ) , 0 , 0 , 81 } , { ( char_T * ) ( & rtB . mxxvrdjd12 . c2pauqsk3t [ 0
] . e4olea1wzo . kwqxwq5vxc ) , 0 , 0 , 15 } , { ( char_T * ) ( & rtB .
mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . ocqpah2hh5 ) , 8 , 0 , 2 } , { (
char_T * ) ( & rtB . mfn3ngkfa2 . kvzzukibme [ 0 ] ) , 0 , 0 , 81 } , { (
char_T * ) ( & rtB . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . kwqxwq5vxc
) , 0 , 0 , 15 } , { ( char_T * ) ( & rtB . cakr3inwfo . c2pauqsk3t [ 0 ] .
e4olea1wzo . ocqpah2hh5 ) , 8 , 0 , 2 } , { ( char_T * ) ( & rtB . poyrgpcj11
. kvzzukibme [ 0 ] ) , 0 , 0 , 81 } , { ( char_T * ) ( & rtB . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . kwqxwq5vxc ) , 0 , 0 , 15 } , { ( char_T * )
( & rtB . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . ocqpah2hh5 ) , 8 , 0
, 2 } , { ( char_T * ) ( & rtB . eyli315csa . kvzzukibme [ 0 ] ) , 0 , 0 , 81
} , { ( char_T * ) ( & rtB . e2qkfxuvdy . kj2hrwkm2p ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtB . l1ngv2u4wj . kj2hrwkm2p ) , 0 , 0 , 1 } , { ( char_T * )
( & rtB . apfzndjc5l . p1utvufnvy ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtB .
osjj2s24tkm . kj2hrwkm2p ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtB .
htvvb3wiwks . p1utvufnvy ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtDW .
n4s3ahy5yb [ 0 ] ) , 0 , 0 , 46 } , { ( char_T * ) ( & rtDW . byifh3cbv3 .
LoggedData ) , 11 , 0 , 53 } , { ( char_T * ) ( & rtDW . ccsmcmbqmb [ 0 ] ) ,
7 , 0 , 6 } , { ( char_T * ) ( & rtDW . cw5iqh3ouk ) , 10 , 0 , 26 } , { (
char_T * ) ( & rtDW . jntluapbyr ) , 2 , 0 , 10 } , { ( char_T * ) ( & rtDW .
nxkoaebnan ) , 8 , 0 , 12 } , { ( char_T * ) ( & rtDW . gjwrbmtmpz .
c2pauqsk3t [ 0 ] . e4olea1wzo . p1sl2m4kvt ) , 0 , 0 , 3 } , { ( char_T * ) (
& rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . isz3wuv5k2 ) , 11 , 0 ,
2 } , { ( char_T * ) ( & rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
exa4vdwbrv ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW . gjwrbmtmpz .
c2pauqsk3t [ 0 ] . e4olea1wzo . bebqiw1dl1 ) , 7 , 0 , 1 } , { ( char_T * ) (
& rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . oiwrxpxdcx ) , 8 , 0 ,
1 } , { ( char_T * ) ( & rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) , 2 , 0 , 6 } , { ( char_T * ) ( & rtDW . gjwrbmtmpz .
c2pauqsk3t [ 0 ] . e4olea1wzo . lt4gid0hxl ) , 3 , 0 , 1 } , { ( char_T * ) (
& rtDW . gjwrbmtmpz . c2pauqsk3t [ 0 ] . e4olea1wzo . jgkvns5fgd ) , 8 , 0 ,
1 } , { ( char_T * ) ( & rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
p1sl2m4kvt ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtDW . mxxvrdjd12 .
c2pauqsk3t [ 0 ] . e4olea1wzo . isz3wuv5k2 ) , 11 , 0 , 2 } , { ( char_T * )
( & rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . exa4vdwbrv ) , 6 , 0
, 1 } , { ( char_T * ) ( & rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo
. bebqiw1dl1 ) , 7 , 0 , 1 } , { ( char_T * ) ( & rtDW . mxxvrdjd12 .
c2pauqsk3t [ 0 ] . e4olea1wzo . oiwrxpxdcx ) , 8 , 0 , 1 } , { ( char_T * ) (
& rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo . b3o452e4eu ) , 2 , 0 ,
6 } , { ( char_T * ) ( & rtDW . mxxvrdjd12 . c2pauqsk3t [ 0 ] . e4olea1wzo .
lt4gid0hxl ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW . mxxvrdjd12 .
c2pauqsk3t [ 0 ] . e4olea1wzo . jgkvns5fgd ) , 8 , 0 , 1 } , { ( char_T * ) (
& rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . p1sl2m4kvt ) , 0 , 0 ,
3 } , { ( char_T * ) ( & rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
isz3wuv5k2 ) , 11 , 0 , 2 } , { ( char_T * ) ( & rtDW . cakr3inwfo .
c2pauqsk3t [ 0 ] . e4olea1wzo . exa4vdwbrv ) , 6 , 0 , 1 } , { ( char_T * ) (
& rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . bebqiw1dl1 ) , 7 , 0 ,
1 } , { ( char_T * ) ( & rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
oiwrxpxdcx ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW . cakr3inwfo .
c2pauqsk3t [ 0 ] . e4olea1wzo . b3o452e4eu ) , 2 , 0 , 6 } , { ( char_T * ) (
& rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo . lt4gid0hxl ) , 3 , 0 ,
1 } , { ( char_T * ) ( & rtDW . cakr3inwfo . c2pauqsk3t [ 0 ] . e4olea1wzo .
jgkvns5fgd ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . p1sl2m4kvt ) , 0 , 0 , 3 } , { ( char_T * ) (
& rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . isz3wuv5k2 ) , 11 , 0
, 2 } , { ( char_T * ) ( & rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo
. exa4vdwbrv ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . bebqiw1dl1 ) , 7 , 0 , 1 } , { ( char_T * ) (
& rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . oiwrxpxdcx ) , 8 , 0 ,
1 } , { ( char_T * ) ( & rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo .
b3o452e4eu ) , 2 , 0 , 6 } , { ( char_T * ) ( & rtDW . noxrljyvsbq .
c2pauqsk3t [ 0 ] . e4olea1wzo . lt4gid0hxl ) , 3 , 0 , 1 } , { ( char_T * ) (
& rtDW . noxrljyvsbq . c2pauqsk3t [ 0 ] . e4olea1wzo . jgkvns5fgd ) , 8 , 0 ,
1 } , { ( char_T * ) ( & rtDW . e2qkfxuvdy . k3vf3gqtaf ) , 2 , 0 , 1 } , { (
char_T * ) ( & rtDW . e2qkfxuvdy . lk3vufehxq ) , 8 , 0 , 1 } , { ( char_T *
) ( & rtDW . l1ngv2u4wj . k3vf3gqtaf ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . l1ngv2u4wj . lk3vufehxq ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
apfzndjc5l . hbdm0crtqe ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtDW .
apfzndjc5l . et0xhlvwqn ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
osjj2s24tkm . k3vf3gqtaf ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
osjj2s24tkm . lk3vufehxq ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
htvvb3wiwks . hbdm0crtqe ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtDW .
htvvb3wiwks . et0xhlvwqn ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 68U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . STEER ) , 22 , 0 , 1 } , { (
char_T * ) ( & rtP . VEH ) , 17 , 0 , 1 } , { ( char_T * ) ( & rtP . CTRL ) ,
21 , 0 , 1 } , { ( char_T * ) ( & rtP . SENSOR ) , 23 , 0 , 1 } , { ( char_T
* ) ( & rtP . EV ) , 20 , 0 , 1 } , { ( char_T * ) ( & rtP . MTR ) , 18 , 0 ,
1 } , { ( char_T * ) ( & rtP . WHL ) , 19 , 0 , 1 } , { ( char_T * ) ( & rtP
. GND ) , 24 , 0 , 1 } , { ( char_T * ) ( & rtP . VehicleBody3DOFDualTrack_Cl
) , 0 , 0 , 910 } , { ( char_T * ) ( & rtP . ManualSwitch_CurrentSetting ) ,
3 , 0 , 2 } , { ( char_T * ) ( & rtP . gjwrbmtmpz . c2pauqsk3t . e4olea1wzo .
Constant_Value ) , 0 , 0 , 5 } , { ( char_T * ) ( & rtP . gjwrbmtmpz .
c2pauqsk3t . e4olea1wzo . yn_Y0 ) , 8 , 0 , 11 } , { ( char_T * ) ( & rtP .
mxxvrdjd12 . c2pauqsk3t . e4olea1wzo . Constant_Value ) , 0 , 0 , 5 } , { (
char_T * ) ( & rtP . mxxvrdjd12 . c2pauqsk3t . e4olea1wzo . yn_Y0 ) , 8 , 0 ,
11 } , { ( char_T * ) ( & rtP . cakr3inwfo . c2pauqsk3t . e4olea1wzo .
Constant_Value ) , 0 , 0 , 5 } , { ( char_T * ) ( & rtP . cakr3inwfo .
c2pauqsk3t . e4olea1wzo . yn_Y0 ) , 8 , 0 , 11 } , { ( char_T * ) ( & rtP .
noxrljyvsbq . c2pauqsk3t . e4olea1wzo . Constant_Value ) , 0 , 0 , 5 } , { (
char_T * ) ( & rtP . noxrljyvsbq . c2pauqsk3t . e4olea1wzo . yn_Y0 ) , 8 , 0
, 11 } , { ( char_T * ) ( & rtP . apfzndjc5l . Out1_Y0 ) , 0 , 0 , 3 } , { (
char_T * ) ( & rtP . htvvb3wiwks . Out1_Y0 ) , 0 , 0 , 3 } } ; static
DataTypeTransitionTable rtPTransTable = { 20U , rtPTransitions } ;
