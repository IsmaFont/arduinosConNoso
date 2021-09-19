int blue = 6;
int bFade = 1;
int bBrightness = 0;
int sleepTime = 100;

void setup() {
  Serial.begin(9600);
  
  pinMode(blue, OUTPUT);

}

void loop() {
    
    analogWrite(blue, bFade);
    Serial.println(bBrightness);
    

     if (bBrightness <= 0 || bBrightness >= 255) {
      bFade = +bFade;
    }
    
    delay(sleepTime);
}
