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
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, LOW);
  digitalWrite(55, LOW);
  digitalWrite(56, LOW);
  digitalWrite(57, LOW);
  
}
void two() {
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(54, HIGH);
  digitalWrite(55, HIGH);
  digitalWrite(56, LOW);
  digitalWrite(57, HIGH);
}
void three(){
  digitalWrite(10, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, HIGH);
  digitalWrite(55, LOW);
  digitalWrite(56, LOW);
  digitalWrite(57, HIGH);
}
void ay() {
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, LOW);
  digitalWrite(55, LOW);
  digitalWrite(56, LOW);
  digitalWrite(57, LOW);
  
}
void el() {
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(54, HIGH);
  digitalWrite(55, HIGH);
  digitalWrite(56, HIGH);
  digitalWrite(57, LOW);
  
}
void way() {
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(54, HIGH);
  digitalWrite(55, LOW);
  digitalWrite(56, HIGH);
  digitalWrite(57, HIGH);
  
}
void low(){
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
}
void loop() {
  low();
  one();
  two();
  three();
  ay();
  el();
  way();

}

