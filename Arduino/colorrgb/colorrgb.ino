void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
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
  digitalWrite(5, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(12, HIGH);
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(6, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(54, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(55, HIGH);
  delay(1000);
  digitalWrite(9, HIGH);
  digitalWrite(56, HIGH);
  delay(1000);
  digitalWrite(57, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
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
