// Variables globales
int pin_led = 9;

// Codigo de inicialización
void setup() {
  // initializamos como salida
  pinMode(pin_led, OUTPUT);
}

// bucle que se repite para siempre
void loop() {
  digitalWrite(pin_led, HIGH); // HIGH=On=5V
  delay(1000);                     // Wait 1s
  digitalWrite(pin_led, LOW);  // LOW=Off=0V
  delay(1000);                     // Wait 1s
}
