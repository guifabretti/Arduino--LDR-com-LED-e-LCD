#include <LiquidCrystal.h>

int led13 = 13;
int sensorLDR = A0;
int valorLDR = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

pinMode(led13, OUTPUT);
Serial.begin(9600);
lcd.begin(16, 2);

}

void loop() {

int valorLDR = analogRead(sensorLDR);
Serial.println(valorLDR);
delay (500);

if (valorLDR < 30){
digitalWrite (led13, HIGH);
lcd.clear();
lcd.setCursor(3, 0); 
lcd.print("DIGITAL");
lcd.setCursor(1, 1);
lcd.print("# APROVADA #");

}

else{
digitalWrite (led13, LOW)  ;
lcd.clear();
lcd.setCursor(3, 0); 
lcd.print("DIGITAL");
lcd.setCursor(1, 1); 
lcd.print("* REJEITADA *");
}


}
