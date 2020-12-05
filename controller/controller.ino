#include <util/delay.h>

volatile int interrupt = 0;

void setup(){
  pinMode(2, INPUT_PULLUP); 
  pinMode(3, INPUT_PULLUP); 
  attachInterrupt(digitalPinToInterrupt(2), buttonA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(3), buttonRIGHT, CHANGE);
  Serial.begin(9600);
}

void buttonA(){
    interrupt = 1;
}

void buttonRIGHT(){
    interrupt = 2;
}


void loop(){
  delay(50);
  if (interrupt==1){
    if(digitalRead(2)==LOW)
      Serial.write("PRESS A\n");
    else if (digitalRead(2)==HIGH)
      Serial.write("RELEASE A\n");
    //digitalWrite(2, HIGH);
    //digitalWrite(3, HIGH);
    delay(20);
    interrupt=0;
  }
  if (interrupt==2){
    if(digitalRead(3)==LOW)
      Serial.write("PRESS D_RIGHT\n");
    else if (digitalRead(2)==HIGH)
      Serial.write("RELEASE D_RIGHT\n");
    //digitalWrite(2, HIGH);
    //digitalWrite(3, HIGH);
    delay(20);
    interrupt=0;
  }
}
