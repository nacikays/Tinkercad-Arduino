#include <LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);


byte customChar1[] = {
  B00000,
  B10001,
  B01110,
  B01010,
  B01010,
  B01110,
  B10001,
  B00000
};


byte customChar2[] = {
 B00000,
  B01110,
  B10001,
  B10101,
  B10101,
  B10001,
  B01110,
  B00000
};


void setup()
{
  lcd.begin(16, 2);
  lcd.createChar(0, customChar1);
  lcd.createChar(1, customChar2);
}


int i = 0;
void loop(){
  
    lcd.clear();
  	lcd.setCursor(i,0);
  	lcd.write((uint8_t)0); 
    
  for(i; i < 16 ; i++){
      lcd.scrollDisplayRight();
      delay(250);
    }
  
    for(i; i > 0; i--){
      lcd.scrollDisplayLeft();
      delay(250);
    }    
}















