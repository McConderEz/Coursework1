#pragma once
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Lang.h"

using namespace std;
class PhoneMode
{
	friend class MobilePhone;
	friend class SmartPhone;
	friend class PushButtonPhone;
public:	
	Lang language;
	void Button_Power();
	PhoneMode(double Energy,bool Power,bool airplaneMode);
	PhoneMode();
	void GetLevelOfEnergy();
	void Rechargin();
	void AirPlaneMode();
	void GetState();
	void Discharge();
	
protected:
	double Energy;
	bool Power;
	bool airplaneMode;

};

