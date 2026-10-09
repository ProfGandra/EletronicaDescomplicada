# Capítulo 18 — A LÓGICA DA ELETRÔNICA – PORTAS

> **Nota editorial:** capítulo 17 do manuscrito original, deslocado para a posição 18 na sequência pedagógica. Texto-base preservado para revisão comparativa. As referências de figuras e fórmulas devem ser conferidas com o DOCX antes da publicação impressa.

LÓGICAS

As portas lógicas são os blocos fundamentais de toda a
computação moderna. Do smartphone aos
supercomputadores, tudo começa com esses circuitos
simples!

[INSERIR FIGURA 16.1 AQUI]

      Figura 16.1: Do Analógico ao Digital. Sinal analógico
       (contínuo) vs digital (0V e 5V).

O que são Portas Lógicas?

Circuitos que realizam operações lógicas básicas. Recebem
entradas (0 ou 1) e produzem uma saída conforme
uma tabela verdade.

As 7 Portas Lógicas Fundamentais

1. Porta NOT (Inversora)

      Saída é o inverso da entrada

      Tabela: 0→1, 1→0

2. Porta AND (E)


     Saída 1 apenas se TODAS entradas forem 1

3. Porta OR (OU)

     Saída 1 se PELO MENOS UMA entrada for 1

4. Porta NAND (NO E)

     AND seguida de NOT (saída 0 apenas se todas forem
      1)

5. Porta NOR (NOU)

     OR seguida de NOT (saída 1 apenas se todas forem 0)

6. Porta XOR (OU Exclusivo)

     Saída 1 se entradas forem DIFERENTES

7. Porta XNOR (NOU Exclusivo)

     Saída 1 se entradas forem IGUAIS

[INSERIR FIGURA 16.2 AQUI]

     Figura 16.2: As Sete Portas Completas. Grid com
      símbolos, expressões e tabelas verdade.

O CI 74HC00: Quatro Portas NAND

Um dos CIs mais úteis, contém 4 portas NAND
independentes.

[INSERIR FIGURA 16.3 AQUI]


      Figura 16.3: CI 74HC00. Pinagem completa do
       encapsulamento DIP-14.

Níveis Lógicos na Prática

      0 Lógico: 0V a 0,8V

      1 Lógico: 2,0V a 5V

      Zona Proibida: 0,8V a 2,0V (comportamento
       indefinido!)

[INSERIR FIGURA 16.4 AQUI]

      Figura 16.4: Níveis Lógicos. Gráfico mostrando as
       faixas de tensão.

Um abraço do seu professor,

Diego G. Gandra

---

**Ponto de controle editorial:** verificar todas as chamadas de figura e sua numeração após a reorganização; validar cálculos, esquemas e exemplos antes de impressão.
