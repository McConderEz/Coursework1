#include "Lang.h"

void Lang::LoadLanguageMobilePhone(Lang lang)
{
	string temp_ru;
	string temp_en;
	ifstream fin;
	if (lang.lang == 1) {
		fin.open(lang.pathRu_MobilePhone);
		while (!fin.eof()) {
			temp_ru = "";
			getline(fin, temp_ru);
			lang.MobilePhone_lang.push_back(temp_ru);

		}
	}
	else if (lang.lang == 0) {
		fin.open(lang.pathEn_MobilePhone);
		while (!fin.eof()) {
			temp_en = "";
			getline(fin, temp_en);
			lang.MobilePhone_lang.push_back(temp_en);
		}
	}
}

void Lang::LoadLanguagePhoneMode(Lang lang)
{
	string temp_ru;
	string temp_en;
	ifstream fin;
	if (lang.lang == 1) {
		fin.open(lang.pathRu_PhoneMode);
		while (!fin.eof()) {
			temp_ru = "";
			getline(fin, temp_ru);
			lang.PhoneMode_lang.push_back(temp_ru);

		}
	}
	else if (lang.lang == 0) {
		fin.open(lang.pathEn_PhoneMode);
		while (!fin.eof()) {
			temp_en = "";
			getline(fin, temp_en);
			lang.PhoneMode_lang.push_back(temp_en);
		}
	}
}

void Lang::LoadLanguageSIM(Lang lang)
{
	string temp_ru;
	string temp_en;
	ifstream fin;
	if (lang.lang == 1) {
		fin.open(lang.pathRu_SIM);
		while (!fin.eof()) {
			temp_ru = "";
			getline(fin, temp_ru);
			lang.SIM_lang.push_back(temp_ru);

		}
	}
	else if (lang.lang == 0) {
		fin.open(lang.pathEn_SIM);
		while (!fin.eof()) {
			temp_en = "";
			getline(fin, temp_en);
			lang.SIM_lang.push_back(temp_en);
		}
	}
}

void Lang::LoadLanguageSmartPhone(Lang lang)
{
	string temp_ru;
	string temp_en;
	ifstream fin;
	if (lang.lang == 1) {
		fin.open(lang.pathRu_SmartPhone);
		while (!fin.eof()) {
			temp_ru = "";
			getline(fin, temp_ru);
			lang.SmartPhone_lang.push_back(temp_ru);

		}
	}
	else if (lang.lang == 0) {
		fin.open(lang.pathEn_SmartPhone);
		while (!fin.eof()) {
			temp_en = "";
			getline(fin, temp_en);
			lang.SmartPhone_lang.push_back(temp_en);
		}
	}
}

void Lang::LoadLanguageCover(Lang lang)
{
	string temp_ru;
	string temp_en;
	ifstream fin;
	if (lang.lang == 1) {
		fin.open(lang.pathRu_Cover);
		while (!fin.eof()) {
			temp_ru = "";
			getline(fin, temp_ru);
			lang.Cover_lang.push_back(temp_ru);

		}
	}
	else if (lang.lang == 0) {
		fin.open(lang.pathEn_Cover);
		while (!fin.eof()) {
			temp_en = "";
			getline(fin, temp_en);
			lang.Cover_lang.push_back(temp_en);
		}
	}
}

void Lang::LoadLanguagePerson(Lang lang)
{
	string temp_ru;
	string temp_en;
	ifstream fin;
	if (lang.lang == 1) {
		fin.open(lang.pathRu_Person);
		while (!fin.eof()) {
			temp_ru = "";
			getline(fin, temp_ru);
			lang.Person_lang.push_back(temp_ru);

		}
	}
	else if (lang.lang == 0) {
		fin.open(lang.pathEn_Person);
		while (!fin.eof()) {
			temp_en = "";
			getline(fin, temp_en);
			lang.Person_lang.push_back(temp_en);
		}
	}
}

void Lang::LoadLanguageShop(Lang lang)
{
	string temp_ru;
	string temp_en;
	ifstream fin;
	if (lang.lang == 1) {
		fin.open(lang.pathRu_Shop);
		while (!fin.eof()) {
			temp_ru = "";
			getline(fin, temp_ru);
			lang.Shop_lang.push_back(temp_ru);

		}
	}
	else if (lang.lang == 0) {
		fin.open(lang.pathEn_Shop);
		while (!fin.eof()) {
			temp_en = "";
			getline(fin, temp_en);
			lang.Shop_lang.push_back(temp_en);
		}
	}
}


vector<string> Lang::language;
vector<string> Lang::init_words;
vector<string> Lang::control_init_words;
vector<string> Lang::control;
vector<string> Lang::MobilePhone_lang;
vector<string> Lang::PhoneMode_lang;
vector<string> Lang::SIM_lang;
vector<string> Lang::SmartPhone_lang;
vector<string> Lang::Cover_lang;
vector<string> Lang::Shop_lang;
vector<string> Lang::Person_lang;