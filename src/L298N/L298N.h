#ifndef L298N_H
#define L298N_H

class MotorDriver
{
private:
    const int leftMotorPin1 = 1;
    const int leftMotorPin2 = 2;
    int speed;
public:
    MotorDriver();
    ~MotorDriver();
    void init();
};

#endif
