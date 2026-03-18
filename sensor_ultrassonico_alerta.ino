/*
Autor: Vinicius Vazquez
Projeto: Sistema de detecção de obstáculos com sensor ultrassônico
Plataforma: Arduino

Descrição: O sistema utiliza um sensor ultrassônico para medir a distância até um objeto. Dependendo da distância detectada e do botão pressionado, um LED é acionado para indicar proximidade.

Botão 1 -> limite de 150 cm
Botão 2 -> limite de 250 cm
*/

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  // Envia pulso ultrassônico
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // Recebe eco
  pinMode(echoPin, INPUT);

  // Retorna o tempo da onda sonora
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(4, INPUT);   // Botão 1
  pinMode(2, INPUT);   // Botão 2
  pinMode(5, OUTPUT);  // LED indicador

  Serial.begin(9600);
}

void loop()
{
  float distancia;

  // Modo 1
  if (digitalRead(4) == HIGH)
  {
    distancia = 0.01723 * readUltrasonicDistance(12, 11);

    Serial.println(distancia);

    if (distancia < 150)
      digitalWrite(5, HIGH);
    else
      digitalWrite(5, LOW);
  }

  // Modo 2
  if (digitalRead(2) == HIGH)
  {
    distancia = 0.01723 * readUltrasonicDistance(12, 11);

    Serial.println(distancia);

    if (distancia < 250)
      digitalWrite(5, HIGH);
    else
      digitalWrite(5, LOW);
  }

  delay(10);
}