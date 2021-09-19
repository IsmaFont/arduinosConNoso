int keystroke = 0;
void setup() {
  Serial.begin(9600);
}

void loop(){
if (Serial.available()>0){
 keystroke = Serial.read();
 }
Serial.println(keystroke);
delay(500);
}
