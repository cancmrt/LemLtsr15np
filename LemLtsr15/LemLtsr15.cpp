#include "Arduino.h"
#include "LemLtsr15.h"

LemLtsr15::LemLtsr15(int pin, uint8_t conType)
{
	analogPin = pin;
	offset = 2487;
	sensivity = 41.6*conType;
}
double LemLtsr15::getAmp()
{
	double volt = analogRead(analogPin);
	volt = (volt/1023)*5000;
	double amp = ((volt-offset)/sensivity);
	return amp;
}
void LemLtsr15::getOffsetSample()
{
	offset = 0;
	for(int i=0; i<100; i++)
	{
		double temp = analogRead(analogPin);
		offset += (temp/1023)*5000;
		offset = offset/2;
	}
}
