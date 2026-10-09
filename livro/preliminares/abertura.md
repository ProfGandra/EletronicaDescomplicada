# Abertura e elementos pré-textuais


ELETRÔNICA DC DESCOMPLICADA: CONHECIMENTO E
PRÁTICA PARA INICIANTES

Por Diego Guimarães Gandra
Técnico e Tecnólogo em Mecatrônica Industrial
Especializado em Engenharia de Projetos de Circuitos
Eletrônicos, Pedagogia, Docência na Educação Profissional e
Tecnológica, Tecnologia da Informação.
Docente no SENAI-SP há mais de 15 anos



PÁGINA DE ROSTO

[INSERIR IMAGEM DE CAPA AQUI]

      Imagem de Capa: Ilustração moderna mostrando
       componentes eletrônicos desconstruídos em estilo
       infográfico, com destaque para resistores, LEDs,
       circuitos integrados e uma placa de circuito impresso,
       tudo em cores vibrantes sobre fundo escuro. (Legenda
       sugerida: "A eletrônica ao seu alcance").



FOLHA DE DIREITOS AUTORAIS

© 2026 Gandra, Diego

Todos os direitos reservados. Nenhuma parte deste livro
pode ser reproduzida, armazenada em sistemas de
recuperação ou transmitida de qualquer forma ou por

qualquer meio, eletrônico, mecânico, fotocópia, gravação ou
outro, sem permissão prévia por escrito do autor.

Dados Internacionais de Catalogação na Publicação (CIP)

Diego Guimarães Gandra
Eletrônica DC descomplicada: Conhecimento e prática para
iniciantes / Diego Gandra. – [São Paulo - SP] : [editora ou publicação independente], [ano].
[paginação final] p. ; 23 cm.

ISBN: [a confirmar pelo autor]

   1. Eletrônica - Corrente Contínua. 2. Circuitos Elétricos.
         3. Microcontroladores. 4. Projetos Práticos. I. Título.

CDD: 621.381

DEDICATÓRIA

A todos os meus alunos do SENAI-SP que, ao longo destes
mais de 15 anos, me ensinaram mais do que qualquer livro
poderia ensinar. Suas perguntas, dúvidas e, principalmente,
seus erros e acertos na bancada são a verdadeira alma deste
livro.

À minha família, que sempre apoiou minha paixão por
desmontar coisas para entender como funcionam (mesmo
quando nem sempre conseguia montá-las de volta).

Aos meus colegas de trabalho e amigos, que transformaram
desafios em conquistas coletivas e horas de esforço em
histórias que carrego comigo. Um agradecimento especial à
Tatiana Nachef, cuja sabedoria gentil e escuta atenta
iluminaram meus dias mais complexos, e ao Felipe Dorn,
cuja lealdade e incentivo foram faróis nos momentos de
dúvida.

E a você, leitor, que está prestes a embarcar nesta jornada.
Que este livro seja o início de uma paixão duradoura pela
eletrônica.

AGRADECIMENTOS

Agradeço primeiramente a Deus, pela curiosidade insaciável
que colocou em meu coração.

Agradeço ao SENAI-SP, minha segunda casa por mais de 15
anos. Lá, eu não apenas ensinei, mas aprendi diariamente
com cada aluno, cada projeto, cada desafio na bancada. O
ambiente de aprendizado prático do SENAI foi a forja onde
este livro foi concebido.

Agradeço    a   todos   os   técnicos   e   engenheiros   que
compartilham conhecimento gratuitamente em fóruns, blogs
e canais do YouTube. A eletrônica é uma ciência colaborativa,
e esse livro é um meio de quitar essa dívida com a
comunidade.

Agradeço aos revisores técnicos que, anonimamente ou não,
apontaram erros e sugeriram melhorias. Um livro destes
nunca é obra de uma só pessoa.

Por fim, agradeço a você, leitor, por investir seu tempo e
recursos neste livro. Que ele lhe traga tanto aprendizado e
alegria quanto me trouxe ao escrevê-lo.

PREFÁCIO TÉCNICO: Como Usar Este Livro

Olá! Antes de começarmos nossa jornada, deixe-me explicar
como este livro está organizado para que você possa
aproveitá-lo ao máximo.



Convenções Utilizadas:

🚦 Ícones de Alertas:
    ⚡ Perigo: Risco de choque elétrico ou dano grave ao
       equipamento ou à pessoa.

      🔥 Cuidado: Risco de superaquecimento ou queima
       de componentes.

      💡 Dica: Informação útil ou truque profissional que
       facilita a vida.

      🔍 Saiba Mais: Conceito aprofundado para curiosos
       que querem ir além.

📝 Notações Especiais:
      Código em caixa → Trechos de programação para
       Arduino ou similares.

      Negrito → Termos importantes apresentados pela
       primeira vez.

     Itálico → Ênfase em conceitos-chave ou palavras
      estrangeiras.

🔢 Sistema de Numeração:
     Figuras: [Capítulo].[Sequência] (Exemplo: Figura 3.2)

     Tabelas: Tabela [Capítulo]-[Sequência] (Exemplo:
      Tabela 4-1)

     Equações: (Capítulo.Equação) (Exemplo: Equação 5.3)



Como Estudar com Este Livro:

  1. Siga a ordem - Os capítulos constroem conhecimento
      progressivamente. Não pule!

  2. Faça as simulações - Não pule os exercícios no
      Tinkercad. A teoria só fixa com a prática.

  3. Mantenha um caderno - Anote suas descobertas,
      dúvidas e, principalmente, seus erros.

  4. Ensine alguém - A melhor forma de consolidar o
      aprendizado é tentar explicar para outra pessoa.

  5. Pratique, pratique, pratique - Eletrônica se aprende
      na bancada, não só no papel.

O que Você Vai Precisar (Além do Livro):

Para Acompanhar os Exercícios Teóricos:

      Um caderno de anotações

      Calculadora (ou app de calculadora no celular)

      Acesso à internet para consultar datasheets

Para fazer as simulações no Tinkercad:

      Computador com acesso à internet

      Conta gratuita no Tinkercad (www.tinkercad.com)

Para Montar os Circuitos Físicos (Recomendado):

      Protoboard 400 pontos ou maior

      Multímetro digital

      Kit básico de componentes (lista detalhada no
       Apêndice D)

      Alicate de corte e alicate de bico fino

Material Complementar:

Todo o código-fonte, diagramas em alta resolução, listas de
materiais e outros recursos adicionais estão disponíveis no
site do livro:
[URL do site do livro]

Você também pode escanear este QR Code para acessar
diretamente:

[INSERIR QR CODE AQUI]

Agora, sim. Vamos à eletrônica!

PREFÁCIO: O Convite à Descoberta

Olá, futuro maker, curioso, ou talvez até um colega técnico
que quer revisitar os fundamentos com um novo olhar!




          Figura P.1: O Autor na Bancada – Imagem gerada por IA.


Meu nome é Diego Gandra, e sou um apaixonado por
descobrir como as coisas funcionam. Essa paixão me levou a
me formar como Técnico e Tecnólogo em Mecatrônica, me
especializar em projetos de circuitos e, há mais de 15 anos, à
minha maior alegria profissional: lecionar no SENAI-SP. Lá,
na bancada, suando a camisa ao lado dos alunos, eu vi de
tudo. Desde os olhos arregalados de quem acende o primeiro
LED, a frustração de quem soltou fumaça de um transistor e
a empolgação indescritível de quem conserta um circuito e
vê tudo funcionar perfeitamente.

Este livro nasceu exatamente desses mais de 15 anos de sala
de aula. Ele é a materialização de todas as explicações,
analogias e momentos "aha!" que compartilhei com meus

alunos. É o livro que eu gostaria de ter tido na minha estante
quando comecei.

Aqui, você não encontrará apenas teorias secas e fórmulas
complicadas jogadas na página. A eletrônica em corrente
contínua é a base de TUDO. É o alfabeto que você precisa
aprender    antes   de   formar       frases   complexas   como
microcontroladores e robótica, duas das minhas outras
grandes paixões, junto da impressão 3D.

Minha missão, tanto na sala de aula quanto nestas páginas, é
sempre uma só: descomplicar. Quero que você veja a
eletrônica não como um bicho de sete cabeças, mas como
uma ferramenta incrível que está ao seu alcance. Vamos usar
analogias do mundo real, como comparar a eletricidade com
um sistema de encanamento, para que os conceitos grudem
de vez na sua mente.

Convido você a se aventurar por este livro com as mãos na
massa (ou no mouse, simulando no Tinkercad!). Não tenha
medo de errar. Queimar um componente de alguns centavos
é um rito de passagem e a melhor - e mais fedorenta -
professora que existe.

Prepare-se para entender de vez o que é tensão, corrente e
resistência, dominar a Lei de Ohm, projetar seus primeiros
circuitos e descobrir a magia por trás de componentes como
capacitores, diodos e transistores.

Seja bem-vindo a esta jornada. Vamos juntos desvendar a
dança dos elétrons e construir o conhecimento que vai abrir
as portas para você criar, inovar e consertar o mundo à sua
volta.

Vamos nessa?

Um abraço,

Diego G. Gandra
Docente, entusiasta e seu guia nesta aventura pela
eletrônica.

INTRODUÇÃO: Por que Este Livro Existe?

Vamos combinar uma coisa: você já deve ter aberto um
livro de eletrônica antes e se sentido como se estivesse
lendo grego antigo. Fórmulas jogadas na página, diagramas
que parecem um labirinto, e uma voz de autor que parece
falar de um pedestal inalcançável.

Pois bem. Este livro não é assim.

Eu escrevi este livro da mesma forma que ensino há mais de
15 anos: como se estivéssemos conversando na bancada, eu
mostrando um componente, você perguntando "por quê?", e
eu respondendo com uma analogia simples, um desenho na
ponta do caderno, ou melhor, montando o circuito ali na
hora para você ver funcionar.

Quem é você, leitor?

Este livro é para:

      O hobbysta curioso que quer entender por que o
       LED queimou (e como evitar da próxima vez).

      O estudante de engenharia que entende a teoria,
       mas se sente perdido na bancada.

      O profissional de áreas afins (mecânica, TI,
       automação) que precisa de eletrônica como
       ferramenta.

      O pai ou mãe que quer construir projetos com os
       filhos.

      O autodidata que prefere aprender no próprio ritmo,
       com exemplos práticos.

O que você vai aprender (e o que NÃO vai):

Este livro cobre eletrônica em corrente contínua (DC) do
zero. Isso significa que vamos nos concentrar nos
fundamentos que são a base de tudo: tensão, corrente,
resistência, componentes básicos, semicondutores, circuitos
integrados e introdução a microcontroladores.

O que não vamos cobrar em detalhe: corrente alternada
(AC), radiofrequência, design de PCB, ou teoria
eletromagnética avançada. Isso é assunto para um próximo
livro, se este fizer sucesso!

A jornada que nos espera:

Vamos começar do absoluto zero, com analogias do mundo
real. Depois, vamos conhecer os componentes um a um,
sempre com exemplos práticos e simulações. Em seguida,
vamos aprender a analisar circuitos completos. E,
finalmente, vamos construir projetos integrando sensores,
atuadores e microcontroladores.

Ao final, você não terá apenas decorado fórmulas. Você
terá intuição eletrônica. Você saberá por que um circuito se

comporta de determinada maneira, e saberá como
diagnosticar e corrigir problemas.

Um pedido sincero:

Eletrônica é uma ciência experimental. Você vai errar. Você
vai queimar componentes. Você vai soltar fumaça. E tudo
bem! É assim que se aprende. Então, meu pedido é: não
desista no primeiro erro. Anote o que deu errado, entenda
o porquê, e tente novamente. É assim que os profissionais
de verdade aprendem.

Pronto. Conversa inicial terminada.

Agora, vire a página. O primeiro componente que vamos
desvendar é você mesmo - sua curiosidade. O segundo
componente é o resistor. Mas primeiro, precisamos
aprender a língua da eletrônica.

Vamos nessa?

    Figura I.2: Mapa da Jornada. Infográfico mostrando os marcos principais:
Fundamentos → Componentes → Análise de Circuitos → Microcontroladores → Projeto
                         Final – Imagem gerada por IA.

PARTE 1: FUNDAMENTOS ESSENCIAIS





> **Conferência editorial:** validar ficha catalográfica, dados do autor, direitos, ISBN e dados da edição antes da publicação.
