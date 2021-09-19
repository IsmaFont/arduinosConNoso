int buttonPin = 1;
int buttonState;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin, INPUT_PULLUP);
}
void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);  
 Serial.println(buttonState);
 delay(100);
}
