# Capítulo 4 — A lei que reina absoluta: dominando a Lei de Ohm

*Correspondente ao capítulo 5 do manuscrito original.*

E aí, curtiu o papo sobre pressão, fluxo e resistência? Se você aprender apenas uma relação matemática neste começo de jornada, que seja esta: a famosa, poderosa e indispensável **Lei de Ohm**.

## A fórmula que você vai usar na bancada

Para um **condutor ôhmico**, mantidas aproximadamente constantes suas condições físicas, a tensão aplicada é proporcional à corrente:

**V = R × I**

- **V:** tensão, em volts (V).
- **I:** corrente, em ampères (A).
- **R:** resistência, em ohms (Ω).

A Lei de Ohm não significa que qualquer componente eletrônico tenha resistência constante. LEDs, diodos e transistores, por exemplo, têm comportamento não linear. Por enquanto, vamos aplicá-la principalmente aos resistores.

**[INSERIR FIGURA 4.1 — Georg Simon Ohm e a relação V = R × I]**

*Legenda:* Georg Simon Ohm e a relação entre tensão, corrente e resistência. *Referência original: figura “Georg Ohm e sua Descoberta”.*

## O triângulo mágico

Quer descobrir a tensão? Multiplique resistência por corrente. Quer descobrir a corrente? Divida tensão por resistência. Quer descobrir a resistência? Divida tensão por corrente.

**V = R × I**

**I = V / R**

**R = V / I**

**[INSERIR FIGURA 4.2 — Triângulo da Lei de Ohm]**

*Legenda:* Relações entre tensão, corrente e resistência. *Referência original: “O Triângulo Mágico da Lei de Ohm”.*

## Exemplo prático: calculando o resistor para um LED

Imagine uma bateria de **9 V** e um LED vermelho cuja queda de tensão direta seja aproximadamente **2,2 V** na corrente de interesse. Vamos adotar, **apenas para este exemplo**, uma corrente de projeto de **20 mA**, desde que permitida pelo fabricante do LED.

O resistor em série precisa absorver a diferença de tensão:

**V_R = 9 − 2,2 = 6,8 V**

Converta a corrente para ampères:

**20 mA = 0,020 A**

Agora aplique a Lei de Ohm:

**R = 6,8 / 0,020 = 340 Ω**

Você dificilmente encontrará um resistor comum de exatamente 340 Ω na sua caixa. Um valor comercial de **360 Ω** fornece, nas condições assumidas:

**I ≈ 6,8 / 360 ≈ 0,0189 A = 18,9 mA**

E se você escolher **330 Ω**? A corrente calculada seria aproximadamente **20,6 mA**, um pouco acima da corrente de projeto. Não significa que todo LED vá queimar imediatamente, mas não é uma escolha que devemos recomendar sem conferir sua folha de dados.

Lembre-se: a tensão da bateria, a queda de tensão do LED e a tolerância do resistor podem variar. O cálculo é um **dimensionamento inicial**, não uma promessa de corrente exata.

**[INSERIR FIGURA 4.3 — LED com resistor em série e cálculo passo a passo]**

*Legenda:* Exemplo de dimensionamento do resistor para um LED alimentado por 9 V. *Referência original: “Cálculo do Resistor para o LED”.*

## Pare e pense!

Uma fonte de 12 V ligada a um resistor de 1 kΩ produziria qual corrente?

**Resposta:** I = 12 / 1.000 = 0,012 A = **12 mA**.

Viu? Você já está calculando como alguém que entende o circuito, não apenas decorando uma fórmula.

Um abraço do seu professor,

**DIEGO GUIMARÃES GANDRA**

---

### Registro editorial

Revisadas a aplicabilidade da Lei de Ohm, as unidades e a escolha do resistor comercial. Mantidos os três pontos de inserção de imagens, com numeração ajustada à nova ordem.
