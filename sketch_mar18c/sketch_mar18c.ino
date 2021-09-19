const int analogPin = 0;

int blue = 6;
int red = 5;

int inputVal = 0;
int outputVal = 0;

void setup(){
  Serial.begin(9600);
  
}
void loop(){
  inputVal = analogRead(analogPin);
  Serial.print("Input: ");
  Serial.println("inputVal");
  outputVal = map(inputVal, 0, 1023, 0, 255);
  Serial.print("output: ");
  Serial.println(outputVal);

  analogWrite(red, outputVal);
  
  delay(1000);
}
