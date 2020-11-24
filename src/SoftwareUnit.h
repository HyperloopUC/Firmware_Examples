#ifndef _STATUS_SOFTWARE_UNIT_H_
#define _STATUS_SOFTWARE_UNIT_H_

//Includes---------------------------------------------------------------------
#include "DeviceStatus.h"

template <class T> class SoftwareUnit{
    
    public:

    virtual void Initialize(SuStatus SuId);

    private:

    DeviceStatus Status;

};

#endif 