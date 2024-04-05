/*
  Blink
  Existem 3 LEDs que alteram seu estado para aceso e apagado repetidamente.
 */
 
// Nomeia os pinos que serão utilizados
int led = 2; //LED_BUILTIN
int led_2 = 4;
int led_3 = 8;

// Inicia assim que o botão reset é pressionado
void setup() {                
  // Inicializa como um output
  pinMode(led, OUTPUT);   
  pinMode(led_2, OUTPUT);  
  pinMode(led_3, OUTPUT);
}

// O loop acontece repetidamente
void loop() {
  digitalWrite(led, HIGH);   // Liga o LED (HIGH é o nível de voltagem)
  digitalWrite(led_2,LOW);
  digitalWrite(led_3, HIGH);
  delay(500); // Espera um tempo para alterar o estado dos LEDs
  digitalWrite(led, LOW);    // Desliga o LED mudando para LOW
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  delay(200); // Espera um tempo para alterar novamente
}
