#define pot A5
void setup() {
  // put your setup code here, to run once:
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(constrain(analogRead(pot),500,955));
  delay(250);
  
}
