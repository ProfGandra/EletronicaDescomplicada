# Capítulo 22 — Arduino: quando o circuito ganha um programa

Olá, tudo bem com você?

Já pensou em mudar o comportamento de um circuito sem precisar refazer todas as ligações?

Com um **microcontrolador**, podemos definir parte desse comportamento por meio de um programa.

O **Arduino** é uma plataforma que facilita o aprendizado com microcontroladores, combinando placas, ferramentas de programação e uma comunidade de projetos.

## 22.1 — O que existe dentro de um microcontrolador?

Um microcontrolador reúne processador, memória e periféricos em um único chip. Ele pode ler sinais de entrada, executar instruções e controlar saídas.

**[INSERIR FIGURA 22.1 — Diagrama de blocos simplificado de microcontrolador]**

## 22.2 — Conhecendo o Arduino Uno

Para nossos exemplos, vamos considerar o **Arduino Uno R3**, uma placa bastante conhecida no ensino de eletrônica.

Ela possui entradas analógicas, pinos digitais e saídas capazes de gerar sinais PWM em pinos específicos. As entradas analógicas do Uno R3 usam conversão de **10 bits**, resultando normalmente em valores de **0 a 1023**.

Nem toda placa Arduino tem os mesmos pinos, tensões ou recursos. Confira sempre o modelo utilizado.

**[INSERIR FIGURA 22.2 — Arduino Uno R3 com pinos identificados]**

## 22.3 — Nosso primeiro programa

O exemplo clássico é o **Blink**, que acende e apaga o LED integrado à placa.

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
```

A função `setup()` executa a configuração inicial. A função `loop()` repete as instruções enquanto o programa está em funcionamento.

**[INSERIR FIGURA 22.3 — Código Blink e LED integrado do Arduino]**

## 22.4 — Lendo um potenciômetro

Um potenciômetro pode funcionar como divisor de tensão. Ligado corretamente entre 5 V e GND, com o terminal central conectado a A0, ele fornece uma tensão variável para a entrada analógica.

Podemos transformar essa leitura em um comando de brilho para um LED externo, usando **um resistor limitador** e um pino PWM apropriado:

```cpp
const int pinoLed = 9;
const int pinoPot = A0;

void setup() {
  pinMode(pinoLed, OUTPUT);
}

void loop() {
  int leitura = analogRead(pinoPot);
  int brilho = map(leitura, 0, 1023, 0, 255);
  analogWrite(pinoLed, brilho);
  delay(10);
}
```

O PWM não cria uma tensão analógica contínua perfeita: ele alterna rapidamente os estados da saída, variando a proporção de tempo ligada.

**[INSERIR FIGURA 22.4 — Potenciômetro em A0 e LED com resistor no pino PWM 9]**

## 22.5 — Um cuidado importante

Os pinos do microcontrolador possuem limites de corrente e tensão. **Nunca conecte diretamente motores ou cargas de maior corrente a um pino de saída**. Utilize um estágio de acionamento adequado.

## Para encerrar

O Arduino nos permite combinar sensores, decisões e atuadores de uma maneira bastante acessível.

Antes de partir para o projeto final, vamos organizar a bancada e os materiais. Afinal, um bom projeto também depende de uma boa rotina de trabalho.

Um abraço do seu professor,

**DIEGO GANDRA**
