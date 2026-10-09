# Capítulo 22 — O CÉREBRO PROGRAMÁVEL – INTRODUÇÃO AO ARDUINO


Microcontroladores são computadores completos em um
único chip. O Arduino é a plataforma que democratizou o
acesso a esses dispositivos incríveis!

[INSERIR FIGURA 21.1 AQUI]

      Figura 19.1: Do Circuito Fixo ao
       Programável. Circuito complexo vs um único chip.

O que tem dentro de um Microcontrolador?

      CPU: Executa instruções

      Memória RAM: Dados temporários

      Memória Flash: Armazena o programa

      Periféricos: ADC, timers, comunicação serial

      Portas de I/O: Conexão com o mundo exterior

[INSERIR FIGURA 21.2 AQUI]

      Figura 19.2: Anatomia de um
       Microcontrolador. Diagrama em blocos.

A Placa Arduino Uno

[INSERIR FIGURA 21.3 AQUI]


         Figura 19.3: A Placa Arduino Uno. Diagrama com
          pinos identificados.

Pinos do Arduino

         Digitais (0-13): Entrada ou saída (0V ou 5V)

         Analógicos (A0-A5): Leem 0-5V (resolução 10 bits →
          0-1023)

         PWM (~3,5,6,9,10,11): Saída "analógica" por pulsação
          rápida

         5V, 3.3V, GND: Alimentação

Seu Primeiro Programa: Blink

cpp

void setup() {

    pinMode(13, OUTPUT);         // Configura pino 13 como saída

}



void loop() {

    digitalWrite(13, HIGH); // Acende o LED

    delay(1000);        // Espera 1 segundo

    digitalWrite(13, LOW); // Apaga o LED

    delay(1000);        // Espera 1 segundo


}

[INSERIR FIGURA 21.4 AQUI]

         Figura 19.4: Código do Pisca-Pisca. Screenshot do
          IDE com explicações.

Conceitos Fundamentais de Programação

Variáveis:

cpp

int velocidade = 1000;

Estruturas de Controle:

cpp

if (leitura > 500) {

    digitalWrite(13, HIGH);

} else {

    digitalWrite(13, LOW);

}

Loops:

cpp

for (int i = 0; i < 10; i++) {

    digitalWrite(13, HIGH);


    delay(100);

    digitalWrite(13, LOW);

    delay(100);

}

[INSERIR FIGURA 21.5 AQUI]

         Figura 19.5: Exemplos de Código. Blocos com
          sintaxe colorida.

Projeto: Controlador de LED com Potenciômetro

cpp

void setup() {

    pinMode(9, OUTPUT);

}



void loop() {

    int leitura = analogRead(A0);

    int brilho = map(leitura, 0, 1023, 0, 255);

    analogWrite(9, brilho);

    delay(10);

}


[INSERIR FIGURA 21.6 AQUI]

      Figura 19.6: Circuito do Controlador de
       Brilho. Diagrama esquemático.

Um abraço do seu professor,

Diego G. Gandra

---

*Edição em revisão: conferir os esquemas, códigos e referências de imagens com o arquivo Word integral antes da prova gráfica.*
