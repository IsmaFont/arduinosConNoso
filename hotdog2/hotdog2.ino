#include <Keyboard.h> 

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  // Happy Holidays By Ghostshell
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad.exe");

  typeKey(KEY_RETURN);

  delay(300);

  Keyboard.print("         _");

  typeKey(KEY_RETURN);

  Keyboard.print("      |\\ 0 /|");

  typeKey(KEY_RETURN);

  Keyboard.print("       |/|\\|");

  typeKey(KEY_RETURN);

  Keyboard.print("         |");

  typeKey(KEY_RETURN);

  Keyboard.print("         @");

  typeKey(KEY_RETURN);

  Keyboard.print("        /+\\");

  typeKey(KEY_RETURN);

  Keyboard.print("       o/@\\\\");

  typeKey(KEY_RETURN);

  Keyboard.print("     +//o/\\\\o");

  typeKey(KEY_RETURN);

  Keyboard.print("     //+/@\\\\/+o");

  typeKey(KEY_RETURN);

  Keyboard.print("    /\\/o//+/\\\\\\\\");

  typeKey(KEY_RETURN);

  Keyboard.print("   +///\\//\\o\\o+\\\\o");

  typeKey(KEY_RETURN);

  Keyboard.print("  o/+@/++/\\\\\\@\\\\/\\+");

  typeKey(KEY_RETURN);

  Keyboard.print(" /\\/+///o/@\\o+/\\+\\\\");

  typeKey(KEY_RETURN);

  Keyboard.print("o/+/\\/@//||\\/\\\\o\\\\\\o _");

  typeKey(KEY_RETURN);

  Keyboard.print(" /__ /|  ||      /__ /|");

  typeKey(KEY_RETURN);

  Keyboard.print("| * | | (__)___ | * | |");

  typeKey(KEY_RETURN);

  Keyboard.print("|___|/_   /__ /||___|/");

  typeKey(KEY_RETURN);

  Keyboard.print("    /_/| | * | |");

  typeKey(KEY_RETURN);

  Keyboard.print("   |_|/  |___|/");

  typeKey(KEY_RETURN);

  Keyboard.print("     `-.____/");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("It was the");

  typeKey(KEY_RETURN);

  Keyboard.print("Night");

  typeKey(KEY_RETURN);

  Keyboard.print("before");

  typeKey(KEY_RETURN);

  Keyboard.print("Christmas...");

  typeKey(KEY_RETURN);

  Keyboard.print("And All Through");

  typeKey(KEY_RETURN);

  Keyboard.print("The House....");

  typeKey(KEY_RETURN);

  Keyboard.print("Not A Creature Was");

  typeKey(KEY_RETURN);

  Keyboard.print("Sturring...");

  typeKey(KEY_RETURN);

  Keyboard.print("Not Even");

  typeKey(KEY_RETURN);

  Keyboard.print("A Mouse");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("Happy Holidays To All!!");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("From");

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  Keyboard.print("Cheers!!");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print("x");
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
