/*
  Capitulo 57 de Arduino desde cero en Español.
  Emulacion de mouse (HID) con Pro Micro para desplazamiento a izquierda
  y derecha con dos pulsadores
  
  https://www.youtube.com/c/BitwiseAr
  Autor: bitwiseAr  

*/

#include "Mouse.h"  // incluye libreria Mouse

#define IZQUIERDA 4 // constante para identificar pulsador izquierdo en pin 4
#define DERECHA 5 // constante para identificar pulsador derecho en pin 5

#define RANGO 5   // rango para cantidad de movimiento
#define DEMORA 10 // constante para demora entre lecturas de pulsadores

void setup() {
  pinMode(IZQUIERDA, INPUT_PULLUP); // pin 4 como entrada con resistencia de pull-up
  pinMode(DERECHA, INPUT_PULLUP); // pin 5 como entrada con resistencia de pull-up
  Mouse.begin();      // inicio de emulacion de mouse
  
}

void loop() {
  if (digitalRead(IZQUIERDA) == LOW) {  // si se ha presionado el pulsador izquierdo
    Mouse.move(-RANGO, 0, 0);   // funcion para desplazar a izquierda valor de rango
  }
  
  if (digitalRead(DERECHA) == LOW) {  // si se ha presionado el pulsador derecho
    Mouse.move(RANGO, 0, 0);    // funcion para desplazar a derecha valor de rango
  }

  delay(DEMORA);      // demora de 10 mseg.
}
