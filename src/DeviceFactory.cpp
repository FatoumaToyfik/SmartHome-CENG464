#include "../include/DeviceFactory.h"
#include "../include/Light.h"
#include "../include/Camera.h"
#include "../include/TV.h"


Device* DeviceFactory::createDevice(char type, const std::string& name) {
    switch (type) {
        case 'L': return new Light(name);
        case 'C': return new Camera(name);
        case 'T': return new TV(name);
        default:  return 0;
    }
}

