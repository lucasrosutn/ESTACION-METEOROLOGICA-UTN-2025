#ifndef DISPLAY_H
#define DISPLAY_H

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "config.h"

// Inicializa el display OLED
void initDisplay();

// Muestra la temperatura y humedad en el display
void mostrarDatos(float temperatura, float humedad);

#endif // DISPLAY_H
