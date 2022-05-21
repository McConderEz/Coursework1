#include <iostream>
#include "MobilePhone.h"
#include "SIM.h"
#include <stdio.h>
#include <thread>
#include <chrono>
#include "SmartPhone.h"
#include "Shop.h"
#include "Civil.h"
#include "PushButtonPhone.h"
#include "Lang.h"
#include <fstream>
#include "HybridPhone.h"
#include <conio.h>

using namespace std;

void Menu();
void Control(int index);
bool IsPhoneExsist(int index, Lang lang);
vector<Civil> civils; 
Shop shop;
Lang lang;
int ReadInteger() {
	int number;
	char c;
	while (1) {
		if (!scanf_s("%d", &number) || getchar() != '\n') {

			while ((c = getchar()) != '\n' && c != EOF);
		}
		else {
			return number;
		}
		printf_s("Incorrect number.\nTry again: ");
	}
}


int main()
{
	
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Menu();
			
	
}


void Menu() {
	
	string temp_ru;
	string temp_en;
	ifstream fin;
	ifstream init_fin;
	
	
	
	cout << "-Выберите язык/Choose language-\n0-Eng\t1-Rus" << endl;
	int i = -1;
	
	while (i < 0 || i > 1) {
		i = ReadInteger();
	}

	switch (i) {
	case 1:
		fin.open(lang.pathRu);
		while (!fin.eof()) {
			temp_ru = "";
			getline(fin, temp_ru);
			lang.language.push_back(temp_ru);
			lang.lang = 1;
		}

		init_fin.open(lang.pathRu_init);
		while (!init_fin.eof()) {
			temp_ru = "";
			getline(init_fin, temp_ru);
			lang.init_words.push_back(temp_ru);
		}

		lang.LoadLanguageMobilePhone(lang);
		lang.LoadLanguagePhoneMode(lang);
		lang.LoadLanguageSIM(lang);
		lang.LoadLanguageSmartPhone(lang);
		lang.LoadLanguageCover(lang);
		lang.LoadLanguageShop(lang);
		lang.LoadLanguagePerson(lang);
		break;
	case 0:
		fin.open(lang.pathEn);
		while (!fin.eof()) {
			temp_en = "";
			getline(fin, temp_en);
			lang.language.push_back(temp_en);
			lang.lang = 0;
		}

		init_fin.open(lang.pathEn_init);
		while (!init_fin.eof()) {
			temp_en = "";
			getline(init_fin, temp_en);
			lang.init_words.push_back(temp_en);
		}

		lang.LoadLanguageMobilePhone(lang);
		lang.LoadLanguagePhoneMode(lang);
		lang.LoadLanguageSIM(lang);
		lang.LoadLanguageSmartPhone(lang);
		lang.LoadLanguageCover(lang);
		lang.LoadLanguageShop(lang);
		lang.LoadLanguagePerson(lang);
		break;
	}

	for (int i = 0; i < lang.language.size(); i++) {
		cout << lang.language[i] << endl;
	}

	fin.close();
	lang.language.clear();
	int choose;
	int indexOfCiv = -1;
	while (true) {
		if (lang.lang == 1) {
			fin.open(lang.pathRu_menu);
			while (!fin.eof()) {
				temp_ru = "";
				getline(fin, temp_ru);
				lang.language.push_back(temp_ru);

			}
		}
		else if (lang.lang == 0) {
			fin.open(lang.pathEn_menu);
			while (!fin.eof()) {
				temp_en = "";
				getline(fin, temp_en);
				lang.language.push_back(temp_en);
			}
		}

		for (int i = 0; i < lang.language.size(); i++) {
			cout << lang.language[i] << endl;
		}

		fin.close();
		lang.language.clear();

		if (lang.lang == 1) {
			fin.open(lang.pathRu_not);
			while (!fin.eof()) {
				temp_ru = "";
				getline(fin, temp_ru);
				lang.language.push_back(temp_ru);
			}
		}
		else if (lang.lang == 0) {
			fin.open(lang.pathEn_not);
			while (!fin.eof()) {
				temp_en = "";
				getline(fin, temp_en);
				lang.language.push_back(temp_en);
			}
		}
		
		choose = ReadInteger();

		if (choose == 11)
			break;

		switch (choose) {
		case 1:
		{
			
			Civil civ;
			civils.push_back(civ);
			cout << lang.language[0] << endl;
			break;
		}
		case 2:
			if (civils.empty()) {
				cout << lang.language[11] << endl;
				break;
			}				
			cout << lang.language[1] << endl;		
			indexOfCiv = -1;
			while (indexOfCiv < 0 || indexOfCiv > civils.size()) {
				indexOfCiv = ReadInteger();
			}
			Control(indexOfCiv-1);
			break;
		case 3:
		{
			char* vend = new char[32];
			char* model = new char[32];
			string ram;
			string rom;
			string processor;
			cout << lang.init_words[0] << endl;
			cin >> vend;
			cout << lang.init_words[1] << endl;
			cin >> model;
			cout << lang.init_words[2] << endl;
			cin >> ram;
			cout << lang.init_words[3] << endl;
			cin >> processor;
			cout << lang.init_words[4] << endl;
			cin >> rom;
			shop.AddProductInList(new SmartPhone(vend, model, ram, processor, rom));
			cout << lang.language[2] << endl;
			
		}
			break;
		case 4:
		{
			char* vend = new char[32];
			char* model = new char[32];
			string ram;
			string rom;
			string processor;
			cout << lang.init_words[0] << endl;
			cin >> vend;
			cout << lang.init_words[1] << endl;
			cin >> model;
			shop.AddProductInList(new PushButtonPhone(vend,model,100));
			cout << lang.language[3] << endl;
			break;
		}
		case 5:
		{
			char* vend = new char[32];
			char* model = new char[32];
			string ram;
			string rom;
			string processor;
			cout << lang.init_words[0] << endl;
			cin >> vend;
			cout << lang.init_words[1] << endl;
			cin >> model;
			cout << lang.init_words[2] << endl;
			cin >> ram;
			cout << lang.init_words[3] << endl;
			cin >> processor;
			cout << lang.init_words[4] << endl;
			cin >> rom;
			shop.AddProductInList(new HybridPhone::SmartPhone(vend, model, ram, processor, rom));
			cout << lang.language[4] << endl;
			break;
		}
		case 6:
		{
			string color;
			bool armored;
			cout << lang.init_words[5] << endl;
			getline(cin,color);
			cout << lang.init_words[6] << endl;
			armored = ReadInteger();			
			shop.AddCoverInList(new Cover(color,armored));
			cout << lang.language[5] << endl;
			break;
		}
		case 7:
		{
			char* number = new char[32];
			char* Operator = new char[32];
			cout << lang.init_words[7] << endl;
			cin >> number;
			cout << lang.init_words[8] << endl;
			cin >> Operator;
			shop.AddSIMInList(new SIM(number, Operator));
			cout << lang.language[6] << endl;			
			break;
		}
		case 8: 
		{
			cout << lang.language[1] << endl;
			while (indexOfCiv < 0 || indexOfCiv > civils.size()) {
				indexOfCiv = ReadInteger();
			}
			civils.erase(civils.begin() + indexOfCiv - 1);
			cout << lang.language[7] << endl;
			break;
		}
		case 9:
		{
			cout << lang.language[1] << endl;
			while (indexOfCiv < 0 || indexOfCiv > shop.size) {
				indexOfCiv = ReadInteger();
			}
			shop.DeleteProductFromList(indexOfCiv);
			break;
		}
		case 0:
		{
			shop.CheckProductList();
			Sleep(8000);
			break;
		}
		case 10:
		{
			cout << lang.language[9] << endl;
			for (auto i = 0; i < civils.size(); i++) {
				cout << i + 1 << ")";
				civils[i].GetInform();
			}
			Sleep(8000);
			break;
		}
		default:
			cout << lang.language[10] << endl;
			break;				
		}
		
		Sleep(1500);
		fin.close();
		lang.language.clear();
		system("CLS");

	}
}


void Control(int index) {
	system("CLS");
	
	ifstream control_menu_fin;
	ifstream control_init_fin;
	string temp_ru;
	string temp_en;
	SIM card_temp;

	if (lang.lang == 1) {
		control_menu_fin.open(lang.pathRu_control_menu);
		while (!control_menu_fin.eof()) {
			temp_ru = "";
			getline(control_menu_fin, temp_ru);
			lang.control.push_back(temp_ru);

		}
	}
	else if (lang.lang == 0) {
		control_menu_fin.open(lang.pathEn_control_menu);
		while (!control_menu_fin.eof()) {
			temp_en = "";
			getline(control_menu_fin, temp_en);
			lang.control.push_back(temp_en);
		}
	}

	while (true) {
		for (auto i = 0; i < lang.control.size(); i++) {
			cout << lang.control[i] << endl;
		}

		if (lang.lang == 1) {
			control_init_fin.open(lang.pathRu_control_init);
			while (!control_init_fin.eof()) {
				temp_ru = "";
				getline(control_init_fin, temp_ru);
				lang.control_init_words.push_back(temp_ru);

			}
		}
		else if (lang.lang == 0) {
			control_init_fin.open(lang.pathEn_control_init);
			while (!control_init_fin.eof()) {
				temp_en = "";
				getline(control_init_fin, temp_en);
				lang.control_init_words.push_back(temp_en);

			}
		}

		int choose;
		int indexOfProduct = -1;
		char number[32];
		int add = 0;
		choose = ReadInteger();

		if (choose == 0) {
			break;
		}

		switch (choose) {
		case 1:
			if (IsPhoneExsist(index,lang)) {				
				break;
			}
			civils[index].phone->InsertSIM(card_temp);
			break;
		case 2:
			civils[index].phone->operator~();
			break;
		case 3:
		{
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			cout << lang.control_init_words[0] << endl;
			cin >> number;
			civils[index].phone->Call(number);
			Sleep(3000);
			break;
		}
		case 4:
		{
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			string sms;
			cout << lang.control_init_words[0] << endl;
			cin >> number;
			cout << lang.control_init_words[1] << endl;
			cin>>sms;
			civils[index].phone->SendSMS(number, sms);
			break;
		}
		case 5:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->GetSMS();
			break;
		case 6:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->GetConfiguration();
			break;
		case 7:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->Photograph();
			break;
		case 8:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->CheckPictures();
			break;
		case 9:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->Calculate();
			break;
		case 10:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->state.Button_Power();
			break;
		case 11:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->state.GetLevelOfEnergy();
			break;
		case 12:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->state.Rechargin();
			break;
		case 13:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->state.AirPlaneMode();
			break;
		case 14:
			if (IsPhoneExsist(index, lang)) {
				break;
			}
			civils[index].phone->state.GetState();
			break;
		case 15:
			cout << lang.language[1] << endl;
			while (indexOfProduct < 0) {
				indexOfProduct = ReadInteger();
			}
			shop.BuyProduct(&civils[index], indexOfProduct);
			break;
		case 16:
			cout << lang.control_init_words[2] << endl;
			while (add <= 0) {
				add = ReadInteger();
			}
			civils[index].AddMoney(add);
			break;
		default:
			cout << lang.control_init_words[3] << endl;
		}
		Sleep(1500);
		
		system("CLS");

	}
	lang.control.clear();

}

bool IsPhoneExsist(int index,Lang lang) {
	if (civils[index].phone == NULL) {
		cout << lang.control_init_words[4] << endl;
		return true;
	}
	return false;
}


