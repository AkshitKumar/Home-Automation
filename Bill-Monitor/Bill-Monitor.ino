#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 7); // RX, TX

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(115200);

  mySerial.begin(115200);
}

void loop() // run over and over
{
  int sensorvalue = analogRead(A0);//The output of the sensor is read at pin A0
  sensorvalue = sensorvalue - 511; //Converting the arduino output from 0 to 1023 to a useful output of -511 to 511
  current = sensorvalue / 20.44; //converting the extracted sensor value to  the current measured by sensor by dividing by corresponding factor
  mySerial.println(current);//The value is of current s sent via the serial port
  delay(1);
}

