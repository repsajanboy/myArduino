int led=7;
int ldr=0;
int value=0;


void setup(){
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  
  value=analogRead(ldr);
  Serial.println(value);
  delay(200);
  
 if (value > 500){
    digitalWrite(led, HIGH);
    delay(20);
  } else {
    digitalWrite(led, LOW);    
  }
}


