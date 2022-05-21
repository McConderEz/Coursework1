#include "HybridPhone.h"
#include <iostream>

using namespace std;
HybridPhone::HybridPhone(char* Vendor, char* Model, string RAM, string Processor, string ROM, double Energy) :SmartPhone(Vendor, Model, RAM, Processor, ROM), PushButtonPhone(Vendor,Model,Energy)
{
	
}
