package com.snobot.simulator.simulator_components.rev;

import com.revrobotics.CANEncoder;
import com.revrobotics.CANPIDController;
import com.revrobotics.CANSparkMax;
import com.revrobotics.CANSparkMaxLowLevel;
import com.revrobotics.ControlType;
import com.snobot.simulator.module_wrapper.interfaces.IPwmWrapper;
import com.snobot.simulator.motor_sim.DcMotorModelConfig;
import com.snobot.simulator.motor_sim.StaticLoadMotorSimulationConfig;
import com.snobot.simulator.simulator_components.ctre.CtreTalonSrxSpeedControllerSim;
import com.snobot.simulator.wrapper_accessors.DataAccessorFactory;
import com.snobot.simulator.wrapper_accessors.SpeedControllerWrapperAccessor;
import com.snobot.test.utilities.BaseSimulatorJavaTest;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ArgumentsSource;

public class TestRevControlVelocity extends BaseSimulatorJavaTest
{
    @ParameterizedTest
    @ArgumentsSource(GetRevTestIds.class)
    public void testVelocityControl(int aCanHandle)
    {
        SpeedControllerWrapperAccessor scAccessor = DataAccessorFactory.getInstance().getSpeedControllerAccessor();

        int rawHandle = aCanHandle + CtreTalonSrxSpeedControllerSim.sCAN_SC_OFFSET;

        Assertions.assertEquals(0, scAccessor.getWrappers().size());

        CANSparkMax sparksMax = new CANSparkMax(aCanHandle, CANSparkMaxLowLevel.MotorType.kBrushless);
        Assertions.assertEquals(1, scAccessor.getWrappers().size());

        IPwmWrapper wrapper = DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(rawHandle);
        Assertions.assertEquals("Rev SC " + aCanHandle, wrapper.getName());

        // Simulate CIM drivetrain
        DcMotorModelConfig motorConfig = DataAccessorFactory.getInstance().getSimulatorDataAccessor().createMotor("CIM", 1, 10, 1);
        Assertions.assertTrue(DataAccessorFactory.getInstance().getSimulatorDataAccessor().setSpeedControllerModel_Static(rawHandle, motorConfig,
                new StaticLoadMotorSimulationConfig(.2)));

        CANPIDController pid = sparksMax.getPIDController();
        CANEncoder encoder = sparksMax.getEncoder();
        pid.setFeedbackDevice(encoder);

        pid.setP(.04);
        pid.setFF(.019);

        simulateForTime(1, () ->
        {
            pid.setReference(40, ControlType.kVelocity);
        });

        Assertions.assertEquals(40, encoder.getVelocity(), 1);
        Assertions.assertEquals(40, wrapper.getVelocity(), 1);
    }
}
