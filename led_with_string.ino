const int ledPin=13;
void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0){
    char incomingByte=Serial.readStringUntil('\n');
    if(incomingByte=='on'){
      digitalWrite(ledPin,HIGH);
    }else if (incominByte=='off'){
      digitalWrite(ledPin,LOW);
    }}}
   
