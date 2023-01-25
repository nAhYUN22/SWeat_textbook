int outputPin = 13;
int inputPin = 0;
int inputValue = 0;

void setup() {
    pinMode(outputPin, OUTPUT);
}

void loop() {
    inputValue = analogRead(inputPin);

    if (0 <= inputValue && inputValue <= 128) {
        tone(outputPin, 262);
    } else if (129 <= inputValue && inputValue <= 256) {
        tone(outputPin, 294);
    } else if (257 <= inputValue && inputValue <= 384) {
        tone(outputPin, 330);
    } else if (385 <= inputValue && inputValue <= 512) {
        tone(outputPin, 349);
    } else if (513 <= inputValue && inputValue <= 640) {
        tone(outputPin, 392);
    } else if (641 <= inputValue && inputValue <= 768) {
        tone(outputPin, 440);
    } else if (769 <= inputValue && inputValue <= 896) {
        tone(outputPin, 494);
    } else {
        tone(outputPin, 523);
    }
}
