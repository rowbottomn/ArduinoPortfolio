//BlinkWithoutDelayFunction
//Nathan Rowbottom Sept 28 2020

//Pseudocode
//assign an unsigned long variable for the time_interval
//in setup 
  //get the start time from millis
  //initial the pin mode for our led

//in the loop
  //call millis to get how much time passed since the last loop
  //check to see if the duration is long enough 
    //if HIGH then set low
    //else if low set high
    //reset my starttime

//assign an unsigned long variable for the time_interval
unsigned long timeInterval = 0;
unsigned long startTime = 0;
unsigned long duration = 200;

const int led = 13;

void setup() {
  Serial.begin(9600);
  
  // put your setup code here, to run once:
  //get the start time from millis
  startTime = millis();
  pinMode(led, OUTPUT);
}

void loop() {
  //call millis to get how much time passed since the last loop
  timeInterval = millis() - startTime;
  
  //check to see if the duration is long enough 
  if (timeInterval >= duration){
    Serial.println(startTime);
    Serial.println(timeInterval);
    Serial.println(digitalRead(led));
    
    
    //if HIGH then set low
    if (digitalRead(led)== HIGH){
      digitalWrite(led, LOW);
    }
    
    //else if low set high
    else{
      digitalWrite(led, HIGH);
    }
    //reset my starttime and interval
    startTime = millis();
    timeInterval = 0;
  }
  //delay(100);//noob check
}