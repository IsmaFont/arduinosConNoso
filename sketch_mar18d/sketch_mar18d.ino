const int analogP = 0;
int wut = 0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  wut = analogRead(analogP);
  Serial.println(wut);
  delay(800);

}
