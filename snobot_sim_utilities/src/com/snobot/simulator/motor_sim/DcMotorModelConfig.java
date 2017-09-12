package com.snobot.simulator.motor_sim;

public class DcMotorModelConfig
{
    public static class FactoryParams
    {
        public final String mMotorType;
        public final int mNumMotors;
        public final double mGearReduction;
        public final double mGearboxEfficiency;

        public FactoryParams(String aMotorType, int aNumMotors, double aGearReduction, double aGearboxEfficiency)
        {
            mMotorType = aMotorType;
            mNumMotors = aNumMotors;
            mGearReduction = aGearReduction;
            mGearboxEfficiency = aGearboxEfficiency;
        }

        @Override
        public String toString()
        {
            return "FactoryParams [mMotorType=" + mMotorType + ", mNumMotors=" + mNumMotors + ", mGearReduction=" + mGearReduction
                    + ", mGearboxEfficiency=" + mGearboxEfficiency + "]";
        }

    }

    public static class MotorParams
    {
        public final double NOMINAL_VOLTAGE;
        public final double FREE_SPEED_RPM;
        public final double FREE_CURRENT;
        public final double STALL_TORQUE;
        public final double STALL_CURRENT;
        public final double MOTOR_INERTIA;
        public final double mKT;
        public final double mKV;
        public final double mResistance;

        public MotorParams(double aNominalVoltage, double aFreeSpeedRpm, double aFreeCurrent, double aStallTorque, double aStallCurrent)
        {
            this(aNominalVoltage, aFreeSpeedRpm, aFreeCurrent, aStallTorque, aStallCurrent, 0);
        }

        public MotorParams(double aNominalVoltage, double aFreeSpeedRpm, double aFreeCurrent, double aStallTorque, double aStallCurrent,
                double aMotorInertia)
        {
            this(aNominalVoltage, aFreeSpeedRpm, aFreeCurrent, aStallTorque, aStallCurrent, aMotorInertia, 1);
        }

        public MotorParams(
                double aNominalVoltage, 
                double aFreeSpeedRpm, 
                double aFreeCurrent, 
                double aStallTorque, 
                double aStallCurrent,
                double aMotorInertia,
                double aKtScaler)
        {
            this(aNominalVoltage, aFreeSpeedRpm, aFreeCurrent, aStallTorque, aStallCurrent, 
                    aMotorInertia, 
                    (aStallTorque / aStallCurrent) * aKtScaler, 
                    (aFreeSpeedRpm / aNominalVoltage) * (Math.PI * 2.0) / 60.0,
                    aNominalVoltage / aStallCurrent);
        }

        public MotorParams(
                double aNominalVoltage, 
                double aFreeSpeedRpm, 
                double aFreeCurrent, 
                double aStallTorque, 
                double aStallCurrent,
                double aMotorInertia,
                double aKt,
                double aKv,
                double aResistance)
        {
            NOMINAL_VOLTAGE = aNominalVoltage;
            FREE_SPEED_RPM = aFreeSpeedRpm;
            FREE_CURRENT = aFreeCurrent;
            STALL_TORQUE = aStallTorque;
            STALL_CURRENT = aStallCurrent;
            MOTOR_INERTIA = aMotorInertia;

            mKT = aKt;
            mKV = aKv;
            mResistance = aResistance;
        }

        public double calculateKt()
        {
            return STALL_TORQUE / STALL_CURRENT;
        }

        public double calculateKv()
        {
            return (FREE_SPEED_RPM / NOMINAL_VOLTAGE) * (Math.PI * 2.0) / 60.0;
        }

        public double calculateResistance()
        {
            return NOMINAL_VOLTAGE / STALL_CURRENT;
        }

        @Override
        public String toString()
        {
            return "MotorParams [NOMINAL_VOLTAGE=" + NOMINAL_VOLTAGE + ", FREE_SPEED_RPM=" + FREE_SPEED_RPM + ", FREE_CURRENT=" + FREE_CURRENT
                    + ", STALL_TORQUE=" + STALL_TORQUE + ", STALL_CURRENT=" + STALL_CURRENT + ", MOTOR_INERTIA=" + MOTOR_INERTIA + ", mKT=" + mKT
                    + ", mKV=" + mKV + ", mResistance=" + mResistance + "]";
        }

    }

    public final FactoryParams mFactoryParams;
    public final MotorParams mMotorParams;

    // Indicates you want a positive voltage to move the system backwards instead of forwards
    public boolean mInverted;

    // Indicates the motor has a brake, i.e. when givin 0 volts it will stay put
    public boolean mHasBrake;

    public DcMotorModelConfig(
            FactoryParams aFactoryParams,
            MotorParams aMotorParams,
            boolean aHasBrake, 
            boolean aInverted)
    {
        mFactoryParams = aFactoryParams;
        mMotorParams = aMotorParams;

        mHasBrake = aHasBrake;
        mInverted = aInverted;
    }

    public void setInverted(boolean aInverted)
    {
        mInverted = aInverted;
    }

    public void setHasBrake(boolean aHasBrake)
    {
        mHasBrake = aHasBrake;
    }

    @Override
    public String toString()
    {
        return "DcMotorModelConfig [mFactoryParams=" + mFactoryParams + ", mMotorParams=" + mMotorParams + ", mInverted=" + mInverted + ", mHasBrake="
                + mHasBrake + "]";
    }

}