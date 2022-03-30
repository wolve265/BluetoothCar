#include "BluetoothCar.h"

void setup() {
    Serial.begin(115200);

    Serial.println("Test started.");
}

void loop() {
    rightMotorDriver.SetSpeed(150);
    leftMotorDriver.SetSpeed(150);
    delay(2000);
    rightMotorDriver.SetSpeed(0);
    leftMotorDriver.SetSpeed(0);
    delay(5000);
    rightMotorDriver.SetSpeed(-150);
    leftMotorDriver.SetSpeed(-150);
    delay(2000);
    rightMotorDriver.SetSpeed(0);
    leftMotorDriver.SetSpeed(0);
    delay(5000);
}
