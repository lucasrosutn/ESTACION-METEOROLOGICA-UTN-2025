#ifndef DISPLAY_H
#define DISPLAY_H

#include <U8g2lib.h>

// Inicializa el display OLED
void initDisplay();

// Muestra datos de temperatura y humedad en el display
void mostrarDatos(float temperatura, float humedad);

#endif // DISPLAY_H
