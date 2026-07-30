
const int trigPin=7;
const int echoPin=8;
#define SOUND_SPEED 0.034
#define CM_TO_INCH 0.393701
#define led 9
long duration;
float distanceCm;
float distanceInch;


void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(2,INPUT_PULLUP);
  pinMode(9,OUTPUT);

  // put your setup code here, to run once:

}


void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin,HIGH);
  distanceCm=duration*SOUND_SPEED/2;
  Serial.print("Distance(cm)");
  Serial.println(distanceCm);
  int val=digitalRead(2);
  if(distanceCm<=10)
  {
    digitalWrite(led,HIGH);
  }
  else
   {
    digitalWrite(led,LOW);
  }
  
  delay(1000);


  // put your main code here, to run repeatedly:

}
