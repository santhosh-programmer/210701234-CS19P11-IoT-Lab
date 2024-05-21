
int buzzer = 12;    // led is connected to pin 13

int pir = 3;  // output pin of the sensor is connected to digital pin 2

int motion = 0;     // variable to store the sensor status (value)

void setup()

{

    pinMode(buzzer, OUTPUT);   // initialise LED as an output

    pinMode(pir, INPUT); // initialise sensor as an input

    Serial.begin(9600);     // initialise serial

}

void loop()

{

    motion = digitalRead(pir);
    if (motion == HIGH)

    {                            
        
        digitalWrite(buzzer, HIGH); // turn LED ON
        Serial.println("Motion detected!");
        

    }

    else

    {

        digitalWrite(buzzer, LOW); // if val is low , led pin set to low
        Serial.println("Motion stopped!");

    }
    return;

}
