void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(54, OUTPUT);
  pinMode(55, OUTPUT);
  pinMode(56, OUTPUT);
  pinMode(57, OUTPUT);
  pinMode(58, OUTPUT);
}
void one() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  //9
  digitalWrite(57, HIGH);
  digitalWrite(56, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(55, LOW);
  digitalWrite(54, LOW);
  delay(1000);
  //8
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, HIGH);
  digitalWrite(55, HIGH);
  digitalWrite(56, HIGH);
  digitalWrite(57, HIGH);
  delay(1000);
  //7
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, LOW);
  digitalWrite(55, LOW);
  digitalWrite(56, LOW);
  digitalWrite(57, LOW);
  delay(1000);
  //6
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, HIGH);
  digitalWrite(55, HIGH);
  digitalWrite(56, LOW);
  digitalWrite(57, HIGH);
  delay(1000);
  //5
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(54, HIGH);
  digitalWrite(55, LOW);
  digitalWrite(56, HIGH);
  digitalWrite(57, HIGH);
  delay(1000);
  //4
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, LOW);
  digitalWrite(55, LOW);
  digitalWrite(56, HIGH);
  digitalWrite(57, HIGH);
  delay(1000);
  //3
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, HIGH);
  digitalWrite(55, LOW);
  digitalWrite(56, LOW);
  digitalWrite(57, HIGH);
  delay(1000);
  //2
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(54, HIGH);
  digitalWrite(55, HIGH);
  digitalWrite(56, LOW);
  digitalWrite(57, HIGH);
  delay(1000);
  //1
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, LOW);
  digitalWrite(55, LOW);
  digitalWrite(56, LOW);
  digitalWrite(57, LOW);
  delay(1000);
  //0
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, HIGH);
  digitalWrite(55, HIGH);
  digitalWrite(56, HIGH);
  digitalWrite(57, LOW);
  delay(1000);
}
void loop() {
  one();
}

