# Capítulo 14 — Capacitores: energia guardada por um instante

Olá, tudo bem com você?

Até aqui, trabalhamos bastante com resistores e diodos. Agora vamos conhecer um componente que aparece em fontes, temporizadores e praticamente todo equipamento eletrônico: **o capacitor**.

## 14.1 — Uma comparação para começar

Imagine um tanque com uma membrana elástica. Ao pressioná-la, você armazena energia; quando a pressão diminui, ela pode devolver parte dessa energia.

A comparação ajuda a visualizar o que acontece, mas um capacitor não guarda água nem funciona como uma bateria. Ele **armazena energia em um campo elétrico** entre suas partes condutoras, separadas por um material isolante chamado **dielétrico**.

**[INSERIR FIGURA 14.1 — Estrutura simplificada de um capacitor com placas e dielétrico]**

## 14.2 — O que é capacitância?

A **capacitância** indica a relação entre a carga elétrica armazenada e a tensão aplicada. Sua unidade é o **farad (F)**.

Como um farad costuma ser muito grande para diversos circuitos didáticos, encontramos valores em:

- **Microfarads (µF):** um milionésimo de farad.
- **Nanofarads (nF):** um bilionésimo de farad.
- **Picofarads (pF):** um trilionésimo de farad.

**[INSERIR FIGURA 14.2 — Capacitores cerâmicos e eletrolíticos com valores identificados]**

## 14.3 — Carga, descarga e tempo

Quando conectamos um capacitor a uma fonte através de um resistor, a tensão sobre ele aumenta gradualmente. Ao descarregá-lo por um resistor, a tensão diminui.

Em um circuito **RC simples**, a constante de tempo é:

\[
\tau=R\times C
\]

Após uma constante de tempo, a tensão de carga chega a aproximadamente **63%** do valor final. Depois de cinco constantes de tempo, está muito próxima desse valor.

Por exemplo, com **10 kΩ** e **100 µF**:

\[
\tau=10\,000\times0,0001=1\ s
\]

Isso significa que o circuito tem uma constante de tempo de um segundo. Não quer dizer que o capacitor esteja completamente carregado após esse período.

**[INSERIR FIGURA 14.3 — Curvas de carga e descarga de capacitor em circuito RC]**

## 14.4 — Para que usamos capacitores?

Eles podem ajudar a suavizar variações de tensão, reduzir ruídos, desacoplar a alimentação de circuitos integrados e criar intervalos de tempo em circuitos RC.

É por isso que você encontra capacitores tanto perto de conectores de alimentação quanto ao lado de pequenos chips.

**[INSERIR FIGURA 14.4 — Aplicações de capacitores em filtragem, desacoplamento e temporização]**

## 14.5 — Atenção à polaridade e à tensão máxima

Muitos **capacitores eletrolíticos** são polarizados. Instalar um desses componentes ao contrário pode provocar aquecimento, vazamento ou ruptura.

Também precisamos respeitar sua **tensão nominal**. E lembre-se: alguns capacitores podem permanecer carregados mesmo depois que a alimentação foi desligada.

Em nossas atividades, trabalhe apenas com circuitos didáticos de baixa tensão e descarregue os capacitores de maneira controlada, conforme o projeto. Não provoque curto-circuitos entre os terminais para descarregá-los.

**[INSERIR FIGURA 14.5 — Marcação de polaridade e tensão nominal de capacitor eletrolítico]**

## Para encerrar

O capacitor nos apresenta uma ideia importante: nem tudo acontece instantaneamente em um circuito.

No próximo capítulo, vamos conhecer o transistor, componente que permite controlar uma corrente usando um sinal elétrico.

Um abraço do seu professor,

**DIEGO GANDRA**
