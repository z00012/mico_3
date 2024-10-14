const int ledPin=13;
void setup() {
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available()>0){
    char incomingByte=Serial.read();
    if(incomingByte=='H' or incomingByte=='h'){
      digitalWrite(ledPin,HIGH);
    }else if (incomingByte=='L' or incomingByte=='l' ){
      digitalWrite(ledPin,LOW);
    }}}
   


