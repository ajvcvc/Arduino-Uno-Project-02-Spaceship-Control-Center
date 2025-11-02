int switchState = 0;
void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(2,INPUT);

  // put your setup code here, to run once:

}

void loop() {
  switchState = digitalRead(2);
  // put your main code here, to run repeatedly:


if (switchState == LOW) {
  // switch is off
  digitalWrite(3,HIGH);   // green LED
  digitalWrite(4,LOW);    // red LED
  digitalWrite(5,LOW);    // red LED

}
else {
  // switch is on
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(250);  //wait 250ms
  // switch the LEDs
  digitalWrite(4, HIGH);
  digitalWrite(5,LOW);
  delay(250);  // wait 250ms


  }
} // repeat the loop
