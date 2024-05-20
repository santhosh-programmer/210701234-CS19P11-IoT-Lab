
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Your Blynk Auth Token
char auth[] = "";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Galaxy S21 FE 5G B537";
char pass[] = "12345678";

// Define the LED pin
const int ledPin = 2;

void setup()
{
  // Debug console
  Serial.begin(115200);

  // Set LED pin as output
  pinMode(ledPin, OUTPUT);

  // Start Blynk
  Blynk.begin(auth, ssid, pass);
}

// This function will be called every time the Blynk button state changes
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); // Get value as integer
  digitalWrite(ledPin, pinValue); // Set LED accordingly
}

void loop()
{
  Blynk.run();
}
