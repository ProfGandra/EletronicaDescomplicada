# Capítulo 9 — Juntos e misturados: associação de resistores

Olá, tudo bem com você?

Imagine que você precisa de um resistor de 300 Ω, mas só encontrou resistores de 100 Ω na sua caixinha. E agora?

Antes de sair procurando outro componente, vale conhecer um recurso muito útil: **associar resistores**.

Dependendo da ligação, conseguimos aumentar ou diminuir a resistência equivalente de um circuito.

## 9.1 — Resistores em série

Quando ligamos resistores um depois do outro, sem ramificações entre eles, temos uma **associação em série**.

Nesse caso, a mesma corrente passa por todos os resistores, e a resistência equivalente é a soma dos valores:

\[
R_{eq}=R_1+R_2+R_3+\cdots
\]

Por exemplo, três resistores de 100 Ω em série resultam em:

\[
R_{eq}=100+100+100=300\ \Omega
\]

Pronto! Encontramos o valor de que precisávamos.

**[INSERIR FIGURA 9.1 — Três resistores de 100 Ω associados em série]**

*Legenda:* Na associação em série, as resistências se somam.

## 9.2 — Resistores em paralelo

Agora imagine dois resistores conectados entre os **mesmos dois pontos** do circuito. Temos uma associação em paralelo.

Nesse arranjo, a tensão nos resistores é a mesma, mas a corrente pode se dividir entre os caminhos.

Para calcular a resistência equivalente:

\[
\frac{1}{R_{eq}}=\frac{1}{R_1}+\frac{1}{R_2}+\frac{1}{R_3}+\cdots
\]

Se houver apenas dois resistores, podemos usar uma forma mais prática:

\[
R_{eq}=\frac{R_1R_2}{R_1+R_2}
\]

Dois resistores de 100 Ω em paralelo equivalem a:

\[
R_{eq}=\frac{100\times100}{100+100}=50\ \Omega
\]

Percebeu? Em paralelo, a resistência equivalente fica **menor do que a menor resistência individual**, considerando resistores de valores positivos.

**[INSERIR FIGURA 9.2 — Dois resistores de 100 Ω associados em paralelo]**

*Legenda:* A corrente encontra mais de um caminho, reduzindo a resistência equivalente.

## 9.3 — E quando o circuito mistura tudo?

Alguns circuitos apresentam associações em série e em paralelo ao mesmo tempo. Chamamos isso de **associação mista**.

A estratégia é identificar pequenos grupos que você já sabe calcular, substituí-los por suas resistências equivalentes e repetir o processo.

Por exemplo: dois resistores de 100 Ω em paralelo equivalem a 50 Ω. Se esse conjunto estiver em série com outro resistor de 150 Ω, teremos:

\[
R_{eq}=50+150=200\ \Omega
\]

**[INSERIR FIGURA 9.3 — Associação mista com dois resistores de 100 Ω em paralelo e um de 150 Ω em série]**

*Legenda:* Simplifique o paralelo e depois some o resistor em série.

## 9.4 — Hora de conferir com o multímetro

Com o circuito **desconectado de qualquer fonte**, monte duas associações: dois resistores de 100 Ω em série e os mesmos dois em paralelo.

Meça a resistência equivalente de cada montagem. Compare com os valores calculados.

Talvez as leituras não sejam exatamente 200 Ω e 50 Ω. Isso acontece porque resistores reais possuem tolerâncias e o próprio instrumento tem limites de precisão.

## Para encerrar

Associação de resistores não é apenas um exercício de matemática. É uma ferramenta para adaptar valores, distribuir correntes e construir circuitos.

No próximo capítulo, vamos aproveitar uma associação em série para criar algo muito útil: um **divisor de tensão**.

Um abraço do seu professor,

**DIEGO GANDRA**
