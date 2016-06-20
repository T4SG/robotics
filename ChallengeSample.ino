#include <OrangutanPushbuttons.h>
#include <OrangutanLCD.h>
#include <OrangutanLEDs.h>
#include <OrangutanBuzzer.h>
#include <OrangutanMotors.h>

OrangutanLEDs lights;
OrangutanPushbuttons buttons;
OrangutanLCD lcd;
OrangutanBuzzer buzzer;
OrangutanMotors motors;

void waitForNoteToEnd() {
  while(OrangutanBuzzer::isPlaying());
  delay(50);
}

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  // step 1: put your team name on the LCD Screen 
  // (see activity 1 sample code)

  // step 2: drive around the obstacle to the target zone
  // (see activity 2 sample code)

  // step 3: turn the red LED on while you're stopped
  //         and wait for button 'A' to be pressed
  // (see activity 4 sample code)

  // step 4: once button 'A' is pressed, drive to
  //         the finish zone
  // (see activity 2 sample code)

  // step 5: once in the finish zone, play a few notes
  // (see activity 3 sample code
}
