// C++ code
//
int Mesafe = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  Mesafe = 0.01723 * readUltrasonicDistance(3, 3);
  if (Mesafe > 0 && Mesafe < 30) {
    tone(9, 932, 1000); // play tone 70 (A#5 = 932 Hz)
  }
  if (Mesafe > 30 && Mesafe < 90) {
    tone(9, 932, 500); // play tone 70 (A#5 = 932 Hz)
    delay(1000); // Wait for 1000 millisecond(s)
  }
  if (Mesafe > 90 && Mesafe < 180) {
    tone(9, 932, 800); // play tone 70 (A#5 = 932 Hz)
    delay(2000); // Wait for 2000 millisecond(s)
  }
  if (Mesafe > 180 && Mesafe < 335) {
    tone(9, 932, 1000); // play tone 70 (A#5 = 932 Hz)
    delay(3000); // Wait for 3000 millisecond(s)
  }
  digitalWrite(9, LOW);
}