//적외선 센서 활용(led 불키기)
int led = 9;
int sensor = 8;
int data;

void setup(){
    pinMode(8, INPUT);
    pinMode(9, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    data = digitalRead(sensor);
    Serial.println(data);
    if(data == 0){
        digitalWrite(led, HIGH);
    } else {
        digitalWrite(led, LOW);
    }
}
