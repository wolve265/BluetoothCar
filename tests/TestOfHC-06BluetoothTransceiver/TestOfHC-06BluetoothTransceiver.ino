#include "BluetoothCar.h"

void setup() {
    Serial.begin(9600);
}

void loop() {
    if (bluetoothTrasceiver.available())
    {
        int read_val = bluetoothTrasceiver.read();
        switch (read_val)
        {
        case 'W':
            Serial.println("W pressed");
            break;

        case 'S':
            Serial.println("S pressed");
            break;

        default:
            break;
        }
    }
    if (Serial.available())
    {
        bluetoothTrasceiver.write(Serial.read());
    }
}
