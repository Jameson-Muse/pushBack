#include "vex.h"
//ferocious matt was here
using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;
controller Cont;
//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor frontLeft = motor(PORT12, ratio6_1, true);
motor frontRight = motor(PORT13, ratio6_1, false);
motor rearLeft = motor(PORT8, ratio6_1, true);
motor rearRight = motor(PORT9, ratio6_1, false);
motor frontWinch = motor(PORT2, ratio18_1, false);
motor rearWinch = motor(PORT10, ratio18_1, true);
motor intake = motor(PORT1, ratio18_1, false);
motor claw = motor(PORT3, ratio18_1, false);
motor arm = motor(PORT4, ratio36_1, false);
void vexcodeInit( void ) {
  // nothing to initialize
}