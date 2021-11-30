## Robotic Arm
A simple project where i learned how to control a 5 servo robotic arm with an arduino.

## Manual control
Using the serial monitor in the Arduino IDE you can send commands to control the arm.

### Options
* z: Initial arm position
* x: Resting arm position
* h: A sequence of moves to warm up the motors. I found that the accuracy of the motors depended on the temperature they operated.
* m: Change between a set of five move commands for all the servos and an arbitery number of commands.
* s [speed]: Change the speed. Higher value means slower (Default: 40).
* a/b/c/d/e [degrees]: When mode is set to true the move commands must be a complete set of five. All the servos will move simultaneously.
  ```sh
  a90 b70 c40 d30 e100 
  ```
  When the mode is set to false every move command will be executed in succession to the previous. 
* j/k/l: sequences of movements that perform specific tasks.

## Fixed movements
This program is a collection of fixed movements, calibrated with the manual control program, that perform a specific task. The task is to move a set of vials from point A to point B.
