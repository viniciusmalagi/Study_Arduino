#define led 4
#define btn 3

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  if(digitalRead(btn) == HIGH){
    digitalWrite(led,HIGH);
    }
  else{
    digitalWrite(led,LOW);
    }
}
