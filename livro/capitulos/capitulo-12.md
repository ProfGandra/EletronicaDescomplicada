# Capítulo 12 — O COMPONENTE QUE ILUMINA E ENSINA – TUDO SOBRE LEDS


O LED (Diodo Emissor de Luz) é o primeiro componente que
todo mundo quer ligar. E não é por acidente: é gratificante
ver aquela luz acendendo!

[INSERIR FIGURA 12.1 AQUI]

      Figura 10.1: A Evolução da Iluminação. Linha do
       tempo: incandescente → fluorescente → LED.

Como o LED Realmente Funciona?

Dentro do LED existe um material semicondutor especial.
Quando os elétrons passam por ele, liberam energia na
forma de luz!

A Polaridade Correta

      Ânodo (+): Pino longo (corrente entra)

      Cátodo (-): Pino curto (corrente sai)

[INSERIR FIGURA 12.2 AQUI]

      Figura 10.2: Anatomia de um LED. Diagrama em
       corte mostrando ânodo, cátodo, material
       semicondutor.

Os Três Segredos para um LED Feliz


   1. Tensão de Forward (Vf): Cada cor precisa de uma
       tensão mínima

          o   Vermelho: 1,8V - 2,2V

          o   Verde/Amarelo: 2,0V - 2,4V

          o   Azul/Branco: 3,0V - 3,6V

   2. Corrente Ideal (If): 15mA a 25mA para LEDs padrão

   3. Resistor Limitador: Sem ele, morte na certa!

[INSERIR FIGURA 12.3 AQUI]

      Figura 10.3: Tabela de Especificações. Cores e faixas
       de tensão.

Calculando o Resistor para LED

Para fonte 12V e LED branco (Vf=3,2V, If=20mA):

R = (12V - 3,2V) / 0,020A = 440Ω → usar 470Ω

[INSERIR FIGURA 12.4 AQUI]

      Figura 10.4: Cálculo do Resistor Passo a
       Passo. Infográfico do cálculo.

LEDs em Série e Paralelo

Série: Soma as tensões de forward. Bom para fontes de
tensão mais alta.

Paralelo: Cada LED precisa de seu PRÓPRIO resistor!


[INSERIR FIGURA 12.5 AQUI]

      Figura 10.5: Associação de LEDs. Correto (série e
       paralelo com resistores individuais) vs errado
       (paralelo com um resistor).

Um abraço do seu professor,

Diego G. Gandra

---

*Edição em revisão: conferir os esquemas e as referências de imagens com o arquivo Word integral antes da prova gráfica.*
