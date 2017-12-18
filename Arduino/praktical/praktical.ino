const int buttonPin = 2;
const int ledPin1 = 4;
const int ledPin2 = 5;
const int ledPin3 = 6;
const int ledPin4 = 11;
const int ledPin5 = 12;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(buttonPin, INPUT);
  

}
void button1() {
  digitalWrite(ledPin4, HIGH);
  delay(1000);
  digitalWrite(ledPin4, LOW);
  delay(1000);
  digitalWrite(ledPin5, HIGH);
  delay(1000);
  digitalWrite(ledPin5, LOW);
  delay(1000);
  
}
void low() {
  digitalWrite(ledPin3,HIGH);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(1000);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  delay(1000);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH){
    button1();
    digitalWrite(ledPin3, LOW);
    delay(1000);
  } else {
    low();
  }

}
