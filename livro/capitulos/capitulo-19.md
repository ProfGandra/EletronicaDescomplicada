# Capítulo 19 — Portas lógicas: decisões com zeros e uns

Olá, tudo bem com você?

Pense em uma lâmpada que só acende quando duas condições são atendidas. Por exemplo: a porta está fechada **e** o botão foi pressionado.

Essa pequena decisão pode ser representada por uma **porta lógica**.

## 19.1 — O que significam 0 e 1?

Em eletrônica digital, usamos dois estados lógicos, representados por **0** e **1**. Eles correspondem a faixas de tensão definidas pela família de circuitos utilizada.

Atenção: **1 lógico não significa obrigatoriamente 5 V**. Existem dispositivos que operam com outras tensões, como 3,3 V. Os limites de entrada e saída precisam ser conferidos na folha de dados.

**[INSERIR FIGURA 19.1 — Sinal digital com dois níveis lógicos]**

## 19.2 — Conhecendo as principais portas

As portas mais comuns são:

- **NOT:** inverte o estado da entrada.
- **AND (E):** saída 1 quando todas as entradas são 1.
- **OR (OU):** saída 1 quando pelo menos uma entrada é 1.
- **NAND:** inversão da saída AND.
- **NOR:** inversão da saída OR.
- **XOR (OU exclusivo):** para duas entradas, saída 1 quando elas são diferentes.
- **XNOR:** para duas entradas, saída 1 quando elas são iguais.

Veja um exemplo com duas entradas, A e B:

| A | B | AND | OR | XOR |
|---|---|---|---|---|
| 0 | 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 | 1 |
| 1 | 0 | 0 | 1 | 1 |
| 1 | 1 | 1 | 1 | 0 |

A tabela mostra todas as combinações possíveis de entrada. Por isso, chamamos esse recurso de **tabela-verdade**.

**[INSERIR FIGURA 19.2 — Símbolos das portas lógicas e tabela-verdade]**

## 19.3 — Portas lógicas também existem em CIs

O **74HC00**, por exemplo, reúne quatro portas NAND de duas entradas. Para utilizá-lo, precisamos identificar corretamente os pinos de alimentação, entradas e saídas.

Não deixe entradas CMOS sem conexão definida: estados flutuantes podem produzir comportamento inesperado.

**[INSERIR FIGURA 19.3 — Pinagem do CI 74HC00]**

## 19.4 — Uma decisão do cotidiano

Imagine um sistema que só libera o funcionamento quando a tampa de proteção está fechada e o botão de início é pressionado. A condição lógica pode ser representada por uma porta AND.

Isso ajuda a entender a lógica, mas **não significa que uma única porta lógica substitua um sistema de segurança industrial**. Aqui estamos estudando o conceito, não projetando uma função de segurança.

## Para encerrar

As portas lógicas realizam decisões combinando estados de entrada. Mas como fazer um circuito **lembrar** de alguma informação?

É o que veremos no próximo capítulo, ao conhecer os flip-flops.

Um abraço do seu professor,

**DIEGO GANDRA**
