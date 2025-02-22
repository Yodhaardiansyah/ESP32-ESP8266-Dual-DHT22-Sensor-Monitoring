/*
 * ESP32 ESP8266 Dual DHT22 Sensor Monitoring
 * -------------------------------------
 * This program reads temperature and humidity data from two DHT22 sensors 
 * and displays the data via the Serial Monitor.
 * 
 * Author: Yodha Ardiansyah
 * Website: https://arunovasi.my.id
 * 
 * Libraries Required:
 * - DHT sensor library by Adafruit
 * - Adafruit Unified Sensor library
 */

#include <DHT.h>

// Define sensor type
#define DHTTYPE DHT22  

// Define GPIO pins for each DHT22 sensor
#define DHTPIN1 14  // GPIO14 (D5 on NodeMCU)
#define DHTPIN2 13  // GPIO13 (D7 on NodeMCU)

// Initialize sensor objects
DHT dht1(DHTPIN1, DHTTYPE);
DHT dht2(DHTPIN2, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("Initializing two DHT22 sensors...");

  dht1.begin();
  dht2.begin();
}

void loop() {
  // Wait 2 seconds between measurements
  delay(2000);

  // Read temperature and humidity from sensor 1
  float humidity1 = dht1.readHumidity();
  float temperature1 = dht1.readTemperature();

  // Read temperature and humidity from sensor 2
  float humidity2 = dht2.readHumidity();
  float temperature2 = dht2.readTemperature();

  // Check if reading from sensor 1 was successful
  if (isnan(humidity1) || isnan(temperature1)) {
    Serial.println("Failed to read from DHT1 sensor!");
  } else {
    Serial.println("Sensor 1:");
    Serial.print("Humidity: ");
    Serial.print(humidity1);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(temperature1);
    Serial.println(" °C");
  }

  // Check if reading from sensor 2 was successful
  if (isnan(humidity2) || isnan(temperature2)) {
    Serial.println("Failed to read from DHT2 sensor!");
  } else {
    Serial.println("Sensor 2:");
    Serial.print("Humidity: ");
    Serial.print(humidity2);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(temperature2);
    Serial.println(" °C");
  }

  Serial.println(); // Print empty line for readability
}
