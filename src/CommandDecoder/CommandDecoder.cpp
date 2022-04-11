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

// Blocking decoding of commands, because app is writing every 50ms
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
