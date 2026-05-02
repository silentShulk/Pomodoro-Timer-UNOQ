#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;
char hexaKeys[ROWS][COLS] = {
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'*', '0', '#', 'D'} };
byte rowPins[ROWS] = {5, 4, 3, 2};
byte colPins[COLS] = {9, 8, 7, 6};
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

int value = 0;
int x, y = 0;
int xCenter, yCenter;



void setup() {
  pinMode(10, INPUT_PULLUP); //set pin 7 as an input and enable the internal pull-up resistor
  xCenter = analogRead(A0);
  yCenter = analogRead(A1);
  
  Serial.begin(9600);
}



void loop() {
  // Keypad
  char customKey = customKeypad.getKey();
  if (customKey)
    Serial.println(customKey);
  
  // Joystick
  //x = analogRead(A0) - xCenter;
  //y = -(analogRead(A1) - yCenter);
  //value = digitalRead(10);

  //Serial.print("X: "); Serial.print(x, DEC);
  //Serial.print(" | Y: "); Serial.print(y, DEC);
  //Serial.print(" | B: "); Serial.print(value, DEC);
  //Serial.println();
  
  //delay(500);
}