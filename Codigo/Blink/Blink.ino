// Codigo de inicialización
void setup() {
  // initializamos como salida
  pinMode(LED_BUILTIN, OUTPUT);
}

// bucle que se repite para siempre
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // HIGH=On=5V
  delay(1000);                     // Wait 1s
  digitalWrite(LED_BUILTIN, LOW);  // LOW=Off=0V
  delay(1000);                     // Wait 1s
}
