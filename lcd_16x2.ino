
//Para mas información se puede consultar el tutorial de arduino
//http://www.arduino.cc/en/Tutorial/LiquidCrystal

// Incluimos la librería
#include <LiquidCrystal.h>

//Inicializamos la pantalla LCD
//Potenciometro: 
//pin 1 a 5V pin 3 a GND y pin central a VO de la LCD
        //RS, EN, Db4, Db5, Db6, Db7
LiquidCrystal lcd(12, 11,  5, 4,  3,  2);

void setup() {
  // Iniciamos la LCD con 16 columnas y 2 filas
  lcd.begin(16, 2);
  lcd.print("LCD 16x2 Making");
  lcd.setCursor(0, 1);
  lcd.print("RoboticsColombia");
  delay(3000);
  lcd.clear(); 
}

void loop() {
 lcd.setCursor(0,0);//(x,y) x de 0 a 15 y de 0 a 1
 lcd.print(".setCursor(x,y)");
 lcd.setCursor(0,1);
 lcd.print("x:Columna 0 - 15"); 
 delay(3000);
 lcd.setCursor(0,1);
 lcd.print("y:Fila 0 - 1    "); 
 delay(3000);
 lcd.clear(); 
}
 
