#pragma once
#include "Person.h"
#include <iostream>
#include "MobilePhone.h"
using namespace std;
class Civil:public Person
{
	friend class Shop;
public:
	MobilePhone* phone = NULL;
	Civil();
	void AddMoney(double add);
	void SetInfom() override {
		Person::SetInfom();
		while (balance < 0) {
			cout << Person::language.Person_lang[6];
			balance = ReadDouble();
			
		}
	}
	void GetInform() override {
		Person::GetInform();
		cout << Person::language.Person_lang[6] << balance << endl;
	}
protected:
	double ReadDouble();
	double balance = -1;
	
};

