#ifndef TV_H
#define TV_H

#include "Device.h"

class TV : public Device {
public:
    TV(const std::string& deviceName) : Device(deviceName) {}

    virtual std::string getType() const {
        return "TV";
    }
};

#endif

