#include "__cf_simulinkSquema.h"
#ifndef RTW_HEADER_simulinkSquema_h_
#define RTW_HEADER_simulinkSquema_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef simulinkSquema_COMMON_INCLUDES_
#define simulinkSquema_COMMON_INCLUDES_
#include <stdlib.h>
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
#include "simulinkSquema_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME simulinkSquema
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (9) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (5)   
#elif NCSTATES != 5
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
typedef struct { real_T n1iltubnat ; real_T ahwh2px2qe ; real_T dh3eytkr5d ;
real_T fygskmedmk ; real_T oafjprtsem ; real_T o5sexfmclb ; real_T kkhomkyhz4
; real_T fekdhvjvpe [ 2 ] ; real_T my2skaywwg ; } B ; typedef struct { real_T
edpf0xgtvs ; real_T eoadcgpmns ; real_T ngylpklymc ; real_T opjuahj3ep ;
struct { void * LoggedData ; } fmvx05nmht ; struct { void * LoggedData ; }
kon2e1tkbo ; struct { void * LoggedData ; } gn4ppr4hfb ; } DW ; typedef
struct { real_T cyzl3qelb4 [ 3 ] ; real_T odmyi3gud1 ; real_T edrwa2rpdx ; }
X ; typedef struct { real_T cyzl3qelb4 [ 3 ] ; real_T odmyi3gud1 ; real_T
edrwa2rpdx ; } XDot ; typedef struct { boolean_T cyzl3qelb4 [ 3 ] ; boolean_T
odmyi3gud1 ; boolean_T edrwa2rpdx ; } XDis ; typedef struct { real_T
cyzl3qelb4 [ 3 ] ; real_T odmyi3gud1 ; real_T edrwa2rpdx ; } CStateAbsTol ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
real_T DefuzzifyOutputs_SimulateUsing ; real_T
EvaluateRuleAntecedents_SimulateUsing ; real_T
EvaluateRuleConsequents_SimulateUsing ; real_T OutputSamplePoints_Value [ 101
] ; real_T DesiredSignal_Amplitude ; real_T DesiredSignal_Frequency ; real_T
TransferFunction_A [ 3 ] ; real_T TransferFunction_C [ 3 ] ; real_T
LoadDisturbance_Time ; real_T LoadDisturbance_Y0 ; real_T
LoadDisturbance_YFinal ; real_T Scale1_Gain ; real_T Scale2_Gain ; real_T
Integrator_IC ; real_T Disruptioninactuator_Time ; real_T
Disruptioninactuator_Y0 ; real_T Disruptioninactuator_YFinal ; real_T
QuadraticErrorIntegrator_IC ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
simulinkSquema_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ;
extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern
const int_T gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ;
extern const char * gblInportFileName ; extern const int_T
gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern const
int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern size_t gblCurrentSFcnIdx ;
extern DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( void
) ;
#endif
