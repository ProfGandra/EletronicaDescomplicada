# Capítulo 20 — SENSORES E ATUADORES – INTERFACE

> **Nota editorial:** capítulo 19 do manuscrito original, deslocado para a posição 20 na sequência pedagógica. Texto-base preservado para revisão comparativa. As referências de figuras e fórmulas devem ser conferidas com o DOCX antes da publicação impressa.

COM O MUNDO REAL

Sensores são os "sentidos" da eletrônica. Atuadores são os
"músculos". Juntos, criam sistemas inteligentes!

[INSERIR FIGURA 18.1 AQUI]

      Figura 18.1: Dos Sentidos à Ação. Diagrama: sensor
       → processamento → atuador.

Sensores Analógicos vs Digitais

Analógicos: Valor contínuo (0-5V)

      Potenciômetro, LDR, LM35 (temperatura)

      Precisam de ADC (Conversor Analógico-Digital)

Digitais: Valor discreto (0 ou 1)

      Botão, sensor magnético, sensor PIR de movimento

[INSERIR FIGURA 18.2 AQUI]

      Figura 18.2: Tipos de Sensores. Coleção dos sensores
       mais comuns.

Sensor LM35 (Temperatura)

      10mV por grau Celsius

      0°C = 0V, 100°C = 1,0V


      Preciso e fácil de usar!

[INSERIR FIGURA 18.3 AQUI]

      Figura 18.3: Sensor LM35. Conexão com Arduino e
       gráfico linear.

Sensor LDR (Luz)

Resistor que varia com a luz:

      Escuro: Alta resistência (até 1MΩ)

      Claro: Baixa resistência (~10kΩ)

Use em divisor de tensão com resistor fixo!

[INSERIR FIGURA 18.4 AQUI]

      Figura 18.4: Circuito com LDR. Divisor resistivo e
       curva característica.

Atuadores Comuns

      LEDs: Indicação e iluminação

      Relés: Controle de alta potência

      Motores DC: Movimento contínuo

      Servomotores: Posicionamento preciso

      Solenoides: Movimento linear

[INSERIR FIGURA 18.5 AQUI]


         Figura 18.5: Família de Atuadores. Coleção com
          aplicações típicas.

Sistema Completo: Controlador de Temperatura

Código básico para ligar ventilador quando está quente:

cpp

void loop() {

    int temp = analogRead(A0) * 0.488; // Converte para °C

    if (temp > 30) digitalWrite(9, HIGH);

    else digitalWrite(9, LOW);

    delay(1000);

}

[INSERIR FIGURA 18.6 AQUI]

         Figura 18.6: Controlador de
          Temperatura. Diagrama completo do sistema.

Um abraço do seu professor,

Diego G. Gandra

---

**Ponto de controle editorial:** verificar todas as chamadas de figura e sua numeração após a reorganização; validar cálculos, esquemas e exemplos antes de impressão.
