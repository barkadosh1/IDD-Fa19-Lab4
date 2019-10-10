# Paper Puppets

*A lab report by Bar Kadosh* 

## In this Report

To submit your lab, clone [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab4). You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

After hooking up the vibration motor, I decided to use extra wires to hold the less sturdy vibration motor wires in place. I also used a 100 Ohm resistor in my setup. A video of the vibration motor working can be found below.

[Vibration Motor](https://youtu.be/RkOPZg6s4_g)

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

For the servo motor, the brown wire corresponds to ground, the red corresponds to power, and the orange corresponds to signal. We connect the signal/orange wire to digital pin 9, as it allows us to make use of PWM.

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

The servo's signal wire should be connected to the Arduino's digital pin 9 because digital pin 9 allows for PWM. Additionally, I defined pin 9 as the pin where our server will attach in my code, so I will connect to pin 9 to be consistent. A video of the servo moving with the unaltered "sweep" code can be found below.

[Servo Sweep](https://youtu.be/SJ22aR8_Fqc)

**b. What aspects of the Servo code control angle or speed?**

The original code was the following:

    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
  
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }

To control the angle it rotates through, I changed the values of "pos" in both loops by replacing 180 with a different number (in my case 90 to create a 90 degree angle range). The delay() line of code is what controls how fast it rotates, as each iteration through the loop changes the degree by 1. Therefore, making delay smaller will cause for faster rotations as there will be less of a delay between each degree and making delay larger will cause for slower rotation.

Additionally the first loop is for rotating to 180 (or 90 in my case), while the second loop is for rotating back to 0. To highlight this difference, I made my delay larger for the first loop to show that it goes slower and smaller for the second low to show that it rotates faster when returning to zero. The code with my altered values is:

    for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(45);                       // waits 15ms for the servo to reach the position
    }
  
    for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
    }

Interestingly, while experimenting with different angle values, I noticed that my servo could not rotate past 180. A video of my slowed servo with smaller rotation range can be found below.

[Altered Servo Sweep](https://youtu.be/W55Iher3VI0)

## Part C. Integrating input and output

**Include a photo/movie of your raw circuit in action.**

For the integration, I added a potentiometer into my circuit so that the analog value connected to the potentiometer would be measured. I then mapped the potentiometer value (0 to 1023) to be between 0 and 180 degrees, making it so that fully turning the potentiometer back and forth (between 0 and 1023) would allow for a full 180 degree servo rotation.

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
 
