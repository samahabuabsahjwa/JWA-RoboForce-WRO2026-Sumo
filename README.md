# JWA RoboForce – WRO 2026 Sumo Robot

Engineering documentation, Arduino code, robot design, testing, and strategies for the **JWA RoboForce WRO 2026 Sumo Robot**.

## Team

**School:** Jeddah World Academy  
**Team:** JWA RoboForce  
**Students:** Ghazl Bakhsh & Layan Baroom  
**Coach:** Samah AbuAbsah  

## Project Overview

Our project is an autonomous Sumo Robot designed to detect an opponent, search for it, attack and push it outside the ring, while detecting the edge of the ring to avoid falling.

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

When the opponent is detected in front of the robot, the robot moves forward at high speed to attack and push the opponent outside the ring.

### 2. Search & Maneuvering

The robot uses its opponent detection sensors to determine the direction of the opponent.

It turns right or left toward the detected opponent. When no opponent is detected, the robot continues rotating and searching.

### 3. Edge Avoidance

The **TCRT5000 edge sensors** detect the boundary of the Sumo ring.

When an edge is detected, avoiding a fall becomes the priority. The robot moves backward before returning to its search and attack strategy.

## Arduino Code

The complete Arduino program used by the robot is available directly in this repository:

**RoboSumo_code.ino**

The code includes:

- 5-second startup delay
- Opponent detection
- Search movement
- Right and left turning
- Direction control
- Speed control using PWM
- Attack and pushing strategy
- Edge detection and avoidance

## Engineering Design

The robot was designed, built, programmed, and tested through several stages:

1. Mechanical design
2. Electronic component arrangement
3. Sensor positioning
4. Arduino programming
5. Movement testing
6. Opponent detection testing
7. Edge avoidance testing
8. Pushing and speed testing

## 3D Engineering Design

The robot body and mechanical structure were designed using **3D CAD**.

The complete STEP design file is available here:

**[View / Download Robot 3D Design – STEP File](https://drive.google.com/drive/folders/1NF3Zi0hPWuYoLqsQZxb4kRwaoPk6AhV0?usp=drive_link)**

The design was developed and tested to fit the robot's motors, sensors, electronics, and Sumo structure.

## Testing & Improvements

During testing, we observed the robot's movement, sensor responses, attack behavior, and edge detection.

We adjusted the movement speed, turning behavior, sensor positions, and edge-avoidance response when needed, then repeated the tests to improve the robot's performance.

## Documentation

This repository documents the programming and engineering development of the **JWA RoboForce WRO 2026 Sumo Robot**.

It includes the actual Arduino program used by the robot and access to the complete 3D engineering design file.

Additional engineering documentation, robot images, testing evidence, and performance videos are included as part of the team's WRO 2026 documentation.
