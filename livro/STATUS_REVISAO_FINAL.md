# Situação da revisão — 09/10/2026

## Materiais no repositório

- [23 capítulos](capitulos/) — arquivos Markdown atualizados com harmonização editorial e referências de figuras.
- [Apêndices A–F](apendices/) — transcritos do manuscrito original.
- [Código do projeto final](../../codigo/monitoramento_plantas.ino) — versão com calibração do sensor, histerese e limite de acionamento.
- [Referências completas de imagens](../../referencias-imagens/REFERENCIAS_COMPLETAS.md) — descrições e prompts separados do texto didático.

## Edição de trabalho em Word

Foi produzida uma edição revisada de 16 × 23 cm a partir do DOCX original, mantendo os 23 capítulos, os apêndices, as tabelas e as chamadas de imagens. A versão Word foi renderizada para inspeção visual (127 páginas sem as imagens definitivas).

**A versão DOCX revisada e os Markdown do GitHub não são cópias idênticas.** Os capítulos Markdown receberam harmonização e correções editoriais no repositório; a versão Word foi editada separadamente. Antes de gerar a prova gráfica, é necessário escolher o DOCX como matriz e conferir diferenças com os Markdown. O arquivo binário DOCX ainda não foi transferido ao GitHub.

## Verificações e correções

1. Sequência pedagógica reorganizada com segurança na posição 2.
2. Exemplo de LED: 340 Ω calculados; 360 Ω recomendado em vez de 330 Ω para o alvo de 20 mA.
3. Explicações de medições e precauções para a bancada.
4. Referências à montagem de cargas de rede substituídas por exemplos de baixa tensão.
5. Projeto de plantas: calibração, proteção lógica, limites de tempo e especificação de sensores.
6. Marcadores e legendas de 103 figuras renumerados no arquivo Word.
7. Código C++ submetido a uma **verificação de sintaxe com stubs locais**; **não** foi compilado na Arduino IDE nem ensaiado em bancada.

## Pendências externas e limitações

- **Teste físico do projeto:** exige componentes reais, pinagem confirmada, fonte adequada e verificação de acionamento e sensores.
- **Compatibilidade Arduino:** instalar bibliotecas, compilar para a placa escolhida e ajustar parâmetros conforme hardware real.
- **ISBN e ficha catalográfica:** precisam de dados e emissão/validação apropriados; não podem ser inventados.
- **Sumário paginado e prova gráfica:** dependem da inserção das figuras e fechamento editorial.
- **Conferência final:** validar todos os esquemas, tabelas e exercícios, inclusive comparando o DOCX com o repositório.

**Não declarar o livro pronto para publicação até concluir esses testes e a prova editorial.**
