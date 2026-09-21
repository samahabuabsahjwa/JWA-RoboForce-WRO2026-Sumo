# 🤖 JWA RoboForce – WRO 2026 Sumo Robot

**Jeddah World Academy**  
**WRO 2026 – Sumo Robot**  
**Team No. 5902**

---

## 👥 Team | الفريق

**Team Name:** JWA RoboForce  
**School:** Jeddah World Academy  
**Students:** Ghazl Bakhsh & Layan Baroom  
**Coach:** Samah AbuAbsah  

![JWA RoboForce Team](JWA-RoboForce-Team.png)

### Ghazl Bakhsh

Ghazl is a Grade 11 student at Jeddah World Academy. She enjoys challenges and trying different ideas in robotics. Her main role was developing the Sumo strategies, including searching for the opponent, choosing the attack method, and avoiding the ring edge. She worked with Layan, with their coach’s guidance, on building, programming, testing, and improving the robot after each trial.

### Layan Baroom

Layan is a Grade 11 student at Jeddah World Academy. Her hobbies include drawing, writing poetry and stories in English, and photography. She enjoys design and working on details. Her role included helping design the robot, arranging its components to suit the movement and sensors, and working with Ghazl and their coach on building, programming, testing, and improving the robot.

### Coach

**Samah AbuAbsah**

Computer and STEAM teacher and robotics coach at Jeddah World Academy, with experience in programming, robotics, and applied engineering education.

She guided the team through the engineering design, robot building, programming, testing, and performance improvement stages.

![Team with Coach and Final Robot](Team-with-Coach-and-Final-Robot.jpeg)

---

## 🎯 Project Overview

JWA RoboForce designed and developed an **autonomous Sumo Robot** for the WRO 2026 Sumo Robot Competition.

Our engineering goal was to create a robot that combines:

- Strong pushing power
- Fast response
- Stable movement
- Opponent detection
- Edge detection
- Autonomous operation
- Effective search and attack strategies

The robot was developed through repeated **design, building, programming, testing, and improvement**.

---

## 📏 Robot Specifications

The robot was designed while following the competition requirements and WRO Sumo guidelines used by the team.

| Specification | Details |
|---|---|
| Robot Dimensions | 20 × 20 cm |
| Maximum Allowed Weight | 2.5 kg |
| Control | Fully Autonomous |
| Controller | Arduino Nano |
| Movement | 4 DC Geared Motors |
| Motor Specification | 12V – 200 RPM |
| Edge Sensors | 2 × TCRT5000 |
| Opponent Sensors | 5 × E18-D80NK |
| Battery | LiPo 3S – 11.1V – 2200mAh – 50C |
| Programming | Arduino IDE / C++ |
| Start System | Physical Start Button |
| Start Delay | 5 Seconds |
| Attack Speed | PWM 255 |
| Main Strategy | Search, Detect, Attack, Push & Edge Avoidance |

The engineering design, programming, sensor placement, and competition strategy were developed while considering the competition requirements, including robot dimensions, weight, autonomous operation, and the required 5-second delay after activation.

---

## ⚙️ Main Components

The robot combines the controller, motor system, sensors, power system, and mechanical structure into one autonomous system.

![Robot Main Components](Robot-Main-Components.png)

### Main Electronic & Mechanical Components

- Arduino Nano
- Nano Terminal Shield
- Motor Drivers
- 4 DC Geared Motors
- High-traction wheels
- 5 E18-D80NK opponent sensors
- 2 TCRT5000 edge sensors
- LiPo 3S 11.1V 2200mAh 50C battery

---

## 🔌 Electronics & Wiring

The electronic components were arranged inside the chassis to keep the system organized and accessible.

The wiring and Arduino connections were **covered and secured inside the robot** to protect them during Sumo rounds and reduce unwanted movement during attacking, pushing, and rapid movement.

![Robot Internal Components](Robot-Internal-Components.jpeg)

---

## 👁️ Sensor System

The robot uses two sensor systems for **opponent detection** and **edge avoidance**.

### TCRT5000 – Edge Detection

Two **TCRT5000** sensors are positioned near the bottom of the robot to detect the white boundary of the Sumo ring.

During testing:

- **Black ring surface = HIGH / 1**
- **White edge = LOW / 0**

When a white edge is detected, the robot immediately performs its edge-avoidance action before returning to the search strategy.

### E18-D80NK – Opponent Detection

Five **E18-D80NK infrared proximity sensors** are used to detect the opponent from the front, right, and left directions.

During testing:

- **No opponent detected = HIGH / 1**
- **Opponent detected = LOW / 0**

The sensor arrangement allows the robot to determine the opponent’s direction and react by turning toward it or attacking.

![Robot Front Wedge and Sensors](Robot-Front-Wedge-and-Sensors.jpg)

---

## 💻 Arduino Programming

The robot was programmed using **Arduino IDE / C++**.

The complete program is available directly in this repository:

### [`RoboSumo_code.ino`](RoboSumo_code.ino)

The program manages:

- Physical start button
- 5-second start delay
- Motor direction
- PWM speed control
- Opponent detection
- Multi-directional searching
- Front attack
- Continuous pushing
- Right and left turning
- Edge detection
- Edge avoidance
- Return to search behavior

---

## 🧠 Programming & Sumo Strategy

Our Sumo strategy was developed and improved through repeated testing inside the ring.

![Robot Programming and Attack Strategy](Robot-Programming-and-Attack-Strategy.png)

### 1. Start & 5-Second Delay

The robot is activated using a physical start button.

**Start Button → Wait 5 Seconds → Autonomous Operation**

After activation, the program waits for **5 seconds** before beginning autonomous movement.

### 2. Search for Opponent

When no opponent is detected, the robot rotates and searches around the ring.

The search movement uses a controlled motor speed so the sensors can continuously scan for the opponent.

### 3. Opponent Detection

When an opponent is detected:

- **Front Detection → Direct Attack**
- **Right Detection → Turn Right**
- **Left Detection → Turn Left**

The robot changes direction according to the location detected by the sensors.

### 4. Attack & Continuous Push

When the front sensor detects the opponent, the robot moves directly forward using:

**PWM = 255**

This provides the maximum programmed attack speed.

The robot continues pushing while the opponent remains detected.

### 5. Edge Avoidance – Highest Priority

Edge detection has priority over the attack strategy.

When either TCRT5000 sensor detects the white boundary:

**White Edge → Move Backward → Move Away from Edge → Resume Search**

This helps prevent the robot from leaving the Sumo ring.

### Main Decision Flow

**START → 5-SECOND WAIT → READ SENSORS → CHECK EDGE → SEARCH → DETECT OPPONENT → TURN / ATTACK → PUSH → SEARCH AGAIN**

---

## 🏎️ Competition Strategy

Our competition strategy focuses on three main areas.

### Speed & Pushing

When the opponent is detected in front of the robot, maximum programmed attack power is used to increase pushing performance.

### Search & Maneuvering

If the opponent is not directly in front of the robot, the robot searches the ring and uses the right and left sensors to determine the direction of the opponent.

### Edge Avoidance

The TCRT5000 sensors continuously monitor the ring boundary.

When an edge is detected, the robot interrupts its current action, moves away from the boundary, and then resumes searching.

---

## 🛠️ Engineering Design

The robot chassis was designed using **Fusion 360** before final assembly.

The digital model helped us determine:

- Chassis shape
- Motor positions
- Wheel positions
- Sensor locations
- Electronic component placement
- Front wedge design
- Internal component arrangement

### Design Considerations

During the engineering design process, we considered:

- Robot dimensions of **20 × 20 cm**
- Maximum competition weight of **2.5 kg**
- Balanced placement of motors and wheels
- Stable movement and pushing
- Clear fields of view for the opponent sensors
- Suitable placement of edge sensors
- A low front wedge to improve pushing
- Protection of the Arduino and wiring
- Accessibility for maintenance and modifications

The digital design was compared with the physical robot during assembly and development.

---

## 📐 CAD Design

The engineering model was created using **Fusion 360**.

Four CAD views are included in this repository.

### Front Left View

![CAD Front Left View](CAD-Front-Left-View.jpg)

### Front Right View

![CAD Front Right View](CAD-Front-Right-View.jpg)

### Rear View

![CAD Rear View](CAD-Rear-View.jpg)

### Side View

![CAD Side View](CAD-Side-View.jpg)

---

## 🧩 Complete STEP Design File

The complete Fusion 360 engineering model was saved in **STEP format**.

The STEP file was used to review the chassis structure, motors, wheels, controller, and sensor positions before and during assembly.

The complete STEP file is too large to upload directly to this GitHub repository.

It is therefore available through Google Drive:

### [🔗 View / Download Robot STEP Design File](https://drive.google.com/drive/folders/1NF3Zi0hPWuYoLqsQZxb4kRwaoPk6AhV0?usp=drive_link)

The CAD images above provide additional visual documentation of the engineering design.

---

## 🖨️ Building & 3D Printing

During the building stage, the mechanical and electronic components were installed gradually.

The team:

- Assembled the chassis
- Installed the motors and wheels
- Installed the controller
- Installed the motor drivers
- Installed the sensors
- Checked component spacing
- Checked wiring
- Tested movement
- Adjusted parts when required

3D printing was also used for selected robot body parts.

The 3D printing process is documented in our video section below.

---

## 🇸🇦 Heritage-Inspired Design

For WRO 2026, we developed an exterior design inspired by **Saudi heritage**.

The final design gives the robot the appearance of a heritage-style vintage pickup while keeping the engineering structure, movement system, and sensors functional.

![Robot Heritage Design](Robot-Heritage-Design.jpeg)

### Heritage Design Panels

Before printing, the exterior panels were designed according to the actual dimensions of the robot.

The design included:

- Side Panel
- Rear Panel
- Front Panel
- Windshield Panel
- Top Panel

The dimensions and positions of the pieces were checked before printing and installation.

The final design uses visual elements inspired by Saudi heritage, including traditional patterns and heritage-inspired details.

![Robot Heritage Design Panels](Robot-Heritage-Design-Panels.png)

---

## 🧪 Testing & Improvement

Testing was an important part of our engineering process.

We tested:

- Motor movement
- Motor speed
- Search behavior
- Front opponent detection
- Right and left opponent detection
- Attack
- Continuous pushing
- Edge detection
- Fall prevention
- Return to search
- Sensor positioning
- Robot stability

After each test, we observed the robot’s behavior and made changes when needed.

Adjustments were made to the programming, sensor positions, movement, and physical structure until the robot reached its final configuration.

---

## 🤖 Final Robot

The following images show the completed engineering structure.

### Final Front View

![Robot Final Front View](Robot-Final-Front-View.jpeg)

### Chassis Side View

![Robot Chassis Side View](Robot-Chassis-Side-View.jpg)

### Electronics Top View

![Robot Electronics Top View](Robot-Electronics-Top-View.jpg)

---

## 🎥 Video Documentation

The team created a set of videos documenting the **design, development, testing, and final performance** of the JWA RoboForce Sumo Robot.

The videos demonstrate the technical performance of the robot as well as its final heritage-inspired design.

![Video Documentation](Video-Documentation.jpg.png)

### ▶️ Full Playlist

The complete playlist contains **7 videos** documenting the robot.

### [▶️ JWA RoboForce – WRO 2026 Sumo Robot | Full Playlist](https://youtube.com/playlist?list=PLaqB6dWrmZgQ)

---

### 1. JWA RoboForce WRO 2026 Sumo Robot Round

The main competition video demonstrates the robot's autonomous performance and Sumo strategy.

[▶️ Watch Sumo Robot Round](https://youtu.be/V3TKZraFOD4)

---

### 2. JWA RoboForce Heritage Robot 360° View

A 360° view of the completed robot showing its final exterior design inspired by Saudi heritage.

[▶️ Watch Heritage Robot 360° View](https://youtu.be/fAYnZk6bUvM)

---

### 3. 3D Printing the Robot Body

Documents part of the 3D printing process used during robot development.

[▶️ Watch 3D Printing the Robot Body](https://youtu.be/2AUK15_T78U)

---

### 4. Sumo Robot 360° View

Shows the Sumo robot from different sides and documents its physical structure.

[▶️ Watch Sumo Robot 360° View](https://youtu.be/qLLj00ID7Eg)

---

### 5. 5-Second Start, Enemy Detection & Attack

Demonstrates the physical start button, required 5-second delay, opponent detection, and attack strategy.

[▶️ Watch 5-Second Start, Enemy Detection & Attack](https://youtu.be/Yr910-EBNpw)

---

### 6. Multi-Directional Enemy Detection

Demonstrates how the robot detects the opponent from different directions and changes its movement accordingly.

[▶️ Watch Multi-Directional Enemy Detection](https://youtu.be/izRPt1SDrLM)

---

### 7. Edge Avoidance, Return & Enemy Search

Demonstrates edge detection, fall prevention, movement away from the boundary, and returning to search for the opponent.

[▶️ Watch Edge Avoidance, Return & Enemy Search](https://youtu.be/8yNX0cuLgnM)

---

## 📂 Repository Contents

This repository contains the main engineering and technical documentation for the **JWA RoboForce WRO 2026 Sumo Robot**.

### Programming

- `RoboSumo_code.ino`

### CAD Design

- `CAD-Front-Left-View.jpg`
- `CAD-Front-Right-View.jpg`
- `CAD-Rear-View.jpg`
- `CAD-Side-View.jpg`

### Robot Documentation

- `Robot-Chassis-Side-View.jpg`
- `Robot-Electronics-Top-View.jpg`
- `Robot-Final-Front-View.jpeg`
- `Robot-Front-Wedge-and-Sensors.jpg`
- `Robot-Internal-Components.jpeg`

### Components & Strategy

- `Robot-Main-Components.png`
- `Robot-Programming-and-Attack-Strategy.png`

### Heritage Design

- `Robot-Heritage-Design.jpeg`
- `Robot-Heritage-Design-Panels.png`

### Video Documentation

- `Video-Documentation.jpg.png`

### Team Documentation

- `JWA-RoboForce-Team.png`
- `Team-with-Coach-and-Final-Robot.jpeg`

### External Engineering File

The complete **Fusion 360 STEP design file** is available through the Google Drive link provided in the **Complete STEP Design File** section.

---

## 🔄 Engineering Process

Our development process followed an iterative engineering approach:

### **Design → Build → Program → Test → Observe → Improve → Test Again**

Throughout the project, we tested different solutions, observed the robot’s behavior, modified the design and programming, and repeated the tests until we reached the final robot.

---

## 🏁 Final Result

The final JWA RoboForce Sumo Robot combines:

- Autonomous Arduino control
- 5-second start delay
- Multi-directional opponent detection
- Edge detection and fall prevention
- High-speed attack
- Continuous pushing
- Search and maneuvering strategies
- Fusion 360 engineering design
- 3D printed components
- Saudi heritage-inspired exterior design
- Engineering and video documentation

This repository documents the complete development process of **JWA RoboForce** for the **WRO 2026 Sumo Robot Competition**.

---

# 🤖 JWA RoboForce

**Jeddah World Academy**  
**WRO 2026 – Sumo Robot**  
**Team No. 5902**

**Students:** Ghazl Bakhsh & Layan Baroom  
**Coach:** Samah AbuAbsah
