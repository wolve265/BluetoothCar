#ifndef COMMAND_DECODER_H
#define COMMAND_DECODER_H

#include "src/Driver/Driver.h"
#include "src/HC06BluetoothTransceiver/HC06BluetoothTransceiver.h"

typedef enum Command{
    UNKNOWN             = 0,   // 0
    FORWARD             = 'F', // 'F'
    BACK                = 'B', // 'B'
    LEFT                = 'L', // 'L'
    RIGHT               = 'R', // 'R'
    FORWARD_LEFT        = 'G', // 'G'
    FORWARD_RIGHT       = 'I', // 'I'
    BACK_LEFT           = 'H', // 'H'
    BACK_RIGHT          = 'J', // 'J'
    STOP                = 'S', // 'S'
    FRONT_LIGHTS_ON     = 'W', // 'W' (upper case)
    FRONT_LIGHTS_OFF    = 'w', // 'w' (lower case)
    BACK_LIGHTS_ON      = 'U', // 'U' (upper case)
    BACK_LIGHTS_OFF     = 'u', // 'u' (lower case)
    HORN_ON             = 'V', // 'V' (upper case)
    HORN_OFF            = 'v', // 'v' (lower case)
    EXTRA_ON            = 'X', // 'X' (upper case)
    EXTRA_OFF           = 'x', // 'x' (lower case)
    SPEED_0             = '0', // '0' (zero)
    SPEED_10            = '1', // '1'
    SPEED_20            = '2', // '2'
    SPEED_30            = '3', // '3'
    SPEED_40            = '4', // '4'
    SPEED_50            = '5', // '5'
    SPEED_60            = '6', // '6'
    SPEED_70            = '7', // '7'
    SPEED_80            = '8', // '8'
    SPEED_90            = '9', // '9'
    SPEED_100           = 'q', // 'q'
    STOP_ALL            = 'D'  // 'D'
}Command;

class CommandDecoder : public Driver
{
private:
    Command _command = STOP;
    HC06BluetoothTransceiver* _bluetoothTransceiver;

public:
    CommandDecoder(
        bool isDebugOn,
        bool isEnabled,
        HC06BluetoothTransceiver* bluetoothTransceiver
        );
    ~CommandDecoder();
    Command decode();
};

#endif
