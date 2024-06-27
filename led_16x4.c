/*
    Project name : Arduino Mega LCD 16x4 Display
    Modified Date: 27-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-lcd-16x4-display
*/

#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 4);

  // Print a message to the LCD
  lcd.setCursor(0, 0);
  lcd.print("Hello, Arduino!");
}

void loop() {
  // Set the cursor to column 0, line 1
  lcd.setCursor(0, 1);
  lcd.print("Time: ");
  
  // Print the number of seconds since reset
  lcd.print(millis() / 1000);

  // Set the cursor to column 0, line 2
  lcd.setCursor(0, 2);
  lcd.print("Count: ");
  
  // Print a counter that increments every second
  static int counter = 0;
  lcd.print(counter++);

  // Set the cursor to column 0, line 3
  lcd.setCursor(0, 3);
  lcd.print("Date: 27-06-2024");

  delay(1000); // Delay for 1 second
}
