/*
 * BaseAdxAccelWrapper.cpp
 *
 *  Created on: Nov 23, 2017
 *      Author: PJ
 */

#include "SnobotSim/SimulatorComponents/AdxWrappers/BaseAdxAccelWrapper.h"

#include "SnobotSim/SensorActuatorRegistry.h"

BaseAdxAccelWrapper::BaseAdxAccelWrapper(int aBasePort) :
        mXWrapper(new AccelerometerWrapper(AccelerometerWrapper::AXIS_X)),
        mYWrapper(new AccelerometerWrapper(AccelerometerWrapper::AXIS_Y)),
        mZWrapper(new AccelerometerWrapper(AccelerometerWrapper::AXIS_Z))
{
    SensorActuatorRegistry::Get().Register(aBasePort + 0, mXWrapper);
    SensorActuatorRegistry::Get().Register(aBasePort + 1, mYWrapper);
    SensorActuatorRegistry::Get().Register(aBasePort + 2, mZWrapper);
}

BaseAdxAccelWrapper::~BaseAdxAccelWrapper()
{
}

BaseAdxAccelWrapper::AccelerometerWrapper::AccelerometerWrapper(AxisType aAxisType) :
        AModuleWrapper("Hello"),
        mAxisType(aAxisType)
{
}

void BaseAdxAccelWrapper::AccelerometerWrapper::SetAcceleration(double aAcceleration)
{
    switch (mAxisType)
    {
    case AXIS_X:
        // mAccel->SetX(aAcceleration);
        break;
    case AXIS_Y:
        // mAccel->SetY(aAcceleration);
        break;
    case AXIS_Z:
        // mAccel->SetZ(aAcceleration);
        break;
    }
}

double BaseAdxAccelWrapper::AccelerometerWrapper::GetAcceleration()
{
    // switch (mAxisType)
    // {
    // case AXIS_X:
    //     return mAccel->GetX();
    // case AXIS_Y:
    //     return mAccel->GetY();
    // case AXIS_Z:
    //     return mAccel->GetZ();
    // }
    return 0;
}
