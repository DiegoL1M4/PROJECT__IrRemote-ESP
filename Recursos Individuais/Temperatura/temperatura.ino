#include "DHT.h"        // including the library of DHT11 temperature and humidity sensor
#define DHTTYPE DHT11   // DHT 11

#define dht_dpin D3
DHT dht(dht_dpin, DHTTYPE);

void setup()
{ 
  delay(2000);
  dht.begin();
  Serial.begin(115200);
  Serial.println("Humidity and temperature\n\n");
  delay(2000);
}

void loop() {
    delay(2000);
    float h = dht.readHumidity();
    delay(2000);
    float t = dht.readTemperature();
    delay(2000);
    Serial.print("Current humidity = ");
    Serial.print(h);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(t); 
    Serial.println("C  ");
  delay(2000);
}
