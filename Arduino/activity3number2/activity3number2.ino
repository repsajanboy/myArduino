const int buttonPin = 2;
const int buttonPin = 3;
const int ledPin = 11;
const int ledPin = 12;
const int ledPin = 13;
const int ledPin = 4;
const int ledPin = 5;
const int ledPin = 6;
int buttonState = 0;
void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(54, OUTPUT);
  pinMode(55, OUTPUT);
  pinMode(56, OUTPUT);
  pinMode(57, OUTPUT);
  pinMode(58, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(54, HIGH);
  delay(1000);
  digitalWrite(55, HIGH);
  delay(1000);
  digitalWrite(56, HIGH);
  delay(1000);
  digitalWrite(57, HIGH);
  delay(1000);
  digitalWrite(58, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(54, LOW);
  digitalWrite(55, LOW);
  digitalWrite(56, LOW);
  digitalWrite(57, LOW);
  digitalWrite(58, LOW);
  delay(1000);
}
