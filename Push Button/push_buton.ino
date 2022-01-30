// C++ code
//
void setup()
{
  pinMode(10, INPUT);
  Serial.begin(9600);

  pinMode(5, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(10));
  if (digitalRead(10) == 1) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}