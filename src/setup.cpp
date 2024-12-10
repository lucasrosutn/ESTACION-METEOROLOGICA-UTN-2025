#include <Arduino.h>
#include "setup.h"
#include "sensor.h"
#include "display.h"

// Configura el sistema inicializando los módulos necesarios
void setupSystem() {
    Serial.begin(115200); // Inicializa la comunicación serial para debugging
    initSensor();         // Inicializa el sensor DHT22
    initDisplay();        // Inicializa el display OLED
}
