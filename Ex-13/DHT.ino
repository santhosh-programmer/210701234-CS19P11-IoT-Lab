//imnstall dht11 by adafruint in arduino ide

#include <DHT.h>

#define DHTPIN 2       
// Pin connected to the DHT sensor
#define DHTTYPE DHT11 
// DHT 11 sensor type

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Humidity & temperature sensor test");

  dht.begin();
}

void loop() {
  delay(2000); // Delay between sensor readings

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  // if (isnan(humidity) || isnan(temperature)) {
  //   Serial.println("Failed to read from DHT sensor!");
  //   return;
  // }

  // Print temperature and humidity values to Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" *C");
}
