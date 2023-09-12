# Detector de Ruas Perigosas

![Street](images/street.jpg)

## Descrição do Projeto

O Detector de Ruas Perigosas é um sistema inovador que utiliza tecnologia IoT para monitorar e identificar ruas potencialmente perigosas. Este projeto tem como objetivo melhorar a segurança nas áreas urbanas, fornecendo dados em tempo real sobre condições adversas.

![Dangerous Street](images/dangerous_street.jpg)

## Arquitetura da Solução

O sistema é composto por vários componentes que trabalham em conjunto para coletar, processar e apresentar os dados relevantes:

### Sensores e Atuadores Utilizados

- **Sensor de Luminosidade**: Detecta a intensidade da luz ambiente.
- **Sensor de Presença**: Identifica a presença de objetos ou pessoas.
- **Sensor de Ruído**: Mede o nível de ruído no ambiente.
- **ESP32**: Utilizado para comunicação e controle.

![Sensors](images/sensors.jpg)

### Placa Arduino

- Modelo **Uno**: Responsável pela aquisição e envio dos dados dos sensores.

![Arduino Uno](images/arduino.jpg)

### tagoIO

- Plataforma de **recepção dos dados em nuvem**.

![tagoIO](images/tagoio.jpg)

### Aplicação Servidor

- Realiza o **processamento e análise dos dados** recebidos dos sensores.

### Banco de Dados

- Utilizado para **armazenamento dos dados** coletados.

![Database](images/database.jpg)

### Aplicação Web/Mobile

- Permite a **visualização dos dados** processados.

![Web Interface](images/web_interface.jpg)

## Componentes e Tecnologias

Este projeto faz uso de uma variedade de componentes físicos e software, incluindo:

- Placa **Arduino Uno** para aquisição de dados.
- Diversos **sensores** como luminosidade, presença e som.
- **tagoIO** para a conectividade em nuvem.
- **Python** e bibliotecas como Pandas e Sklearn para a análise dos dados.
- Banco de dados, como **MySQL ou MongoDB**, para o armazenamento dos dados.
- Linguagens e frameworks para a aplicação, como **React e NodeJS**.

## Montagem e Configuração

### Esquemático

Abaixo está um diagrama de ligação dos sensores e atuadores na placa Arduino:

![Schematic](images/schematic.jpg)

### Configuração

- **IDE Arduino e bibliotecas necessárias**: Para configurar o ambiente de desenvolvimento, siga as instruções no [Arduino website](https://www.arduino.cc/).
- **Detalhes de pinagem e ajustes dos componentes**: Encontre informações detalhadas sobre como configurar os sensores e outros componentes no [Manual de Configuração](configuration.md).
- **Configuração da conexão com a tagoIO**: Consulte o guia de configuração da tagoIO no [Site da tagoIO](https://tago.io/).

### Configuração da Nuvem

- **Banco de Dados**: Para configurar o banco de dados, siga as instruções fornecidas em [Configuração do Banco de Dados](cloud_setup.md).
- **Aplicação Servidor na Nuvem**: Saiba como configurar a aplicação servidor na nuvem no [Guia de Configuração da Aplicação](cloud_app_setup.md).

Com esta estrutura organizada e estilizada, seu README oferece uma visão clara do projeto Detector de Ruas Perigosas. Lembre-se de adicionar suas próprias imagens nas pastas correspondentes e atualizar os links das imagens no README. Se precisar de mais ajuda ou tiver alguma pergunta específica, fique à vontade para perguntar.
