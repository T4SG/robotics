#include <OrangutanMotors.h>
#include <OrangutanLCD.h>
#include <OrangutanPushbuttons.h>

OrangutanMotors motors;
OrangutanLCD lcd;
OrangutanPushbuttons buttons;

void setup() {
  lcd.clear();
  lcd.print("Motors!");
}

void loop() { // run this code over and over again
  buttons.waitForPress(BUTTON_C); // don't start until button 'C' is pressed

  motors.setSpeeds(50, 100); // sets speed of left wheel to 50 and right wheel to 100
  delay(2000); // let the robot travel at that speed for 2 seconds

  motors.setSpeeds(0, 0); // setting the speed of the wheels to 0 stops the robot
} // end the loop with a bracket
