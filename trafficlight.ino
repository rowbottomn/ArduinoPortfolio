/*
  Traffic Light

  Turns 3 leds into a traffic signal

  created 
  by Nathan Rowbottom
  https://repl.it/@STEAMAcademy/TrafficLight
*/

const int gled = 4;
const int bled = 3;
const int rled = 2;

float gtime = 1.5;
float btime = 0.5;
float rtime = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(gled, OUTPUT);
  pinMode(bled, OUTPUT);
  pinMode(rled, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {
  //green light
  Serial.println("Green Light");
  digitalWrite(rled, LOW);
  digitalWrite(bled, LOW);
  digitalWrite(gled, HIGH);
   
  delay(gtime*1000);                       // wait for gtime seconds
  
  //amber light
  Serial.println("Amber Light");
  digitalWrite(rled, LOW);
  digitalWrite(bled, HIGH);
  digitalWrite(gled, LOW);

  delay(btime*1000);                       // wait for btime seconds

  //red light
  Serial.println("Red Light");
  digitalWrite(rled, HIGH);
  digitalWrite(bled, LOW);
  digitalWrite(gled, LOW);

  delay(rtime*1000);                       // wait for rtime seconds

}