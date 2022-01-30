#include<LiquidCrystal.h>

LiquidCrystal lcd (12, 11, 5, 4, 3, 2);
  
int i = 0;
String yazi = "TEST";

void setup(){
	lcd.begin(16, 2);
}

void loop(){
  	lcd.clear();
  	lcd.print(yazi);
  	delay(500);
    for(i; i < 16 - yazi.length(); i++){
      lcd.scrollDisplayRight();
      delay(500);
    }
  
    for(i; i > 0; i--){
      lcd.scrollDisplayLeft();
      delay(500);
    }  
}