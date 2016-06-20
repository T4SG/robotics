// Include the library code
#include <OrangutanPushbuttons.h>
#include <OrangutanLCD.h>

OrangutanLCD lcd;
OrangutanPushbuttons buttons;

void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  buttons.waitForPress(ALL_BUTTONS);
  lcd.clear();          // clear the lcd screen
  lcd.print("Robots");  // Print "Robots" on the first line
  lcd.gotoXY(0, 1);     // Start printing on the second line of the screen
  lcd.print("Rock");    // "Rock" will print on the second line
}
