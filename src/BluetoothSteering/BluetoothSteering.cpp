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

///////////////////////////////////////////////////////////
// This function runs the BluetoothSteering.
///////////////////////////////////////////////////////////
//
// INPUT:
//
// OUTPUT:
//
// REMARKS:
//      tutaj zapisujemy dodatkowe uwagi, np. dodatkowe
//      opcje wywołań, specjalny format argumentów, itd.
//
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
        this->back(_currentSpeed);
        break;
    case LEFT:
        this->left(_currentSpeed);
        break;
    case RIGHT:
        this->right(_currentSpeed);
        break;
    case FORWARD_LEFT:
        this->forward_left(_currentSpeed);
        break;
    case FORWARD_RIGHT:
        this->forward_right(_currentSpeed);
        break;
    case BACK_LEFT:
        this->back_left(_currentSpeed);
        break;
    case BACK_RIGHT:
        this->back_right(_currentSpeed);
        break;
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

///////////////////////////////////////////////////////////
// This function sets the speed for steering.
///////////////////////////////////////////////////////////
//
// INPUT:
//      int speed: speed value from -255 to 255
//
// OUTPUT:
//
// REMARKS:
//
void BluetoothSteering::setSpeed(int speed)
{
    _currentSpeed = speed;
}
