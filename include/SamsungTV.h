#ifndef SAMSUNGTV_H
#define SAMSUNGTV_H

#include "Device.h"

class SamsungTV : public Device {
public:
    SamsungTV(const std::string& n) : Device(n) {}
    virtual std::string getType() const { return "SamsungTV"; }
};

#endif

