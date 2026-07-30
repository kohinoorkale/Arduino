int enA=9;
int in1=8;
int in2=7;

int motorspeed=255;
int analog_IN = A0;


void setup() {
 pinMode(enA,OUTPUT);
 pinMode(in1,OUTPUT);
 pinMode(in2,OUTPUT);


 digitalWrite(in1,LOW);
 digitalWrite(in2,LOW);
 Serial.begin(9600);
 pinMode(analog_IN, INPUT);
 
}

void loop() {
int val=digitalRead(analog_IN);
Serial.print("AnalogRead:");
Serial.println(val);
  if(val>=10){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    analogWrite(enA,motorspeed);
  }
    else {
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    analogWrite(enA,motorspeed);
    }
    delay(1000);

    
}
