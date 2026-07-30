
#include<BluetoothSerial.h>

#define DHT11 PIN 4


DHT dht(DHT11 PIN, DHT11)

BluetoothSerial SerialBT;
byte BTData;

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run 'make menuconfig' to and enable it 
#endif


DHT dht(DHT11_PIN,DHT11);

void setup() {

  Serial.begin(115200);
  SerialBT.begin();
  dht.begin();

  
  Serial.println("Ready");

 

}

void loop() {

  float humi=dht.readHumidity();
  float temp=dht.readTemperature();
  Serial.print("Humidity :");
  Serial.println(humi);
  
  
  delay(2000);
  
  Serial.print("Temperature :");
  Serial.println(temp);
  float val=analogRead(4);
  
  delay(1000);

  

}
