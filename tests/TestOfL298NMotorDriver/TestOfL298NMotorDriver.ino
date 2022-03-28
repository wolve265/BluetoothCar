#include "BluetoothCar.h"

void setup() {
    Serial.begin(115200);

    Serial.println("Test started.");
}

void loop() {
    rightMotorDriver.SetSpeed(250);
    leftMotorDriver.SetSpeed(250);
    delay(2000);
    rightMotorDriver.SetSpeed(-250);
    leftMotorDriver.SetSpeed(-250);
    delay(2000);
}
