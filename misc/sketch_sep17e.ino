#define led 4
#define btn 3
int btnclickado=0;
int btnliberado=0;
void setup() {
  pinMode(btn,INPUT);
  pinMode(led,OUTPUT);
}

void trocaLED(){
  if(digitalRead(led) == HIGH){
    digitalWrite(led,LOW);} 
  else{
    digitalWrite(led,HIGH);}
}

void keyUP(){
  if((btnclickado ==1) and (btnliberado ==1)){
    btnclickado=0;
    btnliberado=0;
    trocaLED();}  
}
void loop() {
  if(digitalRead(btn) == HIGH){
    btnclickado=1;
    btnliberado=0;}
  else{
    btnliberado=1;}
  keyUP();
}
