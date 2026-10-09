# Capítulo 15 — RELÉS E ELETROMAGNETISMO –

> **Nota editorial:** capítulo 14 do manuscrito original, deslocado para a posição 15 na sequência pedagógica. Texto-base preservado para revisão comparativa. As referências de figuras e fórmulas devem ser conferidas com o DOCX antes da publicação impressa.

CONTROLE DE ALTA POTÊNCIA

Os relés usam eletromagnetismo para controlar
circuitos de alta potência com poucos miliampères!

[INSERIR FIGURA 13.1 AQUI]

     Figura 13.1: O Poder do
      Eletromagnetismo. Sequência: bateria → campo
      magnético → movimento.

O Princípio do Eletromagnetismo

Quando corrente flui por um fio, ela cria um campo
magnético. Enrolando o fio em bobina e colocando
núcleo de ferro, criamos um eletroímã!

Anatomia de um Relé

  1. Bobina: Cria o campo magnético

  2. Contatos: Chaves mecânicas acionadas pelo
      magnetismo

Vantagens: Isolamento elétrico total entre controle e
carga!

[INSERIR FIGURA 13.2 AQUI]


     Figura 13.2: Dentro de um Relé. Diagrama em corte
      mostrando bobina, núcleo e contatos.

Tipos de Contatos: NA, NF e COM

     COM (Comum): Terminal central

     NA (Normalmente Aberto): Fecha quando
      energizado

     NF (Normalmente Fechado): Abre quando
      energizado

[INSERIR FIGURA 13.3 AQUI]

     Figura 13.3: Tipos de Contatos. Diagrama
      mostrando os três terminais.

Circuito de Acionamento

Use um transistor para acionar o relé a partir de um
Arduino:

[INSERIR FIGURA 13.4 AQUI]

     Figura 13.4: Acionamento com Transistor. Circuito
      completo com diodo de proteção.

Aplicações Práticas

     Controle de lâmpadas 110V/220V

     Motores elétricos

     Sistemas de segurança


     Automação residencial

[INSERIR FIGURA 13.5 AQUI]

     Figura 13.5: Controle de Lâmpada 110V. Diagrama
      mostrando isolamento completo.

Um abraço do seu professor,

Diego G. Gandra

---

**Ponto de controle editorial:** verificar todas as chamadas de figura e sua numeração após a reorganização; validar cálculos, esquemas e exemplos antes de impressão.
