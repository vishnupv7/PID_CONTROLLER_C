# PID Controller Implementation in C

## Overview

This project demonstrates the implementation of a **PID Controller** using the C programming language. A PID (Proportional-Integral-Derivative) controller is widely used in control systems for maintaining desired setpoints by minimizing error over time.

## Objective

The objective of this project is to:
- Simulate a PID controller for regulating motor speed.
- Demonstrate the effectiveness of proportional, integral, and derivative terms in achieving precise control.
- Provide visual outputs and a comprehensive technical report.

---

## Folder Structure



---

## How It Works

1. **Error Calculation**: The difference between the setpoint and the current speed is calculated.
2. **PID Formula**:
   - **Proportional (P)**: Corrects based on the current error.
   - **Integral (I)**: Reduces cumulative error over time.
   - **Derivative (D)**: Predicts future error and minimizes oscillations.
3. **Control Output**: The calculated control signal adjusts the motor speed to match the setpoint.

---

## How to Run

1. **Clone the repository**:
   ```bash
   git clone https://github.com/vishnupv7/PID_CONTROLLER_C

Navigate to the project directory:
cd PID_CONTROLLER/src

Compile the C code:
gcc -o PID_CONTROLLER PID_CONTROLLER.c

Run the program:
./PID_CONTROLLER

Prerequisites
GCC compiler (or any compatible C compiler).
Basic knowledge of PID controllers.

Documentation
For detailed information on the project, refer to the technical report located in the docs/ folder:

Technical Report PID Controller Implementation in C.docx
