#ifndef L298N_MOTOR_DRIVER_H
#define L298N_MOTOR_DRIVER_H

#include "Arduino.h"
#include "src/Driver/Driver.h"
#include "src/Driver/Driver.cpp"

class L298NMotorDriver : public Driver
{
private:
    unsigned int _pinEnable;
    unsigned int _pinPlus;
    unsigned int _pinMinus;

    float _compensateFactor;
    int _currentSpeed;

public:
    L298NMotorDriver(
        bool isDebugOn,
        bool isEnabled,
        unsigned int pinEnable,
        unsigned int pinPlus,
        unsigned int pinMinus,
        float compensateFactor
        );
    ~L298NMotorDriver();

    void SetSpeed(int speed);
    int GetSpeed() const;
};

#endif
