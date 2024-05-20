const int red = 3;
const int yellow = 4;
const int green = 2;

void setup() {
  // put your setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Turn the LED on
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  
  // Wait for 1 second
  delay(2000);

  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  
  // Wait for 1 second
  delay(2000);

  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  
  // Wait for 1 second
  delay(2000);
  return;


}
