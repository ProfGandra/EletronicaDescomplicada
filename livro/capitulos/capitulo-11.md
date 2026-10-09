# Capítulo 11 — Leis de Kirchhoff: seguindo os caminhos da eletricidade

Olá, tudo bem com você?

Quando o circuito tem apenas uma bateria e um resistor, a análise costuma ser simples. Mas e quando aparecem vários caminhos, resistores e fontes?

Não precisamos adivinhar o que acontece. Existem duas regras que ajudam a organizar as contas: as **Leis de Kirchhoff**.

Os nomes podem parecer complicados. A ideia por trás deles, nem tanto.

## 11.1 — Primeira lei: a corrente não desaparece

Imagine um cruzamento de ruas. Se chegam carros por duas vias e não existe estacionamento no cruzamento, esses carros precisam sair por algum caminho.

Com a corrente elétrica acontece algo parecido.

A **Lei das Correntes de Kirchhoff**, também chamada de **Lei dos Nós**, afirma que a soma das correntes que entram em um nó é igual à soma das correntes que saem dele.

Um nó é um ponto de conexão entre ramos do circuito.

Se entram 2 mA e 3 mA e existe apenas uma saída, a corrente que sai será:

\[
I_{saída}=2+3=5\ mA
\]

**[INSERIR FIGURA 11.1 — Nó com duas correntes entrando e uma saindo]**

*Legenda:* Em um nó, a soma das correntes que entram é igual à soma das que saem.

## 11.2 — Segunda lei: a tensão fecha a conta

Agora imagine uma caminhada que começa em um ponto, percorre um caminho fechado e retorna exatamente ao mesmo lugar.

Ao completar o percurso, a variação total de altura é zero. Subimos em alguns trechos e descemos em outros.

A **Lei das Tensões de Kirchhoff**, ou **Lei das Malhas**, funciona de maneira semelhante: em uma malha fechada, a soma algébrica das tensões é zero.

Considere uma fonte de 9 V e dois resistores em série. Se a queda de tensão no primeiro resistor for de 4 V, a queda no segundo será de 5 V:

\[
9-4-5=0
\]

A conta fechou!

**[INSERIR FIGURA 11.2 — Malha com fonte de 9 V e quedas de 4 V e 5 V]**

*Legenda:* A elevação de tensão fornecida pela fonte é compensada pelas quedas no percurso fechado.

## 11.3 — Como analisar um circuito mais complicado?

Quando encontrar uma montagem com vários caminhos, siga uma sequência:

1. Identifique os nós e os percursos fechados.
2. Escolha sentidos de referência para as correntes.
3. Aplique a Lei dos Nós para relacionar as correntes.
4. Aplique a Lei das Malhas para relacionar as tensões.
5. Resolva as equações e confira se os resultados fazem sentido.

Se uma corrente calculada aparecer com sinal negativo, não significa necessariamente que a conta esteja errada. Pode indicar apenas que a corrente real segue o sentido oposto ao que você escolheu como referência.

**[INSERIR FIGURA 11.3 — Exemplo de circuito com nós, sentidos de corrente e malha identificados]**

*Legenda:* Identificar referências antes de calcular ajuda a evitar confusões.

## 11.4 — Pare e pense

Em um nó, entram 8 mA. Por um dos ramos, saem 3 mA. Quanto deve sair pelo outro ramo?

Se você respondeu **5 mA**, acertou.

Agora pense em uma malha com uma fonte de 12 V e duas quedas de tensão. Se uma delas vale 7 V, quanto vale a outra?

**5 V**, para que a soma algébrica seja zero.

## Para encerrar

As Leis de Kirchhoff não substituem a Lei de Ohm. Elas trabalham juntas e nos ajudam a entender circuitos que não podem ser analisados apenas olhando um resistor isolado.

No próximo capítulo, vamos conhecer um componente que se comporta de maneira diferente dependendo do sentido em que tentamos fazer a corrente passar: o **diodo**.

Um abraço do seu professor,

**DIEGO GANDRA**
