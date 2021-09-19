static int buzzer = 3;
int speed = 1;


void subirHz() {
      for (int i = 0; i <= 2000; i++) {
    tone(buzzer, i);
    delay(speed);
    Serial.println(i);
      }
}
      
void bajarHz () {
      for (int i = 2000; i >= 0; i--) {
    tone(buzzer, i);
    delay(speed);
    Serial.println(i);
      }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    subirHz();
    bajarHz();
}
