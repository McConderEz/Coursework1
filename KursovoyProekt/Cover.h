#pragma once
#include <string>
#include "Lang.h"
using namespace std;
class Cover
{
	friend class SmartPhone;
public:
	Lang lang;
	Cover(string color, bool armored);
	void GetInfo();
	int ReadInteger();
protected:
	string color;
	bool armored;
	string SetColor(string color);
	bool SetArmored(bool armored);

};

