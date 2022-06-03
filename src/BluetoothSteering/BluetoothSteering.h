#ifndef BLUETOOTH_STEERING_H
#define BLUETOOTH_STEERING_H

#include "src/CommandDecoder/CommandDecoder.h"
#include "src/SimpleSteering/SimpleSteering.h"

///////////////////////////////////////////////////////////
// This class implements car steering via Bluetooth
///////////////////////////////////////////////////////////
class BluetoothSteering : public SimpleSteering
{
private:
    CommandDecoder* _commandDecoder;
    int _minSpeed = 150;
    int _maxSpeed = 250;
    int _currentSpeed = _minSpeed;

public:
    BluetoothSteering(
        bool isDebugOn,
        bool isEnabled,
        L298NMotorDriver* rightMotorDriver,
        L298NMotorDriver* leftMotorDriver,
        CommandDecoder* commandDecoder
        );
    ~BluetoothSteering();

    void run();
    void setSpeed(int speed);
};

#endif
