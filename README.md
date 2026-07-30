# Arduino Starter Codes & Sensor Guide

Hey there! Welcome to my collection of basic Arduino codes and sensor integration examples. I put this repository together as a clean, practical reference for anyone starting out with microcontrollers, hardware interfacing, or basic electronics projects.

Instead of hunting down working examples or digging through messy forums every time you hook up a new sensor, you can use these simple, test-driven sketches to get your hardware up and running quickly.

---

## 📌 What's in Here?

I’ve broken down the code by category to keep things easy to find:

* **Basic I/O & Logic:** Simple LED control, PWM dimming, pushbuttons, and relays.
* **Sensors:** Working code for ultrasonic distance sensors (HC-SR04), motion (PIR), light (LDR), temperature/humidity, and gas sensors.
* **Actuators & Motors:** Basic setups for controlling servos, DC motors, and stepper drivers.
* **Displays & Output:** Simple implementations for serial output, I2C LCD screens, and status indicators.

---

## 🚀 How to Use These Files

1. **Clone or Download:** Grab the repo or just copy the code you need.
   ```bash
   git clone [https://github.com/kohinoorkale/your-repo-name.git](https://github.com/kohinoorkale/your-repo-name.git)

*	1.	Open in Arduino IDE: Load the relevant .ino file.
*	2.	Wire it Up: Check the pin numbers listed in the comments at the top of each sketch before powering on your board.
*	3.	Upload: Pick your board and port, hit upload, and check the Serial Monitor for output.

## Notes & Tips
1. Every sketch is well-commented to explain why the code is written a certain way, not just what it does.
2. Make sure you install any required libraries (like DHT or LiquidCrystal_I2C) via the Arduino Library Manager before compiling.
