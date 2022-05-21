#pragma once
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class Lang
{
public:	
	const string pathRu = "lan_ru.txt";
	const string pathEn = "lan_en.txt";
	const string pathRu_menu = "menu_ru.txt";
	const string pathEn_menu = "menu_en.txt";
	const string pathRu_not = "notification_creation_ru.txt";
	const string pathEn_not = "notification_creation_en.txt";
	const string pathRu_init = "init_ru.txt";
	const string pathEn_init = "init_en.txt";
	const string pathRu_control_menu = "control_menu_ru.txt";
	const string pathEn_control_menu = "control_menu_en.txt";
	const string pathRu_control_init = "control_init_ru.txt";
	const string pathEn_control_init = "control_init_en.txt";
	const string pathRu_MobilePhone = "MobilePhone_ru.txt";
	const string pathEn_MobilePhone = "MobilePhone_en.txt";
	const string pathRu_PhoneMode = "PhoneMode_ru.txt";
	const string pathEn_PhoneMode = "PhoneMode_en.txt";
	const string pathRu_SIM = "SIM_ru.txt";
	const string pathEn_SIM = "SIM_en.txt";
	const string pathRu_SmartPhone = "SmartPhone_ru.txt";
	const string pathEn_SmartPhone = "SmartPhone_en.txt";
	const string pathRu_Cover = "Cover_ru.txt";
	const string pathEn_Cover = "Cover_en.txt";
	const string pathRu_Shop = "Shop_ru.txt";
	const string pathEn_Shop = "Shop_en.txt";
	const string pathRu_Person = "Person_ru.txt";
	const string pathEn_Person = "Person_en.txt";
	bool lang = 1;//1 - rus/0 - eng	
	static vector<string> language;
	static vector<string> init_words;
	static vector<string> control_init_words;
	static vector<string> control;
	static vector<string> MobilePhone_lang;
	static vector<string> PhoneMode_lang;
	static vector<string> SIM_lang;
	static vector<string> SmartPhone_lang;
	static vector<string> Cover_lang;
	static vector<string> Shop_lang;
	static vector<string> Person_lang;
	void LoadLanguageMobilePhone(Lang lang);
	void LoadLanguagePhoneMode(Lang lang);
	void LoadLanguageSIM(Lang lang);
	void LoadLanguageSmartPhone(Lang lang);
	void LoadLanguageCover(Lang lang);
	void LoadLanguagePerson(Lang lang);
	void LoadLanguageShop(Lang lang);
};

