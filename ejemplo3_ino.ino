
#include <Servo.h>

// Crear objeto del servomotor
Servo miServo;

// Configuración
const int pinServo = 9;
const int velocidad = 30; // Milisegundos por grado

// Función para mover el servo lentamente
void moverLento(int posicionInicial, int posicionFinal) {

  if (posicionInicial < posicionFinal) {
    for (int angulo = posicionInicial;
         angulo <= posicionFinal; angulo++) {

      miServo.write(angulo);
      delay(velocidad);
    }
  } 
  else {
    for (int angulo = posicionInicial;
         angulo >= posicionFinal; angulo--) {

      miServo.write(angulo);
      delay(velocidad);
    }
  }
}

void setup() {
  miServo.attach(pinServo);

  // Posición inicial
  miServo.write(0);
  delay(1000);
}

void loop() {
//==========================================================
// ES PARA DOS PRODUCTOS


  //Posición 1: caida del primer producto 
  moverLento(0, 150);
  delay(3000);

  
  //Posición 2: caida del segundo  producto
  moverLento(150, 180);
  delay(6000);


  //Posición 3: en la canaleta vulve a ingresar los dos productos 
  moverLento(180, 0);
  delay(8000);
}
