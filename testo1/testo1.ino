#define HID_CUSTOM_LAYOUT
#define LAYOUT_SPANISH
#include <HID-Project.h>
#include <HID-Settings.h>


//#define blinkInterval 50
//#define ledPin 3
static int buttonPin = 5;
static int buttonPin2 = 3;
int defaultDelay = 4;
int defaultCharDelay = 5;

int state = HIGH;
int reading;
int previous = LOW;
long debounce = 200;

void setup() {

  Serial.begin(9600);
  Keyboard.begin();
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  delay(1000);
  Mouse.begin();      // inicio de emulacion de mouse
}

void loop() {
  reading = digitalRead(buttonPin2);
  

  if (digitalRead(buttonPin) == LOW) {
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
    Keyboard.end();
    delay(1000);
  }

  if (reading == HIGH && previous == LOW) {
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;
  }
  previous = reading;
  Serial.println(state);
  
  if (state == 1) { 
    Mouse.move(random(-10, 10), random(-10, 10), 0);
    delay(30);
  }
}
