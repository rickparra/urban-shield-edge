#include "ArduinoJson.h"
#include "EspMQTTClient.h"
// MQTT Configuracoes
EspMQTTClient client{
  "Wokwi-GUEST", //SSID do WiFi
  "",     // Senha do wifi
  "mqtt.tago.io",  // Endereço do servidor
  "Default",       // Usuario
  "2488c355-21cc-42de-8778-2732ff25e9c9",         // Token do device
  "esp",           // Nome do device
  1883             // Porta de comunicação
};
void setup() {
  Serial.begin(9600);
  Serial.println("Conectando WiFi");
  while (!client.isWifiConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("WiFi Conectado");
  Serial.println("Conectando com Servidor MQTT");
  while (!client.isMqttConnected()) {
    Serial.print('.'); client.loop(); delay(1000);
  }
  Serial.println("MQTT Conectado");
}
// Callback da EspMQTTClient
void onConnectionEstablished()
{}
char bufferJson[100];
int sonoridade = 0;
int luminosidade = 0;
const int PIR_PIN = 2;
void loop() {
  sonoridade= random(0,100);
  StaticJsonDocument<400> documentoJson;
  documentoJson["variable"] = "sonoridade";
  documentoJson["value"] = sonoridade;
  documentoJson["unit"] = "decibel";
  serializeJson(documentoJson, bufferJson);
  Serial.println(bufferJson);
  client.publish("SonoridadeUrbanShield", bufferJson);
  delay(2000);
  client.loop();

    // Leitura sensor PIR
  int motion = digitalRead(PIR_PIN);   

  StaticJsonDocument<200> docMotion;
  docMotion["variable"] = "movimentoUr";
  docMotion["value"] = motion;
  
  char motionJson[100];
  serializeJson(docMotion, motionJson);
  Serial.println(motionJson);
  client.publish("movimentoUrbanShield", motionJson);
  client.loop();

  luminosidade= random(0,100);
  documentoJson["variable"] = "luminosidade";
  documentoJson["value"] = luminosidade;
  documentoJson["unit"] = "lux";
  serializeJson(documentoJson, bufferJson);
  Serial.println(bufferJson);
  client.publish("LuxUrbanShield", bufferJson);
  delay(2000);
  client.loop();
}