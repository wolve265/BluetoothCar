#include "L298N.h"

MotorDriver::MotorDriver()
{
}

MotorDriver::~MotorDriver()
{
}

void MotorDriver::use_right(Direction direction)
{
    switch (direction)
    {
    case FORWARD:
        digitalWrite(rightMotorPin1, HIGH);
        digitalWrite(rightMotorPin2, LOW);
        break;

    case STOP:
        digitalWrite(rightMotorPin1, LOW);
        digitalWrite(rightMotorPin2, LOW);
        break;

    case BACKWARD:
        digitalWrite(rightMotorPin1, LOW);
        digitalWrite(rightMotorPin2, HIGH);

    default:
        break;
    }
}

void MotorDriver::use_left(Direction direction)
{
    switch (direction)
    {
    case FORWARD:
        digitalWrite(leftMotorPin1, HIGH);
        digitalWrite(leftMotorPin2, LOW);
        break;

    case STOP:
        digitalWrite(leftMotorPin1, LOW);
        digitalWrite(leftMotorPin2, LOW);
        break;

    case BACKWARD:
        digitalWrite(leftMotorPin1, LOW);
        digitalWrite(leftMotorPin2, HIGH);

    default:
        break;
    }
}

void MotorDriver::stop(unsigned long ms)
{
    use_right(STOP);
    use_left(STOP);
    delay(ms);
}

void MotorDriver::forward(unsigned long ms)
{
    use_right(FORWARD);
    use_left(FORWARD);
    delay(ms);
}

void MotorDriver::backward(unsigned long ms)
{
    use_right(BACKWARD);
    use_left(BACKWARD);
    delay(ms);
}

void MotorDriver::right(unsigned long ms)
{
    use_right(BACKWARD);
    use_left(FORWARD);
    delay(ms);
}

void MotorDriver::left(unsigned long ms)
{
    use_right(FORWARD);
    use_left(BACKWARD);
    delay(ms);
}
