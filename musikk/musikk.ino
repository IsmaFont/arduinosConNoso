/*************************************************
* Public Constants
*************************************************/

float N_DO5 = 1046.50;
float N_RE5 = 1174.66;
float N_MI5 = 1318.51; 
float N_FA5 = 1396.91; 
float N_SOL5 = 1567.98; 
float N_LA5 = 1760.00;
float N_SI5 = 1975.53; 

float N_DO4 = 523.251;
float N_RE4 = 587.330;
float N_MI4 = 659.255; 
float N_FA4 = 698.456; 
float N_SOL4 = 783.991;
float N_LA4 = 880.000;
float N_SI4 = 987.767; 

float N_DO3 = 1046.50;
float N_RE3 = 1174.66;
float N_MI3 = 1318.51; 
float N_FA3 = 1396.91; 
float N_SOL3 = 1567.98; 
float N_LA3 = 1760.00;
float N_SI3 = 1975.53; 



int buzzer = 7;
int nDuration = 200;

int spaceFull = 60;
int spaceHalf = spaceFull / 2;

void playNote(float note) {
  tone(buzzer, note);
  delay(nDuration);
  noTone(buzzer);
}

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:


  playNote(N_DO5);
  delay(spaceFull);
  playNote(N_MI5);
  delay(spaceFull);
  playNote(N_SOL5);
  delay(spaceFull);
  playNote(N_MI5);
  delay(spaceFull);
  playNote(N_DO5);
  delay(spaceFull);
  playNote(N_MI5);

  playNote(N_SOL5);
  delay(spaceFull);
  playNote(N_SOL5);

  playNote(N_MI5);
  delay(spaceFull);

  
  playNote(N_LA4);
  delay(spaceFull);
  playNote(N_DO5);
  delay(spaceFull);
  playNote(N_MI5);
  delay(spaceFull);
  playNote(N_DO5);
  delay(spaceFull);
  playNote(N_LA4);
  delay(spaceFull);
  playNote(N_DO5);

  playNote(N_MI5);
  delay(spaceFull);
  playNote(N_MI5);

  playNote(N_DO5);
  delay(spaceFull);
}
