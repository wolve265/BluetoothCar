#include "BluetoothCar.h"

void setup() {
    Serial.begin(115200);

    Serial.println("Test started.");
}

void loop() {
    simpleSteering.forward(150);
    delay(2000);
    simpleSteering.backward(150);
    delay(2000);
    simpleSteering.turn_right(150);
    delay(2000);
    simpleSteering.turn_left(150);
    delay(2000);
}
