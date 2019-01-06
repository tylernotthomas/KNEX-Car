#include <Servo.h>

Servo myservo;

int Motor = 11;
unsigned long startTime = 0;
unsigned long currentTime = 0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  pinMode(Motor, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//  startTime = millis();
//  analogWrite(Motor, 200);
//  while((currentTime - startTime) < 5000){
//    currentTime = millis();
//  }
//  while(1){
//    analogWrite(Motor, 30);
  myservo.write(50);
  delay(5000);
  myservo.write(102);
  delay(5000);
  myservo.write(154);
  delay(10000);
}
