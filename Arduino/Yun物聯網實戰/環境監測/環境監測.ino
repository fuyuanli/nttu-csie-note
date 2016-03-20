#include <Process.h>  //調用Linux指令
#include "DHT.h"      //空氣品質 https://github.com/adafruit/DHT-sensor-library/    
#define TempHum_PIN 8
#define Light_PIN A0
#define Gas_PIN A5
#define X_PIN A1
#define Y_PIN A2
#define Z_PIN A3

Process date; // Linux date指令

float temp;
float hum;
int light;
int gas;
int x,y,z;

DHT dht(TempHum_PIN,DHT11);

float toG(float v){   //轉換成G
  return v*6/1023-3;
}

void setup() {
  // put your setup code here, to run once:
    dht.begin();
    Serial.begin(9600);
    Bridge.begin();   //建立 Arduino 與 Linux 溝通
    while(!Serial);
    Serial.println("Time Check");
    
    pinMode(Light_PIN,INPUT);
    pinMode(Gas_PIN,INPUT);
    pinMode(X_PIN,INPUT);
    pinMode(Y_PIN,INPUT);
    pinMode(Z_PIN,INPUT);
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
    
    x = analogRead(X_PIN);
    y = analogRead(Y_PIN);
    z = analogRead(Z_PIN);
    Serial.print(timeString);
    
    //溫度感測
    Serial.print(temp);
    Serial.print(" oC ");
    //濕度感測
    Serial.print(hum);
    Serial.print(" %");
    //光敏電阻感測
    Serial.print(" Light level: ");
    Serial.print(Light_PIN);
    //MQ4 空氣感測
    Serial.print(" MQ4's Value: ");
    Serial.print(gas);
    //加速度感應器
    Serial.print("X: ");
    Serial.print(x);
    Serial.print("Y: ");
    Serial.print(y);
    Serial.print("z: ");
    Serial.print(z);
    Serial.println(" G");
    delay(1000);
}
