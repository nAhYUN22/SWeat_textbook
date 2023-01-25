// 피에조 부저로 소리내기
int buzzerPin = 9;

void setup()
{
}

void loop()
{
 tone(buzzerPin, 262, 250);
 delay(1000);
 tone(buzzerPin, 294, 250);
 delay(1000);
 tone(buzzerPin, 330, 250);
 delay(1000);
 tone(buzzerPin, 349, 250);
 delay(1000);
 tone(buzzerPin, 392, 250);
 delay(1000);
 tone(buzzerPin, 440, 250);
 delay(1000);
 tone(buzzerPin, 494, 250);
 delay(1000);
 tone(buzzerPin, 523, 250);
 delay(1000);
}

//피에로 부저로 소리내기 - 개선된 코드
int buzzerPin = 9;
int frequencies[] = {262,294,330,349,392,440,494,523};

void setup()
{
}

void loop()
{
 for(int i=0; i<8; i++){
   tone(buzzerPin, frequencies[i], 250);
   delay(1000);
 }
}

//기울기 센서로 부저 소리 내기

int inputPin = 2;
int outputPin = 11;

void setup()
{
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
}

void loop()
{
 int inputState = digitalRead(inputPin);
  
  if(inputState == HIGH) {
     tone(outputPin, 294);
  }else{
     noTone(outputPin);
     }
}


//기울기 센서로 부저 소리 내기 - 개선된 코드
int inputPin = 11;
int outputPin = 13;
int melody[] = {262,294,330,349,392,440,494,523};

void setup(){
    pinMode(inputPin, INPUT);
    pinMode(outputPin, OUTPUT);
}

void loop(){
    int inputState = digitalRead(inputPin);

    if(inputState == HIGH){
        for(int i=0; i<8; i++){
            tone(outputPin, melody[i]);
            delay(50);
        }
    } else {
        noTone(outputPin);
    }
}


//푸쉬 버튼으로 부저 소리 내기
int inputPin = 11;
int outputPin = 13;

void setup(){
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
}

void loop(){
  int inputState = digitalRead(inputPin);

  if(inputState == HIGH){
    tone(outputPin, 294);
  } else {
    noTone(outputPin);
  }
}

//조도센서로 부저 소리 내기
int inputPin = 0;
int outputPin = 13;
int inputValue = 0;
int frequency = 0;
int duration = 0;

void setup(){
  pinMode(outputPin, OUTPUT);
}

void loop(){
  inputValue = analogRead(inputPin);
  frequency = map(inputValue, 0, 1023, 250, 550);
  duration = 500;
  tone(outputPin, frequency, duration);
  delay(500);
}


//가변 저항으로 부저 소리 내기
int outputPin = 13;
int inputPin = 0;
int inputValue = 0;

void setup() {
    pinMode(outputPin, OUTPUT);
}

void loop(){ 
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
