void setup() {
  // put your setup code here, to run once:
     pinMode(22, INPUT);
     pinMode(23, INPUT);
     pinMode(24, INPUT);
     pinMode(25, INPUT);
     pinMode(26, INPUT);
     pinMode(27, INPUT);
     pinMode(28, INPUT);
     pinMode(29, INPUT);
     pinMode(41, OUTPUT);
     pinMode(43, OUTPUT);
     pinMode(45, OUTPUT);
     pinMode(47, OUTPUT);
     pinMode(49, OUTPUT);
     pinMode(51, OUTPUT);
     pinMode(52, OUTPUT);
     pinMode(53, OUTPUT);
           
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(22)== HIGH){
    digitalWrite(41,HIGH) ;
  }
  if(digitalRead(22)== LOW){
    digitalWrite(41,LOW) ;
  }
  if(digitalRead(23)== HIGH){
    digitalWrite(43,HIGH);
  }
  if(digitalRead(23)== LOW){
    digitalWrite(43, LOW);
  }
  if(digitalRead(24)== HIGH){
    digitalWrite(45,HIGH);
  }
  if(digitalRead(24)== LOW){
    digitalWrite(45,LOW);
  }
  if(digitalRead(25)== HIGH){
    digitalWrite(47,HIGH);
  }
  if(digitalRead(25)== LOW){
    digitalWrite(47,LOW);
  }
  if(digitalRead(26)== HIGH){
    digitalWrite(49,HIGH);
  }
  if(digitalRead(26)== LOW){
    digitalWrite(49,LOW);
  }
  if(digitalRead(27)== HIGH){
    digitalWrite(51,HIGH);
  }
  if(digitalRead(27)== LOW){
    digitalWrite(51,LOW);
  }
  if(digitalRead(28)== HIGH){
    digitalWrite(52,HIGH);
  }
  if(digitalRead(28)== LOW){
    digitalWrite(52,LOW);
  }
  if(digitalRead(29)== HIGH){
    digitalWrite(53,HIGH);
  }
  if(digitalRead(29)== LOW){
    digitalWrite(53,LOW);
  }

}
