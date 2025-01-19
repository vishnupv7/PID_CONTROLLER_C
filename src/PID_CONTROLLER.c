#include <iostream> // Required for input-output operations

// PID Controller parameters
double Kp = 0.6; // Proportional gain
double Ki = 0.4; // Integral gain
double Kd = 0.3; // Derivative gain

// PID control function to calculate the adjustment needed for a system
double pid_control(double setpoint, double measured_value) {
    static double prev_error = 0; // Stores the previous error value
    static double integral = 0;  // Accumulates the integral of errors
    double error = setpoint - measured_value; // Calculate the current error
    integral += error; // Update the integral term
    double derivative = error - prev_error; // Calculate the rate of error change
    // Calculate the PID output using the proportional, integral, and derivative terms
    double output = (Kp * error) + (Ki * integral) + (Kd * derivative);
    prev_error = error; // Store the current error for the next iteration
    return output; // Return the adjustment value
}

int main() {
    // Initialize the desired setpoint and current system state
    double setpoint = 100;// Desired motor speed
    double current_speed = 80;// Simulated initial sensor value

    // Simulate the PID controller over 10 iterations
    for (int i = 0; i < 10; i++) {
        double adjustment = pid_control(setpoint, current_speed); // Get the adjustment from the PID controller
        current_speed += adjustment; // Update the current speed based on the adjustment
        // Output the current iteration and system state
        std::cout << "Iteration " << i + 1 << ": Current Speed = " << current_speed << std::endl;
    }

    return 0; // End of the program
}
