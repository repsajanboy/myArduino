const int buttonPin = 2;
const int buttonPin1 = 3;
const int ledPin1 = 11;
const int ledPin2 = 12;
const int ledPin3 = 13;
const int ledPin4 = 4;
const int ledPin5 = 5;
const int ledPin6 = 6;
int buttonState = 0;
int buttonState1 = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT); 
}
void sabay() {
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  delay(1000);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  delay(1000);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin5, HIGH);
  delay(1000);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin5, LOW);
  delay(1000);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin6, HIGH);
  delay(1000);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin6, LOW);
  delay(1000);
  }
void sabaylow() {
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin4, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(buttonPin1);
  buttonState = digitalRead(buttonPin);
if (buttonState1 && buttonState == HIGH) {
  sabay();
  } else {
   sabaylow();
  }
}
