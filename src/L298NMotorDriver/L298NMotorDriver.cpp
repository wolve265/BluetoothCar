#include "L298NMotorDriver.h"

L298NMotorDriver::L298NMotorDriver(
    bool isDebugOn,
    bool isEnabled,
    unsigned int pinEnable,
    unsigned int pinPlus,
    unsigned int pinMinus,
    float compensateFactor
    ) : Driver(isDebugOn, isEnabled)
{
    _pinEnable = pinEnable;
    _pinPlus = pinPlus;
    _pinMinus = pinMinus;
    _compensateFactor = compensateFactor;
}

L298NMotorDriver::~L298NMotorDriver()
{
}

// Sets the speed of the motor
// speed = 0 then motor stops
// speed between -255 and -1 then motor runs backward
// speed between 1 and 255 then motor runs forward
void L298NMotorDriver::SetSpeed(int speed)
{
    _currentSpeed = speed;

    if (IsDebugOn())
    {
        Serial.print(F("L298NMotorDriver: speed:"));
        Serial.println(speed);
    }

    if (IsEnabled())
    {
        if (speed > 0)
        {
            analogWrite(_pinEnable, int(speed * _compensateFactor));
            digitalWrite(_pinPlus, HIGH);
            digitalWrite(_pinMinus, LOW);
        }
        else if (speed == 0)
        {
            analogWrite(_pinEnable, speed);
            digitalWrite(_pinPlus, HIGH);
            digitalWrite(_pinMinus, HIGH);
        }
        else
        {
            analogWrite(_pinEnable, int(-speed * _compensateFactor));
            digitalWrite(_pinPlus, LOW);
            digitalWrite(_pinMinus, HIGH);
        }
    }
}

// Returns the current speed
int L298NMotorDriver::GetSpeed() const
{
    return _currentSpeed;
}
