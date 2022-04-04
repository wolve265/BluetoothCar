#include "SoftwareSerial.h" // Software UART library
#include "BluetoothCar.h"

SoftwareSerial BTSerial (12,13); // PIN 12 BluetoothTX, PIN13 BluetoothRX

void setup() {
    Serial.begin(9600);
    Serial.println("Enter AT Commands");
    BTSerial.begin(9600);
}

void loop() {
    if (BTSerial.available())
    {
        Serial.write(BTSerial.read());
    }
    if (Serial.available())
    {
        BTSerial.write(Serial.read());
    }
}
