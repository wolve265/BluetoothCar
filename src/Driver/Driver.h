#ifndef DRIVER_H
#define DRIVER_H

///////////////////////////////////////////////////////////
// This class is a base class for every other class
///////////////////////////////////////////////////////////
class Driver
{
private:
    bool _isDebugOn = false;
    bool _isEnabled = false;
public:
    Driver(bool isDebugOn, bool isEnabled);
    ~Driver();
    bool IsDebugOn();
    bool IsEnabled();
    void SetDebugOn(bool isDebugOn);
    void SetEnabled(bool isEnabled);
};

#endif
