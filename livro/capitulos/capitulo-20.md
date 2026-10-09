# Capítulo 20 — MEMÓRIA E SEQUÊNCIA – FLIP-FLOPS Circuitos sequenciais têm memória! Eles lembram do

passado e tomam decisões baseadas nele.

[INSERIR FIGURA 19.1 AQUI]

      Figura 17.1: Combinacional vs Sequencial. Circuito
       sem memória vs com realimentação.

O Flip-Flop SR (Set-Reset)

O mais simples dos flip-flops:

      S (Set): Coloca saída em 1

      R (Reset): Coloca saída em 0

      S=R=0: Mantém o estado anterior

[INSERIR FIGURA 19.2 AQUI]

      Figura 17.2: Flip-Flop SR com Portas
       NAND. Diagrama de duas portas cruzadas.

O Flip-Flop JK: O Versátil

Resolve o problema da condição proibida do SR e
adiciona toggle (inverte a cada clock).


            CL
J       K          Q
            K


                   Manté
0       0   ↑
                   m


0       1   ↑      0


1       0   ↑      1


1       1   ↑      Toggle

[INSERIR FIGURA 19.3 AQUI]

       Figura 17.3: Flip-Flop JK em Toggle. Diagrama de
        tempo mostrando inversão a cada clock.

O Flip-Flop D (Data): O Mais Usado

Amostra o valor da entrada D na borda do clock e copia
para a saída Q. Perfeito para transferir dados!

[INSERIR FIGURA 19.4 AQUI]

       Figura 17.4: Flip-Flop D. Diagrama de tempo
        mostrando captura de dados.

Aplicações Práticas


   1. Registradores de Deslocamento: Cadeias de flip-
       flops para comunicação serial

   2. Contadores: Flip-flops em cascata contam eventos!

   3. Debouncing de Botões: Elimina tremores mecânicos

[INSERIR FIGURA 19.5 AQUI]

      Figura 17.5: Contador com Flip-Flops. Diagrama de
       contador de 4 bits.

Setup e Hold Time: Os Tempos Críticos

      Setup Time: Tempo que D deve estar estável ANTES
       do clock

      Hold Time: Tempo que D deve permanecer estável
       DEPOIS do clock

Violar esses tempos causa comportamento imprevisível!

[INSERIR FIGURA 19.6 AQUI]

      Figura 17.6: Setup e Hold Time. Diagrama temporal
       mostrando os tempos críticos.

Um abraço do seu professor,

Diego G. Gandra

---

*Edição em revisão: conferir os esquemas, códigos e referências de imagens com o arquivo Word integral antes da prova gráfica.*
