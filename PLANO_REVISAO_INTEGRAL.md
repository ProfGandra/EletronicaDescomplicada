# Plano de revisão integral e sequência de aprendizagem

**Obra:** Eletrônica DC Descomplicada — Diego Guimarães Gandra  
**Fonte:** manuscrito `ELETRÔNICA DC DESCOMPLICADA_v2b.docx` (2025).  
**Formato editorial:** 16 × 23 cm.

## Diagnóstico

A obra possui uma sequência principal de 23 capítulos, seis apêndices e, após eles, 19 blocos com instruções e descrições de figuras. **Esses blocos são documentação iconográfica**, não uma segunda edição de capítulos de conteúdo. Preservá-los em `material-adicional/` para produção e conferência das imagens.

Os arquivos de capítulos 1 e 2 já publicados são versões de trabalho; a versão final deve ser comparada com o DOCX antes de fechar a edição.

## Sequência pedagógica recomendada

| Ordem proposta | Capítulo original | Tema | Motivo |
|---|---:|---|---|
| 1 | 1 | Tensão, corrente e resistência | Vocabulário inicial |
| 2 | 22 | Segurança eletrônica | Antes de manipular circuitos |
| 3 | 3 | Resistores e códigos de cores | Conhecer o componente |
| 4 | 5 | Lei de Ohm | Calcular antes de montar |
| 5 | 7 | Potência elétrica | Dimensionamento seguro |
| 6 | 2 | Multímetro | Medir com segurança |
| 7 | 4 | Protoboard | Aplicar os fundamentos |
| 8 | 8 | Associação de resistores | Ampliar os circuitos |
| 9 | 9 | Divisores de tensão | Aplicação de associação |
| 10 | 6 | Leis de Kirchhoff | Generalizar análise |
| 11 | 10 | Diodos | Primeiro semicondutor |
| 12 | 11 | LEDs | Aplicação dos diodos |
| 13 | 12 | Capacitores | Armazenamento e transitórios |
| 14 | 13 | Transistores BJT | Chaveamento e amplificação |
| 15 | 14 | Relés e eletromagnetismo | Acionamento e proteção |
| 16 | 15 | Reguladores de tensão | Alimentação DC |
| 17 | 16 | Circuitos integrados | Sistemas em CI |
| 18 | 17 | Portas lógicas | Introdução digital |
| 19 | 18 | Flip-flops | Memória e sequenciamento |
| 20 | 19 | Sensores e atuadores | Interface física |
| 21 | 20 | Arduino | Integração programável |
| 22 | 21 | Organização da bancada | Boas práticas e revisão |
| 23 | 23 | Projeto final de plantas | Síntese prática |

**Nota:** esta é uma proposta de nova numeração. As referências internas, figuras e exercícios precisam ser atualizados junto com a movimentação dos capítulos. Não renumerar somente os títulos.

## Lacunas ou reforços sugeridos

1. **Leitura de esquemas:** símbolos, nós, polaridade, convenção de corrente e como passar do esquema à protoboard; incluir antes do primeiro circuito.
2. **Fonte DC e referência:** diferença entre positivo, negativo, GND, terra de proteção e circuito isolado; inserir no início e retomar na alimentação.
3. **Resistores reais:** tolerância, séries comerciais e potência dissipada; integrar aos capítulos de resistores e potência.
4. **LED:** tensão direta aproximada, corrente nominal, cálculo do resistor e preferência por valor comercial que não ultrapasse a corrente de projeto.
5. **Capacitores:** polaridade, tensão máxima, energia armazenada e cuidados de descarga; adicionar introdução simples à constante de tempo RC.
6. **BJT e relés:** corrente de base, saturação, limites do transistor e diodo de roda livre em bobinas DC.
7. **Reguladores:** dissipação térmica, diferença entre reguladores lineares e conversores chaveados; não propor montagem diretamente na rede elétrica para iniciantes.
8. **Lógica digital:** famílias lógicas, níveis de tensão e entradas flutuantes; explicar que “nível alto” não significa sempre 5 V.
9. **Arduino:** distinguir resolução do ADC de precisão da medição; necessidade de terra comum em montagens compatíveis; proteção das saídas.
10. **Projeto final:** calibrar o sensor de umidade, verificar alimentação, limites de corrente, diodos de proteção e comportamento em falhas.

## Critérios de revisão

- Preservar a voz do autor, o diálogo com o estudante, as analogias e o humor.
- Evitar analogias tratadas como definições físicas literais.
- Verificar cálculos, unidades, especificações e limites dos componentes.
- Manter exercícios em DC de baixa tensão, com fonte protegida; não sugerir experiências com rede elétrica.
- Conferir cada referência a figura e tabela; não inventar imagem inexistente.
- Registrar alterações substanciais em cada capítulo.
- Não tratar texto extraído do DOCX como substituto de imagens, diagramas ou fórmulas renderizadas.

## Situação

**Diagnóstico e proposta de sequência: concluídos.**  
**Revisão integral e publicação dos 23 capítulos na nova ordem: pendentes.** Este documento não deve ser confundido com a conclusão da revisão técnica do livro.
