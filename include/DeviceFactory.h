#ifndef DEVICE_FACTORY_H
#define DEVICE_FACTORY_H

#include <string>
#include "Device.h"

class DeviceFactory {
public:
    // type: 'L' Light, 'C' Camera, 'T' TV
    static Device* createDevice(char type, const std::string& name);
};

#endif

