#include "display.h"

 #include <Adafruit_I2CDevice.h>
 
// Instancia de u8g2 para un display SSH1106 de 128x64 (I2C)
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* SCL=*/ 22, /* SDA=*/ 21);

void initDisplay() {
    // Inicializa el display
    u8g2.begin();
    u8g2.clearBuffer(); // Limpia cualquier contenido previo en el buffer
}

void mostrarDatos(float temperatura, float humedad) {
    // Limpia el buffer interno
    u8g2.clearBuffer();

    // Configura la fuente
    u8g2.setFont(u8g2_font_ncenB08_tr);

    // Escribe la temperatura
    u8g2.setCursor(0, 20); // Posición para el texto
    u8g2.print("Temp: ");
    u8g2.print(temperatura);
    u8g2.print(" C");

    // Escribe la humedad
    u8g2.setCursor(0, 40); // Posición para el texto
    u8g2.print("Hum: ");
    u8g2.print(humedad);
    u8g2.print(" %");

    // Envía el contenido al display
    u8g2.sendBuffer();
}
