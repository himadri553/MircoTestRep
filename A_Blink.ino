void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(100);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(700);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(700);                       
}
