# Capítulo 1 — Principais definições da eletricidade: tensão, corrente e resistência

Olá, tudo bem com você?

Antes de mergulharmos de cabeça nos componentes e fórmulas, precisamos falar a mesma língua. E a linguagem da eletrônica é falada por três conceitos fundamentais. Não são números ou equações complicadas. São ideias simples, do mundo real.

> **Figura 1.1 — Os pais da eletricidade moderna.** Volta, Ampère e Ohm, cientistas cujos trabalhos deram nome aos conceitos que vamos aprender. *Imagem indicada no manuscrito original; conferir e inserir na diagramação.*

Eu, depois de todos esses anos ensinando, aprendi uma coisa: quem decora fórmula se embanana na hora H. Quem entende o **conceito** consegue se virar até no aperreio. Então, esqueça os livros técnicos por um segundo e vamos usar uma analogia que costuma funcionar muito bem com meus alunos: **o sistema hidráulico**.

Imagine uma mangueira de jardim. Ela vai nos ajudar a entender os fundamentos da eletricidade. Só não se esqueça: é uma comparação para facilitar o aprendizado, não uma descrição literal de tudo o que acontece dentro de um circuito.

## A pressão na tubulação: a tensão elétrica (volts — V)

Pega uma mangueira conectada a uma torneira fechada. Se a rede de água estiver pressurizada, existe uma diferença de pressão disponível, mesmo que a água não esteja circulando. Você pode até perceber isso quando abre a torneira.

Na nossa comparação, essa diferença de pressão representa a **tensão elétrica**.

Tecnicamente, tensão é a **diferença de potencial elétrico entre dois pontos**. Ela indica quanta energia pode ser transferida por unidade de carga elétrica. É medida em **volts (V)**, em homenagem a **Alessandro Volta**, pioneiro no desenvolvimento da pilha elétrica.

Uma pilha AA comum fornece aproximadamente **1,5 V**. Uma bateria automotiva convencional tem tensão nominal de **12 V**. A tomada da sua casa... bom, essa a gente deixa pra depois: além de trabalhar com corrente alternada, ela exige cuidados de segurança muito maiores!

A tensão **não** é o fluxo de elétrons. É a diferença de potencial que pode impulsionar o movimento de cargas quando existe um caminho adequado.

## A água fluindo: a corrente elétrica (ampères — A)

Agora, você abre a torneira e a água começa a passar pela mangueira. A quantidade de água que atravessa um ponto por segundo é o que chamamos de vazão.

Na nossa comparação, a vazão representa a **corrente elétrica**.

Corrente é a **quantidade de carga elétrica que atravessa uma seção do circuito por unidade de tempo**. É medida em **ampères (A)**, em homenagem a **André-Marie Ampère**.

Em fios metálicos, os portadores de carga são elétrons. Mas atenção: por convenção, representamos o sentido da corrente do polo positivo para o negativo, embora os elétrons se desloquem no sentido oposto no circuito externo de uma fonte.

Um LED indicador pode trabalhar, por exemplo, com uma corrente da ordem de **0,02 A (20 mA)**, dependendo de suas especificações. Um motor elétrico pode consumir correntes muito maiores.

Para existir corrente sustentada em um circuito simples, precisamos de uma fonte adequada e de um **caminho fechado**. E lembre-se: tensão e corrente são grandezas diferentes.

> **Figura 1.2 — Corrente elétrica e vazão de água.** Representação da corrente como fluxo de carga. *Conferir imagem e numeração no original.*

## O bico da mangueira: a resistência elétrica (ohms — Ω)

Imagine agora que você aperta a saída da mangueira. A passagem de água fica mais difícil. Dependendo das condições do sistema, a vazão total diminui, embora o jato possa sair mais rápido pelo estreitamento.

Na eletrônica, a **resistência elétrica** é a oposição que um material ou componente oferece à passagem da corrente. Sua unidade é o **ohm (Ω)**, em homenagem a **Georg Simon Ohm**.

Para um resistor que obedece à Lei de Ohm, mantendo a temperatura aproximadamente constante, vale uma regra fundamental: **quanto maior a resistência, menor a corrente para a mesma tensão**.

É simples assim. E você ainda vai usar muito essa ideia na bancada.

> **Figura 1.3 — Resistência e restrição do fluxo.** Analogia entre o estreitamento da mangueira e a oposição à corrente. *Conferir imagem e numeração no original.*

## Juntando tudo: a dança dos três

Vamos revisar com um exemplo prático que você vai ver daqui a poucas páginas: **acender um LED**.

Você tem uma **fonte de tensão**: uma bateria de 9 V.

Quer que uma **corrente** adequada passe pelo LED para que ele brilhe sem ser danificado. Vamos imaginar, por enquanto, um LED cujo limite e condições de uso permitam trabalhar perto de 20 mA.

Mas existe um detalhe importante: **o LED não se comporta como um resistor comum**. Ele é um diodo, e sua corrente pode aumentar rapidamente quando a tensão aplicada ultrapassa sua faixa de condução. Por isso, ligar um LED diretamente a uma bateria de 9 V pode danificá-lo.

Depois, fumaça. Sempre fumaça. Ou, às vezes, nem isso: ele simplesmente para de funcionar.

É aí que entra o terceiro elemento: **o resistor em série**. Ele ajuda a limitar a corrente, considerando a tensão da fonte e a queda de tensão do LED. Não escolhemos esse resistor no chute: fazemos uma conta simples, que aprenderemos mais adiante.

A **tensão** fornece a diferença de potencial. A **corrente** descreve o fluxo de cargas. E a **resistência** ajuda a determinar a corrente em um circuito.

É uma das relações mais importantes de toda a eletrônica.

> **Figura 1.4 — Aplicação prática.** Resistor em série com um LED para limitar a corrente. *Inserir esquema conferido na diagramação.*

> **Pare e pense!** Da próxima vez que você abrir uma torneira, lembre-se de Volta, Ampère e Ohm. A água não é eletricidade, mas a comparação pode ajudar você a enxergar o que antes parecia invisível!

Um abraço do seu professor,

**DIEGO GANDRA**

---

### Registro de adequações deste capítulo

- Preservados o tratamento direto ao estudante, a analogia hidráulica, o humor e a despedida do autor.
- Refinada a definição de tensão como diferença de potencial, e de corrente como fluxo de carga por unidade de tempo.
- Esclarecido o sentido convencional da corrente e o movimento dos elétrons em condutores metálicos.
- Corrigida a afirmação de que o LED possui simplesmente uma resistência baixa; explicado seu comportamento não ôhmico.
- Eliminada a promessa de corrente “exata” obtida apenas pelo resistor.
- Normalizada a sequência de legendas; imagens originais ainda precisam ser verificadas e incorporadas.


---

*Edição em revisão: conferir esquemas, tabelas e referências de imagens com o arquivo Word integral antes da prova gráfica.*
