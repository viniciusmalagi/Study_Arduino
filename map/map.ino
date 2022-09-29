#define led 3
#define pot A5
void setup() {
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
  //Analogico = 0 a 1023
  //PDW = 0 A 255

  //analogWrite(led,analogRead(pot)/4);
  //map(leitura, min_entrada, max_entrada, min_saida, mac_saida)
  analogWrite(led,map(analogRead(pot),0,1023,0,255));
}
