# Capítulo 15 — Transistores BJT: uma corrente controlando outra

Olá, tudo bem com você?

Imagine que um circuito de controle precisa acionar uma carga que consome mais corrente do que sua saída pode fornecer. Não seria interessante usar um componente intermediário para fazer esse trabalho?

É uma das aplicações dos **transistores bipolares de junção**, conhecidos como **BJT**.

## 15.1 — Uma pequena ação, um efeito maior

Podemos comparar o transistor a uma torneira cujo comando controla a passagem de água. A imagem ajuda, mas não descreve todos os detalhes do componente.

Em um BJT, a corrente aplicada à **base** influencia a corrente entre **coletor** e **emissor**. O comportamento depende do circuito, da polarização e do modelo do transistor.

**[INSERIR FIGURA 15.1 — Analogia da torneira e símbolo de transistor NPN]**

## 15.2 — Conhecendo os três terminais

Os terminais de um BJT são:

- **Base (B):** terminal de controle.
- **Coletor (C):** um dos terminais do caminho principal de corrente.
- **Emissor (E):** o outro terminal desse caminho.

Existem transistores **NPN** e **PNP**, com polaridades de acionamento diferentes. E a posição física dos terminais muda conforme o modelo: **não confie apenas na aparência do encapsulamento**.

**[INSERIR FIGURA 15.2 — Símbolos NPN e PNP e exemplo de identificação de terminais]**

## 15.3 — Usando o transistor como chave

Em uma aplicação simples com transistor NPN:

- **Corte:** a corrente de base é insuficiente para manter a condução desejada; a carga fica desligada.
- **Saturação:** o transistor é acionado para conduzir a corrente da carga, com uma pequena tensão entre coletor e emissor.

Entre esses estados, também existe uma região de operação utilizada em amplificadores.

**[INSERIR FIGURA 15.3 — Transistor NPN acionando LED com resistor de base e resistor do LED]**

## 15.4 — E o resistor de base?

Não devemos conectar a base diretamente a uma saída de controle sem analisar o circuito.

Uma aproximação para dimensionar o resistor de base em um acionamento NPN é:

\[
R_B\approx\frac{V_{controle}-V_{BE}}{I_B}
\]

Para transistores de silício comuns, \(V_{BE}\) pode ficar próximo de **0,7 V** em determinadas condições.

Mas atenção: **não é adequado assumir que o ganho indicado em uma ficha técnica garantirá a saturação**. Para usar o BJT como chave, a corrente de base deve ser escolhida com margem e respeitar os limites do controlador e do transistor.

## 15.5 — Cargas indutivas pedem proteção

Motores e bobinas armazenam energia em campos magnéticos. Ao interromper a corrente, podem produzir picos de tensão.

Por isso, em acionamentos de corrente contínua, é comum usar um **diodo de roda livre** conectado corretamente em paralelo com a carga indutiva, quando a topologia permitir.

**[INSERIR FIGURA 15.4 — Acionamento de carga indutiva DC com transistor e diodo de roda livre]**

Antes de montar um circuito com motor, confira corrente de partida, tensão da carga, dissipação do transistor e características do diodo. Um exemplo com LED de baixa corrente é mais apropriado para a primeira experiência.

## Para encerrar

O transistor abre caminho para uma ideia muito importante: um circuito pode **controlar outro** sem precisar fornecer diretamente toda a corrente da carga.

No próximo capítulo, vamos conhecer um dispositivo que também faz isso, mas utiliza uma bobina e contatos mecânicos: o relé.

Um abraço do seu professor,

**DIEGO GANDRA**
