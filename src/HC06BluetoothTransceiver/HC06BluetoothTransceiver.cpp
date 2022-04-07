#include "HC06BluetoothTransceiver.h"

HC06BluetoothTransceiver::HC06BluetoothTransceiver(
    bool isDebugOn,
    bool isEnabled,
    unsigned int pinTX,
    unsigned int pinRX
    ) : Driver(isDebugOn, isEnabled), serial(pinTX, pinRX)
{
    _pinTX = pinTX;
    _pinRX = pinRX;
}

HC06BluetoothTransceiver::~HC06BluetoothTransceiver()
{
}
