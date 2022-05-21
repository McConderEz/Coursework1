#include "Person.h"
#include <iostream>
using namespace std;

int Person::ReadInteger() {
	int number;
	char c;
	while (1) {
		if (!scanf_s("%d", &number) || getchar() != '\n') {

			while ((c = getchar()) != '\n' && c != EOF);
		}
		else {
			return number;
		}
		cout << Person::language.Person_lang[0];
	}
}

Person::Person()
{
	SetInfom();
}

void Person::GetInform()
{
	cout << Person::language.Person_lang[1] << endl;
	cout << Person::language.Person_lang[2] << this->name << endl;
	cout << Person::language.Person_lang[3] << this->age << endl;
}

void Person::SetInfom()
{
	while (name.empty() == 1) {
		cout << Person::language.Person_lang[4];
		cin >> this->name;
	}

	while (this->age <= 0 || this->age > 99) {
		cout << Person::language.Person_lang[5];
		this->age = ReadInteger();
	}	
}
