#ifndef SIMPLE_STEERING_H
#define SIMPLE_STEERING_H

#include "src/Driver/Driver.h"
#include "src/L298NMotorDriver/L298NMotorDriver.h"

class SimpleSteering : public Driver
{
private:
    L298NMotorDriver* _rightMotorDriver;
    L298NMotorDriver* _leftMotorDriver;
public:
    SimpleSteering(
        bool isDebugOn,
        bool isEnabled,
        L298NMotorDriver* rightMotorDriver,
        L298NMotorDriver* leftMotorDriver
        );
    ~SimpleSteering();
    void forward(int speed);
    void backward(int speed);
    void turn_right(int speed);
    void turn_left(int speed);
};

#endif
