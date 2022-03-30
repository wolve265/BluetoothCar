#ifndef BLUETOOTHCAR_H
#define BLUETOOTHCAR_H

#define L298N_ENA 5
#define L298N_IN1 6
#define L298N_IN2 7
#define L298N_IN3 8
#define L298N_IN4 9
#define L298N_ENB 10

#define RIGHT_MOTOR_COMPENSATE_FACTOR 1
#define LEFT_MOTOR_COMPENSATE_FACTOR 1

#include "src/L298NMotorDriver/L298NMotorDriver.h"
#include "src/L298NMotorDriver/L298NMotorDriver.cpp"

L298NMotorDriver rightMotorDriver(true, true, L298N_ENA, L298N_IN1, L298N_IN2, RIGHT_MOTOR_COMPENSATE_FACTOR);
L298NMotorDriver leftMotorDriver(true, true, L298N_ENB, L298N_IN3, L298N_IN4, LEFT_MOTOR_COMPENSATE_FACTOR);

#endif
