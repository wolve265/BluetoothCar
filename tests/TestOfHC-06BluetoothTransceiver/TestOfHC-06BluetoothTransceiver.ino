#include "BluetoothCar.h"

void setup() {
    Serial.begin(9600);
    Serial.println("Enter AT Commands");
    bluetoothTrasceiver.serial.begin(9600);
}

void loop() {
    if (bluetoothTrasceiver.serial.available())
    {
        Serial.write(bluetoothTrasceiver.serial.read());
    }
    if (Serial.available())
    {
        bluetoothTrasceiver.serial.write(Serial.read());
    }
}
