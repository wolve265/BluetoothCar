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
        simpleSteering.backward(150);
        break;
    case LEFT:
        simpleSteering.turn_left(150);
        break;
    case RIGHT:
        simpleSteering.turn_right(150);
        break;

    default:
        simpleSteering.forward(0);
        break;
    }
}
