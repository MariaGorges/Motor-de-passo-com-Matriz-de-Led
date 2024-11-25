#include <Stepper.h>
#include <MatrizLed.h>

const int stepsPerRevolution = 100;  //NÚMERO DE PASSOS POR VOLTA

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);  //INICIALIZA O MOTOR UTILIZANDO OS PINOS DIGITAIS 8, 9, 10, 11

MatrizLed Display;  // Cria o objeto Display para controlar a matriz de LED

void setup() {
  myStepper.setSpeed(300);  //VELOCIDADE DO MOTOR
  Display.begin(5, 7, 6, 3);
  Display.setIntensidad(5);
}
void loop() {
  // PARA RODAR MENOS ABAIXAR O VALOR 50, PARA RODAR MAIS AUMENTAR
  for(int i = 0; i < 50; i++){
    myStepper.step(stepsPerRevolution);  //GIRA O MOTOR NO SENTIDO ANTI-HORÁRIO
  }
  Display.escribirFraseScroll("3 2 1! KAMYLLY CIRCUS", 80);
}