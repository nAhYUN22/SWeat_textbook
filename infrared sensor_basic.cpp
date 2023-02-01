// 적외선 센서 제어하기
int sensor = 8;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sensor, INPUT);
}

void loop() {
  val = digitalRead(sensor);
  if (val == HIGH) {
    Serial.println("detect!");
  }
  else {
    Serial.println("no detect!");
  }
}
