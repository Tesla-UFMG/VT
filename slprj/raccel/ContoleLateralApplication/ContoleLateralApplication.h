#ifndef RTW_HEADER_ContoleLateralApplication_h_
#define RTW_HEADER_ContoleLateralApplication_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef ContoleLateralApplication_COMMON_INCLUDES_
#define ContoleLateralApplication_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "slexec_parallel.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "ContoleLateralApplication_types.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#define MODEL_NAME ContoleLateralApplication
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (495) 
#define NUM_ZC_EVENTS (2) 
#ifndef NCSTATES
#define NCSTATES (53)   
#elif NCSTATES != 53
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
typedef struct { real_T p1utvufnvy ; } jq4sjzevfh ; typedef struct { real_T
hbdm0crtqe ; int8_T et0xhlvwqn ; } g3rr01glgf ; typedef struct { real_T
lqxl0d0dhp ; } k1hpscepxm ; typedef struct { ZCSigState b3ysuqtd44 ; }
mfim3kn51q ; typedef struct { real_T kj2hrwkm2p ; } cflrekwlxf ; typedef
struct { int8_T k3vf3gqtaf ; boolean_T lk3vufehxq ; } knzpqmzeq5 ; typedef
struct { real_T kvzzukibme [ 5 ] ; real_T pldhr0ir00 [ 34 ] ; real_T
pesqmq44xv [ 16 ] ; real_T lysdlpkzoy [ 24 ] ; real_T pfchf5chga ; real_T
lniimqwaxy ; } k0a351zprl ; typedef struct { real_T kwqxwq5vxc ; real_T
mtpqbcckqk ; real_T mq031stjmt ; real_T hswbee0aei ; real_T gpac3swnt3 ;
real_T ntz5rq4pu2 ; real_T b4h3uttc2m ; real_T or5pwqbvrm ; real_T oyimgebi55
; real_T gn1fggjwwk ; real_T jsghhdyulc ; real_T hroageih0k ; real_T
lqej5fxi2o ; real_T jpyqek45cd ; real_T gb3hspv0h3 ; boolean_T ocqpah2hh5 ;
boolean_T gri1hwems4 ; } gu2d1u3t5r ; typedef struct { real_T p1sl2m4kvt ;
real_T jcrgjnicyz ; real_T ejzedrzuqd ; void * isz3wuv5k2 ; void * blzpwbsyz2
; int32_T exa4vdwbrv ; uint32_T bebqiw1dl1 ; boolean_T oiwrxpxdcx ; int8_T
b3o452e4eu ; int8_T hu5bc5mu3c ; int8_T bsjeyglnik ; int8_T ecmnwkv0b1 ;
int8_T lmrevddxcj ; int8_T ftesiynqap ; uint8_T lt4gid0hxl ; boolean_T
jgkvns5fgd ; } of1genwmwx ; typedef struct { real_T aia4xhywhu ; } bneugbcqrf
; typedef struct { real_T aia4xhywhu ; } ccejl0ogc2 ; typedef struct {
boolean_T aia4xhywhu ; } ginhnnkz3v ; typedef struct { real_T aia4xhywhu ; }
gmoojkzl32 ; typedef struct { real_T aia4xhywhu ; } f1vvbixpt3 ; typedef
struct { real_T aia4xhywhu ; } kpbvxopywa ; typedef struct { gu2d1u3t5r
e4olea1wzo ; } ikw0npjd4a ; typedef struct { of1genwmwx e4olea1wzo ; }
e3niwevtkx ; typedef struct { bneugbcqrf e4olea1wzo ; } p05m5t0xyj ; typedef
struct { ccejl0ogc2 e4olea1wzo ; } ijxzlesv31 ; typedef struct { ginhnnkz3v
e4olea1wzo ; } kcs4xkkoqp ; typedef struct { gmoojkzl32 e4olea1wzo ; }
i2k2htnxut ; typedef struct { f1vvbixpt3 e4olea1wzo ; } iatqy315m3 ; typedef
struct { kpbvxopywa e4olea1wzo ; } cqnww5zo5n ; typedef struct { ikw0npjd4a
c2pauqsk3t [ 1 ] ; } kjgphjufh5 ; typedef struct { e3niwevtkx c2pauqsk3t [ 1
] ; } i2qsjznhcu ; typedef struct { p05m5t0xyj c2pauqsk3t [ 1 ] ; }
bdqrkgokb2 ; typedef struct { ijxzlesv31 c2pauqsk3t [ 1 ] ; } plfar4j100 ;
typedef struct { kcs4xkkoqp c2pauqsk3t [ 1 ] ; } hz1fvgvokw ; typedef struct
{ i2k2htnxut c2pauqsk3t [ 1 ] ; } ktsdhb3qyo ; typedef struct { iatqy315m3
c2pauqsk3t [ 1 ] ; } fafflelkte ; typedef struct { cqnww5zo5n c2pauqsk3t [ 1
] ; } azpv1ueqea ; typedef struct { real_T de5rkf4e3p [ 3 ] ; real_T
dysw0amhvq [ 9 ] ; real_T o4qfa2zehb [ 3 ] ; } dtqrrcemuw ; typedef struct {
real_T il0etatu3t [ 3 ] ; real_T meumugomqr [ 3 ] ; real_T jblxcxbmeg [ 4 ] ;
real_T i0t2sz5yu2 ; real_T i3r2qvsck4 [ 2 ] ; real_T f1prcbszsd [ 3 ] ;
real_T k1is2mf1se [ 9 ] ; real_T bj3lssycrr [ 9 ] ; real_T hu3dhumohw [ 3 ] ;
real_T btlr1jutxk [ 3 ] ; real_T ort1oa3yt2 [ 3 ] ; real_T gf5mbh3pdf ;
real_T nla3wo302k ; real_T gplvcvhjic ; real_T i5ebqyedfw [ 3 ] ; real_T
muausztbb4 ; real_T l4qwphkvnp ; real_T nciukp42sl ; real_T ecnmk5xlda ;
real_T hhdyekl5de [ 2 ] ; real_T djemdlk43r [ 2 ] ; real_T defglkvaeg [ 2 ] ;
real_T mp3ipplayt [ 2 ] ; real_T knvlc3ltii ; real_T caiqwkcf2z ; real_T
jmd2blgngw ; real_T e1rx1emhto ; real_T ghmmjonve0 ; real_T ix1gdnr0kt ;
real_T dja4oazfgv ; real_T i4ru1u0q2f ; real_T hxklhjvjkk ; real_T n5t3y1ndwd
; real_T op44qlqeyu [ 4 ] ; real_T eilcu1yst5 [ 4 ] ; real_T nr0yvvf3bw ;
real_T eczxx3pwi3 ; real_T dcq221einf [ 4 ] ; real_T or52k223hd ; real_T
dvpmtxo0be ; real_T k2czyaew51 ; real_T lntq3i31aa ; real_T hxp5a21ecw ;
real_T ka5i5r2ocn ; real_T jrwlqx50md [ 3 ] ; real_T eyg420i1qa ; real_T
jvnbz21qcr ; real_T enyebnwuzs [ 3 ] ; real_T bfx11es1pz ; real_T hgkjq355ga
; real_T m4vbyuv50v [ 3 ] ; real_T eprmfstcl0 ; real_T mlv2z4cnpk ; real_T
ihoukxcl2n [ 3 ] ; real_T lal2lbdvnj [ 12 ] ; real_T ehegsvesam [ 2 ] ;
real_T jydmtoquew [ 4 ] ; real_T e0likot2u3 [ 12 ] ; real_T npm2zr3upl ;
real_T d3z3vaxpr1 ; real_T jxdryj32t2 ; real_T kydysjnam0 ; real_T osxsmxcu11
; real_T dno0g3kku3 ; real_T do2i3e4mnj ; real_T bsr5mnxogb ; real_T
p5ymjmcd3s ; real_T cfguotgkw0 ; real_T hscsk3udek ; real_T n4c0eyic5z ;
real_T iwgmnzxtcj [ 4 ] ; real_T p4l0q5m2zp [ 4 ] ; real_T klxqd1kpmy [ 2 ] ;
real_T mohuvfpwqf [ 2 ] ; real_T b52ktbsian [ 4 ] ; real_T htdiicmgu3 [ 2 ] ;
real_T fhdbndmo2w [ 2 ] ; real_T bb0j4ldsw5 [ 4 ] ; real_T izvtaoatv2 [ 3 ] ;
real_T ce4albcsmy ; real_T jj4xvsloor ; real_T n2l3ampztw ; real_T eanxbrkudf
; real_T bkbmbwuukb [ 3 ] ; real_T pkpsezd2kc [ 3 ] ; real_T djwgtq0y1t [ 3 ]
; real_T nntb3jtaei [ 3 ] ; real_T gloj4ntcd3 ; real_T bcmt4kc43t ; real_T
n1yoj2fyso [ 6 ] ; real_T ez013j13lu [ 6 ] ; real_T co3tegqkmg [ 6 ] ; real_T
e1n4f15aet [ 3 ] ; real_T jgjsvwltnt [ 3 ] ; real_T mbz4uqeymk [ 3 ] ; real_T
o1bgby3op5 [ 3 ] ; real_T hvq2sqpr1r ; real_T bqdwgkvkvj ; real_T bbjoiy4rko
; real_T cp1tr53ril ; real_T pdkpeabqzw [ 3 ] ; real_T ady40l2b2i [ 3 ] ;
real_T nyegssewho ; real_T enny3fpzvj ; real_T itetgznxhu ; real_T pafgvysl2t
; real_T oom5rztyu1 ; real_T b00jmpsrde ; real_T lfa0ahayfn [ 3 ] ; real_T
ak4t1jni5n ; real_T iiub2jjbsp ; real_T iouy0scb2h ; real_T ly1vg5f0r4 ;
real_T a5cwffagc3 ; real_T ijtaj2u1g1 ; real_T bzzwf1ecty [ 3 ] ; real_T
paembovz2w [ 3 ] ; real_T bfyarqnluy ; real_T iiwttvv404 ; real_T ezqqqfgpce
; real_T owhho2exe3 ; real_T ddrbja50tp ; real_T bbdudxzqnc ; real_T
b51qsa2wyx [ 3 ] ; real_T lo0hy2u115 [ 3 ] ; real_T a1c52jyyas [ 3 ] ; real_T
f52wachjwu [ 3 ] ; real_T f3cjgvrs4t [ 3 ] ; real_T fhs05iqj03 [ 3 ] ; real_T
bbmop3k4xy [ 3 ] ; real_T htcdef2vji ; real_T m3cl00tirv [ 3 ] ; real_T
lyoxiq4v2n [ 3 ] ; real_T ihxn2ccgzc [ 3 ] ; real_T f4pijre3pd [ 3 ] ; real_T
mnz4wgiqmc [ 3 ] ; real_T lc5tzsaajy [ 3 ] ; real_T kxjjc5bdzp [ 3 ] ; real_T
kh10sd24bc [ 3 ] ; real_T j25w0xwyrm [ 3 ] ; real_T aip03mn2dd [ 3 ] ; real_T
j1bh4yi3by [ 3 ] ; real_T a4mnjoeoqc [ 4 ] ; real_T mnxndmxld0 ; real_T
gzywhfis5h ; real_T guad3bm5gw ; real_T chyfaeo2yo ; real_T iqubn5qffr ;
real_T glpgxupphn ; real_T iudmjwlul4 ; real_T gcb0w03ihj ; real_T a2hgjiud0k
; real_T fjyioa2tk1 ; real_T opwc2ep2yl ; real_T oc04ompsbk ; real_T
ccovgenhbr ; real_T p0epkt2khf ; real_T gd2e55z4sz ; real_T bzw0mlxrof ;
real_T gcwgxti1gl ; real_T mkjro5pgq0 ; real_T m2k1yz01ki ; real_T mbnbhs0ixy
; real_T jgoo3zfwzh ; real_T kmutfdps50 ; real_T iyyn2fy2g4 ; real_T
lsnzrwdtkp ; real_T b4gug11lub ; real_T byz1ehz01l ; real_T hrsz1jtc3z ;
real_T lwho5ornvw ; real_T hooybd52iu ; real_T dkvwdz1glf ; real_T mr2w2zkuh2
; real_T muge10tpzh ; real_T blrtq4s0h2 ; real_T auuht2xqvc ; real_T
iebn0yh0ie ; real_T frpygu4ewl [ 2 ] ; real_T f3hntfh4z2 ; real_T kdz1kganxz
; real_T axobkcnxkz ; real_T at0lcle2gj ; real_T obeirguqx1 ; real_T
h3dpuvmqqk ; real_T ah1c4aiwzh [ 3 ] ; real_T lmk40ohxl3 ; real_T bbo0yescg2
; real_T ka2fgmunz2 ; real_T aaiavjw5hm ; real_T aweasameoe ; real_T
dxqsu20edf ; real_T jndyofuu4h ; real_T cezkuwumms ; real_T ljrxrwugmw ;
real_T kxxvpaqn2a ; real_T krmgelrbzy ; real_T gin4uzsi2m ; real_T pozhgj5ix4
; real_T d3srggvawd ; real_T adhennr231 ; real_T olc1lmrrhe ; real_T
ewppic2zbk ; real_T f2fy5jjhga ; real_T khm1mymbsl ; real_T ifzfndv4pn ;
real_T fvklswfmdc ; real_T jwoxguc42j ; real_T amjaof1u4h ; real_T cciox55klk
; real_T aa1i3dae21 ; real_T n554izgqk5 ; real_T ljs20igqkh ; real_T
gw5a22y1wf ; real_T lfdm23fwj4 ; real_T mffikfnqzd ; real_T n41fppahra ;
real_T hk0q4axsjn ; real_T ppbfigd4hk [ 2 ] ; real_T gaqtx0qrsz [ 4 ] ;
real_T nqz4ndil0s [ 2 ] ; real_T jkwei5usbq [ 4 ] ; real_T kmol4owuqp ;
real_T fdy0s00am2 ; real_T hwyepwzcge ; real_T lmn1zfkkus ; real_T lmmqsk2uae
; real_T lyfzkfzyqo ; real_T h4bqvvotgx ; real_T j1k1ltnmni ; real_T
ghj4bqrdbz ; real_T bl4db4jbzd ; real_T mgcoykf3hl ; real_T d1jbjnkjny ;
real_T lxneab0zxp ; real_T ie20muwjvx ; real_T mm0bpljwv1 ; real_T bep4b34jnp
; real_T nff32zxnkp [ 2 ] ; real_T ntueai12qw ; real_T jw3hbd3t4s [ 2 ] ;
real_T f55gvto5kw ; real_T kzxjlhnmel [ 3 ] ; real_T cff35i114u [ 3 ] ;
real_T flzvxohler [ 3 ] ; real_T dupofgjkdl [ 3 ] ; real_T pu0pgi33zq [ 3 ] ;
real_T cygjwmbszv [ 3 ] ; real_T jdpct03ihe [ 3 ] ; real_T lljut341ju [ 3 ] ;
real_T ajlzkmiuas [ 3 ] ; real_T ohxnjps2ji [ 3 ] ; real_T c1hrcypiut [ 3 ] ;
real_T jumo3hkdvn [ 3 ] ; real_T mmccsrz4af ; real_T kfcgjqq4cu ; real_T
aamnzpdedd ; real_T boklg5hjkm ; real_T catleqbg5e ; real_T honpeimuaj ;
real_T fiocnv2h1j ; real_T emmuil4ouj ; real_T btwaezglz2 ; real_T pjotg11uvb
; real_T nn1sq2k4zb ; real_T bkbnzydkil ; real_T ifn1zaq4jj ; real_T
bnbhfm0nao ; real_T fwzan15owz ; real_T gpyybdsilh ; real_T cnr0bua02n ;
real_T pqgd5hrhqs ; real_T nrcsmiyxoq ; real_T cabpwvhlvo ; real_T cdno43ohoy
; real_T h3ooj25pp5 ; real_T ocgamkinbg ; real_T ohj5ftgoqe ; real_T
jrp0aoz5wu ; real_T bwefnginvi ; real_T pg2qq1nzez ; real_T exbxduxy2v ;
real_T k34ff2woyp [ 4 ] ; real_T kmpsmr4bu1 [ 4 ] ; real_T ok0nex3a10 [ 4 ] ;
real_T mvulyit5qy [ 4 ] ; real_T n0pt5s35mg [ 4 ] ; real_T ewq3x4haz5 [ 4 ] ;
real_T exw1fos1zh [ 4 ] ; real_T fz2bb5idjc ; real_T owg1r45cyy ; real_T
ezve0fzsgm [ 4 ] ; real_T d25xxhghbu [ 4 ] ; real_T lfx25jiz4m ; real_T
ivx21ub2uh ; real_T fnxobboyf5 ; real_T ozxsezzdp0 ; real_T g4ozzpxilu [ 3 ]
; real_T ktw2bfmndg [ 3 ] ; real_T pvktgoo0vx [ 3 ] ; real_T btjm0q2rtx [ 3 ]
; real_T eu2132pgmw ; real_T ncbfjdrw0i ; real_T csqivoi424 ; real_T
e2sy13a3rb ; real_T jevg3hxxfu ; real_T b1jibjaalt ; real_T mer25mymto ;
real_T lscft13zqo ; real_T kfxhjc530w [ 2 ] ; real_T lufthx0epg [ 2 ] ;
real_T dvwaoy2qi5 [ 2 ] ; real_T b12vq1lhyh [ 3 ] ; real_T pdumfua25b ;
real_T gj1umy1s2b ; real_T egwiniboj3 ; real_T iow4cazdde ; real_T ldpqikv0lm
[ 3 ] ; real_T iibbndjvjh ; real_T de12wpbxsj ; real_T lwk4hkx1ck ; real_T
keata0at5s ; real_T orqox2gjfp [ 3 ] ; real_T ezvh0rk4nc ; real_T okojbmod0o
; real_T mco3ns0lny ; real_T o2dpkdu3fe ; real_T py0a4e1hap [ 3 ] ; real_T
hjzkl2kwf3 ; real_T jviyno5c5w ; real_T cqholczoxt ; real_T gjvexudexj ;
real_T hb11ykgyzf [ 3 ] ; real_T mdhxk4ypyo ; real_T btnju2sxw4 ; real_T
en3la4kxu1 ; real_T lstnprzd0c ; real_T buizfe5hvb [ 3 ] ; real_T cowmqsshow
; real_T jtyfp1uu51 ; real_T pnnpxsfjlb ; real_T fvu055jlv2 ; real_T
msys3swj00 [ 4 ] ; real_T g3zkmqy3qm [ 2 ] ; real_T ks2tcvhkgr [ 2 ] ; real_T
azrnjxg4j4 [ 4 ] ; real_T mi1o4jcssm [ 3 ] ; real_T jb0wfcgmvy [ 3 ] ; real_T
ba2xdwdiit [ 3 ] ; real_T j1nkqcwf2g [ 4 ] ; real_T btptht1tk0 [ 2 ] ; real_T
kqv234nfhx [ 4 ] ; real_T jkma31c4bs ; real_T p5jm2dnchs [ 3 ] ; real_T
hpwrv4ugir [ 3 ] ; real_T huahnozcox ; real_T ie5qebpz5z ; real_T on55mw5phh
; real_T krkyxg4dzc ; real_T nlbjicxf4k ; real_T ggytg1k2zh ; real_T
osnlaugfya ; real_T aj2c0ibubc ; real_T mizmyi1de5 ; real_T coaewo5abi ;
real_T pcganxdvhf ; real_T lgqduiwqqv ; real_T etm3xiejch ; real_T ipghb0hi1r
; real_T ov0czh1aqm ; real_T fdjhwhcfgp [ 3 ] ; real_T oet0nupw1k ; real_T
j5nazvuckk ; real_T mu2d4tzysj ; real_T e0eg2echuf ; real_T ketwrgceem ;
real_T pxquxvlqjz ; real_T erphranciq ; real_T blqttio3ag ; real_T crjezne4hr
; real_T bkkwbsaqfr [ 3 ] ; real_T eucfvib3zj [ 3 ] ; real_T ay4ux3o1eo [ 3 ]
; real_T nuo2mgk13f ; real_T cam5pwn2wz ; real_T pzf3urynfg ; real_T
h2zbyr3cyp ; boolean_T hjke4nmuoj ; boolean_T a4yxlohvrw ; boolean_T
jclfiq2n4d ; boolean_T goqumcrvhe ; boolean_T cttqks3f5r ; boolean_T
m4eybcvflx ; boolean_T j3lllf3huv ; boolean_T fbjkyu0wck ; dtqrrcemuw
pb1igtxdxp [ 4 ] ; kjgphjufh5 gjwrbmtmpz ; k0a351zprl ksccswp5ae ; kjgphjufh5
mxxvrdjd12 ; k0a351zprl mfn3ngkfa2 ; kjgphjufh5 cakr3inwfo ; k0a351zprl
poyrgpcj11 ; kjgphjufh5 noxrljyvsbq ; k0a351zprl eyli315csa ; cflrekwlxf
e2qkfxuvdy ; cflrekwlxf l1ngv2u4wj ; jq4sjzevfh apfzndjc5l ; cflrekwlxf
osjj2s24tkm ; jq4sjzevfh htvvb3wiwks ; } B ; typedef struct { real_T
n4s3ahy5yb [ 3 ] ; real_T idqvj2pdci ; real_T knzjkvs1ph ; real_T if2nkbrvo2
[ 3 ] ; real_T jitwfcjega [ 3 ] ; volatile real_T copyj3c0zm [ 3 ] ; volatile
real_T fomvocwhzx [ 3 ] ; volatile real_T n0qtkktk4b [ 3 ] ; volatile real_T
iss5bo4bt1 [ 4 ] ; volatile real_T hwbnwagtqg [ 3 ] ; real_T n2hvy13sko [ 4 ]
; real_T b1zu5y4c1e [ 2 ] ; real_T bw5qeffbbw ; real_T hu0lal024o ; real_T
bifdt1dwkt ; real_T avustsyiau ; real_T b2jkiu5223 ; real_T plhevtqgqm ;
real_T ph55yq4rg2 ; real_T c435izcp3j ; real_T ec3u5hsjjx ; real_T paxgd2l2yo
; real_T dzezmfjqg2 ; real_T ebj5snmy5k ; real_T ljrsfho0wx ; struct { void *
LoggedData ; } byifh3cbv3 ; struct { void * LoggedData ; } pvlim3c5mq ;
struct { void * LoggedData ; } au2vjuklpu ; struct { void * LoggedData [ 3 ]
; } fflfdrlal2 ; struct { void * LoggedData ; } eiw0ixgt10 ; struct { void *
LoggedData ; } pgpdkkibfx ; struct { void * LoggedData [ 2 ] ; } jam2rvgjqc ;
struct { void * LoggedData ; } arsjlnibnx ; struct { void * LoggedData ; }
ehhey5ps5e ; struct { void * LoggedData [ 4 ] ; } jrsxpswlnk ; struct { void
* LoggedData [ 2 ] ; } blmy10d0ye ; struct { void * LoggedData [ 4 ] ; }
lsuafoxcr0 ; struct { void * LoggedData ; } gt53fz21ng ; struct { void *
LoggedData ; } aucu0ttrf1 ; struct { void * LoggedData [ 2 ] ; } ayynegkaly ;
struct { void * LoggedData ; } as5segj51q ; struct { void * LoggedData ; }
czc2ir0435 ; struct { void * LoggedData [ 3 ] ; } iyxonp3qpy ; struct { void
* LoggedData [ 3 ] ; } bp1evnya0i ; struct { void * LoggedData [ 2 ] ; }
jsr2ob1cuo ; struct { void * LoggedData [ 3 ] ; } a5m2ebojbt ; struct { void
* LoggedData ; } kddqd4xdhn ; struct { void * LoggedData ; } jvgrm2reh2 ;
struct { void * LoggedData [ 2 ] ; } gh3lpb0k0u ; struct { void * LoggedData
[ 3 ] ; } lpzai5tbdq ; struct { void * AQHandles ; } itvkmqwddr ; struct {
void * AQHandles ; } ow1hokcqe2 ; struct { void * AQHandles ; } lnsrt2x1pu ;
struct { void * AQHandles ; } g041etusks ; struct { void * AQHandles ; }
m0kvuadgsa ; struct { void * LoggedData ; } hkcpllhn5e ; struct { void *
AQHandles ; } jbferm2qpe ; uint32_T ccsmcmbqmb [ 3 ] ; uint32_T clnxzkzwul [
3 ] ; int_T cw5iqh3ouk ; int_T ju4msksctk ; int_T ioutqu0mzn [ 3 ] ; int_T
ic5wrhkshl ; int_T h1gscmcbjv [ 3 ] ; int_T io5vwqal1m [ 3 ] ; int_T
anbsxboymw [ 3 ] ; int_T fadx5rbkb5 ; int_T aurk3irgno ; int_T efxiqqkwdi ;
int_T e2ochzlmai ; int_T ojhqn5nj5v ; int_T aae2rkk5zx ; int_T llwxvtrg40 ;
int_T pjruxozaqy ; int_T hurgr1gioy ; int_T oztywmgwo0 ; int_T cfm1r3cml5 ;
int8_T jntluapbyr ; volatile int8_T hishvdtdyh ; volatile int8_T mmnksj2b0q ;
volatile int8_T jun1bqxvdu ; volatile int8_T h5vcx1hl24 ; volatile int8_T
jjoe3tarlt ; int8_T j0xyivirlp ; int8_T h5n0zvxyf2 ; int8_T k5iobck5su ;
int8_T bi1cenloak ; boolean_T nxkoaebnan ; boolean_T nofoaw1myc ; boolean_T
ijqkc2l1q2 ; boolean_T ozcr3kl5lj ; boolean_T hamjs1juhq ; boolean_T
ki4dwjzmsy ; boolean_T ggqlzk0dih ; boolean_T bny0mcq4qa ; boolean_T
f4zdfu1pt1 ; boolean_T hocsygpcrl ; boolean_T cxgys2dwdy ; boolean_T
bmqmtm0dew ; i2qsjznhcu gjwrbmtmpz ; i2qsjznhcu mxxvrdjd12 ; i2qsjznhcu
cakr3inwfo ; i2qsjznhcu noxrljyvsbq ; knzpqmzeq5 e2qkfxuvdy ; knzpqmzeq5
l1ngv2u4wj ; g3rr01glgf apfzndjc5l ; knzpqmzeq5 osjj2s24tkm ; g3rr01glgf
htvvb3wiwks ; } DW ; typedef struct { real_T ew1hskbqsh [ 6 ] ; real_T
nvdrj2cjnk [ 4 ] ; real_T jdftreuorv [ 2 ] ; real_T ecgpmufv2h [ 4 ] ; real_T
gaamg4vtxr ; real_T jecjxd3eom ; real_T nfusnuz14b ; real_T bmw50ts5q4 ;
real_T p2fru1tfkf ; real_T kqdff1w3rv ; real_T klntojgsev ; real_T dmhixvg5dr
[ 6 ] ; real_T kr5v2kihrz [ 2 ] ; real_T a2uhtc4qab ; real_T pxjrlp0doi ;
real_T kkmmegedxf [ 2 ] ; real_T ddoib4fzt3 ; real_T ogw3fpytzv ; real_T
ey4qfao5lu ; real_T kf1ocexm5v ; real_T cehthaubuh ; real_T lx1mpujr22 [ 2 ]
; real_T dztonrd310 ; real_T efvbjs3y34 ; real_T egw32dj1nn ; real_T
pdm1gqxnsc [ 4 ] ; bdqrkgokb2 gjwrbmtmpz ; bdqrkgokb2 mxxvrdjd12 ; bdqrkgokb2
cakr3inwfo ; bdqrkgokb2 noxrljyvsbq ; } X ; typedef struct { real_T
ew1hskbqsh [ 6 ] ; real_T nvdrj2cjnk [ 4 ] ; real_T jdftreuorv [ 2 ] ; real_T
ecgpmufv2h [ 4 ] ; real_T gaamg4vtxr ; real_T jecjxd3eom ; real_T nfusnuz14b
; real_T bmw50ts5q4 ; real_T p2fru1tfkf ; real_T kqdff1w3rv ; real_T
klntojgsev ; real_T dmhixvg5dr [ 6 ] ; real_T kr5v2kihrz [ 2 ] ; real_T
a2uhtc4qab ; real_T pxjrlp0doi ; real_T kkmmegedxf [ 2 ] ; real_T ddoib4fzt3
; real_T ogw3fpytzv ; real_T ey4qfao5lu ; real_T kf1ocexm5v ; real_T
cehthaubuh ; real_T lx1mpujr22 [ 2 ] ; real_T dztonrd310 ; real_T efvbjs3y34
; real_T egw32dj1nn ; real_T pdm1gqxnsc [ 4 ] ; plfar4j100 gjwrbmtmpz ;
plfar4j100 mxxvrdjd12 ; plfar4j100 cakr3inwfo ; plfar4j100 noxrljyvsbq ; }
XDot ; typedef struct { boolean_T ew1hskbqsh [ 6 ] ; boolean_T nvdrj2cjnk [ 4
] ; boolean_T jdftreuorv [ 2 ] ; boolean_T ecgpmufv2h [ 4 ] ; boolean_T
gaamg4vtxr ; boolean_T jecjxd3eom ; boolean_T nfusnuz14b ; boolean_T
bmw50ts5q4 ; boolean_T p2fru1tfkf ; boolean_T kqdff1w3rv ; boolean_T
klntojgsev ; boolean_T dmhixvg5dr [ 6 ] ; boolean_T kr5v2kihrz [ 2 ] ;
boolean_T a2uhtc4qab ; boolean_T pxjrlp0doi ; boolean_T kkmmegedxf [ 2 ] ;
boolean_T ddoib4fzt3 ; boolean_T ogw3fpytzv ; boolean_T ey4qfao5lu ;
boolean_T kf1ocexm5v ; boolean_T cehthaubuh ; boolean_T lx1mpujr22 [ 2 ] ;
boolean_T dztonrd310 ; boolean_T efvbjs3y34 ; boolean_T egw32dj1nn ;
boolean_T pdm1gqxnsc [ 4 ] ; hz1fvgvokw gjwrbmtmpz ; hz1fvgvokw mxxvrdjd12 ;
hz1fvgvokw cakr3inwfo ; hz1fvgvokw noxrljyvsbq ; } XDis ; typedef struct {
real_T ew1hskbqsh [ 6 ] ; real_T nvdrj2cjnk [ 4 ] ; real_T jdftreuorv [ 2 ] ;
real_T ecgpmufv2h [ 4 ] ; real_T gaamg4vtxr ; real_T jecjxd3eom ; real_T
nfusnuz14b ; real_T bmw50ts5q4 ; real_T p2fru1tfkf ; real_T kqdff1w3rv ;
real_T klntojgsev ; real_T dmhixvg5dr [ 6 ] ; real_T kr5v2kihrz [ 2 ] ;
real_T a2uhtc4qab ; real_T pxjrlp0doi ; real_T kkmmegedxf [ 2 ] ; real_T
ddoib4fzt3 ; real_T ogw3fpytzv ; real_T ey4qfao5lu ; real_T kf1ocexm5v ;
real_T cehthaubuh ; real_T lx1mpujr22 [ 2 ] ; real_T dztonrd310 ; real_T
efvbjs3y34 ; real_T egw32dj1nn ; real_T pdm1gqxnsc [ 4 ] ; ktsdhb3qyo
gjwrbmtmpz ; ktsdhb3qyo mxxvrdjd12 ; ktsdhb3qyo cakr3inwfo ; ktsdhb3qyo
noxrljyvsbq ; } CStateAbsTol ; typedef struct { real_T ew1hskbqsh [ 6 ] ;
real_T nvdrj2cjnk [ 4 ] ; real_T jdftreuorv [ 2 ] ; real_T ecgpmufv2h [ 4 ] ;
real_T gaamg4vtxr ; real_T jecjxd3eom ; real_T nfusnuz14b ; real_T bmw50ts5q4
; real_T p2fru1tfkf ; real_T kqdff1w3rv ; real_T klntojgsev ; real_T
dmhixvg5dr [ 6 ] ; real_T kr5v2kihrz [ 2 ] ; real_T a2uhtc4qab ; real_T
pxjrlp0doi ; real_T kkmmegedxf [ 2 ] ; real_T ddoib4fzt3 ; real_T ogw3fpytzv
; real_T ey4qfao5lu ; real_T kf1ocexm5v ; real_T cehthaubuh ; real_T
lx1mpujr22 [ 2 ] ; real_T dztonrd310 ; real_T efvbjs3y34 ; real_T egw32dj1nn
; real_T pdm1gqxnsc [ 4 ] ; fafflelkte gjwrbmtmpz ; fafflelkte mxxvrdjd12 ;
fafflelkte cakr3inwfo ; fafflelkte noxrljyvsbq ; } CXPtMin ; typedef struct {
real_T ew1hskbqsh [ 6 ] ; real_T nvdrj2cjnk [ 4 ] ; real_T jdftreuorv [ 2 ] ;
real_T ecgpmufv2h [ 4 ] ; real_T gaamg4vtxr ; real_T jecjxd3eom ; real_T
nfusnuz14b ; real_T bmw50ts5q4 ; real_T p2fru1tfkf ; real_T kqdff1w3rv ;
real_T klntojgsev ; real_T dmhixvg5dr [ 6 ] ; real_T kr5v2kihrz [ 2 ] ;
real_T a2uhtc4qab ; real_T pxjrlp0doi ; real_T kkmmegedxf [ 2 ] ; real_T
ddoib4fzt3 ; real_T ogw3fpytzv ; real_T ey4qfao5lu ; real_T kf1ocexm5v ;
real_T cehthaubuh ; real_T lx1mpujr22 [ 2 ] ; real_T dztonrd310 ; real_T
efvbjs3y34 ; real_T egw32dj1nn ; real_T pdm1gqxnsc [ 4 ] ; azpv1ueqea
gjwrbmtmpz ; azpv1ueqea mxxvrdjd12 ; azpv1ueqea cakr3inwfo ; azpv1ueqea
noxrljyvsbq ; } CXPtMax ; typedef struct { real_T m4lyohi4bb ; real_T
noyon1j1wa ; real_T j3rikkwalv ; real_T fvzivjb5nx [ 3 ] ; real_T hbsoqyvk0c
[ 3 ] ; real_T bpey3dh3yu [ 3 ] ; real_T lowtd33d5y [ 3 ] ; real_T lcpg5gp1ew
; real_T nalktpihmk ; real_T fnqxusaplu ; real_T la2mwb2524 ; real_T
dbk42030of ; real_T abfmmc31ji ; real_T j4slavakz0 ; real_T prl3pxg4vg ;
real_T mm5lciufmr ; real_T govoo1cxe4 ; real_T jkvbyeg0j5 ; real_T nvn5k5lh0d
; real_T fcjkvyg0ss ; real_T km1jij2vdl ; real_T kr3mwfsucp ; real_T
oyv53swvnw ; real_T pucdiaqs50 ; real_T cdhnvut0hq ; real_T nuwlcxd550 ;
real_T mhgajttkxw ; k1hpscepxm apfzndjc5l ; k1hpscepxm htvvb3wiwks ; } ZCV ;
typedef struct { mfim3kn51q apfzndjc5l ; mfim3kn51q htvvb3wiwks ; } PrevZCX ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct
joyf32pywz_ { real_T Out1_Y0 ; real_T UnitDelay_InitialCondition ; real_T
Constant_Value ; } ; struct l3ruaejn4y_ { real_T Constant_Value ; real_T
locked_Value ; real_T locked1_Value ; real_T locked2_Value ; real_T u_Gain ;
boolean_T yn_Y0 ; boolean_T yn_Y0_cejlgz0ere ; boolean_T
UnitDelay_InitialCondition ; boolean_T CombinatorialLogic_table [ 8 ] ; } ;
struct ejentuw24b_ { l3ruaejn4y e4olea1wzo ; } ; struct jwndialyja_ {
ejentuw24b c2pauqsk3t ; } ; struct P_ { struct_AZjjEXmUyHbvyklo4YIYcD STEER ;
struct_5NGg6nxNHRWKsr0nLboB4F VEH ; struct_YQNmUAShMCZdIMpk5KMNkC CTRL ;
struct_sOX3LiStEfrXKFRloTKRnE SENSOR ; struct_hgmnqvlij5jOAI9V1wZ3ZG EV ;
struct_IMeHRhCUQYmqCjojf8ThJC MTR ; struct_zKiQBVfPwpWeAGF3nIRITH WHL ;
struct_FEnSr9k3XVyU96UtOo67RH GND ; real_T VehicleBody3DOFDualTrack_Cl ;
real_T VehicleBody3DOFDualTrack_Cpm ; real_T VehicleBody3DOFDualTrack_Cs [ 31
] ; real_T VehicleBody3DOFDualTrack_Cy_f ; real_T
VehicleBody3DOFDualTrack_Cy_r ; real_T VehicleBody3DOFDualTrack_Cym [ 31 ] ;
real_T LongitudinalWheelDiskBrake_FZMAX ; real_T
LongitudinalWheelDiskBrake1_FZMAX ; real_T LongitudinalWheelDiskBrake2_FZMAX
; real_T LongitudinalWheelDiskBrake3_FZMAX ; real_T
LongitudinalWheelDiskBrake_FZMIN ; real_T LongitudinalWheelDiskBrake1_FZMIN ;
real_T LongitudinalWheelDiskBrake2_FZMIN ; real_T
LongitudinalWheelDiskBrake3_FZMIN ; real_T VehicleBody3DOFDualTrack_Fznom ;
real_T PIDController1_I ; real_T SignalHold_IC ; real_T
SignalHold_IC_k2hqhxwbjn ; real_T SignalHold_IC_cwurlh1ogd ; real_T
PIDController_InitialConditionForIntegrator ; real_T
PIDController1_InitialConditionForIntegrator ; real_T Ramp_InitialOutput ;
real_T PredictiveDriver1_Kaw ; real_T PredictiveDriver1_Kff ; real_T
PredictiveDriver1_Kg ; real_T PredictiveDriver1_Ki ; real_T
PredictiveDriver1_Kp ; real_T LongitudinalWheelDiskBrake_LONGVL ; real_T
LongitudinalWheelDiskBrake1_LONGVL ; real_T
LongitudinalWheelDiskBrake2_LONGVL ; real_T
LongitudinalWheelDiskBrake3_LONGVL ; real_T
LongitudinalWheelDiskBrake_NOMPRES ; real_T
LongitudinalWheelDiskBrake1_NOMPRES ; real_T
LongitudinalWheelDiskBrake2_NOMPRES ; real_T
LongitudinalWheelDiskBrake3_NOMPRES ; real_T PIDController1_P ; real_T
LongitudinalWheelDiskBrake_PCX1 ; real_T LongitudinalWheelDiskBrake1_PCX1 ;
real_T LongitudinalWheelDiskBrake2_PCX1 ; real_T
LongitudinalWheelDiskBrake3_PCX1 ; real_T LongitudinalWheelDiskBrake_PDX1 ;
real_T LongitudinalWheelDiskBrake1_PDX1 ; real_T
LongitudinalWheelDiskBrake2_PDX1 ; real_T LongitudinalWheelDiskBrake3_PDX1 ;
real_T LongitudinalWheelDiskBrake_PDX2 ; real_T
LongitudinalWheelDiskBrake1_PDX2 ; real_T LongitudinalWheelDiskBrake2_PDX2 ;
real_T LongitudinalWheelDiskBrake3_PDX2 ; real_T
LongitudinalWheelDiskBrake_PDX3 ; real_T LongitudinalWheelDiskBrake1_PDX3 ;
real_T LongitudinalWheelDiskBrake2_PDX3 ; real_T
LongitudinalWheelDiskBrake3_PDX3 ; real_T LongitudinalWheelDiskBrake_PEX1 ;
real_T LongitudinalWheelDiskBrake1_PEX1 ; real_T
LongitudinalWheelDiskBrake2_PEX1 ; real_T LongitudinalWheelDiskBrake3_PEX1 ;
real_T LongitudinalWheelDiskBrake_PEX2 ; real_T
LongitudinalWheelDiskBrake1_PEX2 ; real_T LongitudinalWheelDiskBrake2_PEX2 ;
real_T LongitudinalWheelDiskBrake3_PEX2 ; real_T
LongitudinalWheelDiskBrake_PEX3 ; real_T LongitudinalWheelDiskBrake1_PEX3 ;
real_T LongitudinalWheelDiskBrake2_PEX3 ; real_T
LongitudinalWheelDiskBrake3_PEX3 ; real_T LongitudinalWheelDiskBrake_PEX4 ;
real_T LongitudinalWheelDiskBrake1_PEX4 ; real_T
LongitudinalWheelDiskBrake2_PEX4 ; real_T LongitudinalWheelDiskBrake3_PEX4 ;
real_T LongitudinalWheelDiskBrake_PHX1 ; real_T
LongitudinalWheelDiskBrake1_PHX1 ; real_T LongitudinalWheelDiskBrake2_PHX1 ;
real_T LongitudinalWheelDiskBrake3_PHX1 ; real_T
LongitudinalWheelDiskBrake_PHX2 ; real_T LongitudinalWheelDiskBrake1_PHX2 ;
real_T LongitudinalWheelDiskBrake2_PHX2 ; real_T
LongitudinalWheelDiskBrake3_PHX2 ; real_T LongitudinalWheelDiskBrake_PKX1 ;
real_T LongitudinalWheelDiskBrake1_PKX1 ; real_T
LongitudinalWheelDiskBrake2_PKX1 ; real_T LongitudinalWheelDiskBrake3_PKX1 ;
real_T LongitudinalWheelDiskBrake_PKX2 ; real_T
LongitudinalWheelDiskBrake1_PKX2 ; real_T LongitudinalWheelDiskBrake2_PKX2 ;
real_T LongitudinalWheelDiskBrake3_PKX2 ; real_T
LongitudinalWheelDiskBrake_PKX3 ; real_T LongitudinalWheelDiskBrake1_PKX3 ;
real_T LongitudinalWheelDiskBrake2_PKX3 ; real_T
LongitudinalWheelDiskBrake3_PKX3 ; real_T LongitudinalWheelDiskBrake_PPX1 ;
real_T LongitudinalWheelDiskBrake1_PPX1 ; real_T
LongitudinalWheelDiskBrake2_PPX1 ; real_T LongitudinalWheelDiskBrake3_PPX1 ;
real_T LongitudinalWheelDiskBrake_PPX2 ; real_T
LongitudinalWheelDiskBrake1_PPX2 ; real_T LongitudinalWheelDiskBrake2_PPX2 ;
real_T LongitudinalWheelDiskBrake3_PPX2 ; real_T
LongitudinalWheelDiskBrake_PPX3 ; real_T LongitudinalWheelDiskBrake1_PPX3 ;
real_T LongitudinalWheelDiskBrake2_PPX3 ; real_T
LongitudinalWheelDiskBrake3_PPX3 ; real_T LongitudinalWheelDiskBrake_PPX4 ;
real_T LongitudinalWheelDiskBrake1_PPX4 ; real_T
LongitudinalWheelDiskBrake2_PPX4 ; real_T LongitudinalWheelDiskBrake3_PPX4 ;
real_T LongitudinalWheelDiskBrake_PVX1 ; real_T
LongitudinalWheelDiskBrake1_PVX1 ; real_T LongitudinalWheelDiskBrake2_PVX1 ;
real_T LongitudinalWheelDiskBrake3_PVX1 ; real_T
LongitudinalWheelDiskBrake_PVX2 ; real_T LongitudinalWheelDiskBrake1_PVX2 ;
real_T LongitudinalWheelDiskBrake2_PVX2 ; real_T
LongitudinalWheelDiskBrake3_PVX2 ; real_T VehicleBody3DOFDualTrack_Pabs ;
real_T PredictiveDriver1_PositionGainF ; real_T
LongitudinalWheelDiskBrake_QSY1 ; real_T LongitudinalWheelDiskBrake1_QSY1 ;
real_T LongitudinalWheelDiskBrake2_QSY1 ; real_T
LongitudinalWheelDiskBrake3_QSY1 ; real_T LongitudinalWheelDiskBrake_QSY2 ;
real_T LongitudinalWheelDiskBrake1_QSY2 ; real_T
LongitudinalWheelDiskBrake2_QSY2 ; real_T LongitudinalWheelDiskBrake3_QSY2 ;
real_T LongitudinalWheelDiskBrake_QSY3 ; real_T
LongitudinalWheelDiskBrake1_QSY3 ; real_T LongitudinalWheelDiskBrake2_QSY3 ;
real_T LongitudinalWheelDiskBrake3_QSY3 ; real_T
LongitudinalWheelDiskBrake_QSY4 ; real_T LongitudinalWheelDiskBrake1_QSY4 ;
real_T LongitudinalWheelDiskBrake2_QSY4 ; real_T
LongitudinalWheelDiskBrake3_QSY4 ; real_T LongitudinalWheelDiskBrake_QSY5 ;
real_T LongitudinalWheelDiskBrake1_QSY5 ; real_T
LongitudinalWheelDiskBrake2_QSY5 ; real_T LongitudinalWheelDiskBrake3_QSY5 ;
real_T LongitudinalWheelDiskBrake_QSY6 ; real_T
LongitudinalWheelDiskBrake1_QSY6 ; real_T LongitudinalWheelDiskBrake2_QSY6 ;
real_T LongitudinalWheelDiskBrake3_QSY6 ; real_T
LongitudinalWheelDiskBrake_QSY7 ; real_T LongitudinalWheelDiskBrake1_QSY7 ;
real_T LongitudinalWheelDiskBrake2_QSY7 ; real_T
LongitudinalWheelDiskBrake3_QSY7 ; real_T LongitudinalWheelDiskBrake_QSY8 ;
real_T LongitudinalWheelDiskBrake1_QSY8 ; real_T
LongitudinalWheelDiskBrake2_QSY8 ; real_T LongitudinalWheelDiskBrake3_QSY8 ;
real_T DragForce_R ; real_T ReferenceGenerator_R ; real_T
VehicleBody3DOFDualTrack_Tair ; real_T MappedLeftMotor_Tc ; real_T
MappedRightMotor_Tc ; real_T Randombias_Ts ; real_T Randombias_Ts_as2pyn1hb1
; real_T LongitudinalWheelDiskBrake_VXLOW ; real_T
LongitudinalWheelDiskBrake1_VXLOW ; real_T LongitudinalWheelDiskBrake2_VXLOW
; real_T LongitudinalWheelDiskBrake3_VXLOW ; real_T PredictiveDriver1_a ;
real_T ThreeaxisInertialMeasurementUnit_a_bias [ 3 ] ; real_T
ThreeaxisAccelerometer_a_pow [ 3 ] ; real_T ThreeaxisAccelerometer_a_seeds [
3 ] ; real_T ThreeaxisInertialMeasurementUnit_a_sf_cc [ 9 ] ; real_T
ConstantRadius_ay_max ; real_T ConstantRadius_ay_stop ; real_T
PredictiveDriver1_b ; real_T VehicleBody3DOFDualTrack_beta_w [ 31 ] ; real_T
CompareToConstant_const ; real_T CompareToConstant_const_h1s0vqwvxz ; real_T
VehicleBody3DOFDualTrack_d ; real_T VehicleXYPlotter_extRef ; real_T
VehicleBody3DOFDualTrack_g ; real_T ThreeaxisInertialMeasurementUnit_g_bias [
3 ] ; real_T ThreeaxisGyroscope_g_pow [ 3 ] ; real_T
ThreeaxisGyroscope_g_seeds [ 3 ] ; real_T
ThreeaxisInertialMeasurementUnit_g_sens [ 3 ] ; real_T
ThreeaxisInertialMeasurementUnit_g_sf_cc [ 9 ] ; real_T
LongitudinalWheelDiskBrake_gamma ; real_T LongitudinalWheelDiskBrake1_gamma ;
real_T LongitudinalWheelDiskBrake2_gamma ; real_T
LongitudinalWheelDiskBrake3_gamma ; real_T
ThreeaxisInertialMeasurementUnit_imu [ 3 ] ; real_T
LongitudinalWheelDiskBrake_kappamax ; real_T
LongitudinalWheelDiskBrake1_kappamax ; real_T
LongitudinalWheelDiskBrake2_kappamax ; real_T
LongitudinalWheelDiskBrake3_kappamax ; real_T
LongitudinalWheelDiskBrake_lam_Cx ; real_T LongitudinalWheelDiskBrake1_lam_Cx
; real_T LongitudinalWheelDiskBrake2_lam_Cx ; real_T
LongitudinalWheelDiskBrake3_lam_Cx ; real_T LongitudinalWheelDiskBrake_lam_Ex
; real_T LongitudinalWheelDiskBrake1_lam_Ex ; real_T
LongitudinalWheelDiskBrake2_lam_Ex ; real_T
LongitudinalWheelDiskBrake3_lam_Ex ; real_T LongitudinalWheelDiskBrake_lam_Hx
; real_T LongitudinalWheelDiskBrake1_lam_Hx ; real_T
LongitudinalWheelDiskBrake2_lam_Hx ; real_T
LongitudinalWheelDiskBrake3_lam_Hx ; real_T
LongitudinalWheelDiskBrake_lam_Kxkappa ; real_T
LongitudinalWheelDiskBrake1_lam_Kxkappa ; real_T
LongitudinalWheelDiskBrake2_lam_Kxkappa ; real_T
LongitudinalWheelDiskBrake3_lam_Kxkappa ; real_T
LongitudinalWheelDiskBrake_lam_My ; real_T LongitudinalWheelDiskBrake1_lam_My
; real_T LongitudinalWheelDiskBrake2_lam_My ; real_T
LongitudinalWheelDiskBrake3_lam_My ; real_T LongitudinalWheelDiskBrake_lam_Vx
; real_T LongitudinalWheelDiskBrake1_lam_Vx ; real_T
LongitudinalWheelDiskBrake2_lam_Vx ; real_T
LongitudinalWheelDiskBrake3_lam_Vx ; real_T
LongitudinalWheelDiskBrake_lam_muV ; real_T
LongitudinalWheelDiskBrake1_lam_muV ; real_T
LongitudinalWheelDiskBrake2_lam_muV ; real_T
LongitudinalWheelDiskBrake3_lam_muV ; real_T VehicleBody3DOFDualTrack_latOff
; real_T VehicleBody3DOFDualTrack_longOff ; real_T
VehicleBody3DOFDualTrack_sigma_f ; real_T VehicleBody3DOFDualTrack_sigma_r ;
real_T Ramp1_slope ; real_T Ramp_slope ; real_T Ramp_start ; real_T
ReferenceGenerator_t_start ; real_T PredictiveDriver1_tauerr ; real_T
PredictiveDriver1_theta ; real_T InternalVehicleXYPlotter_tireFNorm ; real_T
ConstantRadius_turnDirMask ; real_T InternalVehicleXYPlotter_velNorm ; real_T
VehicleBody3DOFDualTrack_vertOff ; real_T PredictiveDriver1_vnom ; real_T
ThreeaxisInertialMeasurementUnit_w_a ; real_T
ThreeaxisInertialMeasurementUnit_w_g ; real_T
ElectronicThrottleActuatorDynamics_wc ; real_T EngineResponse_wc ; real_T
EngineResponse1_wc ; real_T ContLPF_wc ; real_T ContLPF_wc_kgprcofxkm ;
real_T ContLPF_wc_mk3xswwxyb ; real_T VehicleBody3DOFDualTrack_xdot_tol ;
real_T ThreeaxisInertialMeasurementUnit_z_a ; real_T
ThreeaxisInertialMeasurementUnit_z_g ; real_T Switch2_Threshold ; real_T
Gain2_Gain ; real_T u1_UpperSat ; real_T u1_LowerSat ; real_T
u1_UpperSat_mbuegf0x1j ; real_T u1_LowerSat_guyrgk45lz ; real_T u0_UpperSat ;
real_T u0_LowerSat ; real_T vehiclemodel_Fxtire_sat ; real_T
vehiclemodel_Fytire_sat ; real_T InternalVehicleXYPlotter_extStats ; real_T
InternalVehicleXYPlotter_extTireF ; real_T IntegratorSecondOrderLimited_ICX ;
real_T IntegratorSecondOrderLimited_ICDXDT ; real_T Memory1_InitialCondition
; real_T Memory1_InitialCondition_hlvazagar1 ; real_T Switch1_Threshold ;
real_T Switch_Threshold ; real_T Integrator1_IC ; real_T
Integrator1_IC_oxgkoswmzi ; real_T Integrator1_IC_ky4nrg4tcb ; real_T
Integrator_IC ; real_T Signconvention_Gain ; real_T Integrator_IC_clidxqllwz
; real_T Signconvention_Gain_jhil4frzun ; real_T Integrator_IC_ms50emixq4 ;
real_T Signconvention_Gain_p13ojhqoz3 ; real_T Integrator_IC_hlnnhd10qj ;
real_T Signconvention_Gain_d3epx2gwud ; real_T DeadZone2_Start ; real_T
DeadZone2_End ; real_T u_Gain [ 3 ] ; real_T Crm_tableData [ 2 ] ; real_T
Crm_bp01Data [ 2 ] ; real_T ZeroOrderHold1_Gain ; real_T ZeroOrderHold_Gain ;
real_T ZeroOrderHold3_Gain ; real_T Switch_Threshold_hdzzjqtwqi ; real_T
WhiteNoise_Mean ; real_T WhiteNoise_StdDev ; real_T Saturation_UpperSat [ 3 ]
; real_T Saturation_LowerSat [ 3 ] ; real_T Integrator1_IC_aqsuygnqg0 ;
real_T IntegratorSecondOrderLimited_ICX_mbmho52uo4 ; real_T
IntegratorSecondOrderLimited_ICDXDT_cygbcafyyf ; real_T
ZeroOrderHold_Gain_llrbulmr51 ; real_T ZeroOrderHold1_Gain_glpx1ehscp ;
real_T Switch_Threshold_drowwnc0fs ; real_T WhiteNoise_Mean_dffhdtx5eq ;
real_T WhiteNoise_StdDev_dhvemjsox3 ; real_T Saturation_UpperSat_ojovnnjyll [
3 ] ; real_T Saturation_LowerSat_jjanzakcpx [ 3 ] ; real_T Gain9_Gain ;
real_T Gain4_Gain ; real_T TransferFcnFiltroVolante_A [ 2 ] ; real_T
TransferFcnFiltroVolante_C [ 2 ] ; real_T Switch3_Threshold ; real_T
Switch1_Threshold_hmxcklihzo ; real_T Switch2_Threshold_hgm2a54gp5 ; real_T
Gain7_Gain ; real_T TransferFcnFiltroAPPS_A [ 2 ] ; real_T
TransferFcnFiltroAPPS_C [ 2 ] ; real_T Gain6_Gain ; real_T Gain5_Gain ;
real_T Integrator1_IC_m13335t34z ; real_T Saturation_UpperSat_fidkza0lel ;
real_T Saturation_LowerSat_jfjibpft5h ; real_T AccelCmd_Gain ; real_T
Gain_Gain ; real_T Integrator1_IC_flkqwlwg0v ; real_T
MaxTorqueLimit_tableData [ 15 ] ; real_T MaxTorqueLimit_bp01Data [ 15 ] ;
real_T Integrator_IC_fmnrqfpmne ; real_T Interpolatedzerocrossing_tableData [
2 ] ; real_T Interpolatedzerocrossing_bp01Data [ 2 ] ; real_T Gain1_Gain ;
real_T Gain3_Gain ; real_T MaxTorqueLimit_tableData_m1dajuzjrc [ 15 ] ;
real_T MaxTorqueLimit_bp01Data_j3bf1kzkep [ 15 ] ; real_T
Integrator_IC_g2jt3nwaqi ; real_T
Interpolatedzerocrossing_tableData_mniicvlrw2 [ 2 ] ; real_T
Interpolatedzerocrossing_bp01Data_mwkxwysuer [ 2 ] ; real_T
Gain2_Gain_iyrcycllcs ; real_T Saturation_UpperSat_kq4nfxdnia ; real_T
Saturation_LowerSat_fe4nmgk5ze ; real_T Saturation1_UpperSat ; real_T
Saturation1_LowerSat ; real_T Integrator_IC_gscjbyoubu ; real_T
Integrator_IC_nf2gzhzq4q ; real_T Memory_InitialCondition [ 4 ] ; real_T
Integrator1_IC_lsnovgb5mz ; real_T Integrator1_UpperSat ; real_T
Integrator1_LowerSat ; real_T uto1_UpperSat ; real_T uto1_LowerSat ; real_T
Integrator1_IC_gw3lb4ptgj ; real_T Saturation_UpperSat_epfsxvlpi1 ; real_T
Saturation_LowerSat_gezd2otg2p ; real_T Integrator2_IC ; real_T
Memory_InitialCondition_l10e3jks55 [ 2 ] ; real_T IC_Value ; real_T
UnitDelay_InitialCondition ; real_T Switch_Threshold_olrv4yiiot ; real_T
Step_Y0 ; real_T Switch1_Threshold_jcrfw5slcx ; real_T
Switch1_Threshold_mvgkfperj4 ; real_T lateral_IC ; real_T
Saturation_UpperSat_grpbnmsvx2 ; real_T Saturation_LowerSat_fwzdhlo31v ;
real_T Step_Y0_hgfim40kul ; real_T Switch_Threshold_kbix0det2b ; real_T
Constant14_Value ; real_T Constant_Value ; real_T Constant1_Value ; real_T
Constant2_Value ; real_T Coefiatritog_Value ; real_T
Constant1_Value_k4pvabrprp [ 4 ] ; real_T Constant1_Value_hzaqq3euyu [ 4 ] ;
real_T Constant13_Value [ 3 ] ; real_T Constant16_Value [ 3 ] ; real_T
Constant22_Value ; real_T Constant3_Value [ 4 ] ; real_T
Constant3_Value_gnx4c1u1ls ; real_T Constant4_Value ; real_T Constant5_Value
; real_T Fatordeajustabilidade_Value ; real_T Constant2_Value_o0uqnepleb ;
real_T Constant7_Value ; real_T Constant_Value_opsf2dtcbo ; real_T
Gain1_Gain_aapnp35q3g ; real_T steerOut_Value ; real_T
Switch3_Threshold_inzq1ozihl ; real_T steerOut_Value_lublqohdan ; real_T
Constant_Value_hjvqgsitc5 ; real_T Constant_Value_puaywslvmd ; real_T
Zero_Value ; real_T Constant5_Value_c0krqxlzsa ; real_T u_Value [ 3 ] ;
real_T Constant_Value_m02bm4pqxl ; real_T ZeroOrderHold4_Gain ; real_T
Gain_Gain_lc3fs3llo4 [ 3 ] ; real_T ZeroOrderHold2_Gain ; real_T
u_Value_lyklh2qhwj [ 3 ] ; real_T Constant_Value_ou5jit20w0 ; real_T
FxType_Value ; real_T Saturation_UpperSat_gvxzlt42ct ; real_T
Saturation_LowerSat_c5tt540suj ; real_T Constant_Value_b31a0ftszp ; real_T
Constant1_Value_d0mkimaknr ; real_T Constant21_Value ; real_T
Constant7_Value_laudg2el00 ; real_T Constant6_Value ; real_T Constant10_Value
; real_T Constant2_Value_cjiby13swq ; real_T Constant8_Value ; real_T
Constant4_Value_awm5evched ; real_T Constant19_Value [ 3 ] ; real_T
Constant12_Value [ 3 ] ; real_T Constant14_Value_cm1iaadx3q [ 9 ] ; real_T
Constant5_Value_g0cymkbbny ; real_T Constant1_Value_iplpmxjzxr ; real_T
Constant3_Value_g3mg5jylp3 ; real_T Constant19_Value_orug4n0sxc [ 3 ] ;
real_T Constant12_Value_l2gbjkvj00 [ 3 ] ; real_T Constant14_Value_en5e35tytu
[ 9 ] ; real_T Constant14_Value_hic1gb1llh ; real_T
Constant1_Value_kcfoaql2pq ; real_T Constant19_Value_nhqbp0bzti ; real_T
Constant2_Value_gz5bhq1flv ; real_T Constant3_Value_ncgz3qcyjv ; real_T
Constant4_Value_ntvqdkz2pq ; real_T Constant5_Value_mlh2nxzwxo ; real_T
Constant6_Value_ddozzpjtqi ; real_T Constant7_Value_exa5s4n3p5 ; real_T
Constant8_Value_fyo5g42mrm ; real_T Constant9_Value ; real_T
Constant10_Value_lb3gvazgl3 ; real_T Constant11_Value ; real_T
Constant16_Value_koib3b3k20 ; real_T Constant17_Value ; real_T
Constant13_Value_bmpf0tegvx ; real_T Constant15_Value ; real_T
Constant21_Value_gmnmhqy4my ; real_T Constant22_Value_p0vgly5awa ; real_T
Constant18_Value ; real_T Constant20_Value ; real_T Constant24_Value ; real_T
Constant23_Value ; real_T rollType_Value ; real_T vertType_Value ; real_T
Ratioofstatictokinetic_Gain ; real_T FxType_Value_ek5xvfczli ; real_T
Saturation_UpperSat_hcxwsaqrsd ; real_T Saturation_LowerSat_hyimqnoohc ;
real_T Constant_Value_o5p4g210jz ; real_T Constant1_Value_j10eemu0nh ; real_T
Constant21_Value_inu01fzg5w ; real_T Constant7_Value_a5t0wvqm4e ; real_T
Constant6_Value_jzggnm5gxu ; real_T Constant10_Value_fe3uciq2ej ; real_T
Constant2_Value_giy1eu2sav ; real_T Constant8_Value_h03xyi2fkr ; real_T
Constant4_Value_dhlnoyt1ns ; real_T Constant19_Value_ozzfdyucl4 [ 3 ] ;
real_T Constant12_Value_ll4vo200da [ 3 ] ; real_T Constant14_Value_crgiad2wqr
[ 9 ] ; real_T Constant5_Value_esz1up2oil ; real_T Constant1_Value_aohjq1cffg
; real_T Constant3_Value_dthjqdhyta ; real_T Constant19_Value_m2gxulihv5 [ 3
] ; real_T Constant12_Value_mcnvofxepq [ 3 ] ; real_T
Constant14_Value_is5zyztpny [ 9 ] ; real_T Constant14_Value_kn114burg5 ;
real_T Constant1_Value_essfdieb0v ; real_T Constant19_Value_acrnlrg0it ;
real_T Constant2_Value_exmoo4tfl4 ; real_T Constant3_Value_mremi1f40y ;
real_T Constant4_Value_bntc5mnpxm ; real_T Constant5_Value_ptfhcn4rg3 ;
real_T Constant6_Value_bpfq2peawo ; real_T Constant7_Value_hh14tkomr5 ;
real_T Constant8_Value_jrmtlsq2ph ; real_T Constant9_Value_armvz3ltmw ;
real_T Constant10_Value_agslcilzqf ; real_T Constant11_Value_kt1ejf5vhm ;
real_T Constant16_Value_kb1wkvqt3t ; real_T Constant17_Value_li32rekzqm ;
real_T Constant13_Value_pbghjdfltp ; real_T Constant15_Value_krq5zhrdas ;
real_T Constant21_Value_dgp5mymac4 ; real_T Constant22_Value_fambei4kxm ;
real_T Constant18_Value_b0tbvm5s0s ; real_T Constant20_Value_dl5hixnvaz ;
real_T Constant24_Value_h31110yfqt ; real_T Constant23_Value_l0ui5ialrq ;
real_T rollType_Value_fxekvynz4q ; real_T vertType_Value_kiuwehenmp ; real_T
Ratioofstatictokinetic_Gain_l4qobhfvhy ; real_T FxType_Value_lgdqhqcr0t ;
real_T Saturation_UpperSat_fb4yxihzdf ; real_T Saturation_LowerSat_d231bjnmuh
; real_T Constant_Value_bnusumcwfg ; real_T Constant1_Value_gfxqx3n4fe ;
real_T Constant21_Value_exx410gmmk ; real_T Constant7_Value_lu4dbtatxf ;
real_T Constant6_Value_mxx2m2walo ; real_T Constant10_Value_gmaxayxkcg ;
real_T Constant2_Value_hvez15fvgm ; real_T Constant8_Value_hnzhk5nffp ;
real_T Constant4_Value_gr0nzbusb4 ; real_T Constant19_Value_leohajathy [ 3 ]
; real_T Constant12_Value_d3fkkrdjup [ 3 ] ; real_T
Constant14_Value_occkolaj2d [ 9 ] ; real_T Constant5_Value_mbcb2wkrv5 ;
real_T Constant1_Value_kbypylresx ; real_T Constant3_Value_inowih5vrf ;
real_T Constant19_Value_o4et452ezr [ 3 ] ; real_T Constant12_Value_kbdyjqaf01
[ 3 ] ; real_T Constant14_Value_nuoisfgmja [ 9 ] ; real_T
Constant14_Value_hmumstuhsy ; real_T Constant1_Value_f1q0yad1p5 ; real_T
Constant19_Value_lrpmzqnjut ; real_T Constant2_Value_ockxqjdmyw ; real_T
Constant3_Value_htcj3hsrgf ; real_T Constant4_Value_jkqfrial2h ; real_T
Constant5_Value_nlptmftxcf ; real_T Constant6_Value_jiisk0yaaj ; real_T
Constant7_Value_jy4rqkoia0 ; real_T Constant8_Value_cykxqmjmde ; real_T
Constant9_Value_m4a0rbq343 ; real_T Constant10_Value_ppnbp4vtqf ; real_T
Constant11_Value_ggkjvmp4y4 ; real_T Constant16_Value_c5k5de5vz4 ; real_T
Constant17_Value_ljswctb2sm ; real_T Constant13_Value_dzm3sahwha ; real_T
Constant15_Value_gkrfu5n52s ; real_T Constant21_Value_bp2hi2k31j ; real_T
Constant22_Value_hpob3pokk1 ; real_T Constant18_Value_gc4ykz150t ; real_T
Constant20_Value_beybli4zjq ; real_T Constant24_Value_jmeh0zbgqk ; real_T
Constant23_Value_ka0nxdifi3 ; real_T rollType_Value_ffaom4emgl ; real_T
vertType_Value_o0oqk35aq3 ; real_T Ratioofstatictokinetic_Gain_a0bsrvz5lm ;
real_T FxType_Value_ir1uubdpxu ; real_T Saturation_UpperSat_ciqkwvx5cy ;
real_T Saturation_LowerSat_mgfjtcbogb ; real_T Constant_Value_ecv500tmeb ;
real_T Constant1_Value_nuzulivnnk ; real_T Constant21_Value_m20ka1bgwz ;
real_T Constant7_Value_l5epqldb0j ; real_T Constant6_Value_dl1z1mqzqt ;
real_T Constant10_Value_jp2ihp4v1p ; real_T Constant2_Value_f1c31ebol1 ;
real_T Constant8_Value_mwkqhrbjbp ; real_T Constant4_Value_moz4ecoe4h ;
real_T Constant19_Value_etwirqyveh [ 3 ] ; real_T Constant12_Value_pth5jus2gw
[ 3 ] ; real_T Constant14_Value_okzecomyla [ 9 ] ; real_T
Constant5_Value_pvppmmlgji ; real_T Constant1_Value_no1buficy0 ; real_T
Constant3_Value_fxsakgeryy ; real_T Constant19_Value_ddjj4cjtl0 [ 3 ] ;
real_T Constant12_Value_dunswvso43 [ 3 ] ; real_T Constant14_Value_njxwz13fop
[ 9 ] ; real_T Constant14_Value_lfzxknncyb ; real_T
Constant1_Value_fcrf4zjlhx ; real_T Constant19_Value_m1fgbtaupm ; real_T
Constant2_Value_kbvvnvh00h ; real_T Constant3_Value_io233cu3w3 ; real_T
Constant4_Value_i0dmebil5o ; real_T Constant5_Value_hl0sdlmzh1 ; real_T
Constant6_Value_a1g45xi0ik ; real_T Constant7_Value_e4ozcq1q1y ; real_T
Constant8_Value_e2ygkdvend ; real_T Constant9_Value_b3fq5bgts1 ; real_T
Constant10_Value_nrlltm0vb5 ; real_T Constant11_Value_b1okoewuqj ; real_T
Constant16_Value_gkle53u5qm ; real_T Constant17_Value_dx3vopggna ; real_T
Constant13_Value_pen3hto5l3 ; real_T Constant15_Value_njogms3uja ; real_T
Constant21_Value_blrzhj43bj ; real_T Constant22_Value_eloqcisbpk ; real_T
Constant18_Value_la1oqyo3ew ; real_T Constant20_Value_jvpxpasvuk ; real_T
Constant24_Value_ae1gyk5y5z ; real_T Constant23_Value_kmuvgwa3dl ; real_T
rollType_Value_jmsnbyje2v ; real_T vertType_Value_hxpwacy5lu ; real_T
Ratioofstatictokinetic_Gain_n4qb4h1gtd ; real_T Constant_Value_iwq4q5pvk4 ;
real_T Gain_Gain_plb3tw03ee ; real_T Constant4_Value_k0imludnhg ; real_T
Constant5_Value_dhotn1uupu ; real_T Gain_Gain_cdrhj5xx4u ; real_T
Gain_Gain_mt55r1hbxj ; real_T Gain_Gain_apgswtmo0d ; real_T
Constant_Value_pzfo3en5e3 ; real_T Constant4_Value_eiyjx3guaz ; real_T
Constant3_Value_mzba2zhg53 ; real_T Constant_Value_jdhlsaexwq ; real_T
Constant1_Value_c1g2ofuupz ; real_T Constant3_Value_jfykirfye0 ; real_T
Constant6_Value_kpny5rfalz ; real_T Constant8_Value_kfoe35jn3i ; real_T
Constant_Value_gtmzyzr35c ; real_T Constant2_Value_em50tflyjf ; real_T
Constant3_Value_kjml2mst5l [ 4 ] ; real_T Constant10_Value_pmnms2tcdn ;
uint8_T ManualSwitch_CurrentSetting ; uint8_T ManualSwitch1_CurrentSetting ;
jwndialyja gjwrbmtmpz ; jwndialyja mxxvrdjd12 ; jwndialyja cakr3inwfo ;
jwndialyja noxrljyvsbq ; joyf32pywz apfzndjc5l ; joyf32pywz htvvb3wiwks ; } ;
extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX
; extern DW rtDW ; extern PrevZCX rtPrevZCX ; extern P rtP ; extern mxArray *
mr_ContoleLateralApplication_GetDWork ( ) ; extern void
mr_ContoleLateralApplication_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_ContoleLateralApplication_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
ContoleLateralApplication_GetCAPIStaticMap ( void ) ; extern SimStruct *
const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
