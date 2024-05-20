int trigger = 8;
int echo = 10;
boolean measured = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  

    // Clearing the trigger pin
    digitalWrite(trigger, LOW);
    delayMicroseconds(2);

    // Triggering the trigger pin
    digitalWrite(trigger, HIGH);
    delayMicroseconds(2); 
    digitalWrite(trigger, LOW);

    float time;
    time = pulseIn(echo, HIGH);
    float distance = (time * 0.0343) / 2;
    float height = 100; 
    Serial.print("distance :");
    Serial.println(distance);
   
  
}
