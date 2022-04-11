#include "BluetoothCar.h"

void setup() {
    Serial.begin(9600);

    Serial.println("Test started.");
}

void loop() {
    bluetoothSteering.run();
}
