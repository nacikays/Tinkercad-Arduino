// C++ code
//
int degisken1 = 0;

void setup()
{
  Serial.begin(9600);

  pinMode(A5, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  Serial.println(degisken1);
  degisken1 = map(analogRead(A5), 0, 1023, 0, 255);
  degisken1 = (255 - degisken1);
  if (degisken1 < 221) {
    analogWrite(9, degisken1);
  } else {
    digitalWrite(9, LOW);
  }
  if (degisken1 < 235) {
    analogWrite(10, degisken1);
  } else {
    digitalWrite(10, LOW);
  }
  if (degisken1 < 243) {
    analogWrite(11, degisken1);
  } else {
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}