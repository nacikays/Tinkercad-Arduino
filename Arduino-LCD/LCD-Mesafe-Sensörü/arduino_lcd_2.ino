#include<LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

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
	lcd.begin(16, 2);
}

int mesafe=0;
void loop(){
 
  mesafe=0.01723 * readUltrasonicDistance(7, 7);
  
  if(mesafe>335){
  	lcd.setCursor(0,0);
  	lcd.print("----------------");  
  	lcd.setCursor(0,1);
  	lcd.print("----------------");
    
  }
  else{
  	lcd.clear();
  	lcd.setCursor(0,0);
  	lcd.print("                ");
  	lcd.setCursor(0,0);
  	lcd.print("UZAKLIK: ");
  	lcd.print(mesafe);
  	lcd.print(" CM");
  	delay(500);  
  }
}















