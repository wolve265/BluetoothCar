#include "L298N.h"

MotorDriver::MotorDriver()
{
}

MotorDriver::~MotorDriver()
{
}

void MotorDriver::stop(unsigned long ms)
{
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, LOW);
    digitalWrite(leftMotorPin1,  LOW);
    digitalWrite(leftMotorPin2,  LOW);
    delay(ms);
}

void MotorDriver::forward(unsigned long ms)
{
    digitalWrite(rightMotorPin1, HIGH);
    digitalWrite(rightMotorPin2, LOW);
    digitalWrite(leftMotorPin1,  HIGH);
    digitalWrite(leftMotorPin2,  LOW);
    delay(ms);
}

void MotorDriver::backward(unsigned long ms)
{
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, HIGH);
    digitalWrite(leftMotorPin1,  LOW);
    digitalWrite(leftMotorPin2,  HIGH);
    delay(ms);
}
