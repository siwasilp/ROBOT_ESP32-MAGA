#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "piptDKPWk61h_cZkhO-gGJrAJyHiv-F2";
char ssid[] = "00000000";
char pass[] = "00000000";

float volt = 0;
float humidity = 0;
float temperature = 0;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, "elec.cmtc.ac.th", 8080);
}

void loop()
{
  Blynk.run();


  //============= RETURN =========================
  volt = random(5.0, 15.0);
  humidity = random(30.0, 100.0);
  temperature = random(18.0, 70.0);
  Blynk.virtualWrite(V30, volt);
  Blynk.virtualWrite(V31, humidity);
  Blynk.virtualWrite(V32, temperature);
  //==============================================
}
