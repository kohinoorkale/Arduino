int led=12;
int gas=A2;
void setup() {
  
  pinMode(gas,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  int val=digitalRead(gas);
  Serial.print("analog read:");
  Serial.println("value");

  if(val<300){
    digitalWrite(led,LOW);

  }
  else{
    digitalWrite(led,HIGH);
  }
  delay(1000);

}
