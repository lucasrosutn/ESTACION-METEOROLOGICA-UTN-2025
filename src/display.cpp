#include "display.h"
#include <U8g2lib.h>

// Instancia global del display OLED SSH1106
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, /* SCL=*/ 22, /* SDA=*/ 21);

void initDisplay() {
    u8g2.begin();
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_ncenB08_tr);
}

void mostrarDatos(float temperatura, float humedad, float presion) {
    u8g2.clearBuffer();

    // Muestra la temperatura
    u8g2.setCursor(0, 20);
    u8g2.print("Temp: ");
    u8g2.print(temperatura);
    u8g2.print(" C");

    // Muestra la humedad
    u8g2.setCursor(0, 40);
    u8g2.print("Hum: ");
    u8g2.print(humedad);
    u8g2.print(" %");

    // Muestra la presión atmosférica
    u8g2.setCursor(0, 60);
    u8g2.print("Pres: ");
    u8g2.print(presion);
    u8g2.print(" hPa");

    u8g2.sendBuffer();
}
