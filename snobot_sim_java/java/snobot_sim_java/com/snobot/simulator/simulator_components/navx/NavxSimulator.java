package com.snobot.simulator.simulator_components.navx;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

import com.snobot.simulator.SensorActuatorRegistry;
import com.snobot.simulator.simulator_components.gyro.GyroWrapper;

public class NavxSimulator
{
    protected static int TIMESTAMP = 1;

    protected final GyroWrapper mYawGyro;
    protected final GyroWrapper mPitchGyro;
    protected final GyroWrapper mRollGyro;

    public NavxSimulator(int aPort, 
            GyroWrapper aYawGyro, GyroWrapper aPitchGyro, GyroWrapper aRollGyro)
    {
        mYawGyro = aYawGyro;
        mPitchGyro = aPitchGyro;
        mRollGyro = aRollGyro;

        SensorActuatorRegistry.get().register(mYawGyro, aPort + 0);
        SensorActuatorRegistry.get().register(mPitchGyro, aPort + 1);
        SensorActuatorRegistry.get().register(mRollGyro, aPort + 2);
    }

    protected void putConfig(ByteBuffer aBuffer)
    {
        aBuffer.put((byte) 1);
        aBuffer.put((byte) 2);
        aBuffer.put((byte) 3);
        aBuffer.put((byte) 4);
        aBuffer.put((byte) 5);
        aBuffer.putShort((short) 0x0607);
        aBuffer.put((byte) 6);
        aBuffer.put((byte) 7);
        aBuffer.put((byte) 10);
        aBuffer.putShort((short) 0xDEAD);
        aBuffer.putInt(0);
        aBuffer.putShort((short) 0xDEAD);
    }

    protected void putData(ByteBuffer aBuffer, int aFirstAddress)
    {
        aBuffer.order(ByteOrder.LITTLE_ENDIAN);
        aBuffer.putInt(0x12 - aFirstAddress, TIMESTAMP);
        ++TIMESTAMP;

        aBuffer.put(0x08 - aFirstAddress, (byte) 1); // Op Status
        aBuffer.put(0x0A - aFirstAddress, (byte) 2); // Self Test
        aBuffer.put(0x09 - aFirstAddress, (byte) 3); // Cal Status
        aBuffer.put(0x10 - aFirstAddress, (byte) 4); // Sensor Status

        System.out.println(mYawGyro.getAngle());

        aBuffer.putShort(0x16 - aFirstAddress, (short) (boundBetweenNeg180Pos180(mYawGyro.getAngle()) * 100)); // Yaw
        aBuffer.putShort(0x1A - aFirstAddress, (short) (boundBetweenNeg180Pos180(mPitchGyro.getAngle()) * 100)); // Pitch
        aBuffer.putShort(0x18 - aFirstAddress, (short) (boundBetweenNeg180Pos180(mRollGyro.getAngle()) * 100)); // Roll
        aBuffer.putShort(0x1C - aFirstAddress, (short) (0 * 100)); // Heading
        aBuffer.putShort(0x32 - aFirstAddress, (short) (0 * 100)); // Temperature
        aBuffer.putShort(0x24 - aFirstAddress, (short) (0 * 1000)); // Linear Accel X
        aBuffer.putShort(0x26 - aFirstAddress, (short) (0 * 1000)); // Linear Accel Y
        aBuffer.putShort(0x28 - aFirstAddress, (short) (0 * 1000)); // Linear Accel Z
    }

    private double boundBetweenNeg180Pos180(double input)
    {
        double output = input;
        while (output > 180)
        {
            output -= 360;
        }
        while (output < -180)
        {
            output += 360;
        }

        return output;
    }

}
