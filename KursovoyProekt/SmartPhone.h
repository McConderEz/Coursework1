#pragma once
#include "MobilePhone.h"
#include <iostream>
#include <array>
#include "Cover.h"
using namespace std;
class SmartPhone:public MobilePhone
{
public:
	Lang language;
	SmartPhone(char* Vendor, char* Model, string RAM, string Processor, string ROM);
	void GetConfiguration() override;
	void Photograph() override;
	void Calculate() override;
	void CheckPictures() override;
	Cover* cover = NULL;
protected:
	string RAM = "";
	string Processor = "";
	string ROM = "";
	array<string,16> pictures;
	int ReadInteger();
	double ReadDouble();
	virtual void SetConfiguration(string RAM, string Processor, string ROM);
};


