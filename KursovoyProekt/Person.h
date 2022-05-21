#pragma once
#include <string>
#include "Lang.h"
using namespace std;
class Person
{
public:
	Person();
	static Lang language;
	virtual void GetInform();
protected:
	string name;
	int age = 0;
	virtual void SetInfom();
	int ReadInteger();
};

