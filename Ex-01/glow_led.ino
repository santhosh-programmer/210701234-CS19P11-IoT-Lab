const int led = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(led,HIGH);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(led,LOW);
  digitalWrite(13,HIGH);
}
