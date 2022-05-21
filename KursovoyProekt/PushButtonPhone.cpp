#include "PushButtonPhone.h"


PushButtonPhone::PushButtonPhone(char* Vendor, char* Model,double Energy) :MobilePhone(Vendor, Model) {
	this->state.Energy = Energy;
}


