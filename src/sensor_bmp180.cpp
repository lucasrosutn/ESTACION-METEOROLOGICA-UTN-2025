#include "sensor_bmp180.h"
#include <Adafruit_BMP085.h>


// Instancia global del sensor BMP180
Adafruit_BMP085 bmp;

void setupbmp180() {
  Serial.begin(19200);
  if (!bmp.begin()) {
	Serial.println("Could not find a valid BMP085 sensor, check wiring!");

  } else {
    Serial.println("sensor inicializado");
  }
}

float leerPresion() {
    return bmp.readPressure() / 100.0F; // Convierte a hPa
}
