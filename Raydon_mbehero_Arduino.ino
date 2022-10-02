// C++ code
int LEDState=0;
int LEDState2=0;
int LEDPin=13;
int buttonPin=2;
int LEDPin2=12;
int buttonPin2=4;
int buttonNew;
int buttonNew2;
int buttonOld=1;
int buttonOld2=1;
int dt=100;

void setup() {
  // setting up inputs and output pins:
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(LEDPin2, OUTPUT);
  pinMode(buttonPin2, INPUT);
  
}

void loop() {
  // Reading between the state of the button to determine LED State:
  buttonNew=digitalRead(buttonPin);
  buttonNew2=digitalRead(buttonPin2);
  if(buttonOld == 0 && buttonNew == 1) {
    if(LEDState==0){
      digitalWrite(LEDPin, HIGH);
      LEDState=1;
    }
    else{
      digitalWrite(LEDPin, LOW);
      LEDState=0;
    }
  }
  
buttonOld=buttonNew;
delay(dt);
  
  if(buttonOld2 == 0 && buttonNew2 == 1) {
    if(LEDState2==0){
      digitalWrite(LEDPin2, HIGH);
      LEDState2=1;
    }
    else{
      digitalWrite(LEDPin2, LOW);
      LEDState2=0;
    }
  }
  
  
buttonOld2=buttonNew2;
delay(dt);
}
