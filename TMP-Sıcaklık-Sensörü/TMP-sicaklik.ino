// C++ code
//
int degisken = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  Serial.println(-40 + 0.488155 * (analogRead(A0) - 20));

  if (-40 + 0.488155 * (analogRead(A0) - 20) < 0) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  if (-40 + 0.488155 * (analogRead(A0) - 20) < 40 && -40 + 0.488155 * (analogRead(A0) - 20) > 0) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  if (-40 + 0.488155 * (analogRead(A0) - 20) > 40 && -40 + 0.488155 * (analogRead(A0) - 20) < 90) {
    digitalWrite(6, HIGH);
  } else {
    digitalWrite(6, LOW);
  }
  if (-40 + 0.488155 * (analogRead(A0) - 20) > 90) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}