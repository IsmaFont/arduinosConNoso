

//Pinout//
const int buttonPin = 4;
const int blue = 6;
const int red =5;

//Button properties//
int buttonState = 0; 
int buttonX = 0;

//Led starting properties//
int bBrightness = 254;
int rBrightness = 0;

//Led sequence properties//
int rFade = 1;
int bFade = 1;
int sleepTime = 40;
int crayTime = 90;
int halfTime = 200;
int hangTime = 500;
float bpm = 30000 / crayTime;

//Setup method//
void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
  
}

//Loop method//
void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonX);
  if (buttonState == 0){
    buttonX++;
    delay(200);
  }
  
  if (buttonX > 4)
    buttonX = 0;
  Serial.println(buttonState);

  switch (buttonX) {

    case 0:
    buttonState = digitalRead(buttonPin);
    while (buttonState == 1){
    buttonState = digitalRead(buttonPin); 
    analogWrite(red, rBrightness);
    analogWrite(blue, bBrightness);

    rBrightness = rBrightness + rFade;
    bBrightness = bBrightness + bFade;

    if (rBrightness <= 0 || rBrightness >= 255) {
      rFade = -rFade;
    }

    if (bBrightness <= 0 || bBrightness >= 255) {
      bFade = -bFade;
    }
    delay(sleepTime);
  }
    break;

    case 1:
    analogWrite(red, 255);
    analogWrite(blue, 0);// turn the LED on (HIGH is the voltage level)
    delay(bpm);   
    
    analogWrite(red, 0);
    analogWrite(blue, 255);// turn the LED off by making the voltage LOW
    delay(bpm); 

    break;
    case 2:
      if (buttonState == 1){
      buttonState = digitalRead(buttonPin);
      analogWrite(red, 128);
      analogWrite(blue, 128);
      }
    break;

    case 3:
    if (buttonState == 1){
      buttonState = digitalRead(buttonPin);
      analogWrite(red, 100);
      analogWrite(blue, 255);
      }
    break;

    case 4:
    if (buttonState == 1){
      buttonState = digitalRead(buttonPin);
      analogWrite(red, 255);
      analogWrite(blue, 255);
    }
    break;
  }
}
