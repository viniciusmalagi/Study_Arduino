#define red 2
#define green 4
#define blue 3
#define btn 7

class Btn{
  public:
    int btnclicado,btnliberado,pino;
    Btn(int p){
      pino=p;
      btnclicado= 0;
      btnliberado=0;
      }
    bool press(){
      if(digitalRead(pino) == 1){
        btnclicado=1;
        btnliberado=0;
        }
      else{
        btnliberado=1;
        }
      if((btnclicado ==1) and (btnliberado ==1)){
        btnclicado=0;
        btnliberado=0;
        return true;
        }
      else{
        return false;
        }
    }
};

class Color {
  public:
    int pinoR,pinoG,pinoB,ciclo,maximo;
    Color(int pr, int pg, int pb):pinoR(pr),pinoG(pg),pinoB(pb){
      ciclo=0;
      maximo=3;
    }
    void trocaLED(){
      if(ciclo == 0){
        ledColor(1,0,0);
        }
      else if(ciclo == 1){
        ledColor(0,1,0);
        }
      else{
        ledColor(0,0,1);
        }
      ciclo++;
      if(ciclo > maximo -1){
        ciclo =0;
        }
      }
  private:
    void ledColor(int r, int g, int b){
      digitalWrite(pinoR,r);
      digitalWrite(pinoG,g);
      digitalWrite(pinoB,b);
    }
  
};



Btn b(btn);
Color c(red,green,blue);

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(btn,INPUT);
}

void loop(){
  if(b.press() == true){
    c.trocaLED();
  }
}
