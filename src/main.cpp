#include <Arduino.h>
#include <Bounce2.h>

unsigned long tempo;
unsigned long tempo2;
unsigned long tempo3;
unsigned long auxilio2 = 0;
unsigned long auxilio = 0;

int led1 = 18;
int led2 = 19;
int led3 = 22;

int botao = 0;

int estadoLed = 1;
int estadoLed2 = 1;

bool ledAceso;

int i = 1;

unsigned long tempoVer = 0;


const int intervaloLed1 = 1000;
const int intervaloLed2 = 2000;
const int intervaloLed3 = 3000;

Bounce btn = Bounce();

void setup() {
    pinMode(led1,OUTPUT);   
    pinMode(led2,OUTPUT); 
    pinMode(led3,OUTPUT);
    Serial.begin(115200);
    btn.attach(botao,INPUT_PULLUP);
}

void loop() {
         tempo = millis();
         tempo2 = millis();



        //Exercicio 1
        // if(tempo-auxilio >= 2000){
        //     digitalWrite(led1,estadoLed);
        //     digitalWrite(led2,!estadoLed);
        //     estadoLed = !estadoLed;
        //     auxilio = tempo;
        // }



        //Exercicio 2
        // if(tempo - auxilio >= 500){
        //     digitalWrite(led1,estadoLed);
        //     estadoLed = !estadoLed;
        //     auxilio = tempo;
        // }
        // if(tempo2 - auxilio2 >= 2000){
        //     digitalWrite(led2,estadoLed2);
        //     estadoLed2 = !estadoLed2;
        //     auxilio2 = tempo2;
        // }


        //Exercicio 3
        // if(tempo - auxilio >= 2000){
        //     Serial.println("Mensagem");
        //     auxilio = tempo;
        // }



        //Exercicio 4
        // btn.update();

        // if(btn.fell()){
        //     tempo3 = millis();
        //     digitalWrite(led1,1);
        //     ledAceso = true;
        // }
        // if(ledAceso && (millis() - tempo3 >= 3000)){
        //     digitalWrite(led1,0);
        //     ledAceso = false;
        // }




        //Exercicio 5 V.1
        // if(tempo - auxilio >= 1000){
        //     i++;
        //     Serial.println(i);

        //     if(i > 1 && i < 10){
        //     digitalWrite(led1,1);
        //     digitalWrite(led2,0);
        //     digitalWrite(led3,0);
        //     }
        //     if(i > 10 && i < 15){
        //     digitalWrite(led1,0);
        //     digitalWrite(led2,1);
        //     digitalWrite(led3,0);
        //     }
        //      if(i > 15 && i < 25){
        //     digitalWrite(led1,0);
        //     digitalWrite(led2,0);
        //     digitalWrite(led3,1);
        //     }
        //     if(i > 25){
        //         i = 1;
        //     }

        //     auxilio = tempo;
        // }
        



        //Exercicio 5 V.2
        // if(millis() - tempoVer >= intervaloLed1 && i == 1){
        //     digitalWrite(led1,1);
        //     digitalWrite(led2,0);
        //     digitalWrite(led3,0);

        //     tempoVer = millis();
        //     i = 2;
        // }
        // if(millis() - tempoVer >= intervaloLed2 && i == 2){
        //     digitalWrite(led1,0);
        //     digitalWrite(led2,1);
        //     digitalWrite(led3,0);

        //     tempoVer = millis();
        //     i = 3;
        // }
        // if(millis() - tempoVer >= intervaloLed3 && i == 3){
        //     digitalWrite(led1,0);
        //     digitalWrite(led2,0);
        //     digitalWrite(led3,1);

        //     tempoVer = millis();
        //     i = 1;
        // }
        }
