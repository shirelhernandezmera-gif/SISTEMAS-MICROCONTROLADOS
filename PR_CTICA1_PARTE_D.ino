const int BOT=2; 
int estai=LOW;
int estaf=HIGH;
void setup() {
  pinMode(BOT,INPUT);
  Serial.begin(9600);
}

void loop() {
  int estBOT=digitalRead(BOT);
  Serial.print("ESTADO DEL BOTON: ");
  if (estBOT==estai){
  Serial.println("OFF");}
  else{
    Serial.println("ON");
  }
}
