#include <SoftwareSerial.h>
int flag1=0,flag2=0,flag3=0;int value;
SoftwareSerial mySerial(10, 11); // RX,TX
void setup() {
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(12,OUTPUT);pinMode(9,OUTPUT);pinMode(8,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  while(!mySerial.available());
  value=mySerial.read();
  // controlling the switching on and off of three relays simultaneously using a bluetooth module
  if(flag1!=1 && value==1)
  {Serial.println(value);digitalWrite(12,HIGH);flag1=1;}
  else if(flag2!=2 && value==2)
  {Serial.println(value);digitalWrite(9,HIGH);flag2=2;}
  else if(flag3!=3 && value==3)
  {Serial.println(value);digitalWrite(8,HIGH);flag3=3;}
  else if(flag1==1 && value==1)
  {Serial.println(value);digitalWrite(12,LOW);flag1=0;}
   else if(flag2==2 && value==2)
  {Serial.println(value);digitalWrite(9,LOW);flag2=0;}
   else if(flag3==3 && value==3)
    {Serial.println(value);digitalWrite(8,LOW);flag3=0;}
}

