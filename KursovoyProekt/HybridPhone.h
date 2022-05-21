#pragma once
#include "PushButtonPhone.h"
#include "SmartPhone.h"

class HybridPhone:public PushButtonPhone,public SmartPhone
{
public:
	HybridPhone(char* Vendor, char* Model, string RAM, string Processor, string ROM, double Energy = 100);
};

