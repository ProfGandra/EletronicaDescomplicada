# APÊNDICE F — GUIA DE SOLUÇÃO DE PROBLEMAS
(TROUBLESHOOTING)

Problema: Nada funciona quando ligo o circuito

Verifique:

   1. A bateria/fonte está ligada e com carga?

   2. Os componentes estão inseridos corretamente na
      protoboard?

   3. A polaridade está correta (LEDs, capacitores, diodos)?

   4. Há continuidade nos fios (teste com multímetro)?

Problema: LED não acende

Verifique:

   1. O resistor limitador está presente e com valor
      correto?

   2. O LED está na polaridade correta (longo = +)?

   3. A tensão da fonte é maior que a Vf do LED?

   4. O LED não está queimado (teste com outro)?

Problema: Componente esquenta muito

Verifique:

   1. A potência dissipada está dentro da especificação?

   2. O resistor tem a potência nominal correta?

   3. Há curto-circuito no circuito?

   4. A corrente está muito alta?

Problema: Transistor não chaveia corretamente

Verifique:

   1. A corrente de base é suficiente (I_B = I_C / β)?

   2. O resistor de base tem o valor correto?

   3. A polaridade do transistor está correta (NPN vs PNP)?

   4. O diodo de proteção está presente para cargas
       indutivas?

Problema: Arduino não programa

Verifique:

   1. A porta USB correta está selecionada no IDE?

   2. A placa correta está selecionada (Arduino Uno)?

   3. O driver do Arduino está instalado?

   4. Há curto-circuito nos pinos do Arduino?

[INSERIR FIGURA F.1 AQUI]

      Figura F.1: Fluxograma de Diagnóstico. Árvore de
       decisão para solução de problemas comuns.

ÍNDICE REMISSIVO

A
Alicate, 20-21, 76
Amplificador operacional, 48-49, 67
Ânodo, 31, 56, 88
Arduino, 50-56, 64-66, 70-73, 80-85

B
Base (transistor), 60-61, 89
Bateria, 9, 14-15, 27, 78
BJT (transistor bipolar), 60-65, 89

C
Capacitância, 39, 87
Capacitor, 37-44, 87-89

       associação, 41-43

       carga/descarga, 38-40

       constante de tempo, 39-40, 93
        Cátodo, 31, 56, 88
        CI (circuito integrado), 47-53, 67-69
        Código de cores, 23-24, 77-78, 92
        Coletor (transistor), 60-61, 89
        Constante de tempo (τ), 39-40, 93

        Continuidade (função), 18-19, 77
        Corrente elétrica (I), 8-11, 13-14, 77-78

D
Datasheet, 52, 69
Diodo, 56-60, 88-89

       de proteção (flyback), 35, 63

       retificador, 57

       Schottky, 57, 89

       Zener, 57, 89
        DIP (encapsulamento), 49-50, 69
        Display LCD, 80, 83
        Dissipador de calor, 42, 68
        Divisor de tensão, 28-30, 59-60, 93

E
Efeito Joule, 14, 38, 88
Eletromagnetismo, 45-46, 63-64
Emissor (transistor), 60-61, 89
EPI (Equipamento de Proteção Individual), 74-75, 90
ESD (Descarga Eletrostática), 74, 90

F
Farad (F), 38, 87
Flip-flop, 54-56, 90

       D, 55

       JK, 54-55

       SR, 54
        Fonte de alimentação, 41-44, 66-68
        Fusível, 19, 77

G
Ganho (β), 35, 62, 89
GND (terra), 14, 18, 20, 77

H
Hold time, 55-56, 90

I
I₂C, 80, 83

K
Kirchhoff (leis), 33-34, 87

       lei das correntes, 33-34

       lei das tensões, 33-34

L
LDR, 29, 46, 60, 71
LED, 10-11, 31-32, 56-57, 61-62
Lei de Ohm, 13-16, 27-28, 77-78, 87
LM35 (sensor), 46-47, 71
LM741 (amplificador), 48-49, 67

M
Microcontrolador, 50-51, 70-71
Multímetro, 17-20, 77-78

N
NE555 (timer), 48, 67-68

O
Ohm (Ω), 9-10, 14, 77
Osciloscópio, 40, 43, 76

P
PIV (Tensão Reversa de Pico), 58, 89
Potência elétrica (P), 13-15, 37-38, 88
Potenciômetro, 28, 46, 72
Protoboard, 20-22, 77-78
PWM (Modulação por Largura de Pulso), 52, 71, 89

R
Regulador de tensão, 41-43, 66-68

       7805, 41-43, 66-68

       LDO, 42, 68
        Relé, 45-46, 63-65, 71
        Resistência (R), 9-10, 14, 77
        Resistor, 9-10, 23-25, 37-38

       associação, 25-27, 58-59, 88

       código de cores, 23-24, 77-78

       potência, 13-15, 37-38

       SMD, 24, 77-78

S
Segurança, 74-75, 90-91
Semicondutor, 31, 56, 61
Sensor, 46-47, 70-71
Setup time, 55-56, 90
SMD (Surface Mount Device), 24, 50, 69, 77-78

T
Tabela verdade, 53-54, 89
Tensão elétrica (V), 8-11, 13-14, 77
Tinkercad, 15, 19, 22, 28, 35, 40, 43, 50, 53, 58, 65, 79
Transistor, 35-36, 60-65, 89

V
Vf (Tensão de Forward), 32, 56-57, 61, 89

Ω
Ω (Ohm), 9-10, 14, 77

μ
μF (microfarad), 38, 87

[INSERIR FIGURA Z.1 AQUI]

     Figura Z.1: Certificado de Conclusão. Modelo de
      certificado para o leitor que completar todos os
      projetos.

CONSIDERAÇÕES FINAIS

Parabéns! Você chegou ao final deste livro. Mas, na verdade,
este não é o fim - é apenas o começo da sua jornada na
eletrônica.

Você aprendeu:

      Os fundamentos de tensão, corrente e resistência

      Como usar instrumentos de medição

      A montar circuitos na protoboard

      As leis que governam os circuitos elétricos

      Como funcionam resistores, capacitores, diodos, LEDs
       e transistores

      A controlar relés e outros atuadores

      A projetar fontes de alimentação

      A programar microcontroladores como o Arduino

      E, finalmente, a integrar tudo em um projeto
       completo

Agora, o céu é o limite. Use seu conhecimento para:

      Consertar equipamentos quebrados

      Criar seus próprios projetos

      Automatizar tarefas do dia a dia

      Ensinar outras pessoas

      Quem sabe, construir uma carreira na área

Lembre-se sempre: os melhores engenheiros são aqueles
que continuam curiosos, que não têm medo de errar e que
aprendem com cada erro.

Continue praticando. Continue construindo. Continue
compartilhando.

E nunca, nunca se esqueça: a fumaça é a única coisa que
não tem volta!   😄
[INSERIR FIGURA Z.2 AQUI]

      Figura Z.2: O Autor na Bancada (Epílogo). Foto do
       autor sorrindo em sua bancada, rodeado de projetos
       concluídos.

Um grande abraço e sucesso na sua jornada!

Diego G. Gandra

FIM DO LIVRO



PROMPTS OTIMIZADOS PARA NANO BANANA

LIVRO: ELETRÔNICA DC DESCOMPLICADA

---
*Apêndice transcrito do manuscrito original para conferência com as tabelas do DOCX antes da prova gráfica.*
