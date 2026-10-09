# Capítulo 23 — PROJETO FINAL – SISTEMA DE

> **Edição de trabalho:** transcrição do capítulo 23 do DOCX original; conferir figuras, equações e numeração na revisão final.

CAPÍTULO 23: PROJETO FINAL – SISTEMA DE
MONITORAMENTO DE PLANTAS AUTOMATIZADO

Vamos construir um sistema completo que integra TUDO
que aprendemos!

[INSERIR FIGURA 22.1 AQUI]

      Figura 22.1: Diagrama de Blocos do
       Sistema. Sensores → Arduino → Atuadores → Display.

Visão Geral do Projeto

O sistema irá:

      Monitorar umidade do solo, temperatura e
       luminosidade

      Controlar automaticamente irrigação e iluminação

      Alertar visualmente quando precisar de intervenção

      Exibir todas as informações em tempo real

Lista de Componentes

Sensores:

      Sensor de umidade do solo (higrômetro)

      Sensor de temperatura LM35

      LDR (sensor de luz)


     Botões para controle manual

Atuadores:

     Relé 5V para bomba d'água

     Relé 5V para lâmpada

     LED RGB para status

     Buzzer para alertas

Processamento:

     Arduino Uno

     Display LCD 16x2 com I2C

     Protoboard e jumpers

Alimentação:

     Fonte 12V para Arduino e relés

     Fonte 5V separada para lógica

[INSERIR FIGURA 22.2 AQUI]

     Figura 22.2: Esquemático Detalhado. Diagrama
      completo com todas as conexões.

Código Completo do Projeto

cpp

#include <Wire.h>


#include <LiquidCrystal_I2C.h>



LiquidCrystal_I2C lcd(0x27, 16, 2);



// Definição dos pinos

const int SENSOR_UMIDADE = A0;

const int SENSOR_TEMP = A1;

const int SENSOR_LUZ = A2;

const int RELÉ_BOMBA = 9;

const int RELÉ_LUZ = 10;

const int LED_VERMELHO = 3;

const int LED_VERDE = 5;

const int LED_AZUL = 6;

const int BUZZER = 8;



// Limiares

const int UMIDADE_MINIMA = 30; // %

const int TEMP_MAXIMA = 35;       // °C

const int LUZ_MINIMA = 500;      // valor analógico


void setup() {

 Serial.begin(9600);

 lcd.init();

 lcd.backlight();

 lcd.print("Sistema Iniciado");



 pinMode(RELÉ_BOMBA, OUTPUT);

 pinMode(RELÉ_LUZ, OUTPUT);

 pinMode(LED_VERMELHO, OUTPUT);

 pinMode(LED_VERDE, OUTPUT);

 pinMode(LED_AZUL, OUTPUT);

 pinMode(BUZZER, OUTPUT);



 digitalWrite(RELÉ_BOMBA, LOW);

 digitalWrite(RELÉ_LUZ, LOW);



 delay(2000);

 lcd.clear();


}



void loop() {

    // Leitura dos sensores

    int umidade = lerUmidade();

    float temperatura = lerTemperatura();

    int luz = analogRead(SENSOR_LUZ);



    // Controle automático

    controlarIrrigacao(umidade);

    controlarIluminacao(luz);

    verificarAlertas(umidade, temperatura);



    // Atualizar display

    atualizarDisplay(umidade, temperatura, luz);



    // Indicador de status com LED RGB

    indicarStatus(umidade, temperatura);


    delay(1000);

}



int lerUmidade() {

    int valor = analogRead(SENSOR_UMIDADE);

    return map(valor, 0, 1023, 100, 0);

}



float lerTemperatura() {

    int valor = analogRead(SENSOR_TEMP);

    return (valor * 5.0 / 1024.0) * 100;

}



void controlarIrrigacao(int umidade) {

    if (umidade < UMIDADE_MINIMA) {

     digitalWrite(RELÉ_BOMBA, HIGH);

     lcd.setCursor(0, 1);

     lcd.print("Irrigando... ");

    } else {


        digitalWrite(RELÉ_BOMBA, LOW);

    }

}



void controlarIluminacao(int luz) {

    if (luz < LUZ_MINIMA) {

        digitalWrite(RELÉ_LUZ, HIGH);

    } else {

        digitalWrite(RELÉ_LUZ, LOW);

    }

}



void verificarAlertas(int umidade, float temperatura) {

    if (umidade < 20 || temperatura > TEMP_MAXIMA) {

        tone(BUZZER, 1000);

        delay(100);

        noTone(BUZZER);

    }

}


void atualizarDisplay(int umidade, float temperatura, int
luz) {

    lcd.setCursor(0, 0);

    lcd.print("U:");

    lcd.print(umidade);

    lcd.print("% T:");

    lcd.print(temperatura, 1);



    lcd.setCursor(0, 1);

    lcd.print("Luz:");

    lcd.print(luz);

    lcd.print("   ");

}



void indicarStatus(int umidade, float temperatura) {

    if (umidade < 30) {

     digitalWrite(LED_VERMELHO, HIGH); // Solo seco

     digitalWrite(LED_VERDE, LOW);


    } else if (temperatura > TEMP_MAXIMA) {

        digitalWrite(LED_AZUL, HIGH);     // Muito quente

        digitalWrite(LED_VERMELHO, LOW);

    } else {

        digitalWrite(LED_VERDE, HIGH);    // Tudo normal

        digitalWrite(LED_VERMELHO, LOW);

        digitalWrite(LED_AZUL, LOW);

    }

}

[INSERIR FIGURA 22.3 AQUI]

           Figura 22.3: Código do Projeto. Screenshot do código
            completo comentado.

Teste e Calibração

Calibração do Sensor de Umidade:

        1. Leia valor no ar (seco) → 0%

        2. Leia valor na água (molhado) → 100%

        3. Ajuste o map() conforme seus valores

Ajuste dos Limiares:

           Umidade: 30-40% para plantas tropicais


      Temperatura: 18-28°C para maioria das plantas

      Luminosidade: 500-800 para plantas de sombra

Melhorias e Expansões

Para levar para o próximo nível:

   1. Log de dados com cartão SD

   2. Conexão Wi-Fi com ESP8266

   3. App mobile para monitoramento remoto

   4. Machine learning para otimizar rega

   5. Dashboard web com gráficos

[INSERIR FIGURA 22.4 AQUI]

      Figura 22.4: Projeto Montado. Foto do sistema
       completo funcionando.

Documentação do Projeto

Não esqueça de documentar:

      Esquemático final

      Lista de componentes com valores

      Código comentado

      Limiares de calibração

      Lições aprendidas


Parabéns! Este projeto integra TUDO que aprendemos:
sensores, atuadores, programação, segurança e boas
práticas de bancada. Você agora não é mais um iniciante - é
um maker!

Um abraço do seu professor,

Diego G. Gandra

---
**Controle editorial:** capítulo transferido integralmente para revisão; não representa validação final de circuitos ou códigos.
