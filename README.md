# This is a program for an arduino project which, as the name suggests, follows a human. The following components are used in the same:
1. Arduino Uno / Arduino Nano
2. A chasis along with two motors at the back and two wheels attached to it, and either two more free wheels or a castor/omnidirectional wheel according to the chasis
3. An L293D motor driver. Other motor drivers may work as well, but the code might need some changes accordingly
4. Three IR senors. Make sure it is not the Passive IR sensor
5. Breadboard and cables as required

#Instructions:
Assemble the chasis with the wheels and motor. Attatch the IR sensors equidistant with each other at an angle, with the middle one in the center. Make sure you know the angle between them. Attach the pins of the IR sensors to the second, third and fourth pins of Arduino. Next, attach the motors to the motor driver and connect the pins for first motor to the fifth and sixth pins of arduino and the second one to the seventh and eighth pins of the arduino.

#Callibration:
There are two things you need to callibrate, the ir sensors and the time taken for the bot to turn to the angle between the sensors. The sensors part depends on you, but for the time for half turn, you can calculate it bu using t = theta*R/(4*w*r) where w is the angular speed of the motor, R is the distance between wheels, r is radius of wheels and theta is the angle between IR sensors.

#Software:
The Arduino IDE is used here to compile and upload the code to the arduino.
