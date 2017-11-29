#include "__cf_simulinkSquema.h"
#ifndef RTW_HEADER_simulinkSquema_types_h_
#define RTW_HEADER_simulinkSquema_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_0sCPl2iL0Y7nsABAISPuqB_
#define DEFINED_TYPEDEF_FOR_struct_0sCPl2iL0Y7nsABAISPuqB_
typedef struct { uint8_T type [ 7 ] ; uint8_T sl_padding0 ; int32_T
origTypeLength ; uint8_T sl_padding1 [ 4 ] ; real_T params [ 2 ] ; int32_T
origParamLength ; uint8_T sl_padding2 [ 4 ] ; } struct_0sCPl2iL0Y7nsABAISPuqB
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_w8wwV1WkejfAibYxLkRHID_
#define DEFINED_TYPEDEF_FOR_struct_w8wwV1WkejfAibYxLkRHID_
typedef struct { struct_0sCPl2iL0Y7nsABAISPuqB mf [ 3 ] ; int32_T origNumMF ;
uint8_T sl_padding0 [ 4 ] ; } struct_w8wwV1WkejfAibYxLkRHID ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_FX58qq08yvkQd5LHa19BYE_
#define DEFINED_TYPEDEF_FOR_struct_FX58qq08yvkQd5LHa19BYE_
typedef struct { uint8_T type [ 7 ] ; uint8_T andMethod [ 3 ] ; uint8_T
orMethod [ 3 ] ; uint8_T defuzzMethod [ 8 ] ; uint8_T impMethod [ 3 ] ;
uint8_T aggMethod [ 3 ] ; uint8_T sl_padding0 [ 5 ] ; real_T outputRange [ 2
] ; struct_w8wwV1WkejfAibYxLkRHID inputMF [ 2 ] ;
struct_w8wwV1WkejfAibYxLkRHID outputMF ; real_T antecedent [ 18 ] ; real_T
consequent [ 9 ] ; real_T connection [ 9 ] ; real_T weight [ 9 ] ; int32_T
numSamples ; int32_T numInputs ; int32_T numOutputs ; int32_T numRules ;
int32_T numInputMFs [ 2 ] ; int32_T numCumInputMFs [ 2 ] ; int32_T
numOutputMFs ; int32_T numCumOutputMFs ; real_T outputSamplePoints [ 101 ] ;
int32_T orrSize [ 2 ] ; int32_T aggSize [ 2 ] ; }
struct_FX58qq08yvkQd5LHa19BYE ;
#endif
#ifndef struct_tag_stlEYa7lPYzNP3WoCUsshO
#define struct_tag_stlEYa7lPYzNP3WoCUsshO
struct tag_stlEYa7lPYzNP3WoCUsshO { uint8_T type [ 7 ] ; int32_T
origTypeLength ; real_T params [ 2 ] ; int32_T origParamLength ; } ;
#endif
#ifndef typedef_bxdvfoxvgf
#define typedef_bxdvfoxvgf
typedef struct tag_stlEYa7lPYzNP3WoCUsshO bxdvfoxvgf ;
#endif
#ifndef struct_tag_sTViPRQe0R2kRkxUB4CFtrC
#define struct_tag_sTViPRQe0R2kRkxUB4CFtrC
struct tag_sTViPRQe0R2kRkxUB4CFtrC { bxdvfoxvgf mf [ 3 ] ; int32_T origNumMF
; } ;
#endif
#ifndef typedef_ommavx5njd
#define typedef_ommavx5njd
typedef struct tag_sTViPRQe0R2kRkxUB4CFtrC ommavx5njd ;
#endif
#ifndef struct_tag_sixNLcJVZXAzd8dpYnWcx8G
#define struct_tag_sixNLcJVZXAzd8dpYnWcx8G
struct tag_sixNLcJVZXAzd8dpYnWcx8G { uint8_T type [ 7 ] ; uint8_T andMethod [
3 ] ; uint8_T orMethod [ 3 ] ; uint8_T defuzzMethod [ 8 ] ; uint8_T impMethod
[ 3 ] ; uint8_T aggMethod [ 3 ] ; real_T outputRange [ 2 ] ; ommavx5njd
inputMF [ 2 ] ; ommavx5njd outputMF ; real_T antecedent [ 18 ] ; real_T
consequent [ 9 ] ; real_T connection [ 9 ] ; real_T weight [ 9 ] ; int32_T
numSamples ; int32_T numInputs ; int32_T numOutputs ; int32_T numRules ;
int32_T numInputMFs [ 2 ] ; int32_T numCumInputMFs [ 2 ] ; int32_T
numOutputMFs ; int32_T numCumOutputMFs ; real_T outputSamplePoints [ 101 ] ;
int32_T orrSize [ 2 ] ; int32_T aggSize [ 2 ] ; } ;
#endif
#ifndef typedef_p0y4uxw1q4
#define typedef_p0y4uxw1q4
typedef struct tag_sixNLcJVZXAzd8dpYnWcx8G p0y4uxw1q4 ;
#endif
#ifndef struct_tag_sjvqidlXRSb399xwxsKSeGG
#define struct_tag_sjvqidlXRSb399xwxsKSeGG
struct tag_sjvqidlXRSb399xwxsKSeGG { uint8_T type [ 7 ] ; real_T params [ 2 ]
; } ;
#endif
#ifndef typedef_o0bm23nhsd
#define typedef_o0bm23nhsd
typedef struct tag_sjvqidlXRSb399xwxsKSeGG o0bm23nhsd ;
#endif
typedef struct P_ P ;
#endif
