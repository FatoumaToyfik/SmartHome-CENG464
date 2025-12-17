#include <iostream>
#include <vector>
#include <sstream>
#include "../include/DeviceFactory.h"

static std::string intToString(int x) {
    std::ostringstream oss;
    oss << x;
    return oss.str();
}

static std::string makeName(char type, int i) {
    return std::string(1, type) + "_" + intToString(i);
}

int main() {
    int n;
    char type;
    char brand = '-';

    std::cout << "How many devices? ";
    std::cin >> n;

    std::cout << "Type (L=Light, C=Camera, T=TV): ";
    std::cin >> type;

    if (type == 'T') {
        std::cout << "TV brand? (S=Samsung, G=LG): ";
        std::cin >> brand;
    }

    std::vector<Device*> devices;

    for (int i = 1; i <= n; i++) {
        std::string name = makeName(type, i);
        Device* d = DeviceFactory::createDevice(type, brand, name);

        if (!d) {
            std::cout << "Invalid type/brand!\n";
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

