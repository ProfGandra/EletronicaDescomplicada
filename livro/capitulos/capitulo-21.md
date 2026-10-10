# Capítulo 21 — Sensores e atuadores: a eletrônica encontra o mundo real

Olá, tudo bem com você?

Um circuito pode calcular, medir e tomar decisões. Mas como ele percebe que escureceu? Ou como faz alguma coisa acontecer depois de tomar uma decisão?

É aí que entram **sensores e atuadores**.

Costumo comparar os sensores aos sentidos e os atuadores aos músculos de um sistema eletrônico. A analogia é simples, mas ajuda a visualizar o conjunto.

## 21.1 — Quem percebe e quem age?

O **sensor** transforma uma grandeza física em um sinal que pode ser interpretado pelo circuito. Já o **atuador** transforma um comando em uma ação, como movimento, luz ou som.

Entre eles, podemos ter um circuito de processamento.

**[INSERIR FIGURA 21.1 — Sensor, processamento e atuador em diagrama de blocos]**

## 21.2 — Sinais analógicos e digitais

Um sensor **analógico** pode produzir uma tensão que varia conforme a grandeza medida. Um sensor **digital** fornece estados discretos ou informações codificadas digitalmente.

O **LDR**, por exemplo, varia sua resistência com a iluminação. Podemos usá-lo em um divisor de tensão, como aprendemos no Capítulo 10.

O **LM35** fornece, em sua faixa de operação especificada, uma tensão proporcional à temperatura, com escala típica de **10 mV por grau Celsius**.

**[INSERIR FIGURA 21.2 — LDR em divisor de tensão e sensor LM35]**

## 21.3 — Exemplos de atuadores

- **LED:** fornece indicação luminosa.
- **Buzzer:** produz um aviso sonoro.
- **Motor DC:** produz movimento de rotação.
- **Servomotor:** permite controlar posição em aplicações apropriadas.
- **Solenoide:** produz movimento linear.
- **Relé:** comuta contatos elétricos.

Motores, relés e outros atuadores podem exigir correntes maiores que as suportadas por uma saída de microcontrolador. Nesses casos, precisamos de um circuito de acionamento adequado.

**[INSERIR FIGURA 21.3 — Exemplos de sensores e atuadores]**

## 21.4 — Imagine um controlador de temperatura

Podemos construir um sistema que leia um sensor de temperatura, compare o valor com um limite e acione um ventilador.

O processo seria: **medir, comparar e agir**.

Na prática, precisamos ainda pensar em calibração, alimentação, proteção da carga e no que acontece se o sensor apresentar defeito. Não basta escrever uma condição no programa e considerar o projeto terminado.

**[INSERIR FIGURA 21.4 — Diagrama de blocos de controle de temperatura com ventilador]**

## Para encerrar

Sensores e atuadores transformam conceitos eletrônicos em aplicações concretas. É assim que um circuito deixa de apenas acender um LED e começa a interagir com o ambiente.

No próximo capítulo, conheceremos uma plataforma que facilita a leitura de sensores e o controle de atuadores: o **Arduino**.

Um abraço do seu professor,

**DIEGO GANDRA**
