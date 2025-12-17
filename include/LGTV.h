#ifndef LGTV_H
#define LGTV_H

#include "Device.h"

class LGTV : public Device {
public:
    LGTV(const std::string& n) : Device(n) {}
    virtual std::string getType() const { return "LGTV"; }
};

#endif

