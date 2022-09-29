#define red 2
#define green 4
#define blue 3
#define btn 7
#define maximo 6
int btnclickado=0, btnliberado=0, ciclo=0;

void vermelho(){
  digitalWrite(red,1);
  digitalWrite(green,0);
  digitalWrite(blue,0);
  }
  
void azul(){
  digitalWrite(red,0);
  digitalWrite(green,0);
  digitalWrite(blue,1);
  }
  
void verde(){
  digitalWrite(red,0);
  digitalWrite(green,1);
  digitalWrite(blue,0);
  }
void c1(){
  digitalWrite(red,1);
  digitalWrite(green,1);
  digitalWrite(blue,0);
  }
void c2(){
  digitalWrite(red,0);
  digitalWrite(green,1);
  digitalWrite(blue,1);
  }
void c3(){
  digitalWrite(red,1);
  digitalWrite(green,0);
  digitalWrite(blue,1);
  }
 
void trocaLED(){
  if(ciclo == 0){
   vermelho();
    }
  else if(ciclo ==1){
    verde();
    }
  else if(ciclo ==2){
    azul();
    }
  else if(ciclo ==3){
    c1();
    }
  else if(ciclo ==4){
    c2();
    }
  else if(ciclo ==5){
    c3();
    }
  ciclo++;
  if(ciclo > maximo -1){
    ciclo = 0;
    }
  }

void verificaBTN(){
  if(digitalRead(btn) == HIGH){
    btnclickado=1;
    btnliberado=0;
    }
  else{
    btnliberado=1;
    }
  if((btnclickado == 1 and btnliberado ==1)){
    btnclickado=0;
    btnliberado=0;
    trocaLED();
    }
  }
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  verificaBTN();
}
