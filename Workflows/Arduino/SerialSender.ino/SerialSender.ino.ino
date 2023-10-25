int incomingByte = 110; // for incoming serial data
int outPin = 9;
int outPin2 = 10;
int outPin3 = 11;
void setup() {
  pinMode(outPin, OUTPUT);    // sets the digital pin 13 as output
  pinMode(outPin2, OUTPUT);    // sets the digital pin 13 as output
  pinMode(outPin3, OUTPUT);    // sets the digital pin 13 as output
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}

void loop() {
  // send data only when you receive data:
  // if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    if (incomingByte == 115){
      digitalWrite(outPin, HIGH);
      digitalWrite(outPin2, HIGH);
      digitalWrite(outPin3, HIGH);}

    if (incomingByte == 110) {
      digitalWrite(outPin, LOW);
      digitalWrite(outPin2, LOW);
      digitalWrite(outPin3, LOW);}
  // }
}
