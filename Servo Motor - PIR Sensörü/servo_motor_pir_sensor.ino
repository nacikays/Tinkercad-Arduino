// C++ code
//
#include <Servo.h>

Servo servo_9;

void setup()
{
  pinMode(4, INPUT);
  servo_9.attach(9, 500, 2500);

}

void loop()
{
  if (digitalRead(4) == 1) {
    servo_9.write(90);
    delay(6000); // Wait for 6000 millisecond(s)
  } else {
    servo_9.write(0);
  }
}