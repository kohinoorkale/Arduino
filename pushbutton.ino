#define Button 2
#define led 9
int val;
void setup() {

  Serial.begin(9600);
  pinMode(Button,INPUT_PULLUP);
  pinMode(led,OUTPUT);
  

}

void loop() {

  val=digitalRead(Button);

  Serial.print(val);
  digitalWrite(9,val);
  delay(200);

}
