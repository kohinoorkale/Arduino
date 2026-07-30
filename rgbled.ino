int redpin=5;
int greenpin=6;
int bluepin=7;
void setup() {
  
  pinMode(redpin,OUTPUT);
  pinMode(greenpin,OUTPUT);
  pinMode(bluepin,OUTPUT);
  

}

void loop() {
  
  setColor(255,0,0);
  delay(50);
  setColor(0,255,0);
  delay(500);
  setColor(0,0,255);
  delay(1000);
  setColor(170,0,255);
  delay(2000);
  

}
void setColor(int Rvalue,int Gvalue,int Bvalue){
  analogWrite(redpin,Rvalue);
  analogWrite(greenpin,Gvalue);
  analogWrite(bluepin,Bvalue);
}
