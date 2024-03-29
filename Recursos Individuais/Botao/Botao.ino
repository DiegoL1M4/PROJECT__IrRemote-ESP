//Nerdking.net.br 
//Função Liga / Desliga num mesmo botão
//Base para projetos futuros
 
int led = D1; // led no pino 8
int botao = D7; // botão no pino 7

//Variável que conterá os estados do botão (0 LOW, 1 HIGH).
int estadoBotao = 0;

//Método setup, executado uma vez ao ligar o Arduino.
void setup() {
  pinMode(led,OUTPUT);  //Definindo pino digital 8 como de saída.
  pinMode(botao,INPUT); //Definindo pino digital 2 como de entrada. 
}

//Método loop, executado enquanto o Arduino estiver ligado.
void loop() {  
  //Lendo o estado do pino 2, constante botao, e atribuindo 
  //o resultado a variável estadoBotao.
  estadoBotao = digitalRead(botao);          

  //Verificando o estado do botão para definir se acenderá ou apagará o led.  
  if (estadoBotao == HIGH) {
    digitalWrite(led,HIGH); //Botão pressionado, acende o led.
    delay(5000);
  } else {
    digitalWrite(led,LOW);  //Botão não pressionado, apaga o led.    
  }       
}
