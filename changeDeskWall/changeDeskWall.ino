#define HID_CUSTOM_LAYOUT
#define LAYOUT_SPANISH

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

  // Start Payload
  // This is a script to download and change the wallpaper in windows 10

  // In order to work, windows must be using the default app for opening photos

  delay(5000);


  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
