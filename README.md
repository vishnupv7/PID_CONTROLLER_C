# PID Controller Implementation in C

## Overview

This project demonstrates the implementation of a **PID Controller** using the C programming language. A PID (Proportional-Integral-Derivative) controller is a widely used control mechanism in industrial and engineering applications for maintaining a desired setpoint by minimizing errors in real time.

## Objective

The goal of this project is to regulate motor speed using a PID controller. The program takes a desired target speed (setpoint) and the current speed as inputs, then computes the control output to achieve the desired speed.

## Features

- Simulates a PID controller for speed regulation.
- Accepts dynamic inputs for setpoint and current speed.
- Handles error calculation and outputs the appropriate control signal.

## How It Works

1. The program calculates the error as the difference between the setpoint and the current speed.
2. It uses the three components of PID control:
   - **Proportional**: Corrects based on the magnitude of the error.
   - **Integral**: Addresses cumulative past errors to remove offset.
   - **Derivative**: Predicts and corrects based on the rate of error change.
3. The controller adjusts the output to minimize the error over iterations.

## Project Structure






## Results

Graphs showing speed vs. iterations for different test cases:

- **Test Case 1**: Set Point = 100, Initial Speed = 80
- **Test Case 2**: Set Point = 50, Initial Speed = 80
- **Test Case 3**: Set Point = 100, Initial Speed = 50
- **Test Case 4**: Set Point = 100, Initial Speed = 90

See the graphs in the `assets` folder for detailed visualizations.


Here's the corrected and properly formatted version of the section for your README file:

How to Run
Clone the repository:git clone https://github.com/vishnupv7/PID_CONTROLLER_C
Navigate to the project directory:cd PID_CONTROLLER
Compile the C code:gcc -o PID_CONTROLLER src/PID_CONTROLLER.c
Run the program:./PID_CONTROLLER


Prerequisites
GCC compiler (or any C compiler of your choice).
Basic understanding of PID controllers.
Author
Name: Vishnu PV
GitHub: vishnupv7
Email: pvvishnu444@gmail.com
