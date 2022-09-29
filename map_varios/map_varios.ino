int leds[]= {2,3,4,5,6,7};
#define pot A5

void setup() {
  for(int i=0; i< 6; i++){
    pinMode(leds[i],OUTPUT);
  }
  pinMode(pot,INPUT);
}

void acender(int x){
  int i;
  for(i=0; i < x; i++){
    digitalWrite(leds[i],1);
  }
  for(i=x; i < 6; i++){
    digitalWrite(leds[i],0);
  }
  }

void loop() {
  acender(map(analogRead(pot),0,1023,0,6));
}
