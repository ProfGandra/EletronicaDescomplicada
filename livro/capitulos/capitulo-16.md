# Capítulo 16 — Relés: quando o magnetismo aciona uma chave

Olá, tudo bem com você?

No capítulo anterior, vimos como um transistor pode controlar uma carga. Agora imagine uma chave que você consegue acionar eletricamente, sem precisar apertar um botão.

Essa é a ideia por trás do **relé eletromecânico**.

## 16.1 — Da corrente ao movimento

Quando a corrente passa por uma bobina, ela produz um campo magnético. Em um relé, esse campo movimenta uma peça metálica que altera a posição de contatos elétricos.

É como se tivéssemos uma pequena chave acionada por um eletroímã.

**[INSERIR FIGURA 16.1 — Relé eletromecânico em corte, com bobina e contatos]**

## 16.2 — O que significam COM, NA e NF?

Muitos relés possuem contatos identificados como:

- **COM:** terminal comum.
- **NA:** normalmente aberto; sem energizar a bobina, esse contato fica aberto em relação ao comum.
- **NF:** normalmente fechado; sem energizar a bobina, esse contato fica fechado em relação ao comum.

Ao energizar a bobina, a posição dos contatos muda.

**[INSERIR FIGURA 16.2 — Estados dos contatos NA e NF com a bobina desligada e ligada]**

## 16.3 — Um circuito controlando outro

Uma vantagem do relé é a possibilidade de manter **separados eletricamente** o circuito da bobina e o circuito dos contatos, respeitando as especificações de isolamento do dispositivo.

Mas isso não significa que qualquer relé seja adequado para qualquer tensão ou corrente. É preciso verificar os limites da bobina, dos contatos e do circuito de acionamento.

Um microcontrolador normalmente não deve alimentar uma bobina diretamente por uma saída digital. Podemos utilizar um estágio de acionamento com transistor e um diodo de proteção adequado à bobina DC.

**[INSERIR FIGURA 16.3 — Relé DC acionado por transistor com diodo de proteção]**

## 16.4 — Onde encontramos relés?

Relés aparecem em sistemas de automação, acionamento de motores, alarmes e equipamentos de controle.

Para nossas experiências, vamos considerar **cargas didáticas de baixa tensão**. Trabalhos com circuitos conectados à rede elétrica exigem procedimentos, equipamentos e profissionais qualificados; não fazem parte das montagens propostas aqui.

## Para encerrar

O relé nos mostra como eletricidade e magnetismo podem produzir movimento e comandar contatos.

No próximo capítulo, voltaremos à alimentação dos circuitos para entender como manter uma tensão mais estável.

Um abraço do seu professor,

**DIEGO GANDRA**
