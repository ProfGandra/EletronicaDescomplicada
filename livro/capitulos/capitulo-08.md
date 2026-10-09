# Capítulo 8 — Protoboard: o campo de testes da eletrônica

Olá, tudo bem com você?

Você já imaginou precisar soldar todos os componentes só para descobrir que ligou um resistor no lugar errado?

Seria um trabalho e tanto!

Felizmente, existe uma ferramenta que facilita muito a vida de quem está começando: a **protoboard**, também chamada de placa de ensaio. Ela permite montar, testar e modificar circuitos sem soldagem.

## 8.1 — O segredo está debaixo dos furos

Olhando de cima, a protoboard parece apenas uma placa cheia de furinhos. Mas, por baixo deles, existem contatos metálicos que fazem as conexões elétricas.

Na região central de uma protoboard comum, os furos se conectam em **grupos de cinco**, de cada lado do canal central. Os dois lados desse canal não são ligados entre si.

Nas laterais, costumam existir **barramentos de alimentação**, identificados por linhas vermelhas e azuis. Eles ajudam a distribuir o positivo e a referência negativa do circuito.

Atenção: em alguns modelos, esses barramentos são interrompidos no meio da placa. **Não presuma que toda a linha lateral está conectada de ponta a ponta.** Confira o desenho da sua protoboard ou use a função de continuidade do multímetro, sempre sem alimentação.

**[INSERIR FIGURA 8.1 — Protoboard com contatos internos, canal central e barramentos identificados]**

*Legenda:* Os furos parecem iguais, mas nem todos estão conectados entre si.

## 8.2 — Por que existe aquele canal no meio?

O espaço central não está ali por acaso.

Ele permite encaixar determinados circuitos integrados de duas fileiras de terminais, de modo que os pinos de lados opostos não fiquem conectados acidentalmente.

É um detalhe de construção que facilita muito a montagem.

**[INSERIR FIGURA 8.2 — Circuito integrado encaixado sobre o canal central]**

*Legenda:* O canal separa eletricamente os dois lados da placa.

## 8.3 — Organização também ajuda o circuito a funcionar

Procure usar cores diferentes para os fios de ligação, conhecidos como *jumpers*. Uma convenção útil é vermelho para o positivo e preto para a referência negativa (**GND**).

GND é a referência comum do circuito; **não significa necessariamente terra de proteção da instalação elétrica**.

Se possível, organize o percurso do sinal da esquerda para a direita. E não force os terminais: se um componente não encaixa com facilidade, verifique se o pino está torto ou se a placa é adequada.

**[INSERIR FIGURA 8.3 — Comparação entre montagem organizada e montagem confusa]**

*Legenda:* Fios organizados facilitam a conferência e a identificação de erros.

## 8.4 — Nossa primeira montagem

Vamos montar um LED com resistor em série usando uma bateria de 9 V.

Você vai precisar de uma protoboard, um LED comum, uma bateria de 9 V, fios e um **resistor de 470 Ω com potência nominal de pelo menos 1/4 W**.

Com a bateria desconectada:

1. Coloque uma extremidade do resistor em um grupo de cinco furos e ligue a outra extremidade ao barramento positivo.
2. Encaixe o terminal mais longo do LED (**ânodo**) no mesmo grupo de furos da primeira extremidade do resistor.
3. Conecte o terminal mais curto (**cátodo**) do LED ao barramento negativo, utilizando um jumper se necessário.
4. Confira se resistor e LED formam um único caminho entre positivo e negativo, **sem curto-circuito**.
5. Só então conecte a bateria e observe o LED.

O resistor limita a corrente e ajuda a proteger o LED. A identificação dos terminais pelo comprimento funciona em muitos LEDs novos, mas, se houver dúvida, confira o encapsulamento ou a documentação do componente.

**[INSERIR FIGURA 8.4 — Montagem correta de LED e resistor de 470 Ω em série com bateria de 9 V]**

*Legenda:* O resistor e o LED devem estar no mesmo caminho elétrico.

Se não acender, desconecte a bateria antes de corrigir a montagem. Confira a polaridade do LED e os grupos de furos utilizados.

## Para encerrar

A protoboard é o lugar onde as ideias começam a sair do papel. E errar uma ligação durante o aprendizado faz parte do processo — desde que você confira tudo antes de energizar.

No próximo capítulo, veremos como combinar resistores para obter valores diferentes.

Um abraço do seu professor,

**DIEGO GANDRA**
