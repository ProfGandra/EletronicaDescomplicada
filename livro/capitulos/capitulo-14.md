# Capítulo 14 — O INTERRUPTOR CONTROLADO POR ELETRICIDADE – TRANSISTORES BJT


O transistor é provavelmente o componente mais
importante da eletrônica moderna. É graças a ele que
temos computadores, celulares e toda a eletrônica
inteligente!

[INSERIR FIGURA 14.1 AQUI]

      Figura 12.1: A Revolução do Transistor. Válvula
       gigante vs transistor pequeno.

A Analogia Perfeita: A Torneira com Alavanca

Uma pequena corrente na base controla uma corrente
muito maior entre o coletor e o emissor.

[INSERIR FIGURA 14.2 AQUI]

      Figura 12.2: Analogia da Torneira. Alavanca
       pequena controlando grande fluxo.

Os Três Terminais do BJT

   1. Base (B): O "controle" - corrente pequena aqui

   2. Coletor (C): Entrada da corrente principal

   3. Emissor (E): Saída da corrente principal

[INSERIR FIGURA 14.3 AQUI]


      Figura 12.3: Anatomia de um Transistor
       BJT. Símbolo, encapsulamento e pinagem.

Modos de Operação

Corte (Chave Aberta): Sem corrente na base → transistor
desligado
Saturação (Chave Fechada): Corrente suficiente na base
→ transistor ligado

[INSERIR FIGURA 14.4 AQUI]

      Figura 12.4: Modos de Operação. LED apagado vs
       LED aceso.

Calculando o Resistor de Base

R_B = (V_fonte - 0,7V) / I_B

Onde I_B = I_C / β (β é o ganho, geralmente 100-300)

Exemplo: Controlando Motor com Arduino

Arduino (5V, 20mA) controlando motor 12V/500mA:

I_B = 0,5A / 100 = 0,005A (5mA)
R_B = (5V - 0,7V) / 0,005A = 860Ω → usar 1kΩ

[INSERIR FIGURA 14.5 AQUI]

      Figura 12.5: Controlando Carga de Alta
       Potência. Diagrama do circuito completo.

Diodo de Proteção: ESSENCIAL!


Para cargas indutivas (motores, relés), use um diodo em
paralelo com a carga para proteger o transistor!

[INSERIR FIGURA 14.6 AQUI]

     Figura 12.6: Proteção com Diodo. Diagrama
      mostrando o diodo de livre circulação.

Um abraço do seu professor,

Diego G. Gandra

---

*Edição em revisão: conferir os esquemas e as referências de imagens com o arquivo Word integral antes da prova gráfica.*
