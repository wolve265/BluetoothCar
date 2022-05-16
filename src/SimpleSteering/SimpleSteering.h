#ifndef SIMPLE_STEERING_H
#define SIMPLE_STEERING_H

#include "src/Driver/Driver.h"
#include "src/L298NMotorDriver/L298NMotorDriver.h"

class SimpleSteering : public Driver
{
private:
    int _turnSpeedDifference = 50;
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
    void back(int speed);
    void right(int speed);
    void left(int speed);
    void forward_right(int speed);
    void forward_left(int speed);
    void back_right(int speed);
    void back_left(int speed);
    void stop();
};

#endif
