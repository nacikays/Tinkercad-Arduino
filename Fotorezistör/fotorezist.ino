// C++ code
//
void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);

  pinMode(3, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A5));
  if (analogRead(A5) > 500) {
    digitalWrite(3, LOW);
  } else {
    digitalWrite(3, HIGH);
  }
  delay(10);
}