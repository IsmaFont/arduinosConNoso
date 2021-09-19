#define HID_CUSTOM_LAYOUT
#define LAYOUT_SPANISH
#include <HID-Project.h>
#include <HID-Settings.h>


static int buttonPin = 5;
static int buttonPin2 = 3;
int ledRed = 9;
int state = HIGH;
int reading;
int previous = LOW;
long debounce = 200;


void mouseSquare() {
  for (int a = 0; a <= 150; a++) {
    Mouse.move(1, 0, 0);
  }

  for (int b = 0; b <= 150; b++) {
    Mouse.move(0, 1, 0);
  }

  for (int c = 0; c <= 150; c++) {
    Mouse.move(-1, 0, 0);
  }

  for (int d = 0; d <= 150; d++) {
    Mouse.move(0, -1, 0);
  }
}

void mouseTriangle() {

  for (int a = 0; a <= 200; a++) {
    Mouse.move(-2, 0, 0);
    
  }

  for (int b = 0; b <= 200; b++) {
    Mouse.move(1, -1, 0);
    
  }

  for (int c = 0; c <= 200; c++) {
    Mouse.move(1, 1, 0);
    
  }

}

void mouseRandom() {
  Mouse.move(random(-5,6),random(-5,6), 0);
}


void setup() {
  pinMode(ledRed, OUTPUT);

  Serial.begin(9600);
  Mouse.begin();      // inicio de emulacion de mouse
  Keyboard.begin();
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  delay(4000);

}

void loop() {
  reading = digitalRead(buttonPin2);
  if (digitalRead(buttonPin) == LOW || digitalRead(buttonPin2) == LOW) {
    digitalWrite(ledRed, HIGH);
  }

  if (digitalRead(buttonPin) == LOW) {
    //Consumer.write(CONSUMER_CALCULATOR);
    Consumer.write(MEDIA_PLAY_PAUSE);
    //    Keyboard.press(KEY_LEFT_GUI);
    //    //Keyboard.press(114);
    //    Keyboard.print("l");
    //    Keyboard.releaseAll();
    //    delay(200);
    //    Keyboard.print("l");
    //    delay(200);
    //    Keyboard.print("416378925");
    //    delay(300);
    //    Keyboard.write(KEY_RETURN);
    Keyboard.end();
    delay(400);
  }

  if (reading == HIGH && previous == LOW) {

    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;

  }
  previous = reading;

  if (state == 1) {
    // int rando = random(2);
    // switch (rando) {
    //   case 0:
    //   mouseSquare();
    //   break;

    //   case 1:
    //   mouseTriangle();
    //   break;
    // }
    mouseRandom();
  }
  digitalWrite(ledRed, LOW);
}
