/*
 * Author:  John Hutton
 * Modified Date:  01/13/23
 * 
 * Code to control an H-Bridge to run a DC Fan
 */

// Includes
#include <Arduino.h>  // Required for Arduino style setup() loop() environment
#include <ESP.h>      // Required for basic ESP32 board definitions

// Variables and Defines
#define FanHigh 5
#define FanLow  4
#define ReverseButton 12
#define SpeedButton 27

#define FanMax 255
#define FanHalf 128
#define FanGnd 0

// Prototype functions

/* NOTE - Prof Hutton
   I generally like the setup() and loop() at the very top after
   the variable definitions.  This means I need to have prototype
   functions declared here so they are visible.  Simply keep the
   first line of the function definition (must match real function below)
     void myFunction (int myVar);
   It is OK to have setup() and loop() ath the bottom, then 
   prototype functions are not needed.
*/

// Arduino Setup - Runs once
void setup()
{
  // Initalize the pins to drive the H-bridge
  pinMode(FanHigh, OUTPUT);
  pinMode(FanLow, OUTPUT); 

  // Initalize the button pins
  pinMode(ReverseButton, INPUT_PULLUP);
  pinMode(SpeedButton, INPUT_PULLUP);


  // initialize serial port for communication
  /* NOTE - Prof Hutton
     Serial terminal is very useful for debug.  Be sure
     the speed here matches monitor_speed in the 
     platformio.ini
  */
  Serial.begin(115200);
  Serial.println();
  Serial.println("Serial Ready!");
}

// Arduino Loop - Runs infinately
void loop()
{
  /* NOTE - Prof Hutton
     Think through what your main loop must do
     (check buttons with debounce, control fan speed
     and direction, reset when both buttons are pressed)
     I strongly recomend keeping your loop short and using
     functions!  This facilitates readability and 
     testability.
     ALSO, design/code/test.  Get the smallest things possible
     working, get all the pieces working, then combine 
     everything together
  */

}

// Support Functions
/* NOTE - Prof Hutton
   See note above.  If you put the setup() and loop()
   last, they will come below all your functions.
*/