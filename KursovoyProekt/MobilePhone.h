#pragma once
#include "SIM.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <windows.h>
#include "PhoneMode.h"
#include "Cover.h"
#include <array>
#include "Lang.h"
using namespace std;


class MobilePhone
{
	friend class Shop;	
public:
	PhoneMode state = PhoneMode(100,false,false);
	Lang language;
	SIM* card = NULL;
	Cover* cover = NULL;
	SIM* SIM_inventory = NULL;
	void Call(char* number);
	void SendSMS(char* number, string sms);
	void GetSMS();
	virtual void InsertSIM(SIM card);
	virtual void GetInfo();
	virtual void GetVendor();
	virtual void GetModel();
	virtual void GetConfiguration();
	virtual void Photograph();
	virtual void CheckPictures();
	virtual void Calculate();
	MobilePhone(char* Vendor, char* Model);
	virtual MobilePhone& operator~();
protected:
	virtual char* SetVendor(char* Vendor);
	virtual char* SetModel(char* Model);
	char* Vendor = new char();
	char* Model = new char();
	string getSMS = "";
	string RAM = "";
	string Processor = "";
	string ROM = "";
	array<string, 16> pictures;	
};

