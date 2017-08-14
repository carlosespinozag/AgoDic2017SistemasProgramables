
void PrendeApagaLed(int led, int tiempoMs)
{
  digitalWrite(led,HIGH); //Mandamos 5v
  delay(tiempoMs); //Esperamos .5 seg.
  digitalWrite(led,LOW); //Mandamos 0v
  delay(tiempoMs);
}
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //Configuramos los pines
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  for(i=0;i<10;i++){
    Serial.print(i);
    Serial.print("\n");
    PrendeApagaLed(13,i*100);
  }
}



