#include "BluetoothCar.h"

void setup() {
    Serial.begin(9600);
}

void loop() {
    Command command;
    command = commandDecoder.decode();
    switch (command)
    {
    case FORWARD:
        simpleSteering.forward(150);
        break;
    case BACK:
        simpleSteering.back(150);
        break;
    case LEFT:
        simpleSteering.left(150);
        break;
    case RIGHT:
        simpleSteering.right(150);
        break;

    default:
        simpleSteering.forward(0);
        break;
    }
}
