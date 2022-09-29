#define led 4
#define btn 3
void setup() {
  pinMode(btn,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  if(digitalRead(btn) == HIGH){
    digitalWrite(led,HIGH);
    }
  else{
    digitalWrite(led,LOW);
    }
}
