#include<DHT.h> 
 
DHT dht(2, DHT11);
 
void setup(){
 
  Serial.begin(9600);
  dht.begin();
 
}
void loop(){
  
   
    float h =dht.readHumidity();
    float t_c = dht.readTemperature();
    float t_f = dht.readTemperature(true);
    float t_k = t_c + 273.15;
    Serial.println(" humidity:"+ String(h) + "%");
   
    Serial.println("temperature:" + String(t_c) + " *c");
    Serial.println("temperature:" + String(t_f) + " *F");
    Serial.println("temperature:" + String(t_k)  + " K" );
    delay(500);
  
}
