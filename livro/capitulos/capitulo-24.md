# Capítulo 24 — Projeto final: monitoramento automatizado de plantas

Olá, tudo bem com você?

Chegamos ao nosso projeto final!

Durante o livro, conhecemos resistores, diodos, transistores, sensores, atuadores e o Arduino. Agora vamos reunir esses conhecimentos em uma aplicação: **um sistema de monitoramento de plantas**.

A ideia é acompanhar as condições do ambiente e, com os componentes apropriados, comandar dispositivos de baixa tensão.

## 24.1 — O que queremos construir?

O projeto reúne leituras de **umidade do solo, temperatura e luminosidade**. Também pode indicar o estado do sistema por LEDs ou display e comandar uma pequena bomba de irrigação, conforme as condições programadas.

Pense no funcionamento em três etapas: **medir, decidir e agir**.

**[INSERIR FIGURA 24.1 — Diagrama de blocos com sensores, Arduino, indicadores e bomba]**

## 24.2 — Separando os componentes

A proposta original utiliza:

- **Sensores:** umidade do solo, LM35 para temperatura e LDR para luminosidade.
- **Entradas de comando:** botões para operação manual.
- **Indicação:** LED RGB, buzzer e display LCD 16 × 2 com interface I²C.
- **Controle:** Arduino Uno.
- **Acionamento:** módulo apropriado para comandar bomba DC e, se previsto no projeto, iluminação de baixa tensão.
- **Montagem:** protoboard, jumpers e conexões adequadas.
- **Alimentação:** fontes DC comerciais, dimensionadas para cada parte do sistema.

A bomba de 12 V não deve ser alimentada diretamente por um pino do Arduino. Seu acionamento exige um dispositivo compatível com a corrente de funcionamento e de partida, além das proteções necessárias.

**[INSERIR FIGURA 24.2 — Esquema elétrico completo do sistema, a validar antes da publicação]**

## 24.3 — A importância da calibração

Não podemos presumir que um sensor de umidade mostre zero quando está seco e o valor máximo quando está molhado.

Precisamos registrar leituras de referência com o **sensor e o substrato realmente utilizados**. Depois, ajustamos os limites de acionamento conforme a planta e as condições do cultivo.

O LDR também precisa ser interpretado de acordo com o divisor de tensão montado. Uma leitura analógica do Arduino não equivale automaticamente a uma medição em lux.

Para o LM35, a conversão depende da referência de tensão do conversor analógico-digital e das características do sensor.

**[INSERIR FIGURA 24.3 — Calibração dos sensores com leituras de referência]**

## 24.4 — E o programa?

O código do projeto está organizado no repositório:

[`codigo/monitoramento_plantas.ino`](../../codigo/monitoramento_plantas.ino)

A versão disponível prevê calibração do sensor de umidade, histerese para evitar acionamentos repetidos, limite de tempo para a bomba e desligamento diante de calibração inválida.

**Antes de utilizar o sistema**, o código precisa ser compilado e testado com o circuito real. Não devemos considerar uma montagem validada apenas porque seu programa está escrito.

## 24.5 — Testando por etapas

Em vez de conectar tudo de uma vez, faça os testes gradualmente:

1. Confira a alimentação e as conexões, com o circuito desligado.
2. Teste individualmente as leituras dos sensores.
3. Verifique se os valores variam de maneira coerente.
4. Teste os indicadores sem conectar a bomba.
5. Verifique o estágio de acionamento da bomba com a alimentação apropriada.
6. Só então integre as partes e avalie o comportamento do sistema.

Como trabalharemos com água e eletrônica, mantenha recipientes e mangueiras afastados das placas e das conexões elétricas. Use apenas alimentação de baixa tensão adequada e proteja o circuito contra respingos.

**[INSERIR FIGURA 24.4 — Montagem final com separação física entre eletrônica e reservatório de água]**

## 24.6 — O que podemos melhorar?

Depois que o sistema básico estiver funcionando, podemos pensar em registrar dados, incluir comunicação sem fio, construir um painel de acompanhamento ou estudar estratégias mais avançadas de irrigação.

Mas não tenha pressa. Um sistema simples, bem compreendido e testado vale muito mais do que um projeto cheio de recursos que ninguém consegue explicar.

## Para encerrar

Se você chegou até aqui, percebeu que eletrônica não é apenas decorar fórmulas ou identificar componentes.

É **entender um problema, planejar uma solução, montar, medir, testar e melhorar**.

E, quando alguma coisa não funcionar de primeira, lembre-se: descobrir o motivo também faz parte do aprendizado.

Foi um prazer acompanhar você nesta jornada.

Um abraço do seu professor,

**DIEGO GANDRA**
