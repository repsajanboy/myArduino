int led=1;
int ldr=0;
int value=0;


void setup(){
  pinMode(led,OUTPUT);
}

void loop(){
  
  value=analogRead(ldr);
  digitalWrite(led,HIGH);
  delay(value);
  digitalWrite(led,LOW);
  delay(value);
}

