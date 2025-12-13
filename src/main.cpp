#include <iostream>
#include <vector>
#include "DeviceFactory.h"

int main() {
    std::vector<Device*> devices;

    devices.push_back(DeviceFactory::createDevice('L', "L_1"));
    devices.push_back(DeviceFactory::createDevice('C', "C_1"));
    devices.push_back(DeviceFactory::createDevice('T', "T_1"));

    for (size_t i = 0; i < devices.size(); i++) {
        if (devices[i]) {
            std::cout << devices[i]->getType() << " " << devices[i]->getName() << "\n";
        }
    }

    for (size_t i = 0; i < devices.size(); i++) delete devices[i];
    return 0;
}

