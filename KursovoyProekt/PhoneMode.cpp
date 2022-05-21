#include "PhoneMode.h"
#include <thread>
#include <chrono>

PhoneMode::PhoneMode(double Energy, bool Power, bool airplaneMode) {
	this->Energy = Energy;
	this->Power = Power;
	this->airplaneMode = airplaneMode;
}

PhoneMode::PhoneMode() {

}

void PhoneMode::AirPlaneMode() {
	if (Power == true && airplaneMode == false) {
		airplaneMode = true;		
		cout << language.PhoneMode_lang[0] << endl;
	}
	else if (Power == true && airplaneMode == true) {
		airplaneMode = false;
		cout << language.PhoneMode_lang[1] << endl;
	}
	else if (Power == false) {
		cout << language.PhoneMode_lang[2] << endl;
	}
}

void PhoneMode::GetState()
{
	cout << language.PhoneMode_lang[3] << endl;
	cout << language.PhoneMode_lang[4] << this->Energy << "%" << endl;
	cout << language.PhoneMode_lang[5] << this->airplaneMode << endl;
	cout << language.PhoneMode_lang[6] << this->Power << endl;
}

void PhoneMode::Discharge()
{	
	for (; Energy > 0; Energy--) {
		if (Power == false) {
			return;
		}
		std::this_thread::sleep_for(chrono::milliseconds(500));
	}
	if (Energy == 0) {
		Power = false;
	}
}


void PhoneMode::Button_Power() {
	std::thread discharge;
	if (Power == false && Energy > 0) {
		Power = true;
		cout << language.PhoneMode_lang[7] << endl;
		discharge = thread(&PhoneMode::Discharge, this);
		discharge.detach();
	}
	else if (Power == false && Energy == 0) {
		cout << language.PhoneMode_lang[8] << endl;
	}
	else if (Power == true && Energy > 0) {
		Power = false;
		cout << language.PhoneMode_lang[9] << endl;					
	}
	else if (Power == true && Energy == 0) {
		Power = false;
		cout << language.PhoneMode_lang[10] << endl;
	}
	
}

void PhoneMode::GetLevelOfEnergy() {
	cout << language.PhoneMode_lang[11] << Energy << "%" << endl;
}

void PhoneMode::Rechargin() {
	cout << language.PhoneMode_lang[12] << endl;
	for (; Energy < 100; Energy++) {
		cout << Energy << "%" << endl;
		Sleep(300);
	}
	cout << language.PhoneMode_lang[13] << endl;
	cout << endl;
}