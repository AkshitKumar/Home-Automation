#include <SoftwareSerial.h>
int flag=0;
SoftwareSerial mySerial(10, 11); // RX, TX
void setup() {
  // Open serial communications and wait for port to open:
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);

  // put your setup code here, to run once:

}

void loop() {
  while(!mySerial.available());
  flag=mySerial.read();// reading the value recieved over the serial port
  Serial.print(flag);// printing the value recieved
  Serial.print("\n");// creating a new line
   
  if(flag==49)// checking if the value recieves corresponds with the ASCII value of char '0'
  {driveforward();
Serial.print("driveforward();\n");digitalWrite(9, LOW);digitalWrite(8, LOW);}
  else if(flag==50)// checking if the value recieves corresponds with the ASCII value of char '0'
  {drivebackward();
Serial.print("drivebackward();\n");digitalWrite(8, LOW);digitalWrite(9, LOW);}
 
}

void driveforward()// function to drive the latch forward
{for(double i=millis();millis()-i<200;i++)
{Serial.print("driveforward();\n");digitalWrite(8, HIGH);digitalWrite(9, LOW);}}
void drivebackward()// function to drive the latch backward
{for(double i=millis();millis()-i<200;i++)
{digitalWrite(9, HIGH);Serial.print("drivebackward();\n");digitalWrite(8, LOW);}}



