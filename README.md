  Smart Home System – CENG 464

## Project Description
This project implements a Smart Home System in C++ using object-oriented design principles.
The focus of my contribution is the **Add Device** functionality implemented using the
**Factory Method design pattern**.

## My Responsibility
**Add Device – Factory Method Pattern**

I implemented dynamic device creation using the Factory Method pattern.
The system creates devices based on user input without exposing creation logic.

## Design Patterns Used
- Factory Method (primary)
- Inheritance (for TV brands)

## Supported Devices
- Light
- Camera
- TV
  - SamsungTV
  - LGTV

## How It Works
1. User enters how many devices to add
2. User selects device type:
   - L = Light
   - C = Camera
   - T = TV
3. If TV is selected, user chooses the brand:
   - S = Samsung
   - L = LG
4. Devices are created dynamically using `DeviceFactory`

## SOLID Principles
- **Single Responsibility**: Device creation handled only by DeviceFactory
- **Open/Closed**: New devices can be added without modifying existing code
- **Liskov Substitution**: SamsungTV and LGTV can replace TV objects safely

## Version Control
Git and GitHub were used throughout development.
Each step was committed separately to show progress.

## How to Run
- Open the project in **Dev-C++**
- Compile & Run (F11)
- Follow console instructions

## Output
See:
- `output_pattern_1.png`
- `output_pattern_2.png`
**
