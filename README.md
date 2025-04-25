# Arduino-Projects

Este repositório é diferente dos demais. Aqui, concentrei todos os meus códigos de Arduino, mas o mais importante é este **README**! Apesar de ter começado esses projetos na faculdade, neste momento, não me vejo trabalhando com esse tipo de programação de forma constante, mas desenvolver esses projetos foi se tornando um processo terapêutico para mim. É uma forma de aprendizado leve e sem pressões.

Aqui, você não encontrará apenas código, mas também poderá ser redirecionado para as simulações que criei para cada projeto. Isso significa que, mesmo sem um Arduino físico, você poderá visualizar e interagir com os projetos, tornando sua experiência mais acessível!

## Como este repositório está organizado

### 1. Códigos
Todos os códigos dos projetos de Arduino estão na pasta `code`. Cada projeto tem seu próprio arquivo `.ino`, que pode ser baixado e usado no seu ambiente Arduino IDE.

### 2. Simulações
Passei a maior parte dos meus circuitos para o Tinkercad, uma plataforma online que permite criar e simular circuitos de forma interativa.

## Sensor de Temperatura com LCD
Esse projeto nasceu em sala de aula. A ideia era desenvolver um protótipo para controlar a temperatura no ambiente hospitalar. Nesse caso, o protótipo construído contou com quatro sensores para múltiplos pontos de aquisição de temperatura. Ah! Esse projeto também teve sua versão no mundo físico haha.

Simulação: [Sensor de Temperatura com LCD](https://www.tinkercad.com/things/dfNBrASnEV0-sistema-de-controle-de-sensorizacao)

## Sensor de Temperatura com LCD I2C
Meu projeto com o maior número de remixes! Por algum motivo, a comunidade gostou muito deste! Trata-se da continuidade do projeto anterior, mas o LCD tem um módulo que permite uma comunicação mais fácil com o Arduino, eliminando o número excessivo de jumpers.

Simulação: [Sensor de Temperatura com LCD I2C](https://www.tinkercad.com/things/b3M3aONQR0l-sensor-de-temperatura-com-lcd-i2c)

## Sensor de Distância Ultrassônico com LCD
Enquanto trabalhava no projeto anterior, vi o sensor de distância disponível na lista de componentes do Tinkercad. Achei simplesmente genial e quis implementar. Está aí o resultado!

Simulação: [Sensor de Distância Ultrassônico com LCD](https://www.tinkercad.com/things/5Q6y4MxteIB-sensor-de-distancia-ultrassonico-com-lcd)

## Sistema de Controle de Sensorização
Este foi, de longe, o mais desafiador! Ele utiliza o mesmo sensor de distância do projeto anterior, mas adiciona um sensor de luz (LDR). Com isso, ele exibe os valores lidos em um display LCD. Esse código pode ser útil em situações onde é necessário monitorar a proximidade de um objeto e a intensidade da luz simultaneamente e exibir essas informações de forma clara e atualizada.

Simulação: [Sistema de Controle de Sensorização](https://www.tinkercad.com/things/dfNBrASnEV0-sistema-de-controle-de-sensorizacao)

## LED Liga e Desliga
Onde tudo começou! Este foi o meu primeiro projeto em Arduino. Fiquei muito feliz em ver esse LED piscando, sério!

Simulação: [LED Liga e Desliga](https://www.tinkercad.com/things/hKjI1QtXOPg-led-liga-e-desliga-com-potenciometro)

---

_Este repositório está sendo criado com o intuito de compartilhar algo que me traz alegria e tranquilidade. Espero que ele possa fazer o mesmo por você._
