#include "../include/DeviceFactory.h"
#include "../include/Light.h"
#include "../include/Camera.h"
#include "../include/SamsungTV.h"
#include "../include/LGTV.h"

Device* DeviceFactory::createDevice(char type, char brand, const std::string& name) {
    if (type == 'L') return new Light(name);
    if (type == 'C') return new Camera(name);

    if (type == 'T') {
        if (brand == 'S') return new SamsungTV(name);
        if (brand == 'G') return new LGTV(name);
        return 0;
    }

    return 0;
}

