
package com.snobot.simulator.wrapper_accessors.jni;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

import com.snobot.simulator.jni.module_wrapper.AnalogInWrapperJni;
import com.snobot.simulator.module_wrapper.interfaces.IAnalogInWrapper;
import com.snobot.simulator.module_wrappers.AnalogInWrapper;
import com.snobot.simulator.wrapper_accessors.AnalogInWrapperAccessor;

public class JniAnalogInWrapperAccessor extends BaseWrapperAccessor<IAnalogInWrapper> implements AnalogInWrapperAccessor
{
    @Override
    public boolean createSimulator(int aPort, String aType)
    {
        return AnalogInWrapperJni.createSimulator(aPort, aType);
    }

    @Override
    protected AnalogInWrapper createWrapperForExistingType(int aHandle)
    {
        return new AnalogInWrapper(aHandle);
    }

    @Override
    public List<Integer> getPortList()
    {
        return IntStream.of(AnalogInWrapperJni.getPortList()).boxed().collect(Collectors.toList());
    }
}
