# JWA-RoboForce-WRO2026-Sumo
Engineering documentation, Arduino code, robot design, testing, and strategies for the JWA RoboForce WRO 2026 Sumo Robot.

## Team

**School:** Jeddah World Academy  
**Team:** JWA RoboForce  
**Students:** Ghazl Bakhsh & Layan Baroom  
**Coach:** Samah AbuAbsah  

## Project Overview

Our project is an autonomous Sumo Robot designed to detect an opponent,
search for it, attack and push it outside the ring, while detecting the
edge of the ring to avoid falling.

The robot uses an **Arduino Nano** as the main controller.

## Robot Components

- Arduino Nano
- Nano Shield
- 4 DC Geared Motors
- Motor Drivers
- High-Traction Wheels
- 5 E18 opponent detection sensors
- 2 TCRT5000 edge detection sensors
- 11.1V 2200mAh 50C LiPo Battery

## Programming & Strategy

The robot operates autonomously.

After startup, the program waits **5 seconds** before movement.

The programming strategy focuses on three main areas:

### 1. Speed & Pushing
When the opponent is detected in front of the robot, the robot moves
forward at high speed to attack and push the opponent.

### 2. Search & Maneuvering
The robot uses its opponent detection sensors to determine the direction
of the opponent. It turns right or left and continues searching when the
opponent is not detected.

### 3. Edge Avoidance
The TCRT5000 sensors detect the edge of the Sumo ring.
When an edge is detected, the robot moves backward and changes its
movement to avoid falling outside the ring.

## Arduino Code

The complete Arduino program used by the robot is available in this
repository:

**RoboSumo_code.ino**

The code includes:
- 5-second startup delay
- Opponent detection
- Search movement
- Direction control
- Speed control using PWM
- Attack and pushing strategy
- Edge detection and avoidance

## Engineering Design

The robot was designed and tested through several stages including:

1. Mechanical design
2. Electronic component arrangement
3. Sensor positioning
4. Arduino programming
5. Movement testing
6. Opponent detection testing
7. Edge avoidance testing
8. Pushing and speed testing

## Testing & Improvements

During testing, we observed the robot's movement and sensor responses.
We adjusted movement speed, turning behavior, sensor positions, and
edge-avoidance behavior when needed, then repeated the tests.

## Documentation

This repository documents the programming and engineering development
of the **JWA RoboForce WRO 2026 Sumo Robot**.
