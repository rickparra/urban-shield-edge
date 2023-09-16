#include "Arduino.h"
#include "WiFi.h"
#include <HTTPClient.h>

HTTPClient client;
char nomeWifi[] = "Wifiteste";
char senhaWifi[] = "Wifiteste";
char serverAddress[] = "https://api.tago.io/data";
char contentHeader[] = "application/json";
char tokenHeader[]   = "515801e8-e2c8-43a4-9f58-cf4ac4d4b379";

// Defina os pinos para o sensor PIR e os LEDs
const int pirPin = 2;     // Pino do sensor PIR
const int redLedPin = 13; // Pino do LED vermelho
const int greenLedPin = 12; // Pino do LED verde

// Defina o pino para o sensor de luz ambiente
const int sensorPin = A3; // Pino do sensor de luz ambiente
const int resistorValue = 220; // Valor do resistor em ohms (ajuste conforme necessário)

void setup() {
  Serial.begin(9600);
  init_wifi();
  pinMode(pirPin, INPUT); // Configura o pino do sensor PIR como entrada
  pinMode(redLedPin, OUTPUT); // Configura o pino do LED vermelho como saída
  pinMode(greenLedPin, OUTPUT); // Configura o pino do LED verde como saída
  pinMode(sensorPin, INPUT); // Configura o pino do sensor de luz como entrada
  digitalWrite(redLedPin, LOW); // Desliga o LED vermelho no início
  digitalWrite(greenLedPin, LOW); // Desliga o LED verde no início
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
  // Leitura do sensor PIR
  int pirState = digitalRead(pirPin); // Leitura do sensor PIR

  if (pirState == HIGH) {
    digitalWrite(redLedPin, HIGH); // Liga o LED vermelho quando o movimento é detectado
    Serial.println("Movimento detectado!");
  } else {
    digitalWrite(redLedPin, LOW); // Desliga o LED vermelho quando não há movimento
    Serial.println("Nenhum movimento.");
  }

  // Leitura do valor do sensor de luz ambiente
  int sensorValue = analogRead(sensorPin);

  // Ajuste o valor lido do sensor de luz para adequá-lo à faixa de acionamento do LED verde
  if (sensorValue < 500) {
    digitalWrite(greenLedPin, HIGH); // Liga o LED verde quando a luz é fraca
  } else {
    digitalWrite(greenLedPin, LOW); // Desliga o LED verde quando a luz é forte
  }

  // Imprime o valor lido na porta serial (para fins de depuração)
  Serial.println(sensorValue);

  delay(1000); // Pequeno atraso para evitar leituras repetidas
}

void init_wifi() {
  Serial.println("Conectando WiFi");
  Serial.print("Wifi: ");
  Serial.println(nomeWifi);
  WiFi.begin(nomeWifi, senhaWifi);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
  }
  Serial.println("WiFi Conectado");
  Serial.print("Meu IP eh: ");
  Serial.println(WiFi.localIP());
}
