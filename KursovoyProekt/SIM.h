#pragma once
#include <iostream>
#include <vector>
#include <stdio.h>
#include "Lang.h"

using namespace std;
class SIM
{	
	friend class MobilePhone;
	friend class SmartPhone;
	friend class HybridPhone;
	friend class PushButtonPhone;
public:
	Lang language;
	char* Number;
	char* Operator;
	SIM(char* Operator, char* Number);
	SIM();
	void GetNumber();
	void GetOperator();
	static void GetToData(SIM sub);
	static void GetToDataSMS(char* number, string sms);
	/*char* SetNumber();
	char* SetOperator();*/
	static vector<SIM> subs;
	static vector<pair<string, string>> dataBase;
};

