int tempPin = 0;
int ledPin = 13;
int tempValue = 0;
float voltage = 0.0;
float celsiusTemp = 0.0;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    tempValue = analogRead(tempPin);

    voltage = tempValue * 5000.0 / 1024.0l
    celsiusTemp = (voltage - 500) / 10.0;

    if (celsiusTemp > 25) {
        digitalWrite(ledPin, HIGH);
        delay(100);
    } else {
        digitalWrite(ledPin, LOW);
    }

}
