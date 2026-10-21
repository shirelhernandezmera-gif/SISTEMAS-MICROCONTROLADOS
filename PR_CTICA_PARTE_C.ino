const int LED=8;
const int LED1=9;
const int BOT=2; 
void setup() {
  pinMode(BOT,INPUT);
  pinMode(LED,OUTPUT);
  pinMode(LED1,OUTPUT);
}

void loop() {
  int estBOT=digitalRead(BOT);
  if (estBOT==HIGH){
    digitalWrite(LED,HIGH);
    digitalWrite(LED1,LOW);
  }
  else{
    digitalWrite(LED1,HIGH);
    digitalWrite(LED,LOW);
  }
}
