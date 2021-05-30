int sensepin = 0;
int ledpin = 9;

void setup()
{
  analogReference(DEFAULT);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  int variable = analogRead(sensepin);
  
  variable = constrain(var, 750, 900);
  int level = map(var, 750, 900, 255, 0);
  
  analogWrite(ledpin, level);
}
