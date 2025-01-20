# PID Controller Implementation in C

## Overview

This project demonstrates the implementation of a **PID Controller** using the C programming language. A PID (Proportional-Integral-Derivative) controller is widely used in control systems for maintaining desired setpoints by minimizing error over time.

---

## Objective

The objectives of this project are:
- To simulate a PID controller for regulating motor speed.
- To demonstrate the effectiveness of proportional, integral, and derivative terms in achieving precise control.
- To provide example test cases and results for better understanding.

---

## Folder Structure

PID_CONTROLLER/ | ├── docs/ # Documentation files │ ├── Technical Report PID Controller Implementation in C.docx # Detailed technical report │ ├── output/ # Output files (graphs, visual results) │ ├── test1.png # Graph for Test Case 1 │ ├── test2.png # Graph for Test Case 2 │ ├── test3.png # Graph for Test Case 3 │ ├── test4.png # Graph for Test Case 4 │ ├── src/ # Source code │ ├── PID_CONTROLLER.c # C code implementation │ ├── PID_CONTROLLER.sln # Visual Studio solution file │ ├── README.md # Project overview and instructions (this file)

---

## Features

- Simulates a PID controller for motor speed regulation.
- Accepts dynamic inputs for setpoint and current speed.
- Handles error calculation and outputs the appropriate control signal.
- Visualizes results using graphs.
- Provides parameter tuning guidelines for `Kp`, `Ki`, and `Kd`.

---

## How It Works

1. **Error Calculation**: The difference between the setpoint and the current speed is calculated.
2. **PID Formula**:
   - **Proportional (P)**: Corrects based on the current error.
   - **Integral (I)**: Reduces cumulative error over time.
   - **Derivative (D)**: Predicts future error and minimizes oscillations.
3. **Control Output**: The calculated control signal adjusts the motor speed to match the setpoint.

---

## How to Build and Run the Project

### Dependencies
Ensure the following prerequisites are installed:
- **GCC compiler** (or any C compiler of your choice).
- **Visual Studio** (for `.sln` file compatibility, optional).

### Steps to Build and Run

1. **Clone the repository**:
   ```bash
   git clone https://github.com/vishnupv7/PID_CONTROLLER_C
Navigate to the project directory:

cd PID_CONTROLLER/src

Compile the C code:

gcc -o PID_CONTROLLER PID_CONTROLLER.c


Run the program:

./PID_CONTROLLER

Results and Examples
Test Cases
The following test cases were executed to evaluate the PID controller:

Test Case	Set Point	Initial Speed	Observation
1	100	80	Speed increased to 100 over iterations.
2	50	80	Speed decreased to 50 over iterations.
3	100	50	Speed increased to 100 over iterations.
4	100	90	Speed fine-tuned to 100 over iterations.

Parameter Tuning
To achieve optimal performance, the Kp, Ki, and Kd parameters of the PID controller can be tuned. Follow these guidelines:

Proportional Gain (Kp):
Start with a small value and increase until the system responds quickly to setpoint changes without excessive overshoot.
Integral Gain (Ki):
Adjust to minimize steady-state error. Be cautious as high values may lead to oscillations.
Derivative Gain (Kd):
Tune to reduce overshoot and smoothen the response. Start with small values to avoid instability.


// Example snippet to modify PID parameters
Kp = 0.6;
Ki = 0.2;
Kd = 0.1;
Documentation
For more detailed information, refer to the technical report available in the docs/ folder:

Technical Report PID Controller Implementation in C.docx

Author

Name: Vishnu PV

GitHub: vishnupv7

Email: pvvishnu444@gmail.com
