#include "sensor_bmp180.h"
#include <Adafruit_BMP280.h>


// Instancia global del sensor BMP180
Adafruit_BMP280 bmp;


void initBMP180() {
    if (!bmp.begin(0x76)) { // Cambia a 0x77 si tu sensor usa otra dirección I2C
        Serial.println("No se pudo encontrar un sensor BMP180. Verifica la conexión.");
        while (1); // Detiene la ejecución si el sensor no se detecta
    }
}

float leerPresion() {
    return bmp.readPressure() / 100.0F; // Convierte a hPa
}
