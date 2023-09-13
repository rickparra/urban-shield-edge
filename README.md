# UrbanShield: Detector de Ruas Perigosas

![logo do projeto](https://github.com/rickparra/urban-shield-edge/assets/113686045/1374e11d-9a52-4f85-a353-fb548a9d63f4)

## Descrição do Projeto

UrbanShield é um sistema inovador que utiliza tecnologia IoT para monitorar e identificar ruas potencialmente perigosas. Este projeto tem como objetivo melhorar a segurança nas áreas urbanas, fornecendo dados em tempo real sobre condições adversas.

![grafico de densidade das ruas](https://github.com/rickparra/urban-shield-edge/assets/113686045/ccb571ed-714d-4463-849a-40144f00808c)

## Arquitetura da Solução

O sistema é composto por vários componentes que trabalham em conjunto para coletar, processar e apresentar os dados relevantes:

### Sensores e Atuadores Utilizados

- **Sensor de Luminosidade**: Detecta a intensidade da luz ambiente.
- **Sensor de Presença**: Identifica a presença de objetos ou pessoas.
- **Sensor de Ruído**: Mede o nível de ruído no ambiente.
- **ESP32**: Utilizado para comunicação e controle.

### Placa Arduino

- Modelo **Uno**: Responsável pela aquisição e envio dos dados dos sensores.

### Django e React

- Utilizados para a **aplicação web/mobile** que permite a visualização dos dados processados.

![web-interface](https://github.com/rickparra/urban-shield-edge/assets/113686045/96c108ff-4286-4a6a-b3f8-1a949cd7ca5c)

### PostgreSQL

- Banco de dados utilizado para **armazenamento dos dados** coletados.

## Funcionalidades

### Visualização do Mapa de Denúncias

Os usuários do UrbanShield podem criar uma conta e acessar a funcionalidade de visualização de mapas. Neste mapa, são exibidos marcadores que representam denúncias de outros usuários sobre lugares potencialmente perigosos. Isso permite que os usuários tenham uma visão geral das áreas que podem ser arriscadas.

### Denúncias Online

Uma das funcionalidades-chave do UrbanShield é a capacidade de criar denúncias online. Isso permite que os usuários contribuam para a classificação de um lugar como perigoso ou seguro. As denúncias online são uma maneira eficaz de coletar informações em tempo real sobre as condições das ruas.

## Componentes e Tecnologias

Este projeto faz uso de uma variedade de componentes físicos e software, incluindo:

- Placa **Arduino Uno** para aquisição de dados.
- Diversos **sensores** como luminosidade, presença e som.
- **Django** e **React** para a aplicação web/mobile.
- Banco de dados **PostgreSQL** para o armazenamento dos dados.
- Linguagens e frameworks para a aplicação, como **React e Django**.

## Montagem e Configuração

### Esquemático

Abaixo está um diagrama de ligação dos sensores e atuadores na placa Arduino:

![print tinkercad](https://github.com/rickparra/urban-shield-edge/assets/113686045/25948609-3815-418c-8329-c4011d9456a4)

### Configuração

- **IDE Arduino e bibliotecas necessárias**: Para configurar o ambiente de desenvolvimento, siga as instruções no [Arduino website](https://www.arduino.cc/).
- **Detalhes de pinagem e ajustes dos componentes**: Encontre informações detalhadas sobre como configurar os sensores e outros componentes no [Manual de Configuração](configuration.md).

### Configuração da Nuvem

- **Banco de Dados**: Para configurar o banco de dados PostgreSQL, siga as instruções fornecidas em [Configuração do Banco de Dados](cloud_setup.md).
- **Aplicação Django na Nuvem**: Saiba como configurar a aplicação Django na nuvem no [Guia de Configuração da Aplicação](cloud_app_setup.md).
