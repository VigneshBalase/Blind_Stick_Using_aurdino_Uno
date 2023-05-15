# Blind_Stick_Using_aurdino_Uno
# Ultrasonic Sensor Distance Measurement

This code provides an example of using an ultrasonic sensor to measure distance and trigger actions based on the measured distance. The code is written in Arduino language and can be used with Arduino boards.

## Components Required
- Arduino board
- Ultrasonic sensor (HC-SR04)
- Buzzer
- Vibrator (e.g., motor or vibration module)

## Circuit Connections
- Connect the trigPin of the ultrasonic sensor to pin 9 of the Arduino board.
- Connect the echoPin of the ultrasonic sensor to pin 10 of the Arduino board.
- Connect the positive and negative terminals of the buzzer to pins 5 and GND respectively.
- Connect the positive and negative terminals of the vibrator to pins 6 and GND respectively.

## Code Explanation
1. The code starts by defining the trigPin and echoPin as constants and declaring variables to store the duration of the pulse, and the calculated distance in centimeters and inches.
2. In the `setup()` function, the serial communication is initialized and the pin modes for the trigPin, echoPin, buzzer, and vibrator are set.
3. The `loop()` function runs repeatedly.
4. The ultrasonic sensor is triggered by setting the trigPin to LOW, then after a short delay, it is set to HIGH for 10 microseconds and then set back to LOW.
5. The duration of the pulse received by the echoPin is measured using the `pulseIn()` function.
6. The distance is calculated using the duration and stored in the `distanceCm` and `distanceInch` variables.
7. The distance value is printed to the serial monitor.
8. If the measured distance is less than 25 centimeters, the buzzer and vibrator are turned on by setting their respective pins to HIGH.
9. If the measured distance is greater than or equal to 25 centimeters, the buzzer and vibrator are turned off by setting their respective pins to LOW.
10. The loop repeats after a short delay of 100 milliseconds.

## How to Use
1. Connect the circuit components as described in the "Circuit Connections" section.
2. Upload the code to your Arduino board.
3. Open the serial monitor at a baud rate of 9600 to view the distance measurements.
4. Observe the behavior of the buzzer and vibrator based on the measured distance.

Note: Make sure to adjust the distance threshold in the `if` condition (`distanceCm < 25`) to match your specific requirements.

Remember to take precautions while connecting and handling electronic components to prevent any damage or injury.
