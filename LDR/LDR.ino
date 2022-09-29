#define ldr A5
#define led 2
int vldr=0;
void setup() {
  
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
}

void loop() {
  vldr=analogRead(ldr);
  if(vldr > 300){
    digitalWrite(led,0);
  }
  else{
    digitalWrite(led,1);
  }  
  Serial.println(vldr);
  delay(100);
}
