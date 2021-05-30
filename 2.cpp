int switchpin = 8;
int ledpin = 13;
bool last = LOW;
bool on = false;

void setup()
{
  pinMode(switchpin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  if (digitalRead(switchpin) == HIGH && last == LOW)
  {
    on = !on;
    last = HIGH;
  }
  else
  {
    last = digitalRead(switchpin);
  }
  digitalWrite(ledpin, on);
}