#include <Arduino.h>
#include <usb_keyboard.h>

void setup() {
delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  delay(20);
  Keyboard.release(KEY_LEFT_GUI);
  delay(500);
  
  Keyboard.print("Chrome");
  delay(100);
  Keyboard.press(KEY_ENTER);
  delay(50);
  Keyboard.release(KEY_ENTER);
  
}

void loop() {
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_T);
  delay(20);
  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_T);
  delay(20);
}
