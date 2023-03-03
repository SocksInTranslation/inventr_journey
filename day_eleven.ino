#include <Key.h>
#include <Keypad.h>
// import prefabs
 
 
const byte ROWS = 4;
const byte COLS = 4;
// establishes the keypad as 4x4
 
char buttons[ROWS][COLS] = {
  {'1', '2', '3', 'A'},  // 1st row
  {'4', '5', '6', 'B'},  // 2nd row
  {'7', '8', '9', 'C'},  // 3rd row
  {'*', '0', '#', 'D'}   // 4th row
};
// establishes the layoyut of the keypad;
// in this case, we're going with the top down? standard
 
byte rowPins[ROWS] = {5, 4, 3, 2};
byte colPins[COLS] = {6, 7, 8, 9};
// indicates what keypad pins will be used for the keypad
 
Keypad myAwesomePad = Keypad(makeKeymap(buttons), rowPins, colPins, ROWS, COLS);
// obvious copy pasta, because I wouldnt use myAwesomePad
 
void setup() {
  Serial.begin(9600); 
  // start monitoring on the serial monitor
}
 
void loop() {
  char result = myAwesomePad.getKey();
 
  if (result){                    
    // if a button is pressed
    Serial.println(result);
  }
 
}
