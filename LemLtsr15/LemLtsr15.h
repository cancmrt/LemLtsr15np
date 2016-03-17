#include "Arduino.h"

#ifndef LemLtsr15_h
#define LemLtsr15_h

class LemLtsr15
{
	public:
		LemLtsr15(int pin, uint8_t conType);
		double getAmp();
		void getOffsetSample();
	private:
		int analogPin;
		uint8_t connectionType;
		double offset;
		double sensivity;
	
};

#endif
