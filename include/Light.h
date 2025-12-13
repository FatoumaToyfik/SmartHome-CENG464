#ifndef LIGHT_H
#define LIGHT_H

#include "Device.h"

class Light : public Device {
public:
    Light(const std::string& deviceName) : Device(deviceName) {}

    virtual std::string getType() const {
        return "Light";
    }
};

#endif

