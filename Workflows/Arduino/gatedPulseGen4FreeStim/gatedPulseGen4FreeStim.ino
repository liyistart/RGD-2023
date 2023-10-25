int gatePin = 4;                // Gate Ctrl connected to digital pin 3
int ledPin = 2;                 // LED connected to digital pin 2
int gatePin2 = 5;
int ledPin2 = 3;
int wnPin = 1;
void setup()
{
  pinMode(gatePin, OUTPUT);      // sets the digital pin as input
  pinMode(ledPin, OUTPUT);      // sets the digital pin as output
  pinMode(gatePin2, INPUT);      // sets the digital pin as input
  pinMode(ledPin2, OUTPUT);      // sets the digital pin as output
  pinMode(wnPin, OUTPUT);      // sets the digital pin as output
}

void loop()
{
  if (digitalRead(gatePin2) == HIGH){
    digitalWrite(wnPin, HIGH);
    digitalWrite(gatePin, HIGH);
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);   // sets the LED on 
    delay(5);                  // waits for a second
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);    // sets the LED off
    delay(15);                  // waits for a second
  }
  else{
    digitalWrite(wnPin, LOW);
    digitalWrite(gatePin, LOW);}
}
