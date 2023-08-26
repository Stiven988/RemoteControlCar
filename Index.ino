char dato;
void setup() {
  pinMode(13, OUTPUT); // Arriba
  pinMode(12, OUTPUT); // Derecha
  pinMode(11, OUTPUT); // Abajo
  pinMode(10, OUTPUT); // Izquierda
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0)
  {
  dato = Serial.read();
  Serial.println(dato);
  }
  if( dato == 'G')                   // Hacia adelante
  {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, HIGH); 
    delay(100);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW); 
  }
  if( dato == 'J')                   // Hacia derecha
  {
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);
    delay(1000);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);   
  }
  if( dato == 'K')                   // Hacia abajo
  {
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW); 
    delay(100);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);  
  }
  if( dato == 'H')                   // Hacia izquierda
  {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(13, LOW);  
    delay(1000);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW); 
  }
  if( dato == 'I')                   // Hacia izquierda
  {
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(13, HIGH);
  }
  if( dato == 'B')                   // Hacia izquierda
  {
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);
  }
  if( dato == 'A')                   // Hacia izquierda
  {
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(13, HIGH);
  }
}