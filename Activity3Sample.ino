#include <OrangutanPushbuttons.h>
#include <OrangutanBuzzer.h>
#include <OrangutanLEDs.h>
#include <OrangutanLCD.h>

OrangutanPushbuttons buttons;
OrangutanBuzzer buzzer;
OrangutanLEDs lights;
OrangutanLCD lcd;

// everytime you say 'waitForNoteToEnd()' these two lines will run
void waitForNoteToEnd() {
  // pause your program until the previous note is done playing
  while(OrangutanBuzzer::isPlaying());
  // wait 50 milliseconds before starting the next note
  delay(50);
}

void setup() {
  lcd.clear();
  lcd.print("Music!");
}

void loop() {
  buttons.waitForPress(ALL_BUTTONS);

  buzzer.playNote(NOTE_C(5), 400, 8);  // plays an 'A' for 1 second at a volume level of 8
  waitForNoteToEnd(); // pauses your program until the previous note is done playing
}
