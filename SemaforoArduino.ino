int ledRoja = 12;
int ledAzul = 10;
int ledAmarilla = 8;

int tiempoEncendido = 2000; 

void setup() {
  pinMode(ledRoja, OUTPUT);  
  pinMode(ledAzul, OUTPUT); 
  pinMode(ledAmarilla, OUTPUT); 
}

void loop() {

  digitalWrite(ledRoja, HIGH);
  delay(tiempoEncendido);
  digitalWrite(ledRoja, LOW);
  
  digitalWrite(ledAzul, HIGH);
  delay(tiempoEncendido);
  digitalWrite(ledAzul, LOW);
  
  digitalWrite(ledAmarilla, HIGH);
  delay(tiempoEncendido);
  digitalWrite(ledAmarilla, LOW);
  
  tiempoEncendido = (tiempoEncendido > 100) ? tiempoEncendido - 100 : tiempoEncendido;  
}
