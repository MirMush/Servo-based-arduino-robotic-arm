#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;

int potentiometer_1=A0;
int servoPin_1=8;

int potentiometer_2=A1;
int servoPin_2=9;

int potentiometer_3=A2;
int servoPin_3=7;

int val_1;
int val_2;
int val_3;




void setup() {
  pinMode(potentiometer_1,INPUT);
  pinMode(potentiometer_2,INPUT);
  pinMode(potentiometer_3,INPUT);
  servo1.attach(servoPin_1);
  servo2.attach(servoPin_2);
  servo3.attach(servoPin_3);
  

}

void loop() {
val_1= analogRead(potentiometer_1);
val_1= map(val_1,0,1023,0,180);

val_2= analogRead(potentiometer_2);
val_2= map(val_2,0,1023,0,180);

val_3= analogRead(potentiometer_3);
val_3= map(val_3,0,1023,0,180);

servo1.write(val_1);
servo2.write(val_2);
servo3.write(val_3);
delayMicroseconds(1000);


}
