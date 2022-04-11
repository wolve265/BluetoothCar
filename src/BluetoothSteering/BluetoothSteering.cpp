#include "BluetoothSteering.h"

BluetoothSteering::BluetoothSteering(
    bool isDebugOn,
    bool isEnabled,
    L298NMotorDriver* rightMotorDriver,
    L298NMotorDriver* leftMotorDriver,
    CommandDecoder* commandDecoder
    ) : SimpleSteering(isDebugOn, isEnabled, rightMotorDriver, leftMotorDriver)
{
    _commandDecoder = commandDecoder;
}

BluetoothSteering::~BluetoothSteering()
{
}

void BluetoothSteering::run()
{
    Command command;
    command = _commandDecoder->decode();

    switch (command)
    {
    case FORWARD:
        this->forward(_currentSpeed);
        break;
    case BACK:
        this->backward(_currentSpeed);
        break;
    case LEFT:
        this->turn_left(_currentSpeed);
        break;
    case RIGHT:
        this->turn_right(_currentSpeed);
        break;
    // case FORWARD_LEFT:
        // this->TBD;
        // break;
    // case FORWARD_RIGHT:
        // this->TBD;
        // break;
    // case BACK_LEFT:
        // this->TBD;
        // break;
    // case BACK_RIGHT:
        // this->TBD;
        // break;
    case STOP:
        this->forward(0);
        break;
    // case FRONT_LIGHTS_ON:
        // this->TBD;
        // break;
    // case FRONT_LIGHTS_OFF:
        // this->TBD;
        // break;
    // case BACK_LIGHTS_ON:
        // this->TBD;
        // break;
    // case BACK_LIGHTS_OFF:
        // this->TBD;
        // break;
    // case HORN_ON:
        // this->TBD;
        // break;
    // case HORN_OFF:
        // this->TBD;
        // break;
    // case EXTRA_ON:
        // this->TBD;
        // break;
    // case EXTRA_OFF:
        // this->TBD;
        // break;
    case SPEED_0:
        this->setSpeed(_minSpeed);
        break;
    case SPEED_10:
        this->setSpeed(_minSpeed + 10);
        break;
    case SPEED_20:
        this->setSpeed(_minSpeed + 20);
        break;
    case SPEED_30:
        this->setSpeed(_minSpeed + 30);
        break;
    case SPEED_40:
        this->setSpeed(_minSpeed + 40);
        break;
    case SPEED_50:
        this->setSpeed(_minSpeed + 50);
        break;
    case SPEED_60:
        this->setSpeed(_minSpeed + 60);
        break;
    case SPEED_70:
        this->setSpeed(_minSpeed + 70);
        break;
    case SPEED_80:
        this->setSpeed(_minSpeed + 80);
        break;
    case SPEED_90:
        this->setSpeed(_minSpeed + 90);
        break;
    case SPEED_100:
        this->setSpeed(_minSpeed + 100);
        break;
    // case STOP_ALL:
        // this->TBD;
        // break;
    default: // case STOP
        this->forward(0);
        break;
    }
}

void BluetoothSteering::setSpeed(int speed)
{
    _currentSpeed = speed;
}
