#define irsensor 8
int relayPin=7;
void setup() {
  pinMode(relayPin,OUTPUT);
  digitalWrite(relayPin,LOW);

}

void loop() {
  int ir=digitalRead(irsensor);
  if(ir==LOW){
    Serial.print("not ir detected");
    digitalWrite(relayPin,LOW);
  }
  else{
    Serial.print("detected");
    digitalWrite(relayPin,HIGH);
  }
  
}
