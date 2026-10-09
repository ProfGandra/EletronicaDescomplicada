# Capítulo 3 — Fontes de alimentação em corrente contínua

Olá, tudo bem com você?

Até aqui, conversamos sobre tensão, corrente e resistência elétrica. Também aprendemos alguns cuidados importantes para trabalhar com segurança.

Mas existe uma pergunta que ainda precisamos responder: **de onde vem a energia elétrica que alimenta nossos circuitos?**

Afinal, resistores, LEDs e outros componentes não funcionam por vontade própria. Precisamos fornecer energia a eles. E é justamente sobre isso que vamos conversar.

## 3.1 — O que significa DC?

A sigla **DC** vem do inglês *Direct Current*, que significa **corrente contínua**. Em português, também utilizamos **CC**.

Na corrente contínua, as cargas elétricas circulam em um mesmo sentido ao longo do tempo. Imagine uma rua de mão única. Os carros podem acelerar ou diminuir a velocidade, mas continuam seguindo na mesma direção. É mais ou menos essa a ideia.

Já na **corrente alternada (AC ou CA)**, o sentido da corrente muda periodicamente. É o tipo de corrente utilizado na distribuição convencional de energia elétrica para nossas residências.

Uma pilha fornece tensão contínua. Uma tomada residencial fornece tensão alternada.

E aqui temos uma curiosidade: embora muitos equipamentos sejam conectados à tomada, seus circuitos internos funcionam com tensão contínua. Como isso é possível? Vamos descobrir daqui a pouco.

**[INSERIR FIGURA 3.1 — Corrente contínua e alternada]**

*Legenda:* Comparação entre uma tensão contínua de polaridade fixa e uma tensão alternada senoidal.

Uma observação importante: tensão contínua não significa necessariamente tensão perfeitamente constante. Seu valor pode variar ao longo do tempo sem inverter a polaridade.

## 3.2 — De onde vem a tensão contínua?

Existem diferentes maneiras de obter energia elétrica em DC.

### Pilhas e baterias

São provavelmente as fontes mais conhecidas. Elas transformam energia química em energia elétrica por meio de reações eletroquímicas.

Uma pilha alcalina AA, por exemplo, fornece aproximadamente **1,5 V** de tensão nominal. Já uma bateria automotiva convencional possui tensão nominal de **12 V**.

E temos ainda as baterias recarregáveis utilizadas em celulares, notebooks e ferramentas elétricas.

Uma informação importante: a tensão de uma pilha ou bateria pode variar conforme sua condição de carga e utilização. Portanto, não espere encontrar exatamente o valor nominal em todas as medições.

### Painéis solares

Os painéis fotovoltaicos transformam parte da energia luminosa recebida em energia elétrica.

Sua saída é em corrente contínua, embora a tensão e a corrente disponíveis variem conforme a iluminação e as condições de funcionamento.

São bastante utilizados em sistemas de geração de energia e também podem alimentar pequenos projetos eletrônicos.

### Fontes de alimentação

Agora chegamos a um equipamento que você encontrará com frequência em uma bancada.

A fonte de alimentação!

Ela recebe energia de uma origem, como a rede elétrica, e fornece uma saída adequada ao equipamento que desejamos alimentar.

Mas existe um detalhe: a tomada de nossa casa fornece tensão alternada (AC), enquanto grande parte dos circuitos eletrônicos precisa de tensão contínua (DC).

Como resolvemos isso?

Por meio de um processo chamado **retificação**.

De maneira simplificada, a retificação utiliza componentes eletrônicos para fazer com que a tensão resultante mantenha uma única polaridade. Um dos componentes mais utilizados nesse processo é o **diodo**.

Entretanto, a tensão obtida logo após a retificação ainda apresenta oscilações. Por isso, as fontes também utilizam circuitos de filtragem e regulação, responsáveis por reduzir essas variações e fornecer uma tensão mais adequada ao funcionamento dos equipamentos.

Em muitas fontes modernas, essas funções são realizadas por circuitos mais elaborados, mas o objetivo continua sendo o mesmo: disponibilizar uma alimentação DC adequada.

**[INSERIR FIGURA 3.2 — Conversão de AC para DC]**

*Legenda:* Representação simplificada das etapas de retificação, filtragem e regulação, mostrando a transformação de uma tensão alternada em uma tensão contínua.

E como o diodo consegue realizar essa tarefa?

Calma! Não precisamos descobrir tudo de uma vez.

**Mais adiante, no capítulo sobre diodos, estudaremos seu funcionamento e compreenderemos melhor como ocorre a retificação.**

Por enquanto, basta saber que é graças a esse processo, combinado com outras etapas de conversão, que conseguimos alimentar muitos de nossos circuitos DC utilizando a energia disponível na tomada.

E não se esqueça: estamos falando do funcionamento interno das fontes, não de uma experiência para realizar diretamente na rede elétrica. Para nossas montagens, utilizaremos fontes comerciais apropriadas, com saídas DC de baixa tensão.

**[INSERIR FIGURA 3.3 — Exemplos de fontes DC]**

*Legenda:* Pilha, bateria, painel fotovoltaico, carregador USB e fonte de bancada.

## 3.3 — Como escolher uma fonte de alimentação?

Imagine que você montou um circuito que precisa de **5 V DC** para funcionar. Na bancada, encontra duas fontes:

- Fonte A: 5 V — 2 A;
- Fonte B: 12 V — 1 A.

Qual delas devemos utilizar? A primeira, naturalmente!

Mas por quê?

Porque precisamos observar algumas características importantes.

**Tensão:** a fonte deve fornecer uma tensão compatível com o circuito. Uma tensão excessiva pode danificar componentes.

**Corrente disponível:** a fonte deve conseguir fornecer a corrente necessária ao funcionamento do circuito.

Aqui existe uma confusão bastante comum. Uma fonte de 5 V e 2 A **não obriga o circuito a consumir 2 A**. Esses 2 A representam sua capacidade nominal de fornecimento.

Se o circuito consumir apenas 200 mA, a fonte fornecerá aproximadamente essa corrente, desde que esteja operando normalmente.

**Polaridade:** precisamos identificar corretamente os terminais positivo e negativo. Inverter a polaridade pode danificar componentes que não possuam proteção apropriada.

E lembre-se: não basta que o conector encaixe. A fonte também precisa ser eletricamente compatível!

**[INSERIR FIGURA 3.4 — Identificação de uma fonte DC]**

*Legenda:* Exemplo de etiqueta de fonte de alimentação, destacando tensão de saída, corrente máxima e polaridade.

## 3.4 — E quando precisamos de mais tensão?

Você já percebeu que alguns brinquedos utilizam duas, três ou até quatro pilhas?

Isso acontece porque podemos associar pilhas em série para aumentar a tensão disponível.

Quando conectamos duas pilhas de 1,5 V em série, suas tensões se somam:

**Vₜ = 1,5 + 1,5 = 3 V**

Com três pilhas semelhantes, teremos aproximadamente 4,5 V.

Simples, não é?

Mas atenção: utilize suportes apropriados e pilhas compatíveis. Não misture pilhas novas e usadas, nem tipos químicos diferentes.

**[INSERIR FIGURA 3.5 — Associação de pilhas em série]**

*Legenda:* Duas pilhas de 1,5 V associadas em série, fornecendo aproximadamente 3 V.

## 3.5 — Hora da prática!

Vamos conferir algumas dessas informações utilizando um multímetro.

Se você ainda não conhece bem o instrumento, não se preocupe. Teremos um capítulo específico para aprender a utilizá-lo.

Por enquanto, realize a atividade com orientação do professor.

**Materiais:** um multímetro digital, uma pilha AA, uma bateria de 9 V e uma fonte DC comercial de baixa tensão, com saída acessível e identificada.

Configure o multímetro para medir tensão contínua, utilizando os terminais COM e V.

Meça a tensão da pilha, depois a da bateria e, por último, a saída DC da fonte.

Registre os valores encontrados:

| Fonte | Tensão nominal | Tensão medida |
|---|---:|---:|
| Pilha AA | 1,5 V | ______ |
| Bateria | 9 V | ______ |
| Fonte DC | Conforme etiqueta | ______ |

Compare os resultados com os valores nominais.

Atenção: meça apenas saídas DC apropriadas. Não abra fontes de alimentação nem tente medir diretamente a rede elétrica nesta atividade. Nunca coloque o multímetro em modo de corrente diretamente entre os terminais de uma fonte.

## 3.6 — Vamos ver se você entendeu?

1. O que significa a sigla DC?
2. Qual é a diferença entre corrente contínua e corrente alternada?
3. Cite três maneiras de obter energia elétrica em corrente contínua.
4. Uma fonte de 5 V e 2 A pode alimentar um circuito de 5 V que consome 300 mA? Por quê?
5. Qual é a tensão nominal de três pilhas de 1,5 V associadas em série?

## 3.7 — Para encerrar

Agora sabemos de onde vem a energia elétrica utilizada em nossos circuitos.

Conhecemos pilhas, baterias, painéis solares e fontes de alimentação. Também aprendemos que precisamos observar a tensão, a corrente disponível e a polaridade antes de conectar qualquer equipamento.

E aqui fica uma dica que pode evitar bastante dor de cabeça:

**Antes de procurar defeitos em um circuito, confira se ele está recebendo a alimentação correta.**

Às vezes, o problema não está no componente, na montagem ou no projeto. Está simplesmente na fonte!

No próximo capítulo, vamos conhecer melhor um dos componentes mais utilizados na eletrônica: o resistor.

Um abraço do seu professor,

**DIEGO GANDRA**
