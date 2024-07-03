#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int accPin1 = 3;
int accPin2 = 5;
int accPin3 = 6;
int accPin4 = 9;
int accPin5 = 10;
int accPin6 = 11; 

int led1 = 7;
int led2 = 8;
int led3 = 12;

int pot1 = 5;
int pot2 = 4;
int pot3 = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);// set up serial communication
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
//comment / uncomment the below statements based on board configuration (jumpers)
//pinMode(accPin1, INPUT_PULLUP);
pinMode(accPin1, OUTPUT);
//pinMode(accPin2, INPUT_PULLUP);
pinMode(accPin2, OUTPUT);
//pinMode(accPin3, INPUT_PULLUP);
pinMode(accPin3, OUTPUT);
//pinMode(accPin4, INPUT_PULLUP);
pinMode(accPin4, OUTPUT);
//pinMode(accPin5, INPUT_PULLUP);
pinMode(accPin5, OUTPUT);
//pinMode(accPin6, INPUT_PULLUP);
pinMode(accPin6, OUTPUT);
///// uncomment the lines below for each pin that is acting as a servo
servo1.attach(accPin1);
servo2.attach(accPin2);
servo3.attach(accPin3);
servo4.attach(accPin4);
servo5.attach(accPin5);
servo6.attach(accPin6);


}

void loop() {
  // put your main code here, to run repeatedly:
//testLED();
//testButton();
testServo();
}


void testLED(){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  delay(1000);
}

void testButton(){          // make sure jumpers are properly placed, and setup code is reflects hardware configuration
  if(digitalRead(accPin1) == 0){
  Serial.println("Pushed Button 1");
}

if(digitalRead(accPin2) == 0){
  Serial.println("Pushed Button 2");
}

if(digitalRead(accPin3) == 0){
  Serial.println("Pushed Button 3");
}

if(digitalRead(accPin4) == 0){
  Serial.println("Pushed Button 4");
}

if(digitalRead(accPin5) == 0){
  Serial.println("Pushed Button 5");
}

if(digitalRead(accPin6) == 0){
  Serial.println("Pushed Button 6");
}
}

void testServo(){
for(int i = 0; i <=180; i++){
servo1.write(i); 
servo2.write(i);
servo3.write(i);
servo4.write(i);
servo5.write(i);
servo6.write(i); 
delay(20);
}

for(int i = 180; i >=0; i--){
servo1.write(i); 
servo2.write(i);
servo3.write(i);
servo4.write(i);
servo5.write(i);
servo6.write(i); 
delay(20);  
}
}

