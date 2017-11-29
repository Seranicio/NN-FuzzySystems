#include "__cf_simulinkSquema.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "simulinkSquema_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "simulinkSquema.h"
#include "simulinkSquema_capi.h"
#include "simulinkSquema_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"simulinkSquema/Derivation" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 1 , 0 , TARGET_STRING ( "simulinkSquema/Scale1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "simulinkSquema/Scale2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"simulinkSquema/Quadratic Error Integrator " ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "simulinkSquema/Quadratic  Error "
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"simulinkSquema/Desired    Signal   " ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 6 , 0 , TARGET_STRING ( "simulinkSquema/Sum1" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING ( "simulinkSquema/Sum2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"simulinkSquema/Fuzzy Logic  Controller  with Ruleviewer/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 9 , TARGET_STRING ( "simulinkSquema/Scale1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 10 , TARGET_STRING (
"simulinkSquema/Scale2" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 11 ,
TARGET_STRING ( "simulinkSquema/Integrator   " ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 12 , TARGET_STRING (
"simulinkSquema/Quadratic Error Integrator " ) , TARGET_STRING (
"InitialCondition" ) , 0 , 0 , 0 } , { 13 , TARGET_STRING (
"simulinkSquema/Desired    Signal   " ) , TARGET_STRING ( "Amplitude" ) , 0 ,
0 , 0 } , { 14 , TARGET_STRING ( "simulinkSquema/Desired    Signal   " ) ,
TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , { 15 , TARGET_STRING (
"simulinkSquema/                               Load Disturbance   " ) ,
TARGET_STRING ( "Time" ) , 0 , 0 , 0 } , { 16 , TARGET_STRING (
"simulinkSquema/                               Load Disturbance   " ) ,
TARGET_STRING ( "Before" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING (
"simulinkSquema/                               Load Disturbance   " ) ,
TARGET_STRING ( "After" ) , 0 , 0 , 0 } , { 18 , TARGET_STRING (
"simulinkSquema/Disruption in      actuator     " ) , TARGET_STRING ( "Time"
) , 0 , 0 , 0 } , { 19 , TARGET_STRING (
"simulinkSquema/Disruption in      actuator     " ) , TARGET_STRING (
"Before" ) , 0 , 0 , 0 } , { 20 , TARGET_STRING (
"simulinkSquema/Disruption in      actuator     " ) , TARGET_STRING ( "After"
) , 0 , 0 , 0 } , { 21 , TARGET_STRING ( "simulinkSquema/Transfer Function" )
, TARGET_STRING ( "A" ) , 0 , 2 , 0 } , { 22 , TARGET_STRING (
"simulinkSquema/Transfer Function" ) , TARGET_STRING ( "C" ) , 0 , 3 , 0 } ,
{ 23 , TARGET_STRING (
 "simulinkSquema/Fuzzy Logic  Controller  with Ruleviewer/Fuzzy Logic Controller/Defuzzify Outputs"
) , TARGET_STRING ( "SimulateUsing" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING (
 "simulinkSquema/Fuzzy Logic  Controller  with Ruleviewer/Fuzzy Logic Controller/Evaluate Rule Antecedents"
) , TARGET_STRING ( "SimulateUsing" ) , 0 , 0 , 0 } , { 25 , TARGET_STRING (
 "simulinkSquema/Fuzzy Logic  Controller  with Ruleviewer/Fuzzy Logic Controller/Evaluate Rule Consequents"
) , TARGET_STRING ( "SimulateUsing" ) , 0 , 0 , 0 } , { 26 , TARGET_STRING (
 "simulinkSquema/Fuzzy Logic  Controller  with Ruleviewer/Fuzzy Logic Controller/Output Sample Points"
) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { {
0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . fygskmedmk , & rtB . dh3eytkr5d ,
& rtB . oafjprtsem , & rtB . kkhomkyhz4 , & rtB . my2skaywwg , & rtB .
n1iltubnat , & rtB . o5sexfmclb , & rtB . ahwh2px2qe , & rtB . fekdhvjvpe [ 0
] , & rtP . Scale1_Gain , & rtP . Scale2_Gain , & rtP . Integrator_IC , & rtP
. QuadraticErrorIntegrator_IC , & rtP . DesiredSignal_Amplitude , & rtP .
DesiredSignal_Frequency , & rtP . LoadDisturbance_Time , & rtP .
LoadDisturbance_Y0 , & rtP . LoadDisturbance_YFinal , & rtP .
Disruptioninactuator_Time , & rtP . Disruptioninactuator_Y0 , & rtP .
Disruptioninactuator_YFinal , & rtP . TransferFunction_A [ 0 ] , & rtP .
TransferFunction_C [ 0 ] , & rtP . DefuzzifyOutputs_SimulateUsing , & rtP .
EvaluateRuleAntecedents_SimulateUsing , & rtP .
EvaluateRuleConsequents_SimulateUsing , & rtP . OutputSamplePoints_Value [ 0
] , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 2 , 1 , 3 , 1 , 1 , 3 , 1 , 101 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 }
, } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void
* ) & rtcapiStoredFloats [ 0 ] , 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 9 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 18 , rtModelParameters , 0 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 957368115U , 1166430728U
, 2858533586U , 2287209295U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * simulinkSquema_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void simulinkSquema_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void simulinkSquema_host_InitializeDataMapInfo (
simulinkSquema_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
