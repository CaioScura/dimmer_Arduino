const int POT = A0;
const int LED = 10;
const int BUZINA = 6;

void setup() {
  
  pinMode(LED, OUTPUT);
  pinMode(BUZINA, OUTPUT);
  pinMode(POT, INPUT);
  
  
}

void loop() {
  
  int valor = analogRead(POT);
  int luz = map(valor, 0,1023, 0, 255);
  
  analogWrite(BUZINA, luz);
  analogWrite(LED, luz);

}