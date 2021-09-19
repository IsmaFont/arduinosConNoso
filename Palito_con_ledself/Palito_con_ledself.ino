const int buttonPin = 4;
int buttonState = 0; 

int blue = 6;
int red =5;
int bBrightness = 254;
int rBrightness = 0;

int rFade = 1;
int bFade = 1;
int sleepTime = 20;
int crayTime = 30;
void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH){
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
  else if (buttonState == LOW){
  
  analogWrite(red, 255);
  analogWrite(blue, 0);// turn the LED on (HIGH is the voltage level)
  delay(crayTime);   
  
  analogWrite(red, 0);
  analogWrite(blue, 255);// turn the LED off by making the voltage LOW
  delay(crayTime); 
  
  analogWrite(red, 0);
  analogWrite(blue, 0);// turn the LED off by making the voltage LOW
  delay(crayTime);
  
}


}
