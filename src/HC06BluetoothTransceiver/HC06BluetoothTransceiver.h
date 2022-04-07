#ifndef HC06_BLUETOOTH_TRANSCEIVER_H
#define HC06_BLUETOOTH_TRANSCEIVER_H

#include "SoftwareSerial.h"
#include "src/Driver/Driver.h"

class HC06BluetoothTransceiver : public Driver
{
private:
    unsigned int _pinTX;
    unsigned int _pinRX;
public:
    HC06BluetoothTransceiver(
        bool isDebugOn,
        bool isEnabled,
        unsigned int pinTX,
        unsigned int pinRX
        );
    ~HC06BluetoothTransceiver();
    SoftwareSerial serial;
};

#endif
