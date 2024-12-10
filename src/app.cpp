#include "app.h"
#include "sensor.h"
#include "display.h"

// Ejecuta el ciclo lógico principal de la aplicación
void runApp() {
    float temperatura = leerTemperatura(); // Lee la temperatura del sensor DHT22
    float humedad = leerHumedad();         // Lee la humedad del sensor DHT22

    if (isnan(temperatura) || isnan(humedad)) {
        Serial.println("Error al leer del sensor DHT!");
        return;
    }

    mostrarDatos(temperatura, humedad);   // Muestra los datos en el display OLED
    delay(2000);                          // Espera 2 segundos antes de la próxima actualización
}
