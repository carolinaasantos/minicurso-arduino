/*
  Aperta o botão
  Se o botão for pressionado, aparecerá a mensagem de que o botão foi pressionado na interface do arduíno.
 */
 
// Nomeia o pino que será utilizado
int porta_botao = 2; //LED_BUILTIN

// Inicia assim que o botão reset é pressionado
void setup() { 
  pinMode(porta_botao, INPUT);               
  // Inicializa como um output
  Serial.begin(9600);
}


// O loop acontece repetidamente
void loop() {
  if(digitalRead(porta_botao)){
    Serial.println("Apertei o botao =)");  
  }
    Serial.println("Nao apertei o botao =(");
  delay(500);  
}
