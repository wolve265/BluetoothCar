#include "BluetoothCar.h"

MotorDriver mMotorDriver;

void setup() {
    mMotorDriver.stop(0);
}

void loop() {
    mMotorDriver.forward(1000);
    mMotorDriver.stop(3000);
}
