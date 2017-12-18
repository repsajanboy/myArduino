#include<NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
const int ledPin1 = 8;

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledPin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);
  unsigned int uS=sonar.ping();
  Serial.print("Ping:");
  Serial.print(uS/US_ROUNDTRIP_CM);
  Serial.println("cm");
  if(sonar.ping_cm() < 20){
    digitalWrite(ledPin1, HIGH);
    delay(10);
    digitalWrite(ledPin1, LOW);
    delay(10);
  } else 
    digitalWrite(ledPin1, HIGH);
    delay(500);
    digitalWrite(ledPin1, LOW);
    delay(500);
}
