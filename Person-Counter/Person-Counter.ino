int pin1 = 1;
int counter = 0; 
volatile int time1,time2; 

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  attachInterrupt(0,pir1,RISING);
  attachInterrupt(1,pir2,RISING);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(time1 - time2 > 0){
    counter +=1;
  }
  else if(time1 - time2 < 0){
    counter -=1;
  }
if(counter > 0) {
  digitalWrite(13,HIGH);
}
else if (counter == 0){
  digitalWrite(13, LOW);
  digitalWrite(12,HIGH);
}
}
void pir1()  {
  time1 = millis();
}
void pir2()  {
  time2 = millis();
}


