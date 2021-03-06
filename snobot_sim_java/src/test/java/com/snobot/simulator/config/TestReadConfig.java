package com.snobot.simulator.config;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;

import com.snobot.simulator.config.v1.SimulatorConfigReaderV1;
import com.snobot.simulator.motor_sim.SimpleMotorSimulationConfig;
import com.snobot.simulator.motor_sim.StaticLoadMotorSimulationConfig;
import com.snobot.simulator.wrapper_accessors.DataAccessorFactory;
import com.snobot.test.utilities.BaseSimulatorJavaTest;


public class TestReadConfig extends BaseSimulatorJavaTest
{
    public static final int sTEST_PARAMETER = 5;

    public String extractFiles(String aFilename)
    {       
        Path filepath = Path.of("read_test", aFilename);
        try (InputStream fileStream = getClass().getResource(aFilename).openStream()) 
        {
            if (fileStream == null || filepath.getParent() == null)
            {
                Assertions.fail();
                return null;
            }
            if (!filepath.getParent().toFile().exists() && !filepath.getParent().toFile().mkdir())
            {
                Assertions.fail();
                return null;
            }

            Files.copy(fileStream, filepath, StandardCopyOption.REPLACE_EXISTING);
        } 
        catch (IOException ex) 
        {
            Assertions.fail(ex);
        }

        return filepath.toAbsolutePath().toString();
    }

    @Test
    public void testReadEmptyFile()
    {
        SimulatorConfigReaderV1 reader = new SimulatorConfigReaderV1();
        Assertions.assertTrue(reader.loadConfig(extractFiles("emptyFile.yml")));
        Assertions.assertNotNull(reader.getConfig());
    }

    @Test
    public void testReadNullFile()
    {
        String file = null;
        SimulatorConfigReaderV1 reader = new SimulatorConfigReaderV1();
        Assertions.assertTrue(reader.loadConfig(file));
        Assertions.assertNull(reader.getConfig());
    }

    @Test
    public void testReadNonExistingFile()
    {
        SimulatorConfigReaderV1 reader = new SimulatorConfigReaderV1();
        Assertions.assertFalse(reader.loadConfig("does_not_exist.yml"));
        Assertions.assertNull(reader.getConfig());
    }

    @Test
    public void testReadConfig()
    {
        SimulatorConfigReaderV1 reader = new SimulatorConfigReaderV1();
        Assertions.assertTrue(reader.loadConfig(extractFiles("testReadFile.yml")));
        Assertions.assertNotNull(reader.getConfig());

        Assertions.assertEquals("I2C ADXL345 X Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(50).getName());
        Assertions.assertEquals("I2C ADXL345 Y Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(51).getName());
        Assertions.assertEquals("I2C ADXL345 Z Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(52).getName());
        Assertions.assertEquals("SPI ADXL345 X Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(103).getName());
        Assertions.assertEquals("SPI ADXL345 Y Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(104).getName());
        Assertions.assertEquals("SPI ADXL345 Z Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(105).getName());
        Assertions.assertEquals("SPI ADXL362 X Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(156).getName());
        Assertions.assertEquals("SPI ADXL362 Y Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(157).getName());
        Assertions.assertEquals("SPI ADXL362 Z Accel", DataAccessorFactory.getInstance().getAccelerometerAccessor().getWrapper(158).getName());

        Assertions.assertEquals("Analog In 0", DataAccessorFactory.getInstance().getAnalogInAccessor().getWrapper(0).getName());
        Assertions.assertEquals("Analog In 1", DataAccessorFactory.getInstance().getAnalogInAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Analog In 2", DataAccessorFactory.getInstance().getAnalogInAccessor().getWrapper(2).getName());

        Assertions.assertEquals("Digital IO 0", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(0).getName());
        Assertions.assertEquals("Digital IO 1", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Digital IO 2", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(2).getName());
        Assertions.assertEquals("Digital IO 3", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(3).getName());
        Assertions.assertEquals("Digital IO 4", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(4).getName());
        Assertions.assertEquals("Digital IO 5", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(5).getName());
        Assertions.assertEquals("Digital IO 6", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(6).getName());
        Assertions.assertEquals("Digital IO 7", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(7).getName());
        Assertions.assertEquals("Digital IO 8", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(8).getName());
        Assertions.assertEquals("Digital IO 9", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(9).getName());

        Assertions.assertEquals("Encoder 0", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(0).getName());
        Assertions.assertEquals("Encoder 1", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Encoder 2", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(2).getName());
        Assertions.assertTrue(DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(0).isHookedUp());
        Assertions.assertFalse(DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(1).isHookedUp());
        Assertions.assertFalse(DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(2).isHookedUp());
        Assertions.assertEquals(1, DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(0).getHookedUpId());

        Assertions.assertEquals("Analog Gyro", DataAccessorFactory.getInstance().getGyroAccessor().getWrapper(1).getName());

        Assertions.assertEquals("Speed Controller 0", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(0).getName());
        Assertions.assertEquals("Speed Controller 1", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Speed Controller 2", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(2).getName());
        Assertions.assertEquals("Speed Controller 3", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(3).getName());
        Assertions.assertEquals("Speed Controller 4", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(4).getName());
        Assertions.assertEquals("Speed Controller 5", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(5).getName());
        // Assertions.assertEquals("Speed Controller 6",
        // DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(6).getName());
        Assertions.assertEquals("Speed Controller 7", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(7).getName());
        Assertions.assertEquals("Speed Controller 8", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(8).getName());

        Assertions.assertEquals("Relay 0", DataAccessorFactory.getInstance().getRelayAccessor().getWrapper(0).getName());

        Assertions.assertEquals("Solenoid 0", DataAccessorFactory.getInstance().getSolenoidAccessor().getWrapper(0).getName());
        Assertions.assertEquals("Solenoid 1", DataAccessorFactory.getInstance().getSolenoidAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Solenoid 3", DataAccessorFactory.getInstance().getSolenoidAccessor().getWrapper(3).getName());

        {
            SimpleMotorSimulationConfig config = DataAccessorFactory.getInstance().getSpeedControllerAccessor().getMotorSimSimpleModelConfig(0);
            Assertions.assertEquals(12, config.mMaxSpeed, DOUBLE_EPSILON);
        }
        {
            StaticLoadMotorSimulationConfig config = DataAccessorFactory.getInstance().getSpeedControllerAccessor().getMotorSimStaticModelConfig(1);
            Assertions.assertEquals(.5, config.mLoad, DOUBLE_EPSILON);
            Assertions.assertEquals(6.28, config.mConversionFactor, DOUBLE_EPSILON);
        }

        Assertions.assertEquals(3, DataAccessorFactory.getInstance().getSimulatorDataAccessor().getSimulatorComponentConfigs().size());
    }

    @Test
    public void testReadLegacyConfigWithoutCan()
    {
        SimulatorConfigReaderV1 reader = new SimulatorConfigReaderV1();
        Assertions.assertTrue(reader.loadConfig(extractFiles("testLegacyConfigFileWithoutCan.yml")));
        Assertions.assertNotNull(reader.getConfig());

        Assertions.assertEquals("Digital Source6", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(6).getName());
        Assertions.assertEquals("Digital Source7", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(7).getName());
        Assertions.assertEquals("Digital Source8", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(8).getName());
        Assertions.assertEquals("Digital Source9", DataAccessorFactory.getInstance().getDigitalAccessor().getWrapper(9).getName());

        Assertions.assertEquals("drive right", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(0).getName());
        Assertions.assertEquals("drive left", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Elevator", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(2).getName());

        Assertions.assertEquals("Robot Gyro", DataAccessorFactory.getInstance().getGyroAccessor().getWrapper(100).getName());

        Assertions.assertEquals("Drive Left", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(0).getName());
        Assertions.assertEquals("Drive Right", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Elevator", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(2).getName());

        Assertions.assertEquals("Claw (A)", DataAccessorFactory.getInstance().getSolenoidAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Claw (B)", DataAccessorFactory.getInstance().getSolenoidAccessor().getWrapper(2).getName());
    }

    @Test
    public void testReadLegacyConfigWithCan()
    {
        SimulatorConfigReaderV1 reader = new SimulatorConfigReaderV1();
        Assertions.assertTrue(reader.loadConfig(extractFiles("testLegacyConfigFileWithCan.yml")));
        Assertions.assertNotNull(reader.getConfig());

        Assertions.assertEquals("Winch", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(3).getName());
        Assertions.assertEquals("Drive Right (A)", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(103).getName());
        Assertions.assertEquals("Drive Right (B)", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(104).getName());
        Assertions.assertEquals("Drive Left (A)", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(101).getName());
        Assertions.assertEquals("Drive Left (B)", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(106).getName());
        Assertions.assertEquals("Elevator (A)", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(105).getName());
        Assertions.assertEquals("Elevator (B)", DataAccessorFactory.getInstance().getSpeedControllerAccessor().getWrapper(102).getName());

        Assertions.assertEquals("Drive Right", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(103).getName());
        Assertions.assertEquals("Drive Left", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(101).getName());
        Assertions.assertEquals("Elevator", DataAccessorFactory.getInstance().getEncoderAccessor().getWrapper(105).getName());

        Assertions.assertEquals("Robot Gyro", DataAccessorFactory.getInstance().getGyroAccessor().getWrapper(100).getName());

        Assertions.assertEquals("Claw (A)", DataAccessorFactory.getInstance().getSolenoidAccessor().getWrapper(1).getName());
        Assertions.assertEquals("Claw (B)", DataAccessorFactory.getInstance().getSolenoidAccessor().getWrapper(2).getName());
    }
}
