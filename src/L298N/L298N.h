#ifndef L298N_H
#define L298N_H

class MotorDriver
{
private:
    const int rightMotorPin1 = 8;
    const int rightMotorPin2 = 9;
    const int leftMotorPin1  = 10;
    const int leftMotorPin2  = 11;
    int leftMotorSpeed = 100;
    int rightMotorSpeed = 100;
public:
    MotorDriver();
    ~MotorDriver();
    void stop(unsigned long ms);
    void forward(unsigned long ms);
    void backward(unsigned long ms);
    void left(unsigned long ms);
    void right(unsigned long ms);
};

#endif
