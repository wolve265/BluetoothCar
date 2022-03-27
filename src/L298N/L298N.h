#ifndef L298N_H
#define L298N_H

typedef enum Direction{
    FORWARD,
    STOP,
    BACKWARD
} Direction;

class MotorDriver
{
private:
    const int rightMotorPin1 = 8;
    const int rightMotorPin2 = 9;
    const int leftMotorPin1  = 10;
    const int leftMotorPin2  = 11;
    void use_right(Direction direction);
    void use_left(Direction direction);
public:
    MotorDriver();
    ~MotorDriver();
    void stop(unsigned long ms);
    void forward(unsigned long ms);
    void backward(unsigned long ms);
    void right(unsigned long ms);
    void left(unsigned long ms);
};

#endif
