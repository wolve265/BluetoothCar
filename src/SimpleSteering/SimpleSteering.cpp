#include "SimpleSteering.h"

SimpleSteering::SimpleSteering(
    bool isDebugOn,
    bool isEnabled,
    L298NMotorDriver* rightMotorDriver,
    L298NMotorDriver* leftMotorDriver
    ) : Driver(isDebugOn, isEnabled)
{
    _rightMotorDriver = rightMotorDriver;
    _leftMotorDriver = leftMotorDriver;
}

SimpleSteering::~SimpleSteering()
{
}

void SimpleSteering::forward(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: forward with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(speed);
    _leftMotorDriver->SetSpeed(speed);
}

void SimpleSteering::back(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: back with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(-speed);
    _leftMotorDriver->SetSpeed(-speed);
}

void SimpleSteering::right(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: turning right with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(-speed);
    _leftMotorDriver->SetSpeed(speed);

}

void SimpleSteering::left(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: turning left with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(speed);
    _leftMotorDriver->SetSpeed(-speed);

}
