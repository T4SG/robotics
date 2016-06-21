#include <OrangutanPushbuttons.h>
#include <OrangutanBuzzer.h>
#include <OrangutanLEDs.h>
#include <OrangutanLCD.h>

OrangutanLEDs lights;
OrangutanPushbuttons buttons;
OrangutanBuzzer buzzer;
OrangutanLCD lcd;

void waitForNoteToEnd() {
  while(OrangutanBuzzer::isPlaying());
  delay(50);
}

void setup() {
  lcd.clear();
  lcd.print("Lights!");
}

void loop() {
  // put your main code here, to run repeatedly:
  buttons.waitForPress(ALL_BUTTONS);

  lights.red(HIGH);  // turn red light on
  delay(1000);  // keep the light on for 1000
  lights.red(LOW);  // turn red light off

  // Code for twinkle, twinkle little star
  // Add in more code to control the LED lights
  // while playing your song.
  buzzer.playNote(NOTE_C(5), 400, 8); // Twin-
  waitForNoteToEnd();
  buzzer.playNote(NOTE_C(5), 400, 8); // -kle,
  waitForNoteToEnd();
  buzzer.playNote(NOTE_G(5), 400, 8); // twin-
  waitForNoteToEnd();
  buzzer.playNote(NOTE_G(5), 400, 8); // -kle
  waitForNoteToEnd();
  buzzer.playNote(NOTE_A(6), 400, 8); // lit-
  waitForNoteToEnd();
  buzzer.playNote(NOTE_A(6), 400, 8); // -tle
  waitForNoteToEnd();
  buzzer.playNote(NOTE_G(5), 800, 8); // star
  waitForNoteToEnd();

  buzzer.playNote(NOTE_F(5), 400, 8); // how
  waitForNoteToEnd();
  buzzer.playNote(NOTE_F(5), 400, 8); // I
  waitForNoteToEnd();
  buzzer.playNote(NOTE_E(5), 400, 8); // won-
  waitForNoteToEnd();
  buzzer.playNote(NOTE_E(5), 400, 8); // -der
  waitForNoteToEnd();
  buzzer.playNote(NOTE_D(5), 400, 8); // what
  waitForNoteToEnd();
  buzzer.playNote(NOTE_D(5), 400, 8); // you
  waitForNoteToEnd();
  buzzer.playNote(NOTE_C(5), 800, 8); // are
  waitForNoteToEnd();
}
