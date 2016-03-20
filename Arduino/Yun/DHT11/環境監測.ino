#include <Process.h>  //調用Linux指令
#include "DHT.h"      //空氣品質 https://github.com/adafruit/DHT-sensor-library/    
#define TempHum_PIN 8
#define Light_PIN A0
#define Gas_PIN A5

Process date; // Linux date指令

float temp;
float hum;
int light;
int gas;
DHT dht(TempHum_PIN,DHT11);

void setup() {
  // put your setup code here, to run once:
    dht.begin();
    Serial.begin(9600);
    Bridge.begin();   //建立 Arduino 與 Linux 溝通
    while(!Serial);
    Serial.println("Time Check");
    
    pinMode(Light_PIN,INPUT);
    pinMode(Gas_PIN,INPUT);
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
    gas = analogRead(Gas_PIN);
    Serial.print(timeString);
    Serial.print(temp);
    Serial.print(" oC  ");
    Serial.print(hum);
    Serial.print("%  Light level");
    Serial.print(Light_PIN);
    Serial.print("  MQ4's Value: ");
    Serial.println(gas);
}
