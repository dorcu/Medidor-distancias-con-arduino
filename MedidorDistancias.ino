// Sensor de ultrasonidos HR-SC04
// David Ortega Cuadrado - dorcu.com
// 6 de Abril de 2014
// hola@dorcu.com
  
// Conectamos el sensor de la siguiente forma:  
// GND    -> GND  
// VCC    -> 5V  
// TRING  -> D7
// ECHO   -> D8

// Por ejemplo conectamos a las entradas Digitales 7 y 8  
 
// Librerias necesarias para el funcionamiento
#include "Ultrasonic.h"

// Declaramos el sensor ultrasonido en los pines digitales elegidos
Ultrasonic ultrasonido(7,8);  

void setup() {
  Serial.begin(9600); 
}

void loop()
{
  Serial.print("Distancia: ");
  Serial.print(ultrasonido.Ranging(CM)); 
  Serial.println(" cm");
  delay(1000);
}
