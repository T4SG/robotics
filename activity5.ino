#include <OrangutanLEDs.h>		
#include <OrangutanMotors.h>
#include <OrangutanLCD.h>
#include <OrangutanPushbuttons.h>
#include <Pololu3pi.h>
#include <PololuQTRSensors.h>

OrangutanMotors motors;
Pololu3pi robot;
OrangutanPushbuttons buttons;
OrangutanLCD lcd;

// change this value if the black line sensitivity is too much or too little 
const unsigned int THRESHOLD = 275;

// the IsWhite function checks the sensors to see if they are on top of
// something white or black
bool IsWhite() {
  unsigned int sensors[5];
  robot.readLineSensors(sensors, IR_EMITTERS_ON);
  return (sensors[0] < THRESHOLD || sensors[1] < THRESHOLD || sensors[2] < THRESHOLD || sensors[3] < THRESHOLD || sensors[4] < THRESHOLD);
}

void setup() {
  lcd.clear(); 
  lcd.print("Sensors!");
  
  robot.init(2000);
  robot.calibrateLineSensors(IR_EMITTERS_ON);
  delay(200);
  buttons.waitForPress(ALL_BUTTONS);
  motors.setSpeeds(80, 80);
}

void loop() {
  // if the sensors are over something white, keep moving forward
  if (IsWhite()) {
    motors.setSpeeds(20,20);

  // if the sensors are over somthing black, turn right
  } else {
    motors.setSpeeds(0, 55);  
        
    // Change this value to turn more or less
    delay(600);		  
    return;
  }
}
