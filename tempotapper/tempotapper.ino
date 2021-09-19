// include the ArduinoTapTempo library
#include <ArduinoTapTempo.h>

// define the pin you want to attach your tap button to
const int BUTTON_PIN = 4;

// make an ArduinoTapTempo object
ArduinoTapTempo tapTempo;

void setup() {
  // begin serial so we can see the state of the tempo object through the serial monitor
  Serial.begin(9600);

  // setup your button as required by your project
  pinMode(BUTTON_PIN, INPUT);
  digitalWrite(BUTTON_PIN, HIGH);
}

void loop() {
  // get the state of the button
  boolean buttonDown = digitalRead(BUTTON_PIN) == LOW;
  
  // update ArduinoTapTempo
  tapTempo.update(buttonDown);

  // print out the beats per minute
  Serial.print("bpm: ");
  Serial.println(tapTempo.getBPM());
}
// comentario vacio