static int buzzer = 3;
int speed = 100;

void randomHz() {
  tone(buzzer, random(100,3000));
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  randomHz();
  delay(speed);
}
