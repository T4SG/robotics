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

// change this value if the black line sensitivity is //too much or too little 
const unsigned int THRESHOLD = 275;
 
bool IsWhite()
 {
    unsigned int sensors[5];
    robot.readLineSensors(sensors, IR_EMITTERS_ON);
    return (sensors[0] < THRESHOLD || sensors[1] < THRESHOLD || sensors[2] < THRESHOLD || sensors[3] < THRESHOLD || sensors[4] < THRESHOLD);
 }
void setup() {
    lcd.print("GO BRO!!!"");
    robot.init(2000);
    robot.calibrateLineSensors(IR_EMITTERS_ON);
    delay(200);
    buttons.waitForButtons(ALL_BUTTONS);
    motors.setSpeeds(80, 80);
}

void loop() {
    if (IsWhite()) {
        motors.setSpeeds(20,20);
    } else {
        motors.setSpeeds(0, 55);  
        
        // Change this value to turn more or less
        delay(600);		  
        return;
    }
}
