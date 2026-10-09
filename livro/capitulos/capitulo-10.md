# Capítulo 10 — Divisores de tensão: aproveitando uma parte da tensão

Olá, tudo bem com você?

No capítulo anterior, vimos que resistores em série compartilham a mesma corrente. Agora vamos descobrir uma aplicação muito interessante dessa propriedade.

Imagine que você tem uma bateria de 9 V e precisa obter uma tensão menor para usar como **sinal de referência**, sem alimentar uma carga de potência.

É aí que entra o **divisor de tensão**.

## 10.1 — Dois resistores, uma tensão intermediária

Um divisor simples utiliza dois resistores em série. Chamamos o resistor superior de \(R_1\) e o inferior de \(R_2\).

Aplicamos a tensão de entrada nas extremidades da associação e medimos a saída no ponto entre os resistores, tomando como referência o terminal negativo.

A expressão é:

\[
V_{saída}=V_{entrada}\times\frac{R_2}{R_1+R_2}
\]

**[INSERIR FIGURA 10.1 — Divisor de tensão com R1, R2, entrada e saída identificadas]**

*Legenda:* A tensão de saída é medida entre o ponto central e a referência negativa.

## 10.2 — Vamos fazer uma conta?

Considere uma bateria de 9 V, um resistor de 2 kΩ na posição \(R_1\) e outro de 1 kΩ na posição \(R_2\).

Substituindo na fórmula:

\[
V_{saída}=9\times\frac{1000}{2000+1000}=3\ V
\]

Ou seja: **sem carga conectada à saída**, esperamos aproximadamente 3 V no ponto central.

Você pode montar o circuito na protoboard e conferir o resultado com o multímetro em tensão contínua.

## 10.3 — Onde usamos divisores?

Divisores de tensão aparecem em várias situações: leitura de sensores resistivos, circuitos de polarização e criação de referências simples.

Por exemplo, se substituirmos um dos resistores por um LDR, a tensão do ponto central muda conforme a iluminação. Essa variação pode ser interpretada por um circuito de medição.

Mas existe um detalhe importante.

## 10.4 — Divisor de tensão não é fonte regulada

A fórmula que acabamos de utilizar descreve o divisor **sem carga significativa** na saída.

Quando conectamos um dispositivo que consome corrente, ele altera a resistência equivalente do ramo inferior. Como consequência, a tensão de saída pode diminuir.

Por isso, **não use um divisor resistivo simples como substituto de uma fonte regulada para alimentar motores, módulos ou outros dispositivos que consumam corrente significativa**.

**[INSERIR FIGURA 10.2 — Comparação do divisor sem carga e com uma carga conectada à saída]**

*Legenda:* A conexão de uma carga modifica o comportamento do divisor.

## Para encerrar

Com apenas dois resistores, conseguimos criar uma tensão intermediária útil para medições e sinais. O segredo está em conhecer também as limitações dessa solução.

No próximo capítulo, vamos conhecer duas leis que ajudam a analisar circuitos com vários caminhos: as **Leis de Kirchhoff**.

Um abraço do seu professor,

**DIEGO GANDRA**
