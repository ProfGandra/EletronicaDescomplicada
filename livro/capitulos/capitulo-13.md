# Capítulo 13 — LEDs: quando a eletrônica acende

Olá, tudo bem com você?

Poucas coisas são tão satisfatórias nas primeiras aulas de eletrônica quanto montar um circuito e ver um LED acender. É um resultado simples, mas que mostra que a corrente está passando por onde planejamos.

O **LED** é um diodo emissor de luz. Assim como os diodos do capítulo anterior, ele tem polaridade e precisa funcionar dentro de limites definidos.

## 13.1 — De onde vem a luz?

Em um LED, a passagem de corrente em polarização direta provoca a emissão de luz no material semicondutor.

A cor depende das características desse material. Por isso, LEDs de cores diferentes podem apresentar **quedas de tensão direta diferentes**.

**[INSERIR FIGURA 13.1 — LED com seus terminais e região emissora identificados]**

## 13.2 — Qual lado é o positivo?

Em muitos LEDs comuns, o terminal mais longo corresponde ao **ânodo** e o mais curto ao **cátodo**. Uma face achatada no encapsulamento também costuma indicar o lado do cátodo.

Mas cuidado: terminais já cortados e modelos diferentes podem dificultar essa identificação. Quando houver dúvida, consulte as informações do componente.

**[INSERIR FIGURA 13.2 — Identificação do ânodo e do cátodo em LED comum]**

## 13.3 — O resistor que protege o LED

Um LED não deve ser conectado diretamente a uma fonte de tensão sem um circuito apropriado para limitar a corrente.

Para um LED comum com resistor em série, usamos:

\[
R=\frac{V_{fonte}-V_f}{I}
\]

Aqui, \(V_f\) é a queda de tensão direta do LED e \(I\) é a corrente desejada.

Imagine uma fonte de **12 V**, um LED branco com \(V_f\) aproximada de **3,2 V** e uma corrente de projeto de **20 mA**:

\[
R=\frac{12-3,2}{0,020}=440\ \Omega
\]

Podemos escolher o valor comercial de **470 Ω**, que fornece uma corrente um pouco menor. A potência dissipada nesse resistor fica próxima de **0,17 W**; portanto, um resistor de **1/4 W** atende ao cálculo nominal, desde que respeitadas as condições reais de operação.

Esses valores são exemplos, não regras universais. A corrente admissível e a queda de tensão dependem do LED utilizado.

**[INSERIR FIGURA 13.3 — LED branco e resistor de 470 Ω em série com fonte de 12 V]**

## 13.4 — Vários LEDs no mesmo circuito

Em **série**, os LEDs compartilham a mesma corrente e suas quedas de tensão se somam. Precisamos garantir que a fonte tenha tensão suficiente e que exista limitação de corrente adequada.

Em **paralelo**, LEDs não necessariamente dividem a corrente de maneira igual. Em montagens simples, a escolha mais segura é usar **um resistor limitador para cada ramo de LED**.

**[INSERIR FIGURA 13.4 — LEDs em série e em ramos paralelos com resistores individuais]**

## Hora de praticar

Monte um LED com resistor em série na protoboard, utilizando uma fonte didática adequada. Antes de ligar, confira a polaridade e o valor do resistor.

Se não acender, desligue a fonte e verifique as conexões. Não é preciso descobrir o erro pelo cheiro de componente queimado!

## Para encerrar

Um LED ensina muita coisa de uma vez: polaridade, corrente, resistência e potência.

No próximo capítulo, vamos conhecer um componente que não emite luz, mas consegue armazenar energia em um campo elétrico: o capacitor.

Um abraço do seu professor,

**DIEGO GANDRA**
