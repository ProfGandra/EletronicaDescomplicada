# Capítulo 18 — Circuitos integrados: muitos componentes em um só lugar

Olá, tudo bem com você?

Já imaginou montar um circuito com centenas de transistores, um por um, na protoboard? Além de trabalhoso, ocuparia um espaço enorme.

Os **circuitos integrados**, ou **CIs**, reúnem vários elementos eletrônicos em uma pequena pastilha semicondutora. Alguns possuem poucos componentes internos; outros, bilhões de transistores.

## 18.1 — O que existe dentro de um CI?

A pastilha, geralmente feita de silício, contém estruturas microscópicas que realizam funções eletrônicas. O encapsulamento protege essa pastilha e oferece terminais para conectá-la ao circuito.

**[INSERIR FIGURA 18.1 — Encapsulamento de CI e pastilha semicondutora]**

## 18.2 — Conhecendo o temporizador 555

Um dos circuitos integrados mais conhecidos é o **555**, utilizado em temporização e geração de pulsos.

Ele pode trabalhar em configurações como:

- **Monoestável:** gera um pulso após um disparo.
- **Astável:** produz oscilações periódicas, úteis em um pisca-pisca.
- **Biestável:** mantém um estado até receber um comando de mudança.

**[INSERIR FIGURA 18.2 — NE555 com terminais identificados]**

Na configuração astável clássica, uma aproximação para a frequência é:

\[
f\approx\frac{1,44}{(R_1+2R_2)C}
\]

Se utilizarmos \(R_1=1\ k\Omega\), \(R_2=100\ k\Omega\) e \(C=10\ \mu F\), a frequência ficará próxima de **0,72 Hz**. Isso significa um ciclo a cada **1,4 segundo**, aproximadamente.

O valor real depende das tolerâncias dos componentes e do circuito empregado.

**[INSERIR FIGURA 18.3 — Pisca-pisca com NE555 em configuração astável]**

## 18.3 — E os amplificadores operacionais?

Outro grupo importante é o dos **amplificadores operacionais**, usados para tratar e comparar sinais.

Em uma configuração não inversora com realimentação adequada, o ganho ideal é:

\[
A_v=1+\frac{R_2}{R_1}
\]

O **LM741** é um exemplo clássico para estudo, mas não é a melhor escolha para muitas montagens modernas com alimentação simples de 5 V. O circuito e a alimentação precisam ser compatíveis com o modelo escolhido.

**[INSERIR FIGURA 18.4 — Amplificador operacional em configuração não inversora]**

## 18.4 — DIP ou SMD?

CIs no encapsulamento **DIP** costumam ser práticos para a protoboard. Já os componentes **SMD** são preparados para montagem em superfície e aparecem em equipamentos compactos.

**[INSERIR FIGURA 18.5 — Comparação de encapsulamentos DIP e SMD]**

## Para encerrar

O CI não é uma caixa mágica. É uma maneira engenhosa de reunir funções eletrônicas em pouco espaço.

No próximo capítulo, vamos conhecer circuitos integrados que trabalham com decisões baseadas em zeros e uns: as **portas lógicas**.

Um abraço do seu professor,

**DIEGO GANDRA**
