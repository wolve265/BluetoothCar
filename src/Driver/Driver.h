#ifndef DRIVER_H
#define DRIVER_H

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
