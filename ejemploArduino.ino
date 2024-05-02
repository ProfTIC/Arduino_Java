void setup() {
  pinMode(13, OUTPUT);    // configura pin 13 como salida
}
 
void loop() {
  digitalWrite(13, HIGH); // pone en alto el pin 13
  delay(1000);               // espera 3 milisegundos
  digitalWrite(13, LOW);  // pone en bajo el pin 13
  delay(1000);               // espera 7 milisegundos
}