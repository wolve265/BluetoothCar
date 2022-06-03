#ifndef HC06_BLUETOOTH_TRANSCEIVER_H
#define HC06_BLUETOOTH_TRANSCEIVER_H

#include "SoftwareSerial.h"
#include "src/Driver/Driver.h"

///////////////////////////////////////////////////////////
// This class implements HC06 Bluetooth Transceiver
// functionalities and communication.
///////////////////////////////////////////////////////////
class HC06BluetoothTransceiver : public Driver
{
private:
    unsigned int _pinTX;
    unsigned int _pinRX;
    SoftwareSerial _swSerial;
public:
    HC06BluetoothTransceiver(
        bool isDebugOn,
        bool isEnabled,
        unsigned int pinTX,
        unsigned int pinRX
        );
    ~HC06BluetoothTransceiver();

    int available();
    void begin(long speed);
    int read();
    size_t write(uint8_t byte);
};

#endif
