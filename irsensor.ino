#define irsensor 4
void setup(){
  Serial.begin(9600);
}
void loop(){
  int adishar=digitalRead(irsensor);
  if(adishar==LOW){
    Serial.println(" IR Not Detected");
  }
  else{
    Serial.println("Detected");
  }
}
