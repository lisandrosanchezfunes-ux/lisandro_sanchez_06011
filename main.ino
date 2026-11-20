const int pinRojo = 12;
const int pinAmarillo = 10;
const int pinVerde = 8;

void setup() {
  pinMode(pinRojo, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {
  // Luz roja (5 segundos)
  digitalWrite(pinRojo, HIGH);
  digitalWrite(pinAmarillo, LOW);
  digitalWrite(pinVerde, LOW);
  delay(5000);

  // Luz verde (4 segundos)
  digitalWrite(pinRojo, LOW);
  digitalWrite(pinVerde, HIGH);
  delay(4000);

  // Luz amarilla (2 segundos)
  digitalWrite(pinVerde, LOW);
  digitalWrite(pinAmarillo, HIGH);
  delay(2000);
}