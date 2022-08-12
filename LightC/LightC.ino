#include<LiquidCrystal.h>
LiquidCrystal lcd( 12,11,5,4,3,2);
void setup() {
pinMode(1,OUTPUT);
lcd.begin(16, 2);
lcd.print("INITIALISING");
delay(250);
lcd.print(".");
delay(250);
lcd.print(".");
delay(250);
lcd.print(".");
delay(250);
lcd.clear();
}

void loop() {
  int val=analogRead(A0);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("INTENSITY :");
  lcd.print(val);
  if(val>600){
     lcd.setCursor(0,1);
    lcd.print("DAY TIME");
    delay(250);
    digitalWrite(1,LOW);
    delay(500);
    lcd.clear();
  }else{
     lcd.setCursor(0,1);
    lcd.print("NIGHT TIME");
    delay(250);
    digitalWrite(1,HIGH);
    delay(500);
  }
  
}
