#include <iostream>
#include <vector>
#include <sstream>
#include "../include/DeviceFactory.h"

static std::string makeName(char type, int i) {
    std::ostringstream os;
    os << type << "_" << i;
    return os.str();
}

int main() {
    int n;
    char type;

    std::cout << "How many devices? ";
    std::cin >> n;

    std::cout << "Type (L=Light, C=Camera, T=TV): ";
    std::cin >> type;

    std::vector<Device*> devices;

    for (int i = 1; i <= n; i++) {
        std::string name = makeName(type, i);
        Device* d = DeviceFactory::createDevice(type, name);

        if (!d) {
            std::cout << "Invalid type!\n";
            break;
        }

        devices.push_back(d);
    }

    for (size_t i = 0; i < devices.size(); i++) {
        std::cout << devices[i]->getType() << " " << devices[i]->getName() << "\n";
    }

    for (size_t i = 0; i < devices.size(); i++) delete devices[i];
    return 0;
}

