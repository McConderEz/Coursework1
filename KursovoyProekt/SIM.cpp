#include "SIM.h"
#include <iostream>
#include <vector>
#include <stdio.h>

SIM::SIM(char* Number, char* Operator) {
	this->Number = Number;
	this->Operator = Operator;
}
SIM::SIM() {

}

vector<SIM> SIM::subs;
vector<pair<string, string>> SIM::dataBase;

void SIM::GetToData(SIM sub) {
	subs.push_back(sub);

}

void SIM::GetToDataSMS(char* number, string sms) {
	pair<string, string> temp;
	temp.first = number;
	temp.second = sms;
	dataBase.push_back(temp);
}

void SIM::GetNumber() {
	if (this->Number != NULL) {
		cout << language.SIM_lang[0];
		puts(this->Number);
		cout << endl;
	}
	else {
		cout << language.SIM_lang[1] << endl;
	}
}
void SIM::GetOperator() {
	if (this->Operator != NULL) {
		cout << language.SIM_lang[2];
		puts(this->Operator);
		cout << endl;
	}
	else {
		cout << language.SIM_lang[1] << endl;
	}
}