#include "CommandDecoder.h"

CommandDecoder::CommandDecoder(
    bool isDebugOn,
    bool isEnabled,
    HC06BluetoothTransceiver* bluetoothTransceiver
    ) : Driver(isDebugOn, isEnabled)
{
    _bluetoothTransceiver = bluetoothTransceiver;
}

CommandDecoder::~CommandDecoder()
{
}

///////////////////////////////////////////////////////////
// This function decodes command received from app
///////////////////////////////////////////////////////////
//
// INPUT:
//
// OUTPUT:
//      Command command: decoded command
//
// REMARKS:
//      This function is blocking,
//      because app is writing every 50ms
Command CommandDecoder::decode()
{
    if (_bluetoothTransceiver->available() > 0)
    {
        _command = static_cast<Command>(_bluetoothTransceiver->read());
    }

    if (IsDebugOn()){
        Serial.print(F("CommandDecoder: read: "));
        Serial.println(_command);
    }

    return _command;
}
