# Capítulo 12 — Diodos: uma passagem com sentido preferencial

Olá, tudo bem com você?

Lembra quando conversamos sobre fontes de alimentação e mencionamos a retificação? Chegou a hora de conhecer um dos componentes que tornam isso possível: **o diodo**.

## 12.1 — Pense em uma válvula de retenção

Imagine uma válvula hidráulica que facilita a passagem da água em um sentido e dificulta no sentido contrário. É uma boa maneira de começar a entender o diodo.

Em condições normais de funcionamento, ele **conduz preferencialmente em um sentido**. Mas atenção: a comparação tem limites. Diodos reais apresentam queda de tensão, pequenas correntes de fuga e limites de tensão e corrente.

**[INSERIR FIGURA 12.1 — Símbolo do diodo e analogia com válvula de retenção]**

## 12.2 — Ânodo, cátodo e polarização

Os dois terminais recebem os nomes de **ânodo** e **cátodo**. Em muitos diodos, uma faixa no corpo identifica o cátodo.

Na **polarização direta**, o ânodo fica em potencial mais alto que o cátodo. Um diodo de silício comum pode apresentar uma queda próxima de **0,7 V** quando conduz, mas esse valor varia com a corrente, a temperatura e o modelo.

Na **polarização reversa**, o diodo normalmente bloqueia a passagem de corrente, até seus limites especificados. Portanto, não podemos tratá-lo como uma chave perfeita.

**[INSERIR FIGURA 12.2 — Polarização direta e reversa com identificação dos terminais]**

## 12.3 — Onde encontramos diodos?

Uma aplicação importante é a **retificação**: organizar a passagem da corrente para obter, a partir de uma tensão alternada, uma tensão de polaridade definida. Uma ponte retificadora utiliza quatro diodos; depois dela, ainda podemos precisar de filtragem e regulação para alimentar circuitos eletrônicos.

Outra aplicação é a **proteção contra inversão de polaridade**, quando o circuito é projetado para isso. Também existem diodos usados no tratamento de sinais e na proteção de cargas indutivas.

**[INSERIR FIGURA 12.3 — Ponte retificadora e forma de onda pulsante na saída]**

## 12.4 — Nem todo diodo é igual

- **Retificador, como o 1N4007:** comum em circuitos de retificação.
- **De sinal, como o 1N4148:** utilizado em sinais e chaveamentos de pequena corrente.
- **Zener:** pode operar na região de ruptura reversa controlada, dentro dos limites de projeto.
- **Schottky:** costuma apresentar queda de tensão direta menor que a de muitos diodos de silício convencionais.

Cada tipo tem limites próprios. Antes de substituir um modelo por outro, consulte suas características.

**[INSERIR FIGURA 12.4 — Exemplos de diodos e identificação de seus encapsulamentos]**

## 12.5 — Testando com o multímetro

Com o circuito **desligado** e, de preferência, com uma das conexões do diodo isolada, selecione a função de teste de diodo.

Em um diodo de silício comum, uma orientação das pontas costuma indicar a queda de tensão direta; ao inverter as pontas, o instrumento pode mostrar **OL** ou outra indicação de ausência de condução. Os resultados dependem do componente e do multímetro.

**[INSERIR FIGURA 12.5 — Teste de diodo nas duas polaridades]**

## Para encerrar

O diodo não é complicado quando entendemos a ideia principal: seu comportamento depende da polarização e de seus limites de funcionamento.

No próximo capítulo, vamos conhecer um parente muito popular do diodo: aquele que emite luz.

Um abraço do seu professor,

**DIEGO GANDRA**
