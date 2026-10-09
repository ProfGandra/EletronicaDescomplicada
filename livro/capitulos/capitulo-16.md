# Capítulo 16 — A FONTE ESTÁVEL – REGULADORES DE TENSÃO


Como transformamos os 110V/220V da tomada nos
estáveis 5V ou 3,3V que nossos circuitos precisam?

[INSERIR FIGURA 16.1 AQUI]

     Figura 14.1: A Jornada da Energia. Diagrama da
      transformação AC → DC estável.

Os Três Estágios de uma Fonte

  1. Transformação: Reduz a tensão alta (220V → 12V
      AC)

  2. Retificação: Converte AC em DC pulsante

  3. Regulação: Estabiliza a tensão

[INSERIR FIGURA 16.2 AQUI]

     Figura 14.2: Os Três Estágios. Formas de onda em
      cada estágio.

O Herói: Regulador 78XX

     7805 → 5V

     7812 → 12V

     7824 → 24V


[INSERIR FIGURA 16.3 AQUI]

      Figura 14.3: O Regulador 7805. Pinagem e símbolo.

Circuito Completo do 7805

[INSERIR FIGURA 16.4 AQUI]

      Figura 14.4: Circuito Completo do 7805. Esquema
       com capacitores de estabilização.

Cuidado com a Dissipação de Calor!

P_dissipada = (V_in - V_out) × I_carga

Exemplo: 12V → 5V, 1A = 7 Watts de calor!

[INSERIR FIGURA 16.5 AQUI]

      Figura 14.5: Dissipação de Calor. Sem dissipador vs
       com dissipador.

Um abraço do seu professor,

Diego G. Gandra

---

*Edição em revisão: conferir os esquemas e as referências de imagens com o arquivo Word integral antes da prova gráfica.*
