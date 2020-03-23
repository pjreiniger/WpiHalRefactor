package com.snobot.simulator.module_wrapper.interfaces;

public interface IEncoderWrapper extends ISensorWrapper, IMotorFeedbackSensor
{

    void reset();

	boolean isHookedUp();

	int getHookedUpId();

	boolean connectSpeedController(int aSpeedControllerHandle);

}