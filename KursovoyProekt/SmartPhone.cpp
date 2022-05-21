#include "SmartPhone.h"



SmartPhone::SmartPhone(char* Vendor, char* Model, string RAM, string Processor, string ROM):MobilePhone(Vendor,Model) {
	SetConfiguration(RAM, Processor, ROM);
}



double SmartPhone::ReadDouble() {
	double number;
	char c;

	while (1) {
		if (!scanf_s("%lf", &number) || getchar() != '\n') {
			while ((c = getchar()) != '\n' && c != EOF);
		}
		else {
			return number;
		}

		cout << language.SmartPhone_lang[0];
	}
}

int SmartPhone::ReadInteger() {
	int number;
	char c;
	while (1) {	
		if (!scanf_s("%d", &number) || getchar() != '\n') {

			while ((c = getchar()) != '\n' && c != EOF);
		}
		else {
			return number;
		}
		cout << language.SmartPhone_lang[0];
	}
}

void SmartPhone::CheckPictures()
{
	if (this->state.Power == false) {
		return;
	}
	cout << language.SmartPhone_lang[1];
	for (auto i = 0; i < this->pictures.size(); i++) {
		cout << i + 1 << ")" << this->pictures[i] << endl;
	}
	cout << endl;
}

void SmartPhone::GetConfiguration()
{
	if (this->RAM == "" || this->Processor == "" || this->ROM == "") {
		cout << language.SmartPhone_lang[2] << endl;		
	}
	cout << language.SmartPhone_lang[3] << endl;
	cout << language.SmartPhone_lang[4] << this->Processor << endl;
	cout << "RAM:" << this->RAM << endl;
	cout << "ROM:" << this->ROM << endl;
	cout << endl;
}

void SmartPhone::SetConfiguration(string RAM, string Processor, string ROM)
{
	this->RAM = RAM;
	while (this->RAM == "") {
		cout << language.SmartPhone_lang[5];
		cin >> this->RAM;
	}
	this->Processor = Processor;
	while (this->Processor == "") {
		cout << language.SmartPhone_lang[6];
		cin >> this->Processor;
	}
	this->ROM = ROM;
	while (this->ROM == "") {
		cout << language.SmartPhone_lang[7];
		cin >> this->ROM;
	}	
	cout << endl;
}

void SmartPhone::Photograph()
{
	if (this->state.Power == false) {
		cout << language.SmartPhone_lang[8] << endl;
		cout << endl;
		return;
	}

	if (this->pictures.back().empty() == false) {
		cout << language.SmartPhone_lang[9] << endl;
		char choose;
		int i = -1;
		cin >> choose;
		switch (choose) {
		case 'y':
			cout << language.SmartPhone_lang[10];
			while (i < 0 || i > 15) {
				i = ReadInteger();
			}
			this->pictures[i] = "";
			cout << language.SmartPhone_lang[11] << i << language.SmartPhone_lang[12] << endl;
			break;
		case 'n':
			return;
			break;
		}
	}

	for (auto i = 0; i < this->pictures.size(); i++) {
		if (this->pictures[i].empty() == true) {
			cout << language.SmartPhone_lang[13];
			string name;
			cin >> name;
			this->pictures[i] = name;
			break;
		}		
	}
	cout << language.SmartPhone_lang[14] << endl;
	cout << endl;
	
}

void SmartPhone::Calculate()
{
	if (this->state.Power == false) {
		return;
	}
	double x, y = 0;
	cout << language.SmartPhone_lang[15] << endl;
	cout << language.SmartPhone_lang[16];
	x = ReadDouble();
	cout << language.SmartPhone_lang[17];
	while (y == 0) {
		y = ReadDouble();
	}
	cout << language.SmartPhone_lang[18];
	char operation;
	cin >> operation;
	switch (operation) {
	case '+':
		cout << "x + y = " << x + y << endl;
		break;
	case '-':
		cout << "x - y = " << x - y << endl;
		break;
	case '*':
		cout << "x * y = " << x * y << endl;
		break;
	case '/':
		cout << "x / y = " << x / y << endl;
		break;
	default:
		cout << language.SmartPhone_lang[19] << endl;
		break;
	}
	cout << endl;
}
