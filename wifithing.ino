#include <SPI.h>
#include <WiFi.h>


void setup()
{
 Serial.begin(9600);
}

void loop () {
   if(WiFi.status() != WL_CONNECTED)
   {
        WiFi.begin("Roy jr iPhone", "ayeo");
        delay(3000);
        Serial.println("Attempting to connect...");
    }
    Serial.println("Connected");
    float distance1 = WiFi.RSSI();
    Serial.print("Distance1:");
    Serial.print((distance1*-0.14)*(distance1*-0.15));
    Serial.println("cm");
    delay (1000);
  
   
 
    }
