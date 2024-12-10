#include "display.h"

Adafruit_SSD1306 display(128, 64, &Wire, OLED_RESET_PIN);

// Inicializa el display OLED
void initDisplay() {
    if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println("Error al inicializar el OLED!");
        for (;;); // Se queda en un bucle infinito si falla la inicialización
    }
    display.clearDisplay();
    display.display();
}

// Muestra los datos en el display OLED
void mostrarDatos(float temperatura, float humedad) {
    display.clearDisplay(); // Limpia la pantalla antes de escribir
    display.setTextSize(1); // Define el tamaño del texto
    display.setTextColor(SSD1306_WHITE); // Define el color del texto
    display.setCursor(0, 0); // Posiciona el cursor en la esquina superior izquierda
    display.print("Temp: ");
    display.print(temperatura);
    display.println(" C");
    display.print("Hum: ");
    display.print(humedad);
    display.println(" %");
    display.display(); // Actualiza el contenido del display
}
