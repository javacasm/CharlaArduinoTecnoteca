// Variables globales
int primer_led = 8;
int ultimo_led = 12;

// Codigo de inicialización
void setup() {
  // initializamos como salidas
  for(int i = primer_led;i <= ultimo_led; i++) {
    pinMode(i, OUTPUT);
  }
}

// bucle que se repite para siempre
void loop() {
  for(int i = primer_led;i <= ultimo_led; i++) {
     digitalWrite(i, HIGH); // HIGH=On=5V
     delay(300);                     // Wait 1s
     digitalWrite(i, LOW);  // LOW=Off=0V
  }
  
  for(int i = ultimo_led;i >= primer_led; i--) {
     digitalWrite(i, HIGH); // HIGH=On=5V
     delay(300);                     // Wait 1s
     digitalWrite(i, LOW);  // LOW=Off=0V
  }
}
