// C++ code
//
void setup()
{
  pinMode(A1, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  analogWrite(5, map(analogRead(A1), 0, 1023, 0, 255));
  delay(10); 
}