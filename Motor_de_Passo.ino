#include <Stepper.h> //Incluindo Biblioteca
 
const int stepsPerRevolution = 65; //Número de passor por volta
 
Stepper myStepper(stepsPerRevolution, 8,10,9,11); // Pinos em que o motor está conectado

void setup(){
  myStepper.setSpeed(300); //Velocidade do motor de passo
}
void loop(){
    
  for(int i = 0; i < 50; i++){ 
          myStepper.step(stepsPerRevolution); //Gira o Motor no sentido Anti-Horário
  }
              
  for(int i = 0; i < 50; i++){
          myStepper.step(-stepsPerRevolution); //Gira o Motor no sentido Horário 
  }
}
