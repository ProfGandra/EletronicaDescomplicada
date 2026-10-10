# Capítulo 17 — Reguladores de tensão: uma alimentação mais estável

Olá, tudo bem com você?

Imagine que um circuito precise de **5 V** para funcionar, mas a fonte disponível forneça **12 V**. Podemos simplesmente ligar um no outro?

Claro que não!

Precisamos de uma solução que entregue a tensão apropriada e suporte a corrente exigida pelo circuito. Uma das opções é o **regulador de tensão**.

## 17.1 — Relembrando o caminho da energia

No Capítulo 3, vimos que muitas fontes comerciais recebem energia da rede elétrica e fornecem tensão contínua aos nossos equipamentos.

Dependendo do projeto, a conversão pode envolver transformação ou chaveamento, retificação, filtragem e regulação. Não existe uma única sequência interna obrigatória para todas as fontes modernas.

Aqui vamos trabalhar **apenas com a saída de fontes DC comerciais e seguras**, sem abrir equipamentos ligados à rede.

**[INSERIR FIGURA 17.1 — Diagrama conceitual de fonte AC/DC comercial e saída contínua regulada]**

## 17.2 — Conhecendo a família 78XX

Reguladores lineares clássicos da família **78XX** são conhecidos por fornecer tensões de saída fixas. Alguns exemplos são:

- **7805:** 5 V.
- **7812:** 12 V.
- **7824:** 24 V.

O número ajuda a identificar a tensão nominal, mas isso não dispensa a consulta à **folha de dados**: tensão de entrada, corrente, dissipação, capacitores recomendados e pinagem dependem do componente e do fabricante.

**[INSERIR FIGURA 17.2 — Regulador 7805 com identificação dos terminais conforme folha de dados]**

## 17.3 — Por que o regulador esquenta?

Um regulador linear reduz a tensão dissipando parte da energia na forma de calor.

Uma aproximação útil é:

\[
P_{dissipada}=(V_{entrada}-V_{saída})\times I_{carga}
\]

Se a entrada for de **12 V**, a saída de **5 V** e a corrente de **1 A**, teremos:

\[
P=(12-5)\times1=7\ W
\]

Sete watts de calor em um componente pequeno são muita coisa! Esse exemplo é um **alerta de projeto**, não uma sugestão de montagem: a operação pode exigir dissipador e pode ultrapassar os limites térmicos do regulador escolhido.

**[INSERIR FIGURA 17.3 — Comparação entre regulador linear sem dissipador e com dissipador]**

## 17.4 — Regulador linear ou conversor chaveado?

Reguladores lineares são úteis em diversas situações, mas podem desperdiçar bastante energia quando a diferença entre entrada e saída é grande.

Conversores chaveados, como os módulos **buck**, podem oferecer eficiência maior em muitas aplicações. A escolha depende da tensão, da corrente, do ruído permitido, do custo e da complexidade do circuito.

## Para encerrar

Uma boa alimentação não depende apenas de obter a tensão desejada. Precisamos considerar corrente, aquecimento e limites dos componentes.

No próximo capítulo, vamos conhecer os circuitos integrados, que reúnem muitos elementos eletrônicos em um único encapsulamento.

Um abraço do seu professor,

**DIEGO GANDRA**
