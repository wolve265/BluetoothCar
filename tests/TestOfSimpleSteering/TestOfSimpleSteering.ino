#include "BluetoothCar.h"

void setup() {
    Serial.begin(115200);

    Serial.println("Test started.");
}

void loop() {
    simpleSteering.forward(150);
    delay(2000);
    simpleSteering.back(150);
    delay(2000);
    simpleSteering.right(150);
    delay(2000);
    simpleSteering.left(150);
    delay(2000);
}
