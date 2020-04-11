
#pragma once

#include <vector>

#include "SnobotSim/SimulatorComponents/SmartSC/BaseCanSmartSpeedController.h"

class RevpeedControllerSim : public BaseCanSmartSpeedController
{
public:
    static const std::string TYPE;
    const std::string& GetType() override
    {
        return TYPE;
    }

    RevpeedControllerSim(int aCanHandle);

    void setCanFeedbackDevice(int aFeedbackDevice);

protected:
    double calculateMotionProfileOutput(double aCurrentPosition, double aCurrentVelocity, int aModeType) override;

    double getPositionUnitConversion() override
    {
        return 1;
    }

    double getMotionMagicAccelerationUnitConversion() override
    {
        return 1;
    }

    double getMotionMagicVelocityUnitConversion() override
    {
        return 1;
    }
};
