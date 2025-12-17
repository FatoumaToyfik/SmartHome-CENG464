#ifndef DEVICE_FACTORY_H
#define DEVICE_FACTORY_H

#include <string>
#include "Device.h"

class DeviceFactory {
public:
    // type: L=Light, C=Camera, T=TV
    // brand: only used when type=='T' (S=Samsung, G=LG)
    static Device* createDevice(char type, char brand, const std::string& name);
};

#endif


