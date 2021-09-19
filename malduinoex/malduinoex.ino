#define HID_CUSTOM_LAYOUT
#define LAYOUT_SPANISH
#include <HID-Project.h>
#include <HID-Settings.h>


#define blinkInterval 50
#define ledPin 3
int buttonPin = 2;

int defaultDelay = 4;
int defaultCharDelay = 5;


void typeKey(int key){
  Keyboard.press(key);
  delay(defaultCharDelay);
  Keyboard.release(key);
}

void setup(){
      
  AbsoluteMouse.begin();
  Keyboard.begin();
  pinMode(buttonPin, INPUT_PULLUP);
  delay(1000);

}

void loop() {
    if(digitalRead(buttonPin) == LOW){


    /* ----- Script-Begin (just a little Hello World example here) ----- */
    


    // Start Payload
    // Happy Holidays By Ghostshell
    
    Keyboard.press(KEY_LEFT_GUI);
    //Keyboard.press(114);
    Keyboard.print("l");
    Keyboard.releaseAll();
    delay(200);
    Keyboard.print("l");
    delay(200);
    Keyboard.print("416378925");
    delay(300);
    Keyboard.write(KEY_RETURN);


   
    /* ----- Script-End ----- */
    Keyboard.end();
    AbsoluteMouse.end();
    delay(1000);
  }
}
