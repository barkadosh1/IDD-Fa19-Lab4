# Paper Puppets

*A lab report by John Q. Student* 

## In this Report

To submit your lab, clone [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab4). You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

Hooked up vibration thing as supposed to, used extra wires to hold them in place, used 100 ohm resistor 

[Video to be added here]

**Link to a video of your virbation motor**

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

Signal is control -- connect to 9, brown is ground, red is power

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

Digital pin 9 -- PWM pin, and in the code we are defining it as pin 9 as the pin where the servo is attached

VIDEO HERE

**b. What aspects of the Servo code control angle or speed?**

changing 180 makes it bigger angle (or smaller)
changing delay makes it slower (or faster)

Before

  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  
  After
  
  void loop() {
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(45);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
}

Talk about both delays/angle values and why they are different, mention that it can't go over 180

VIDEO HERE

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**

VIDEO HERE

Sweep Code HERE

## Part D. Paper puppet

**a. Make a video of your proto puppet.**

VIDEO HERE

## Part E. Make it your own

**a. Make a video of your final design.**

EXPLANATION HERE

Made Origami Airplane.
Have photo sensor. changes in lighting will cause the motor to move, mimicking turbulence in the event of lightning storm 
VIDEO HERE

CODE HERE
 
