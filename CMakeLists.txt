cmake_minimum_required(VERSION 3.10)

project(SmartHome LANGUAGES CXX)

# Use C++11 (safe and supported everywhere)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include header files
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/DeviceFactory.cpp
)

# Create executable
add_executable(SmartHome ${SOURCES})
