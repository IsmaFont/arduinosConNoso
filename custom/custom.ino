// Libs and fines
#define HID_CUSTOM_LAYOUT
#define LAYOUT_SPANISH
#include <HID-Project.h>
#include <HID-Settings.h>

// Vars
const int buttonPin = 4;
int buttonState = 0; 
int buttonX = 0;

// Type key class instead of kbpress
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup(){
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
    Keyboard.begin();
    delay(3000);
}

void loop(){
  buttonState = digitalRead(buttonPin);
  


}
