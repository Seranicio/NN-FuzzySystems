#include "__cf_simulinkSquema.h"
#include "ext_types.h"
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( struct_0sCPl2iL0Y7nsABAISPuqB
) , sizeof ( struct_w8wwV1WkejfAibYxLkRHID ) , sizeof (
struct_FX58qq08yvkQd5LHa19BYE ) } ; static const char_T * rtDataTypeNames [ ]
= { "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "struct_0sCPl2iL0Y7nsABAISPuqB" ,
"struct_w8wwV1WkejfAibYxLkRHID" , "struct_FX58qq08yvkQd5LHa19BYE" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . n1iltubnat
) , 0 , 0 , 10 } , { ( char_T * ) ( & rtDW . edpf0xgtvs ) , 0 , 0 , 4 } , { (
char_T * ) ( & rtDW . fmvx05nmht . LoggedData ) , 11 , 0 , 3 } } ; static
DataTypeTransitionTable rtBTransTable = { 3U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & rtP .
DefuzzifyOutputs_SimulateUsing ) , 0 , 0 , 122 } } ; static
DataTypeTransitionTable rtPTransTable = { 1U , rtPTransitions } ;
