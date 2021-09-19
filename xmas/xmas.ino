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
  // Happy Holidays By Ghostshell

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad.exe");

   Keyboard.write(KEY_RETURN);

  delay(300);

  Keyboard.print("         _");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("      |\\ 0 /|");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("       |/|\\|");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("         |");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("         @");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("        /+\\");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("       o/@\\\\");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("     +//o/\\\\o");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("     //+/@\\\\/+o");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("    /\\/o//+/\\\\\\\\");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("   +///\\//\\o\\o+\\\\o");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("  o/+@/++/\\\\\\@\\\\/\\+");

   Keyboard.write(KEY_RETURN);

  Keyboard.print(" /\\/+///o/@\\o+/\\+\\\\");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("o/+/\\/@//||\\/\\\\o\\\\\\o _");

   Keyboard.write(KEY_RETURN);

  Keyboard.print(" /__ /|  ||      /__ /|");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("| * | | (__)___ | * | |");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("|___|/_   /__ /||___|/");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("    /_/| | * | |");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("   |_|/  |___|/");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("     `-.____/");

   Keyboard.write(KEY_RETURN);

   Keyboard.write(KEY_RETURN);

  Keyboard.print("It was the");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("Night");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("before");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("Christmas...");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("And All Through");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("The House....");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("Not A Creature Was");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("Sturring...");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("Not Even");

   Keyboard.write(KEY_RETURN);

  Keyboard.print("A Mouse");

   Keyboard.write(KEY_RETURN);

   Keyboard.write(KEY_RETURN);

  Keyboard.print("Happy Holidays To All!!");

   Keyboard.write(KEY_RETURN);

   Keyboard.write(KEY_RETURN);

  Keyboard.print("From");

   Keyboard.write(KEY_RETURN);

   Keyboard.write(KEY_RETURN);

  Keyboard.print("Cheers!!");

   Keyboard.write(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print("x");

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}
