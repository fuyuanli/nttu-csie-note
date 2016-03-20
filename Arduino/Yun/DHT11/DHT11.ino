#include <Process.h>
#include "DHT.h"
#define TempHum_PIN 8
#define Light_PIN A0

Process date;

float temp;
float hum;
DHT dht(TempHum_PIN,DHT11);
int light;

void setup() {
  // put your setup code here, to run once:
    dht.begin();
    Serial.begin(9600);
    Bridge.begin();
    while(!Serial);
    Serial.println("Time Check");
    pinMode(Light_PIN,INPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
    if(!date.running()){
        date.begin("date");
        date.addParameter("+%Y/%m/%d-%T:");
        date.run();   
     }
    String timeString = date.readString();
     
    temp = dht.readTemperature();
    hum = dht.readHumidity();
    light = analogRead(Light_PIN);
    
    Serial.print(timeString);
    Serial.print(temp);
    Serial.print(" oC  ");
    Serial.print(hum);
    Serial.print("%  Light level");
    Serial.println(Light_PIN);
}
