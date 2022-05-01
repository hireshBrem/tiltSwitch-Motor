int speedPin = 3;
int d1Pin = 4;
int d2Pin = 2;
int motorSpeed=255;
int dt = 100;
int tiltPin = 7;
int tiltVal;

void setup() {
  Serial.begin(9600);
  pinMode(speedPin, OUTPUT);
  pinMode(d1Pin, OUTPUT);
  pinMode(d2Pin, OUTPUT);
  pinMode(tiltPin, INPUT);
  digitalWrite(tiltPin, HIGH);
}

void loop() {
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if(tiltVal == 0){
    digitalWrite(d1Pin, HIGH);
    digitalWrite(d2Pin, LOW);
    analogWrite(speedPin, motorSpeed);
  }
  if(tiltVal == 1){
    analogWrite(speedPin, 0);
  }
}
