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
        Serial.print(F("SimpleSteering: right with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(-speed);
    _leftMotorDriver->SetSpeed(speed);

}

void SimpleSteering::left(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: left with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(speed);
    _leftMotorDriver->SetSpeed(-speed);

}

void SimpleSteering::forward_right(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: forward right with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(speed - _turnSpeedDifference);
    _leftMotorDriver->SetSpeed(speed);

}

void SimpleSteering::forward_left(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: forward left with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(speed);
    _leftMotorDriver->SetSpeed(speed - _turnSpeedDifference);

}

void SimpleSteering::back_right(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: back right with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(-speed);
    _leftMotorDriver->SetSpeed(-speed + _turnSpeedDifference);

}

void SimpleSteering::back_left(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: back left with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(-speed + _turnSpeedDifference);
    _leftMotorDriver->SetSpeed(-speed);

}
