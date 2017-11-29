#include "__cf_simulinkSquema.h"
#include "rt_logging_mmi.h"
#include "simulinkSquema_capi.h"
#include <math.h>
#include "simulinkSquema.h"
#include "simulinkSquema_private.h"
#include "simulinkSquema_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "8.13 (R2017b) 24-Jul-2017" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\simulinkSquema\\simulinkSquema_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
const int_T gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [
] = { - 1 } ; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ;
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS =
& model_S ; static void anebvaehkb ( const real_T outputSamplePoints [ 101 ]
, real_T outputMFCache [ 303 ] ) ; static int32_T pl1ep1uqu2 ( int32_T x ) ;
static real_T mhzqqg0u1h ( const real_T x [ 2 ] ) ; static real_T i5fh100vwt
( const real_T x [ 2 ] ) ; static void anebvaehkb ( const real_T
outputSamplePoints [ 101 ] , real_T outputMFCache [ 303 ] ) { int32_T
sampleID ; for ( sampleID = 0 ; sampleID < 101 ; sampleID ++ ) {
outputMFCache [ 3 * sampleID ] = muDoubleScalarExp ( - ( ( outputSamplePoints
[ sampleID ] - - 1.0 ) * ( outputSamplePoints [ sampleID ] - - 1.0 ) ) /
0.23079218 ) ; outputMFCache [ 1 + 3 * sampleID ] = muDoubleScalarExp ( - ( (
outputSamplePoints [ sampleID ] - 4.163E-17 ) * ( outputSamplePoints [
sampleID ] - 4.163E-17 ) ) / 0.23079218 ) ; outputMFCache [ 2 + 3 * sampleID
] = muDoubleScalarExp ( - ( ( outputSamplePoints [ sampleID ] - 1.0 ) * (
outputSamplePoints [ sampleID ] - 1.0 ) ) / 0.23079218 ) ; } } static int32_T
pl1ep1uqu2 ( int32_T x ) { int32_T y ; if ( x < 0 ) { if ( x <= MIN_int32_T )
{ y = MAX_int32_T ; } else { y = - x ; } } else { y = x ; } return y ; }
static real_T mhzqqg0u1h ( const real_T x [ 2 ] ) { real_T y ; int32_T
ixstart ; int32_T ix ; boolean_T exitg1 ; ixstart = 1 ; y = x [ 0 ] ; if (
muDoubleScalarIsNaN ( x [ 0 ] ) ) { ix = 2 ; exitg1 = false ; while ( ( !
exitg1 ) && ( ix < 3 ) ) { ixstart = 2 ; if ( ! muDoubleScalarIsNaN ( x [ 1 ]
) ) { y = x [ 1 ] ; exitg1 = true ; } else { ix = 3 ; } } } if ( ( ixstart <
2 ) && ( x [ 1 ] < y ) ) { y = x [ 1 ] ; } return y ; } static real_T
i5fh100vwt ( const real_T x [ 2 ] ) { real_T y ; int32_T ixstart ; int32_T ix
; boolean_T exitg1 ; ixstart = 1 ; y = x [ 0 ] ; if ( muDoubleScalarIsNaN ( x
[ 0 ] ) ) { ix = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( ix < 3 ) ) {
ixstart = 2 ; if ( ! muDoubleScalarIsNaN ( x [ 1 ] ) ) { y = x [ 1 ] ; exitg1
= true ; } else { ix = 3 ; } } } if ( ( ixstart < 2 ) && ( x [ 1 ] > y ) ) {
y = x [ 1 ] ; } return y ; } void MdlInitialize ( void ) { rtX . cyzl3qelb4 [
0 ] = 0.0 ; rtX . cyzl3qelb4 [ 1 ] = 0.0 ; rtX . cyzl3qelb4 [ 2 ] = 0.0 ;
rtDW . edpf0xgtvs = ( rtInf ) ; rtDW . ngylpklymc = ( rtInf ) ; rtX .
odmyi3gud1 = rtP . Integrator_IC ; rtX . edrwa2rpdx = rtP .
QuadraticErrorIntegrator_IC ; } void MdlStart ( void ) { { void * *
slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; void * r2 = ( NULL ) ; void *
* pOSigstreamManagerAddr = ( NULL ) ; const char *
errorCreatingOSigstreamManager = ( NULL ) ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ) ; if (
errorCreatingOSigstreamManager != ( NULL ) ) { * pOSigstreamManagerAddr = (
NULL ) ; ssSetErrorStatus ( rtS , errorCreatingOSigstreamManager ) ; return ;
} } MdlInitialize ( ) ; { bool externalInputIsInDatasetFormat = false ; void
* pISigstreamManager = rt_GetISigstreamManager ( ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { int_T iy ; real_T * lastU ; real_T
inputMFCache [ 6 ] ; int32_T inputID ; static const int8_T b [ 18 ] = { 1 , 2
, 3 , 1 , 2 , 3 , 1 , 2 , 3 , 1 , 1 , 1 , 2 , 2 , 2 , 3 , 3 , 3 } ; real_T
outputMFCache [ 303 ] ; static const int8_T b_p [ 9 ] = { 1 , 1 , 2 , 1 , 2 ,
3 , 2 , 3 , 3 } ; real_T area ; real_T oywfsmfniq ; real_T owla3xuvqu ;
real_T gvxspmzgpr [ 9 ] ; real_T esziuz3ul0 [ 101 ] ; real_T outputMFCache_p
[ 2 ] ; real_T bybf0joz2q [ 2 ] ; int32_T q0 ; int32_T q0_p ; owla3xuvqu =
rtP . DesiredSignal_Frequency * ssGetT ( rtS ) ; if ( owla3xuvqu -
muDoubleScalarFloor ( owla3xuvqu ) >= 0.5 ) { rtB . n1iltubnat = rtP .
DesiredSignal_Amplitude ; } else { rtB . n1iltubnat = - rtP .
DesiredSignal_Amplitude ; } if ( ssGetTaskTime ( rtS , 0 ) < rtP .
LoadDisturbance_Time ) { owla3xuvqu = rtP . LoadDisturbance_Y0 ; } else {
owla3xuvqu = rtP . LoadDisturbance_YFinal ; } rtB . ahwh2px2qe = ( ( rtP .
TransferFunction_C [ 0 ] * rtX . cyzl3qelb4 [ 0 ] + rtP . TransferFunction_C
[ 1 ] * rtX . cyzl3qelb4 [ 1 ] ) + rtP . TransferFunction_C [ 2 ] * rtX .
cyzl3qelb4 [ 2 ] ) - owla3xuvqu ; oywfsmfniq = rtB . n1iltubnat - rtB .
ahwh2px2qe ; rtB . dh3eytkr5d = rtP . Scale1_Gain * oywfsmfniq ; if ( ( rtDW
. edpf0xgtvs >= ssGetT ( rtS ) ) && ( rtDW . ngylpklymc >= ssGetT ( rtS ) ) )
{ rtB . fygskmedmk = 0.0 ; } else { owla3xuvqu = rtDW . edpf0xgtvs ; lastU =
& rtDW . eoadcgpmns ; if ( rtDW . edpf0xgtvs < rtDW . ngylpklymc ) { if (
rtDW . ngylpklymc < ssGetT ( rtS ) ) { owla3xuvqu = rtDW . ngylpklymc ; lastU
= & rtDW . opjuahj3ep ; } } else { if ( rtDW . edpf0xgtvs >= ssGetT ( rtS ) )
{ owla3xuvqu = rtDW . ngylpklymc ; lastU = & rtDW . opjuahj3ep ; } } rtB .
fygskmedmk = ( rtB . dh3eytkr5d - * lastU ) / ( ssGetT ( rtS ) - owla3xuvqu )
; } owla3xuvqu = 0.0 ; inputMFCache [ 0 ] = muDoubleScalarExp ( - ( ( rtB .
dh3eytkr5d - - 1.0 ) * ( rtB . dh3eytkr5d - - 1.0 ) ) / 0.23079218 ) ;
inputMFCache [ 1 ] = muDoubleScalarExp ( - ( ( rtB . dh3eytkr5d - 4.163E-17 )
* ( rtB . dh3eytkr5d - 4.163E-17 ) ) / 0.23079218 ) ; inputMFCache [ 2 ] =
muDoubleScalarExp ( - ( ( rtB . dh3eytkr5d - 0.9949 ) * ( rtB . dh3eytkr5d -
0.9949 ) ) / 0.23106401999999998 ) ; inputMFCache [ 3 ] = muDoubleScalarExp (
- ( ( rtB . fygskmedmk - - 1.0 ) * ( rtB . fygskmedmk - - 1.0 ) ) /
0.23079218 ) ; inputMFCache [ 4 ] = muDoubleScalarExp ( - ( ( rtB .
fygskmedmk - 4.163E-17 ) * ( rtB . fygskmedmk - 4.163E-17 ) ) / 0.23079218 )
; inputMFCache [ 5 ] = muDoubleScalarExp ( - ( ( rtB . fygskmedmk - 1.0 ) * (
rtB . fygskmedmk - 1.0 ) ) / 0.23079218 ) ; for ( iy = 0 ; iy < 9 ; iy ++ ) {
area = 1.0 ; if ( inputMFCache [ b [ iy ] - 1 ] < 1.0 ) { area = inputMFCache
[ b [ iy ] - 1 ] ; } if ( inputMFCache [ b [ iy + 9 ] + 2 ] < area ) { area =
inputMFCache [ b [ iy + 9 ] + 2 ] ; } owla3xuvqu += area ; gvxspmzgpr [ iy ]
= area ; } memset ( & esziuz3ul0 [ 0 ] , 0 , 101U * sizeof ( real_T ) ) ;
anebvaehkb ( rtP . OutputSamplePoints_Value , outputMFCache ) ; q0 =
pl1ep1uqu2 ( 0 ) ; for ( iy = 0 ; iy < 9 ; iy ++ ) { if ( ( q0 < 0 ) && ( b_p
[ iy ] < MIN_int32_T - q0 ) ) { q0_p = MIN_int32_T ; } else if ( ( q0 > 0 )
&& ( b_p [ iy ] > MAX_int32_T - q0 ) ) { q0_p = MAX_int32_T ; } else { q0_p =
q0 + b_p [ iy ] ; } for ( inputID = 0 ; inputID < 101 ; inputID ++ ) {
outputMFCache_p [ 0 ] = outputMFCache [ ( 3 * inputID + q0_p ) - 1 ] ;
outputMFCache_p [ 1 ] = gvxspmzgpr [ iy ] ; bybf0joz2q [ 0 ] = esziuz3ul0 [
inputID ] ; bybf0joz2q [ 1 ] = mhzqqg0u1h ( outputMFCache_p ) ; esziuz3ul0 [
inputID ] = i5fh100vwt ( bybf0joz2q ) ; } } if ( ! ( owla3xuvqu == 0.0 ) ) {
owla3xuvqu = 0.0 ; area = esziuz3ul0 [ 0 ] ; for ( iy = 0 ; iy < 100 ; iy ++
) { area += esziuz3ul0 [ iy + 1 ] ; } if ( area == 0.0 ) { owla3xuvqu = ( rtP
. OutputSamplePoints_Value [ 0 ] + rtP . OutputSamplePoints_Value [ 100 ] ) /
2.0 ; } else { for ( iy = 0 ; iy < 101 ; iy ++ ) { owla3xuvqu += rtP .
OutputSamplePoints_Value [ iy ] * esziuz3ul0 [ iy ] ; } owla3xuvqu *= 1.0 /
area ; } } rtB . oafjprtsem = rtP . Scale2_Gain * owla3xuvqu ; if (
ssGetTaskTime ( rtS , 0 ) < rtP . Disruptioninactuator_Time ) { owla3xuvqu =
rtP . Disruptioninactuator_Y0 ; } else { owla3xuvqu = rtP .
Disruptioninactuator_YFinal ; } rtB . o5sexfmclb = rtX . odmyi3gud1 -
owla3xuvqu ; rtB . kkhomkyhz4 = rtX . edrwa2rpdx ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { rtB . fekdhvjvpe [ 0 ] = rtB . dh3eytkr5d ; rtB . fekdhvjvpe [ 1
] = rtB . fygskmedmk ; } rtB . my2skaywwg = oywfsmfniq * oywfsmfniq ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { real_T * lastU ;
if ( rtDW . edpf0xgtvs == ( rtInf ) ) { rtDW . edpf0xgtvs = ssGetT ( rtS ) ;
lastU = & rtDW . eoadcgpmns ; } else if ( rtDW . ngylpklymc == ( rtInf ) ) {
rtDW . ngylpklymc = ssGetT ( rtS ) ; lastU = & rtDW . opjuahj3ep ; } else if
( rtDW . edpf0xgtvs < rtDW . ngylpklymc ) { rtDW . edpf0xgtvs = ssGetT ( rtS
) ; lastU = & rtDW . eoadcgpmns ; } else { rtDW . ngylpklymc = ssGetT ( rtS )
; lastU = & rtDW . opjuahj3ep ; } * lastU = rtB . dh3eytkr5d ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX (
rtS ) ) ; _rtXdot -> cyzl3qelb4 [ 0 ] = 0.0 ; _rtXdot -> cyzl3qelb4 [ 0 ] +=
rtP . TransferFunction_A [ 0 ] * rtX . cyzl3qelb4 [ 0 ] ; _rtXdot ->
cyzl3qelb4 [ 1 ] = 0.0 ; _rtXdot -> cyzl3qelb4 [ 0 ] += rtP .
TransferFunction_A [ 1 ] * rtX . cyzl3qelb4 [ 1 ] ; _rtXdot -> cyzl3qelb4 [ 2
] = 0.0 ; _rtXdot -> cyzl3qelb4 [ 0 ] += rtP . TransferFunction_A [ 2 ] * rtX
. cyzl3qelb4 [ 2 ] ; _rtXdot -> cyzl3qelb4 [ 1 ] += rtX . cyzl3qelb4 [ 0 ] ;
_rtXdot -> cyzl3qelb4 [ 2 ] += rtX . cyzl3qelb4 [ 1 ] ; _rtXdot -> cyzl3qelb4
[ 0 ] += rtB . o5sexfmclb ; _rtXdot -> odmyi3gud1 = rtB . oafjprtsem ;
_rtXdot -> edrwa2rpdx = rtB . my2skaywwg ; } void MdlProjection ( void ) { }
void MdlTerminate ( void ) { if ( rt_slioCatalogue ( ) != ( NULL ) ) { void *
* slioCatalogueAddr = rt_slioCatalogueAddr ( ) ; rtwSaveDatasetsToMatFile (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ,
rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 5 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 29 ) ; ssSetNumBlockIO ( rtS , 9 ) ;
ssSetNumBlockParams ( rtS , 122 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 957368115U ) ;
ssSetChecksumVal ( rtS , 1 , 1166430728U ) ; ssSetChecksumVal ( rtS , 2 ,
2858533586U ) ; ssSetChecksumVal ( rtS , 3 , 2287209295U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
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
( B ) ) ; } ssSetDefaultParam ( rtS , ( real_T * ) & rtP ) ; { real_T * x = (
real_T * ) & rtX ; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * )
x , 0 , sizeof ( X ) ) ; } { void * dwork = ( void * ) & rtDW ;
ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( DW )
) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 17 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; }
simulinkSquema_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive (
rtS , true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "simulinkSquema" ) ;
ssSetPath ( rtS , "simulinkSquema" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 300.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ;
rt_DataLoggingInfo . loggingInterval = NULL ; ssSetRTWLogInfo ( rtS , &
rt_DataLoggingInfo ) ; } { { static int_T rt_LoggedStateWidths [ ] = { 3 , 1
, 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 } ; static
int_T rt_LoggedStateDimensions [ ] = { 3 , 1 , 1 } ; static boolean_T
rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 } ; static const
char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" } ;
static const char_T * rt_LoggedStateBlockNames [ ] = {
"simulinkSquema/Transfer Function" , "simulinkSquema/Integrator\n\n\n" ,
"simulinkSquema/Quadratic Error\nIntegrator\n" } ; static const char_T *
rt_LoggedStateNames [ ] = { "" , "" , "" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 3 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , ( NULL ) , { rt_LoggedStateLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { rt_LoggedStateBlockNames } , {
rt_LoggedStateNames } , rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert
} ; static void * rt_LoggedStateSignalPtrs [ 3 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . cyzl3qelb4 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . odmyi3gud1 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . edrwa2rpdx ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "tmp_raccel_xout" ) ; rtliSetLogXFinal (
ssGetRTWLogInfo ( rtS ) , "xFinal" ) ; rtliSetLogVarNameModifier (
ssGetRTWLogInfo ( rtS ) , "none" ) ; rtliSetLogFormat ( ssGetRTWLogInfo ( rtS
) , 2 ) ; rtliSetLogMaxRows ( ssGetRTWLogInfo ( rtS ) , 1000 ) ;
rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS ) , 1 ) ; rtliSetLogY (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo ( ssGetRTWLogInfo (
rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL
) ) ; } { static struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS ,
& statesInfo2 ) ; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 5 ] ; static
real_T absTol [ 5 ] = { 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static
uint8_T absTolControl [ 5 ] = { 0U , 0U , 0U , 0U , 0U } ; ssSetSolverRelTol
( rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0
) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 )
; ssSetMaxStepSize ( rtS , 1.0 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "ode45" ) ; ssSetVariableStepSolver (
rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector (
rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetSolverStateProjection ( rtS , 0 ) ; ssSetSolverMassMatrixType ( rtS , (
ssMatrixType ) 0 ) ; ssSetSolverMassMatrixNzMax ( rtS , 0 ) ;
ssSetModelOutputs ( rtS , MdlOutputs ) ; ssSetModelLogData ( rtS ,
rt_UpdateTXYLogVars ) ; ssSetModelLogDataIfInInterval ( rtS ,
rt_UpdateTXXFYLogVars ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ;
ssSetModelDerivatives ( rtS , MdlDerivatives ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 957368115U ) ; ssSetChecksumVal ( rtS , 1 ,
1166430728U ) ; ssSetChecksumVal ( rtS , 2 , 2858533586U ) ; ssSetChecksumVal
( rtS , 3 , 2287209295U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 5 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
