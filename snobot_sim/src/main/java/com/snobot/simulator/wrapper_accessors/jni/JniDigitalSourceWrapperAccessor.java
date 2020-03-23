
package com.snobot.simulator.wrapper_accessors.jni;

import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

import com.snobot.simulator.jni.module_wrapper.DigitalSourceWrapperJni;
import com.snobot.simulator.module_wrapper.interfaces.IDigitalIoWrapper;
import com.snobot.simulator.wrapper_accessors.DigitalSourceWrapperAccessor;

public class JniDigitalSourceWrapperAccessor implements DigitalSourceWrapperAccessor
{
    
    private static class DigitalSourceWrapper implements IDigitalIoWrapper
    {
        private final int mHandle;

        private DigitalSourceWrapper(int aHandle, String aType)
        {
            DigitalSourceWrapperJni.createSimulator(aHandle, aType);
            mHandle = aHandle;
        }

        @Override
        public boolean isInitialized() {
            return DigitalSourceWrapperJni.isInitialized(mHandle);
        }

        @Override
        public void setInitialized(boolean aInitialized) {
            // TODO Auto-generated method stub

        }

        @Override
        public String getName() {
            return DigitalSourceWrapperJni.getName(mHandle);
        }

        @Override
        public void setName(String aName) {
            DigitalSourceWrapperJni.setName(mHandle, aName);
        }

        @Override
        public boolean getWantsHidden() {
            return DigitalSourceWrapperJni.getWantsHidden(mHandle);
        }

        @Override
        public void setWantsHidden(boolean aVisible) {
            // TODO Auto-generated method stub

        }

        @Override
        public void close() throws Exception {
            // TODO Auto-generated method stub

        }

        @Override
        public boolean get() {
            return DigitalSourceWrapperJni.getState(mHandle);
        }

        @Override
        public void set(boolean aState) {
            DigitalSourceWrapperJni.setState(mHandle, aState);
        }
    }

    private Map<Integer, DigitalSourceWrapper> mWrappers;

    @Override
    public List<Integer> getPortList()
    {
        return IntStream.of(DigitalSourceWrapperJni.getPortList()).boxed().collect(Collectors.toList());
    }

    @Override
    public String getType(int aPort)
    {
        return null;
    }

    @Override
    public IDigitalIoWrapper createSimulator(int aPort, String aType) {
        return mWrappers.put(aPort, new DigitalSourceWrapper(aPort, aType));
    }

    @Override
    public IDigitalIoWrapper getWrapper(int aHandle) {
        return mWrappers.get(aHandle);
    }
}