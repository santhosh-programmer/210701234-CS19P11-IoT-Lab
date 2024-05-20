int trigger = 8;
int echo = 10;
boolean measured = false;
int light=13; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(light,OUTPUT);
}

void loop() {
  
  if (!measured) { 
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
    if(distance<= 100-(.8*100) )
    {
    
      Serial.println("Dustbin full");
      digitalWrite(light,HIGH);
      measured=true;
      return;
    }
  }
}
