# Capítulo 23 — PROJETO FINAL – SISTEMA DE CAPÍTULO 23: PROJETO FINAL – SISTEMA DE

MONITORAMENTO DE PLANTAS AUTOMATIZADO

Vamos construir um sistema completo que integra TUDO
que aprendemos!

[INSERIR FIGURA 23.1 AQUI]

      Figura 22.1: Diagrama de Blocos do
       Sistema. Sensores → Arduino → Atuadores → Display.

Visão Geral do Projeto

O sistema irá:

      Monitorar umidade do solo, temperatura e
       luminosidade

      Controlar automaticamente irrigação e iluminação

      Alertar visualmente quando precisar de intervenção

      Exibir todas as informações em tempo real

Lista de Componentes

Sensores:

      Sensor de umidade do solo (higrômetro)

      Sensor de temperatura LM35

      LDR (sensor de luz)


     Botões para controle manual

Atuadores:

     Relé 5V para bomba d'água

     Relé 5V para lâmpada

     LED RGB para status

     Buzzer para alertas

Processamento:

     Arduino Uno

     Display LCD 16x2 com I2C

     Protoboard e jumpers

Alimentação:

     Fonte DC de 12 V para bomba de 12 V; alimentação do Arduino conforme a especificação da placa.

     Fonte DC regulada de 5 V para lógica e módulos, dimensionada para a corrente.

[INSERIR FIGURA 23.2 AQUI]

     Figura 22.2: Esquemático Detalhado. Diagrama
      completo com todas as conexões.

## Código revisado do projeto

O código completo está disponível em [`codigo/monitoramento_plantas.ino`](../../codigo/monitoramento_plantas.ino). Ele prevê calibração do sensor, histerese, limite de acionamento da bomba e condição de desligamento diante de calibração inválida. **O código precisa ser compilado na Arduino IDE e ensaiado com os componentes reais antes de ser usado.**

**[INSERIR FIGURA 23.3 AQUI]**

*Figura 23.3: Código revisado do projeto e principais funções.*

Teste e Calibração

Calibração do Sensor de Umidade:

        1. Registre o valor do ADC em referência seca; não suponha que seja zero.

        2. Registre a leitura em substrato úmido de referência; água pura não é calibração universal.

        3. Ajuste ADC_SECO e ADC_UMIDO após medir o sensor; os percentuais são relativos à calibração.

Ajuste dos Limiares:

           Umidade: ajustar limites após calibração e conforme a espécie cultivada.


      Temperatura: 18-28°C para maioria das plantas

      Luminosidade: ajustar com o divisor LDR real; leituras ADC não são lux.

Melhorias e Expansões

Para levar para o próximo nível:

   1. Log de dados com cartão SD

   2. Conexão Wi-Fi com ESP8266

   3. App mobile para monitoramento remoto

   4. Machine learning para otimizar rega

   5. Dashboard web com gráficos

[INSERIR FIGURA 23.4 AQUI]

      Figura 22.4: Projeto Montado. Foto do sistema
       completo funcionando.

Documentação do Projeto

Não esqueça de documentar:

      Esquemático final

      Lista de componentes com valores

      Código comentado

      Limiares de calibração

      Lições aprendidas


Parabéns! Este projeto integra TUDO que aprendemos:
sensores, atuadores, programação, segurança e boas
práticas de bancada. Você agora não é mais um iniciante - é
um maker!

Um abraço do seu professor,

Diego G. Gandra

---
**Controle editorial:** capítulo transferido integralmente para revisão; não representa validação final de circuitos ou códigos.


---

*Edição em revisão: conferir os esquemas, códigos e referências de imagens com o arquivo Word integral antes da prova gráfica.*
