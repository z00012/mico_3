const int ledPin = 13;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if (Serial.available() > 0)
  {
    int inb = Serial.parseInt();
    if (inb == 101) {
      digitalWrite(ledPin, HIGH);
    } else if (inb == 102 ) {
      digitalWrite(ledPin, LOW);
    }
  }
}




