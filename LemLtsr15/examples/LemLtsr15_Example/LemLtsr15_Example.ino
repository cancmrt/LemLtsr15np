#include <LemLtsr15.h>

LemLtsr15 cSensor(A0,3);//first is analog measure pin second is primary turns for sensor
//1 for 15 amp measure and connection
//2 for 7.5 amp measure and connection
//3 for 5 amp measure and connection
//Look LEM LTSR 15-NP datasheet for connection

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  cSensor.getOffsetSample();
  //Take Offset sample for good measurement. 
  //Please use this function before not current on the sensor for measurement.
  //After this you can give current over sensor
  //Default offsetvalue is 2487 mV
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(cSensor.getAmp());
}
