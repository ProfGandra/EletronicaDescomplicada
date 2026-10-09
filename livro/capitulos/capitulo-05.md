# Capítulo 5 — O perigo da fumaça: potência elétrica

*Correspondente ao capítulo 7 do manuscrito original.*

Já viu aquele resistor esquentando demais, mudando de cor ou até soltando cheiro de queimado? Isso tem tudo a ver com **potência elétrica**. Ignorar a potência é como construir uma casa sem conferir se a fiação aguenta o chuveiro.

Mas calma: não precisamos de fumaça para aprender!

**[INSERIR FIGURA 5.1 — Resistor em operação normal, superaquecido e danificado]**

*Legenda:* Quando a potência dissipada ultrapassa as condições admissíveis do componente. *Referência original: “Do Útil ao Desastre”.*

## A fórmula da potência

A potência elétrica representa a **taxa de transferência ou transformação de energia**. Sua unidade é o **watt (W)**.

Em corrente contínua, para as grandezas consideradas no componente:

**P = V × I**

Onde P é a potência em watts, V é a tensão em volts e I é a corrente em ampères.

Se um dispositivo recebe 5 V e consome 0,1 A, sua potência elétrica de entrada é:

**P = 5 × 0,1 = 0,5 W**

Isso não significa que toda essa energia será necessariamente transformada em calor: motores, LEDs e outros dispositivos também a convertem em movimento, luz e outras formas de energia.

## Efeito Joule: por que o resistor esquenta?

Nos resistores, a energia elétrica é transformada principalmente em calor. É o chamado **efeito Joule**.

**[INSERIR FIGURA 5.2 — Dissipação térmica no resistor]**

*Legenda:* Conversão de energia elétrica em calor no resistor. *Referência original: “O Efeito Joule em Ação”.*

## As fórmulas que salvam componentes

Combinando potência e Lei de Ohm, chegamos a três expressões úteis para resistores ôhmicos:

**P = V × I**

**P = I² × R**

**P = V² / R**

A escolha depende dos valores que você conhece.

## Escolhendo o resistor certo

Resistores comuns podem ter potências nominais de **1/8 W (0,125 W)**, **1/4 W (0,25 W)**, **1/2 W (0,5 W)**, **1 W**, **2 W** e outras.

A potência nominal não é um convite para trabalhar permanentemente no limite. A temperatura ambiente, a ventilação, a montagem e as orientações do fabricante também importam.

### Exemplo: LED e resistor

Retomemos o circuito anterior, com resistor de **360 Ω** e corrente estimada de **18,9 mA**.

**P = I² × R ≈ (0,0189)² × 360 ≈ 0,129 W**

Um resistor de **1/4 W (0,25 W)** oferece uma margem em relação à potência calculada, nas condições assumidas. Ainda assim, confirme as condições de operação e as especificações do componente.

No exemplo anterior do manuscrito, com **330 Ω e 20 mA**, a potência seria **0,132 W**; a conta estava correta, mas agora usamos o resistor de 360 Ω escolhido no capítulo 4 para manter os exemplos consistentes.

**[INSERIR FIGURA 5.3 — Resistores de diferentes potências nominais]**

*Legenda:* Comparação entre resistores com diferentes capacidades de dissipação. *Referência original: “Tamanho é Documento!”.*

## Pare e pense!

Um resistor de 100 Ω recebe 5 V em seus terminais. Qual a potência dissipada?

**P = V² / R = 25 / 100 = 0,25 W**.

Percebeu o problema? Um resistor nominal de 1/4 W estaria exatamente no valor calculado, sem margem. Para um projeto confiável, avalie um resistor de potência superior e as condições térmicas.

E lembre-se: a fumaça pode até render uma história divertida na bancada. Mas, em um circuito bem dimensionado, ela não faz parte do projeto.

Um abraço do seu professor,

**DIEGO GUIMARÃES GANDRA**

---

### Registro editorial

Corrigida a ligação entre potência elétrica e dissipação térmica; alinhado o exemplo do LED ao capítulo anterior; acrescentada margem de potência e referência às condições térmicas. Preservados três pontos de inserção de figuras.


---

*Edição em revisão: conferir esquemas, tabelas e referências de imagens com o arquivo Word integral antes da prova gráfica.*
