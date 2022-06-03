#include "Driver.h"

Driver::Driver(bool isDebugOn, bool isEnabled)
{
    _isDebugOn = isDebugOn;
    _isEnabled = isEnabled;
}

Driver::~Driver()
{
}

///////////////////////////////////////////////////////////
// This function returns True if debugging is on
///////////////////////////////////////////////////////////
//
// INPUT:
//
// OUTPUT:
//      bool isDebugOn: debug flag
//
// REMARKS:
//
bool Driver::IsDebugOn()
{
    return _isDebugOn;
}

///////////////////////////////////////////////////////////
// This function return True if module is enabled
///////////////////////////////////////////////////////////
//
// INPUT:
//
// OUTPUT:
//      bool isEnabled: enabled flag
//
// REMARKS:
//
bool Driver::IsEnabled()
{
    return _isEnabled;
}

///////////////////////////////////////////////////////////
// This function sets debug flag
///////////////////////////////////////////////////////////
//
// INPUT:
//      bool isDebugOn: flag value
//
// OUTPUT:
//
// REMARKS:
//
void Driver::SetDebugOn(bool isDebugOn)
{
    _isDebugOn = isDebugOn;
}

///////////////////////////////////////////////////////////
// This function sets enabled flag
///////////////////////////////////////////////////////////
//
// INPUT:
//      bool isDebugOn: flag value
//
// OUTPUT:
//
// REMARKS:
//
void Driver::SetEnabled(bool isEnabled)
{
    _isEnabled = isEnabled;
}
