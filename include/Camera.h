#ifndef CAMERA_H
#define CAMERA_H

#include "Device.h"

class Camera : public Device {
public:
    Camera(const std::string& deviceName) : Device(deviceName) {}

    virtual std::string getType() const {
        return "Camera";
    }
};

#endif

