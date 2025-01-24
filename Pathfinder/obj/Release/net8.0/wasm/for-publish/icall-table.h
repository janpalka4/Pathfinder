#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
171,
179,
180,
181,
182,
183,
184,
185,
187,
188,
236,
237,
238,
267,
268,
269,
289,
290,
291,
292,
379,
380,
381,
384,
417,
418,
420,
422,
424,
426,
431,
439,
440,
441,
442,
443,
444,
445,
446,
447,
493,
536,
537,
589,
595,
598,
600,
605,
606,
608,
609,
613,
614,
616,
618,
619,
622,
623,
624,
627,
630,
632,
634,
643,
700,
702,
704,
714,
715,
716,
718,
724,
725,
726,
727,
728,
736,
737,
738,
742,
743,
745,
747,
932,
1082,
1083,
6345,
6346,
6348,
6349,
6350,
6351,
6352,
6354,
6356,
6358,
6366,
6368,
6373,
6375,
6377,
6379,
6430,
6431,
6433,
6434,
6435,
6436,
6437,
6439,
6441,
7406,
7410,
7412,
7413,
7414,
7415,
7612,
7613,
7614,
7615,
7631,
7632,
7633,
7635,
7675,
7740,
7742,
7752,
7753,
7754,
7755,
8143,
8148,
8149,
8176,
8194,
8201,
8208,
8219,
8222,
8242,
8313,
8315,
8324,
8326,
8327,
8334,
8348,
8368,
8369,
8377,
8379,
8386,
8387,
8390,
8392,
8397,
8403,
8404,
8411,
8413,
8425,
8428,
8429,
8430,
8441,
8450,
8456,
8457,
8458,
8460,
8461,
8478,
8480,
8494,
8511,
8538,
8563,
8564,
9030,
9113,
9114,
9258,
9259,
9263,
9266,
9328,
9677,
9678,
9901,
9911,
10532,
10553,
10555,
10557,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Sqrt (float);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 171,
ves_icall_System_Array_InternalCreate,
// token 179,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 180,
ves_icall_System_Array_CanChangePrimitive,
// token 181,
ves_icall_System_Array_FastCopy,
// token 182,
ves_icall_System_Array_GetLengthInternal_raw,
// token 183,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 184,
ves_icall_System_Array_GetGenericValue_icall,
// token 185,
ves_icall_System_Array_GetValueImpl_raw,
// token 187,
ves_icall_System_Array_SetValueImpl_raw,
// token 188,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 236,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 237,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 238,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 267,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 268,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 269,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 289,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 290,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 291,
ves_icall_System_Enum_InternalGetCorElementType,
// token 292,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 379,
ves_icall_System_Environment_get_ProcessorCount,
// token 380,
ves_icall_System_Environment_get_TickCount,
// token 381,
ves_icall_System_Environment_get_TickCount64,
// token 384,
ves_icall_System_Environment_FailFast_raw,
// token 417,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 418,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 420,
ves_icall_System_GC_SuppressFinalize_raw,
// token 422,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 424,
ves_icall_System_GC_GetGCMemoryInfo,
// token 426,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 431,
ves_icall_System_Object_MemberwiseClone_raw,
// token 439,
ves_icall_System_Math_Ceiling,
// token 440,
ves_icall_System_Math_Cos,
// token 441,
ves_icall_System_Math_Floor,
// token 442,
ves_icall_System_Math_Log10,
// token 443,
ves_icall_System_Math_Pow,
// token 444,
ves_icall_System_Math_Sin,
// token 445,
ves_icall_System_Math_Sqrt,
// token 446,
ves_icall_System_Math_Tan,
// token 447,
ves_icall_System_Math_ModF,
// token 493,
ves_icall_System_MathF_Sqrt,
// token 536,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 537,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 589,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 595,
ves_icall_RuntimeType_make_array_type_raw,
// token 598,
ves_icall_RuntimeType_make_byref_type_raw,
// token 600,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 605,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 606,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 608,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 609,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 613,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 614,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 616,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 618,
ves_icall_System_RuntimeType_getFullName_raw,
// token 619,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 622,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 623,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 624,
ves_icall_RuntimeType_GetFields_native_raw,
// token 627,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 630,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 632,
ves_icall_RuntimeType_GetName_raw,
// token 634,
ves_icall_RuntimeType_GetNamespace_raw,
// token 643,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 700,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 702,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 704,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 714,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 715,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 716,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 718,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 724,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 725,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 726,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 727,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 728,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 736,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 737,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 738,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 742,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 743,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 745,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 747,
ves_icall_System_String_FastAllocateString_raw,
// token 932,
ves_icall_System_Type_internal_from_handle_raw,
// token 1082,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1083,
ves_icall_System_ValueType_Equals_raw,
// token 6345,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6346,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6348,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6349,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6350,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6351,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6352,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6354,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6356,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6358,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6366,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6368,
mono_monitor_exit_icall_raw,
// token 6373,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6375,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6377,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6379,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6430,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6431,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6433,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6434,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6435,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6436,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6437,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6439,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6441,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7406,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7410,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7412,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7413,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7414,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7415,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7612,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7613,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7614,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7615,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7631,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7632,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7633,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7635,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7675,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7740,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7742,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7752,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7753,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7754,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7755,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8143,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8148,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8149,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8176,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8194,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8201,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8208,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8219,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8222,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8242,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8313,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8315,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8324,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8326,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8327,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8334,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8348,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8368,
ves_icall_reflection_get_token_raw,
// token 8369,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8377,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8379,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8386,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8387,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8390,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8392,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8397,
ves_icall_reflection_get_token_raw,
// token 8403,
ves_icall_get_method_info_raw,
// token 8404,
ves_icall_get_method_attributes,
// token 8411,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8413,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8425,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8428,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8429,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8430,
ves_icall_reflection_get_token_raw,
// token 8441,
ves_icall_InternalInvoke_raw,
// token 8450,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8456,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8457,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8458,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8460,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8461,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8478,
ves_icall_InvokeClassConstructor_raw,
// token 8480,
ves_icall_InternalInvoke_raw,
// token 8494,
ves_icall_reflection_get_token_raw,
// token 8511,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8538,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8563,
ves_icall_reflection_get_token_raw,
// token 8564,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9030,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9113,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9114,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9258,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9259,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9263,
ves_icall_ModuleBuilder_getToken_raw,
// token 9266,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9328,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9677,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9678,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9901,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9911,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10532,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10553,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10555,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10557,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
