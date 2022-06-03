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

///////////////////////////////////////////////////////////
// This function moves car forward with provided speed
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
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

///////////////////////////////////////////////////////////
// This function moves car back with provided speed
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
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

///////////////////////////////////////////////////////////
// This function moves car right with provided speed
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
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

///////////////////////////////////////////////////////////
// This function moves car left with provided speed
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
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

///////////////////////////////////////////////////////////
// This function moves car forward right with provided speed
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
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

///////////////////////////////////////////////////////////
// This function moves car forward left with provided speed
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
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

///////////////////////////////////////////////////////////
// This functionmoves car back right with provided speed
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
void SimpleSteering::back_right(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: back right with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(-speed + _turnSpeedDifference);
    _leftMotorDriver->SetSpeed(-speed);

}

///////////////////////////////////////////////////////////
// This function moves car back left with provided speed
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
void SimpleSteering::back_left(int speed)
{
    if (IsDebugOn())
    {
        Serial.print(F("SimpleSteering: back left with speed: "));
        Serial.println(speed);
    }

    _rightMotorDriver->SetSpeed(-speed);
    _leftMotorDriver->SetSpeed(-speed + _turnSpeedDifference);

}

///////////////////////////////////////////////////////////
// This function stops the car
///////////////////////////////////////////////////////////
//
// INPUT:
//
// OUTPUT:
//
// REMARKS:
//
void SimpleSteering::stop()
{
    this->forward(0);
}
