//온도 센서로 온도 측정하기
int tempPin = 0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  int value = analogRead(tempPin);
  Serial.print("value: ");
  Serial.print(value);

  float millivolts = (value / 1024.0) * 5000.0;
  float celsius = (millivolts - 500.0) / 10.0;

  Serial.print(" celsius: ");
  Serial.println(celsius);
  delay(1000);
}


//온도 센서로 LED 깜박이기
int tempPin = 0;
int ledPin = 13;
int tempValue = 0;
float voltage = 0.0;
float celsiusTemp = 0.0;

void setup(){
  pinMode(ledPin, OUTPUT);
}

void loop(){
  tempValue = analogRead(tempPin);

  voltage = tempValue * 5000.0 / 1024.0;
  celsiusTemp = (voltage - 500) / 10.0;

  if(celsiusTemp > 25){
    digitalWrite(ledPin, HIGH);
    delay(100);
  } else {
    digitalWrite(ledPin, LOW);
  }
}


//온도 센서로 부저 소리 내기
int buzzerPin = 13;
int tempPin = 0;
int tempValue = 0;
float voltage = 0;
float celsiusTemp = 0;
int THRESHOLD = 25;

void setup(){
  pinMode(buzzerPin, OUTPUT);
}

void loop(){
  tempValue = analogRead(tempPin);

  voltage = tempValue * 5000.0 /  1024.0;
  celsiusTemp = (voltage-500) / 10.0;

  if(celsiusTemp > THRESHOLD){
    tone(buzzerPin, 294);
  } else {
    noTone(buzzerPin);
  }

  delay(1000);

}
