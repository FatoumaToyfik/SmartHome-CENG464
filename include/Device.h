#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device {
protected:
    std::string name;
    bool powerOn;

public:
    Device(const std::string& deviceName)
        : name(deviceName), powerOn(false) {}

    virtual ~Device() {}   // VERY IMPORTANT for Factory Method

    std::string getName() const {
        return name;
    }

    bool isPoweredOn() const {
        return powerOn;
    }

    virtual void turnOn() {
        powerOn = true;
    }

    virtual void turnOff() {
        powerOn = false;
    }

    // Factory Method requirement
    virtual std::string getType() const = 0;
};

#endif
