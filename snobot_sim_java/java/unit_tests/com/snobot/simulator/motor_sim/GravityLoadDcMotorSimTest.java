package com.snobot.simulator.motor_sim;

import org.junit.Assert;
import org.junit.Test;

import com.snobot.simulator.DcMotorModelConfig;
import com.snobot.simulator.wrapper_accessors.DataAccessorFactory;
import com.snobot.test.utilities.BaseSimulatorTest;

import edu.wpi.first.wpilibj.Talon;

public class GravityLoadDcMotorSimTest extends BaseSimulatorTest
{
    @Test
    public void testMotor()
    {
        int motors = 1;
        double efficiency = 1;
        double load = .01;

        new Talon(0);
        DcMotorModelConfig motorConfig = DataAccessorFactory.getInstance().getSimulatorDataAccessor().createMotor("CIM", motors, 1.0, efficiency);
        Assert.assertTrue(DataAccessorFactory.getInstance().getSimulatorDataAccessor().setSpeedControllerModel_Gravitational(0, motorConfig, load));
    }

    @Test
    public void testInvalidMotor()
    {
        DcMotorModelConfig motorConfig = DataAccessorFactory.getInstance().getSimulatorDataAccessor().createMotor("CIM", 0, 1.0, 0);
        Assert.assertFalse(DataAccessorFactory.getInstance().getSimulatorDataAccessor().setSpeedControllerModel_Gravitational(0, motorConfig, 0));
    }

}