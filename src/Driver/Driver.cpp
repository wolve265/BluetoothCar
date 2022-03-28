#include "Driver.h"

Driver::Driver(bool isDebugOn, bool isEnabled)
{
    _isDebugOn = isDebugOn;
    _isEnabled = isEnabled;
}

Driver::~Driver()
{
}

bool Driver::IsDebugOn()
{
    return _isDebugOn;
}

bool Driver::IsEnabled()
{
    return _isEnabled;
}

void Driver::SetDebugOn(bool isDebugOn)
{
    _isDebugOn = isDebugOn;
}

void Driver::SetEnabled(bool isEnabled)
{
    _isEnabled = isEnabled;
}
