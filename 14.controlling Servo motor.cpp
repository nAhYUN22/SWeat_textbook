//서브모터를 특정 각도로 움직이기
#include<Servo.h>

Servo myServo;
int servoPin = 9;

void setup(){
  myServo.attach(servoPin);
}

void loop(){
  myServo.write(0);
  delay(1000);
  myServo.write(90);
  delay(1000);
  myServo.write(180);
  delay(1000);
  myServo.write(90);
  delay(1000);
}


//서브모터를 특정 각도로 움직이기 - 개선된 코드
#include<Servo.h>

Servo myServo;
int servoPin = 9;

void setup(){
  myServo.attach(servoPin);
}

void loop(){
  for(int angle = 0; angle < 180; angle += 1){
    myServo.write(angle);
    delay(10);
  }
  for(int angle = 180; angle > 0; angle -= 1){
    myServo.write(angle);
    delay(10);
  }
}


//푸쉬 버튼으로 서보모터 움직이기

#include<Servo.h>

Servo myServo;
int buttonPin = 6;
int servoPin = 11;
int angle = 0;
int buttonState = 0;

void setup(){
  pinMode(buttonPin, INPUT);
  myServo.attach(servoPin);
}

void loop(){
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH){
    for(angle = 0; angle <= 180; angle++){
      myServo.write(angle);
      delay(15);
    }
  }
}


//기울기 센서로 서보모터 움직이기

#include<Servo.h>

Servo myServo;
int tiltPin = 7;
int servoPin = 9;
int tiltState = 0;

void setup(){
  pinMode(tiltPin, INPUT);
  myServo.attach(servoPin);
}

void loop(){
  tiltState = digitalRead(tiltPin);

  if(tiltState == HIGH){
    myServo.write(45);
  } else {
    myServo.write(135);
  }
}


//조도 센서로 서보모터 움직이기

#include <Servo.h>
Servo myServo;
int servoPin = 9;
int cdsPin = 0;
int cdsValue = 0;
int angle = 0;
void setup() {
    myServo.attach(servoPin);
}
void loop() {
    cdsValue = analogRead (cdsPin);
    angle = map(cdsValue, 0, 1023, 0, 180);
    myServo.write(angle);
    delay (100);
}


//가변 저항으로 서보모터 움직이기

#include <Servo.h>

Servo myServo;
int servoPin = 9;
int potPin = 0;
int potValue = 0;
float angle = 0.0;

void setup() {
    myServo.attach(servoPin);
}

void loop() {
    potValue = analogRead(potPin);
    angle = potValue / 5.7;
    myServo.write(angle);
    delay(100);
}


//온도 센서로 서보모터 움직이기

#include<Servo.h>

Servo myServo;
int servoPin = 9;
int tempPin = 0;
int tempValue = 0;
float voltage = 0.0;
float celsiusTemp = 0.0;

void setup() {
    myServo.attach(servoPin);
}

void loop() {
    tempValue = analogRead (tempPin);
    voltage = tempValue * 5000.0 / 1024.0;
    celsiusTemp = (voltage - 500.0) / 10.0;
    if (celsiusTemp > 25){
        myServo .write(135);
    } else {
        myServo.write (45);
    }

    delay (1000);
}
