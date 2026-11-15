const int led1 = 8;
const int led2 = 9;

unsigned long tiempoAnterior = 0;
const long intervalo = 2000;

int estadoLed1 = LOW;
int estadoLed2 = LOW;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {

  // LED 1: parpadeo normal
  estadoLed1 = !estadoLed1;
  digitalWrite(led1, estadoLed1);

  // LED 2: retardo no bloqueante
  unsigned long tiempoActual = millis();

  if (tiempoActual - tiempoAnterior >= intervalo) {
    tiempoAnterior = tiempoActual;

    estadoLed2 = !estadoLed2;
    digitalWrite(led2, estadoLed2);
  }

  delay(500); // Control del parpadeo del LED 1
}


