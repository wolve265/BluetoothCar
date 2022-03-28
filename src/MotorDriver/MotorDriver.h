#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

#include "src/Driver/Driver.h"

class MotorDriver : public Driver
{
private:

public:
    MotorDriver(bool isDebugOn, bool isEnabled);
    ~MotorDriver();

    // Sets the speed of the motor according to the value speed
    // -255 <= speed <= -1 ; counter_clockwise
    // speed = 0           ; stop
    // 1 <= speed <= 255   ; clockwise
    // Method that must be implemented in child class
    virtual void SetSpeed(int speed) = 0;

    // Return the current speed
    // Method that must be implemented in child class
    virtual int GetSpeed() const = 0;
};

#endif
