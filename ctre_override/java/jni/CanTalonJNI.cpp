//JNIEXPORT (.*) JNICALL Java_com_ctre_CanTalonJNI_(.*)\R  \(JNIEnv \*, jclass(.*)\);
//JNIEXPORT \1 JNICALL Java_com_ctre_CanTalonJNI_\2\R  \(JNIEnv \*, jclass\3\)\R{\R    c_TalonSRX_\2(\3);\R}\R

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    new_CanTalonSRX
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_ctre_CanTalonJNI_new_1CanTalonSRX__III
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    new_CanTalonSRX
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_com_ctre_CanTalonJNI_new_1CanTalonSRX__II
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    new_CanTalonSRX
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_ctre_CanTalonJNI_new_1CanTalonSRX__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    new_CanTalonSRX
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_ctre_CanTalonJNI_new_1CanTalonSRX__
  (JNIEnv *, jclass);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    delete_CanTalonSRX
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_delete_1CanTalonSRX
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    getLastError
 * Signature:
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetLastError
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetMotionProfileStatus
 * Signature: (JLjava/lang/Object;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_GetMotionProfileStatus
  (JNIEnv *, jclass, jlong, jobject, jobject);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    Set
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_Set
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetParam
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetParam
  (JNIEnv *, jclass, jlong, jint, jdouble);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    RequestParam
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_RequestParam
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetParamResponse
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetParamResponse
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetParamResponseInt32
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetParamResponseInt32
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetPgain
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetPgain
  (JNIEnv *, jclass, jlong, jint, jdouble);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetIgain
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetIgain
  (JNIEnv *, jclass, jlong, jint, jdouble);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetDgain
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetDgain
  (JNIEnv *, jclass, jlong, jint, jdouble);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetFgain
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetFgain
  (JNIEnv *, jclass, jlong, jint, jdouble);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetIzone
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetIzone
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetCloseLoopRampRate
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetCloseLoopRampRate
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetVoltageCompensationRate
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetVoltageCompensationRate
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetSensorPosition
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetSensorPosition
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetForwardSoftLimit
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetForwardSoftLimit
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetReverseSoftLimit
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetReverseSoftLimit
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetForwardSoftEnable
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetForwardSoftEnable
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetReverseSoftEnable
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetReverseSoftEnable
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetPgain
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetPgain
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetIgain
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetIgain
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetDgain
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetDgain
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFgain
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetFgain
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetIzone
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetIzone
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetCloseLoopRampRate
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetCloseLoopRampRate
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetVoltageCompensationRate
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetVoltageCompensationRate
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetForwardSoftLimit
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetForwardSoftLimit
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetReverseSoftLimit
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetReverseSoftLimit
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetForwardSoftEnable
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetForwardSoftEnable
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetReverseSoftEnable
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetReverseSoftEnable
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetPulseWidthRiseToFallUs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetPulseWidthRiseToFallUs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    IsPulseWidthSensorPresent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_IsPulseWidthSensorPresent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetModeSelect2
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetModeSelect2
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetStatusFrameRate
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetStatusFrameRate
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    ClearStickyFaults
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_ClearStickyFaults
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    ChangeMotionControlFramePeriod
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_ChangeMotionControlFramePeriod
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    ClearMotionProfileTrajectories
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_ClearMotionProfileTrajectories
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetMotionProfileTopLevelBufferCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetMotionProfileTopLevelBufferCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    IsMotionProfileTopLevelBufferFull
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ctre_CanTalonJNI_IsMotionProfileTopLevelBufferFull
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    PushMotionProfileTrajectory
 * Signature: (JIIIIIII)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_PushMotionProfileTrajectory
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint, jint, jint, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    ProcessMotionProfileBuffer
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_ProcessMotionProfileBuffer
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFault_OverTemp
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFault_1OverTemp
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFault_UnderVoltage
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFault_1UnderVoltage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFault_ForLim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFault_1ForLim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFault_RevLim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFault_1RevLim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFault_HardwareFailure
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFault_1HardwareFailure
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFault_ForSoftLim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFault_1ForSoftLim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFault_RevSoftLim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFault_1RevSoftLim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetStckyFault_OverTemp
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetStckyFault_1OverTemp
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetStckyFault_UnderVoltage
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetStckyFault_1UnderVoltage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetStckyFault_ForLim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetStckyFault_1ForLim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetStckyFault_RevLim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetStckyFault_1RevLim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetStckyFault_ForSoftLim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetStckyFault_1ForSoftLim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetStckyFault_RevSoftLim
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetStckyFault_1RevSoftLim
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetAppliedThrottle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetAppliedThrottle
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetCloseLoopErr
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetCloseLoopErr
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFeedbackDeviceSelect
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFeedbackDeviceSelect
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetModeSelect
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetModeSelect
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetLimitSwitchEn
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetLimitSwitchEn
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetLimitSwitchClosedFor
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetLimitSwitchClosedFor
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetLimitSwitchClosedRev
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetLimitSwitchClosedRev
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetSensorPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetSensorPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetSensorVelocity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetSensorVelocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetCurrent
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetCurrent
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetBrakeIsEnabled
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetBrakeIsEnabled
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetEncPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetEncPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetEncVel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetEncVel
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetEncIndexRiseEvents
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetEncIndexRiseEvents
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetQuadApin
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetQuadApin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetQuadBpin
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetQuadBpin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetQuadIdxpin
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetQuadIdxpin
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetAnalogInWithOv
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetAnalogInWithOv
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetAnalogInVel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetAnalogInVel
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetTemp
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetTemp
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetBatteryV
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_ctre_CanTalonJNI_GetBatteryV
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetClearPosOnIdx
 * Signature: (J)D
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetClearPosOnIdx
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetClearPosOnLimR
 * Signature: (J)D
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetClearPosOnLimR
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetClearPosOnLimF
 * Signature: (J)D
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetClearPosOnLimF
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetResetCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetResetCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetResetFlags
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetResetFlags
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetFirmVers
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetFirmVers
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetPulseWidthPosition
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetPulseWidthPosition
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetPulseWidthVelocity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetPulseWidthVelocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetPulseWidthRiseToRiseUs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetPulseWidthRiseToRiseUs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetActTraj_IsValid
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetActTraj_1IsValid
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetActTraj_ProfileSlotSelect
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetActTraj_1ProfileSlotSelect
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetActTraj_VelOnly
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetActTraj_1VelOnly
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetActTraj_IsLast
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetActTraj_1IsLast
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetOutputType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetOutputType
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetHasUnderrun
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetHasUnderrun
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetIsUnderrun
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetIsUnderrun
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetNextID
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetNextID
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetBufferIsFull
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetBufferIsFull
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetActTraj_Velocity
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetActTraj_1Velocity
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    GetActTraj_Position
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ctre_CanTalonJNI_GetActTraj_1Position
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetDemand
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetDemand
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetOverrideLimitSwitchEn
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetOverrideLimitSwitchEn
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetFeedbackDeviceSelect
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetFeedbackDeviceSelect
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetRevMotDuringCloseLoopEn
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetRevMotDuringCloseLoopEn
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetOverrideBrakeType
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetOverrideBrakeType
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetModeSelect
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetModeSelect
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetProfileSlotSelect
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetProfileSlotSelect
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetRampThrottle
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetRampThrottle
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetRevFeedbackSensor
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetRevFeedbackSensor
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_ctre_CanTalonJNI
 * Method:    SetCurrenLimEnable
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_ctre_CanTalonJNI_SetCurrentLimEnable
  (JNIEnv *, jclass, jlong, jboolean);
