#define BLYNK_TEMPLATE_ID "TMPL34XSjYwwq"
#define BLYNK_TEMPLATE_NAME "Plant  Watering System"

#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

#define sensor 34
#define motor 25


BlynkTimer timer;

char auth[] = "mvuDzwA4oCWLnd5LEAu9SXNQX4e_vwKj";

char ssid[] = "santhosh";
char pass[] = "password illa";


void setup() {
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  digitalWrite(motor, HIGH);
}

void soilMoisture() {
  int value = analogRead(sensor);
  value = map(value, 0, 4095, 0, 100);
  value = (value - 100) * -1;
  Blynk.virtualWrite(V0, value);
  Serial.println(value);
  if (value < 5) {
    digitalWrite(motor, LOW);
    delay(800);
    digitalWrite(motor, HIGH);
  }
}


BLYNK_WRITE(V1) {
  bool Relay = param.asInt();
  if (Relay == 1) {
    digitalWrite(motor, LOW);
  } else {
    digitalWrite(motor, HIGH);
  }
}

void loop() {
  soilMoisture();
  Blynk.run();
  digitalWrite(2, LOW);
  delay(400);
  digitalWrite(2, HIGH);
}