static int buttonOne = 2;
static int ledGreen = 3;
static int inBetween = 1000;
static int espacio = 80;
static int rayaVal = 200;
static int puntoVal = 50;

void punto (){
  tone(ledGreen, 1000);
  delay(puntoVal);
  noTone(ledGreen);
  delay(espacio);
}

void raya (){
  tone(ledGreen, 1000);
  delay(rayaVal);
  noTone(ledGreen);
  delay(espacio);
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonOne,INPUT_PULLUP);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(buttonOne));
  if (digitalRead(buttonOne) == LOW) {
    punto();
    raya();
    punto();
    raya();
    punto();
    punto();
    delay(inBetween);

    raya();
    punto();
    raya();
    raya();
    raya();
    raya();
    raya();
    punto();
    punto();
    raya();
    delay(inBetween);

    punto();
    raya();
    punto();
    raya();
    punto();
    punto();
    punto();
    punto();
    punto();
    punto();
    punto();
    raya();
    punto();
    punto();
    punto();
    raya();
    raya();
    punto();
    punto();
  }
  
}
