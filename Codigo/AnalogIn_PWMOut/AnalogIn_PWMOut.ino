// Variables globales
int pin_led = 9;
int pin_pot = A0;

// Codigo de inicialización
void setup() {
  // initializamos como salida
  pinMode(pin_led, OUTPUT);
}

// bucle que se repite para siempre
void loop() {
  int valorPot = analogRead(pin_pot);
  int valorBrillo = map (valorPot, 0, 255, 0 ,1023);
  analogWrite(pin_led, valorBrillo);
}
