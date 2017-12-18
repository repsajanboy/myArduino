const int buttonPin1 = 3;      
const int ledPin1 =  13;       
int buttonState1 = 0;   
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(buttonPin1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState1 = digitalRead(buttonPin1);
 if (buttonState1 == HIGH) {
    digitalWrite(ledPin1, HIGH);
    delay(1000);
    digitalWrite(ledPin1, LOW);
    delay(1000);
 } else {
    digitalWrite(ledPin1, HIGH);
  }
}
