int motor = 9;

void setup()
{
  pinMode(motor, OUTPUT);
}

void loop()
{
  for(int a=0; a<=255; a++)
  {
    analogWrite(motor,a);
    delay(20);
  }
  
  delay(700);
  
  for(int a=255; a>=0; a--)
  {
    analogWrite(motor,a);
    delay(20);
  }
  
  delay(700);
}