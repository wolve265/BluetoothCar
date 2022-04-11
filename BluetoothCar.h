#ifndef BLUETOOTHCAR_H
#define BLUETOOTHCAR_H

#define DEBUG_ON true
#define DEBUG_OFF false

#define ENABLED true
#define DISABLED false

#define HC06_TX 13
#define HC06_RX 8

#define L298N_ENA 2
#define L298N_IN1 3
#define L298N_IN2 4
#define L298N_IN3 5
#define L298N_IN4 6
#define L298N_ENB 7

#define RIGHT_MOTOR_COMPENSATE_FACTOR 1
#define LEFT_MOTOR_COMPENSATE_FACTOR 1

#include "src/CommandDecoder/CommandDecoder.h"
#include "src/CommandDecoder/CommandDecoder.cpp"
#include "src/Driver/Driver.h"
#include "src/Driver/Driver.cpp"
#include "src/HC06BluetoothTransceiver/HC06BluetoothTransceiver.h"
#include "src/HC06BluetoothTransceiver/HC06BluetoothTransceiver.cpp"
#include "src/L298NMotorDriver/L298NMotorDriver.h"
#include "src/L298NMotorDriver/L298NMotorDriver.cpp"
#include "src/SimpleSteering/SimpleSteering.h"
#include "src/SimpleSteering/SimpleSteering.cpp"

HC06BluetoothTransceiver bluetoothTransceiver(DEBUG_OFF, ENABLED, HC06_TX, HC06_RX);
CommandDecoder commandDecoder(DEBUG_OFF, ENABLED, &bluetoothTransceiver);
L298NMotorDriver rightMotorDriver(DEBUG_OFF, ENABLED, L298N_ENB, L298N_IN3, L298N_IN4, RIGHT_MOTOR_COMPENSATE_FACTOR);
L298NMotorDriver leftMotorDriver(DEBUG_OFF, ENABLED, L298N_ENA, L298N_IN1, L298N_IN2, LEFT_MOTOR_COMPENSATE_FACTOR);
SimpleSteering simpleSteering(DEBUG_OFF, ENABLED, &rightMotorDriver, &leftMotorDriver);

#endif
