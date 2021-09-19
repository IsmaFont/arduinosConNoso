#define HID_CUSTOM_LAYOUT
#define LAYOUT_SPANISH
#define RANGE 5
#

#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();
  delay(1000);
  // Start Payload
  // Happy Holidays By Ghostshell

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(300);

  Keyboard.print("powershell");
  Keyboard.write(KEY_RETURN);

  delay(600);

  Keyboard.print("Start-Process https://youtu.be/EeyuFLKGfSY; exit");
  delay(300);
  Keyboard.write(KEY_RETURN);
  //delay(100);
  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
