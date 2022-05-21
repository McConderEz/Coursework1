#include "MobilePhone.h"
#include "SIM.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <windows.h>
#include "PhoneMode.h"

using namespace std;

MobilePhone::MobilePhone(char* Vendor, char* Model) {
	this->Vendor = SetVendor(Vendor);
	this->Model = SetModel(Model);
	/*state = PhoneMode(100, false, false);	*/
}

MobilePhone& MobilePhone::operator~()
{
	this->SIM_inventory = this->card;
	this->card = NULL;
	cout << language.MobilePhone_lang[16] << endl;
	return *this;
}


char* MobilePhone::SetVendor(char* Vendor) {
	char* vendor = Vendor;
	while(vendor == NULL) {
		cout << language.MobilePhone_lang[0];
		fgets(vendor, 32, stdin);
	}
	fflush(stdin);
	cout << endl;
	return vendor;
}

char* MobilePhone::SetModel(char* Model) {
	char* model = Model;
	while(model == NULL) {
		cout << language.MobilePhone_lang[1];
		fgets(model, 32, stdin);
	}
	fflush(stdin);
	cout << endl;
	return model;
}


void MobilePhone::GetVendor() {
	cout << language.MobilePhone_lang[2];
	puts(this->Vendor);	
}
void MobilePhone::GetModel() {
	cout << language.MobilePhone_lang[3];
	puts(this->Model);
}
void MobilePhone::GetInfo() {
	cout << language.MobilePhone_lang[4] << endl;
	GetVendor();
	GetModel();
	this->card->GetNumber();
	this->card->GetOperator();
}

void MobilePhone::GetConfiguration()
{
}

void MobilePhone::Photograph()
{
}

void MobilePhone::Calculate()
{
}

void MobilePhone::CheckPictures()
{
}

void MobilePhone::Call(char* number) {
	SIM temp;
	if (this->card == NULL) {
		cout << language.MobilePhone_lang[5] << endl;		
		return;
	}

	if (state.Power == true && state.airplaneMode == false) {
		for (auto i = 0; i < temp.subs.size(); i++) {
			if ((strcmp(number,temp.subs[i].Number) == 0) && strcmp(this->card->Operator, temp.subs[i].Operator) == 0) {
				cout << language.MobilePhone_lang[6] << endl;
				Sleep(300);
				cout << language.MobilePhone_lang[7] << temp.subs[i].Number<<endl;
				Sleep(1000);
				cout << language.MobilePhone_lang[8];
			}
		}
	}
	else {
		cout << language.MobilePhone_lang[9];
	}
}

void MobilePhone::SendSMS(char* number, string sms) {
	SIM temp;
	if (this->card == NULL) {
		cout << language.MobilePhone_lang[5] << endl;
		return;
	}
	if (state.Power == true && state.airplaneMode == false) {
		for (auto i = 0; i < temp.subs.size(); i++) {
			if ((strcmp(number, temp.subs[i].Number) == 0) && strcmp(this->card->Operator, temp.subs[i].Operator) == 0) {
				cout << language.MobilePhone_lang[10] << endl;
				temp.GetToDataSMS(number, sms);
				Sleep(1000);
				cout << language.MobilePhone_lang[11];
			}
		}
	}
	else {
		cout << language.MobilePhone_lang[9];
	}
}

void MobilePhone::GetSMS() {
	SIM temp;
	if (this->card == NULL) {
		cout << language.MobilePhone_lang[5] << endl;
		return;
	}
	if (state.Power == true && state.airplaneMode == false) {
		for (auto i = 0; i < temp.dataBase.size(); i++) {
			if (this->card->Number == temp.dataBase[i].first) {
				this->getSMS = temp.dataBase[i].second;
				cout << language.MobilePhone_lang[12] << getSMS << endl;
				temp.dataBase.erase(temp.dataBase.begin() + i);
				getSMS = "";
				break;
			}
		}	}
	else {
		cout << language.MobilePhone_lang[9];
	}
}

void MobilePhone::InsertSIM(SIM card) {

	if (this->card != NULL) {
		cout << language.MobilePhone_lang[13] << endl;
		return;
	}

	if (this->SIM_inventory != NULL) {
		this->card = this->SIM_inventory;
		this->card->GetToData(*this->card);
		cout << language.MobilePhone_lang[14] << endl;
		return;
	}
	else {
		cout << language.MobilePhone_lang[15] << endl;
	}	
}

