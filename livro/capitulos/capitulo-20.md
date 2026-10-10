# Capítulo 20 — Flip-flops: quando o circuito precisa lembrar

Olá, tudo bem com você?

Até aqui, as portas lógicas produziram saídas de acordo com as entradas daquele instante. Mas imagine um circuito que precisa lembrar se um botão foi acionado.

Para isso, precisamos de **memória**. E um dos blocos fundamentais dessa ideia é o **flip-flop**.

## 20.1 — Combinacional ou sequencial?

Um circuito **combinacional** depende dos valores atuais de suas entradas. Já um circuito **sequencial** também depende de um estado armazenado anteriormente.

Pense em um interruptor eletrônico que continua ligado depois que você solta o botão. Ele precisa guardar a informação de que recebeu o comando.

**[INSERIR FIGURA 20.1 — Comparação entre circuito combinacional e sequencial]**

## 20.2 — A memória mais simples: SR

Um circuito de memória **SR** utiliza comandos de *Set* (definir) e *Reset* (reiniciar).

Na versão com portas **NOR** e entradas ativas em nível alto:

- S = 1 e R = 0: a saída Q passa para 1.
- S = 0 e R = 1: Q passa para 0.
- S = 0 e R = 0: o estado anterior é mantido.
- S = 1 e R = 1: condição não permitida para essa configuração.

Atenção: uma implementação com portas **NAND** costuma usar entradas ativas em nível baixo, com tabela diferente. Não podemos misturar as duas versões.

**[INSERIR FIGURA 20.2 — Latch SR com portas NOR e tabela de estados]**

## 20.3 — Flip-flops D e JK

O **flip-flop D** captura o estado da entrada D em um evento de clock, de acordo com o tipo de componente. É muito utilizado em registradores e armazenamento de dados.

O **JK** permite operações de definir, reiniciar, manter e alternar o estado (*toggle*). Em uma versão acionada na borda do clock, J = K = 1 faz a saída alternar a cada evento válido.

**[INSERIR FIGURA 20.3 — Flip-flop D e exemplo de sinais de clock]**

## 20.4 — Por que o tempo importa?

Em circuitos sincronizados, os dados precisam permanecer estáveis durante certos intervalos em torno do evento de clock.

Chamamos esses intervalos de **tempo de preparação (*setup*)** e **tempo de retenção (*hold*)**. Desrespeitá-los pode produzir funcionamento imprevisível.

**[INSERIR FIGURA 20.4 — Diagrama temporal com setup e hold]**

## 20.5 — Onde usamos essa memória?

Flip-flops aparecem em contadores, registradores e circuitos sequenciais. Eles ajudam equipamentos digitais a acompanhar eventos e guardar estados.

## Para encerrar

Agora você já sabe que a eletrônica digital não precisa apenas decidir: ela também pode lembrar.

No próximo capítulo, vamos conectar esses circuitos ao mundo real por meio de sensores e atuadores.

Um abraço do seu professor,

**DIEGO GANDRA**
