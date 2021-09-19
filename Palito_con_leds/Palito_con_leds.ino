
const int buttonPin = 4;
int buttonState = 0; 
int led = 6;   
int led2 = 7;
int brightness = 0;    // how bright the LED is
int brightness2 = 0; 
int fadeAmount = 1;    // how many points to fade the LED by
int sleepy = 80;
void setup() {
  Serial.begin(9600);
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
  
  
}

// the loop routine runs over and over again forever:
void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH){
  // set the brightness of pin 9:
  analogWrite(led, brightness);
  analogWrite(led2, brightness2);
  
  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  // wait for 30 milliseconds to see the dimming effect
  delay(20);
  
}
else if (buttonState == LOW){
  
  analogWrite(led, 255);
  analogWrite(led2, 0);// turn the LED on (HIGH is the voltage level)
  delay(sleepy);   
  
  analogWrite(led, 0);
  analogWrite(led2, 255);// turn the LED off by making the voltage LOW
  delay(sleepy); 
  
  analogWrite(led, 0);
  analogWrite(led2, 0);// turn the LED off by making the voltage LOW
  delay(sleepy);
  
}
}
