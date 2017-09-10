/*
 * JavaHalCallbacks.h
 *
 *  Created on: Sep 5, 2017
 *      Author: preiniger
 */

#ifndef JAVAHALCALLBACKS_H_
#define JAVAHALCALLBACKS_H_

#include <jni.h>

namespace SnobotSimJava
{

    struct CallbackHelperContainer
    {
        jmethodID mMethodId;
        jclass mClazz;

        CallbackHelperContainer() :
            mMethodId(NULL),
            mClazz(NULL)
        {

        }
    };

    void SetGlobalEnvironment(JNIEnv * env);

    CallbackHelperContainer& GetAnalogCallback();
    CallbackHelperContainer& GetAnalogGyroCallback();
    CallbackHelperContainer& GetDigitalCallback();
    CallbackHelperContainer& GetEncoderCallback();
    CallbackHelperContainer& GetI2CCallback();
    CallbackHelperContainer& GetPCMCallback();
    CallbackHelperContainer& GetPDPCallback();
    CallbackHelperContainer& GetPWMCallback();
    CallbackHelperContainer& GetRelayCallback();
    CallbackHelperContainer& GetSpiCallback();

    void InitializeSnobotCallbacks();
    void ResetMockData();
}

#endif /* JAVAHALCALLBACKS_H_ */
