#include "HC06BluetoothTransceiver.h"

HC06BluetoothTransceiver::HC06BluetoothTransceiver(
    bool isDebugOn,
    bool isEnabled,
    unsigned int pinTX,
    unsigned int pinRX
    ) : Driver(isDebugOn, isEnabled), _swSerial(pinTX, pinRX)
{
    _pinTX = pinTX;
    _pinRX = pinRX;
    this->begin(9600);
}

HC06BluetoothTransceiver::~HC06BluetoothTransceiver()
{
}

///////////////////////////////////////////////////////////
// This function returns information if Serial is available
///////////////////////////////////////////////////////////
//
// INPUT:
//
// OUTPUT:
//      int available: information about Serial availability
//
// REMARKS:
//
int HC06BluetoothTransceiver::available()
{
    return _swSerial.available();
}

///////////////////////////////////////////////////////////
// This function begins the Serial communication
///////////////////////////////////////////////////////////
//
// INPUT:
//      long speed: specified baudrate
//
// OUTPUT:
//
// REMARKS:
//
void HC06BluetoothTransceiver::begin(long speed)
{
    _swSerial.begin(speed);
}

///////////////////////////////////////////////////////////
// This function reads data from Serial
///////////////////////////////////////////////////////////
//
// INPUT:
//
// OUTPUT:
//      int read_val: value read from Serial
//
// REMARKS:
//
int HC06BluetoothTransceiver::read()
{
    char read_val = _swSerial.read();

    if (IsDebugOn() && read_val != '\r' && read_val != '\n')
    {
        Serial.print(F("HC06BluetoothTransceiver: read: "));
        Serial.println(read_val);
    }

    return read_val;
}

///////////////////////////////////////////////////////////
// This function writes data to Serial
///////////////////////////////////////////////////////////
//
// INPUT:
//      uint8_t byte: byte to send
//
// OUTPUT:
//      size_t size: size
//
// REMARKS:
//
size_t HC06BluetoothTransceiver::write(uint8_t byte)
{
    if (IsDebugOn())
    {
        Serial.print(F("HC06BluetoothTransceiver: write: "));
        Serial.println(byte);
    }

    return _swSerial.write(byte);
}
