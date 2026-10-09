# Capítulo 4 — A natureza da resistência e o resistor

*Capítulo 3 na nova sequência — capítulo 3 no manuscrito original.*

No capítulo anterior, aprendemos a importância de trabalhar com segurança. Agora vamos voltar à pergunta que interessa à nossa bancada: como controlar a corrente de um circuito? O que impede que uma fonte danifique um componente delicado? É aqui que entramos no terreno da resistência e do seu principal representante físico: o resistor.

## A resistência como fenômeno físico

Antes de ser um componente com valor comercial, a resistência é uma propriedade elétrica dos materiais. Imagine os elétrons se deslocando em um condutor metálico. Nesse movimento, eles interagem com a estrutura do material, com suas vibrações e imperfeições. Essas interações dificultam o transporte ordenado das cargas e ajudam a explicar a resistência elétrica.

Sua unidade é o **ohm (Ω)**.

**[INSERIR FIGURA 3.1 — Resistência em um condutor]**

*Legenda sugerida:* Representação didática das interações dos elétrons de condução com a estrutura de um material metálico.

*Referência de produção:* aproveitar a descrição microscópica do bloco de imagens correspondente ao capítulo original; evitar representar átomos como obstáculos macroscópicos rígidos.

## O resistor: o componente de controle

Se a resistência é o fenômeno, o resistor é uma ferramenta que colocamos no circuito para obter um valor de resistência conhecido, dentro de uma tolerância.

Ele funciona como um “pedágio” no caminho da corrente — guardadas as limitações da analogia. Se queremos acender um LED ligado a uma fonte de 9 V, por exemplo, utilizamos um resistor em série para **limitar a corrente**. O resistor não “segura o excesso de tensão” sozinho: a tensão da fonte se distribui entre os elementos do circuito conforme suas características.

Na bancada, você encontrará resistores de filme de carbono, filme metálico e outros tipos, com diferentes potências e tolerâncias.

**[INSERIR FIGURA 3.2 — Resistor real e símbolo elétrico]**

*Legenda sugerida:* Resistor axial e seus símbolos esquemáticos usuais (retangular e zigue-zague).

## Decodificando o componente: código de cores

Como o corpo de muitos resistores é pequeno demais para trazer o valor escrito por extenso, a indústria utiliza faixas coloridas para indicar o valor nominal e a tolerância.

Nos resistores de **quatro faixas**, as duas primeiras representam os algarismos significativos, a terceira indica o multiplicador e a quarta, a tolerância.

| Cor | Algarismo | Multiplicador |
|---|---:|---:|
| Preto | 0 | ×1 |
| Marrom | 1 | ×10 |
| Vermelho | 2 | ×100 |
| Laranja | 3 | ×1.000 |
| Amarelo | 4 | ×10.000 |
| Verde | 5 | ×100.000 |
| Azul | 6 | ×1.000.000 |
| Violeta | 7 | ×10.000.000 |
| Cinza | 8 | ×100.000.000 |
| Branco | 9 | ×1.000.000.000 |

A faixa **dourada** normalmente indica tolerância de **±5%** e a **prateada**, de **±10%**, quando usadas na posição de tolerância. Resistores de cinco ou seis faixas seguem regras adicionais.

**Exemplo:** marrom, preto, vermelho e dourado = 10 × 100 = **1.000 Ω**, ou **1 kΩ**, com tolerância de **±5%**. Na prática, isso significa que o valor pode estar entre **950 Ω e 1.050 Ω**.

**[INSERIR FIGURA 3.3 — Código de cores dos resistores]**

*Legenda sugerida:* Identificação das faixas de um resistor de quatro bandas, com exemplo de 1 kΩ ±5%.

## Atividade: a prática da leitura

Pegue um resistor da sua caixa de componentes. Identifique a faixa de tolerância, geralmente mais afastada das demais, e deixe-a à direita. Leia as faixas da esquerda para a direita e consulte a tabela.

Depois, com o componente **fora de um circuito energizado**, confira o valor usando a função de resistência do multímetro. Uma pequena diferença em relação ao valor nominal é normal e pode estar dentro da tolerância.

Não se esqueça de outro detalhe: **resistor também tem limite de potência**. Não basta acertar o valor em ohms; é preciso escolher um componente capaz de dissipar o calor produzido no circuito. Vamos calcular isso nos próximos capítulos.

Agora que conhecemos tensão, corrente e resistência, estamos prontos para unir essas ideias em uma ferramenta matemática fundamental: a **Lei de Ohm**.

---

### Registro editorial

- Mantida a linguagem de conversa com o estudante e a analogia do “pedágio”.
- Refinada a explicação microscópica da resistência.
- Corrigida a afirmação de que o resistor simplesmente “segura excesso de tensão”.
- Incluídas tabela de cores, exemplo numérico e verificação com multímetro.
- **Referências de inserção das três imagens preservadas no próprio capítulo.**
- A correspondência exata das imagens com o DOCX ainda requer conferência visual.


---

*Edição em revisão: conferir esquemas, tabelas e referências de imagens com o arquivo Word integral antes da prova gráfica.*
