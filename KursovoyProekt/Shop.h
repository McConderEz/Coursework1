#pragma once
#include<vector>
#include<utility>
#include "MobilePhone.h"
#include "Civil.h"
#include "Lang.h"
using namespace std;
class Shop
{
	friend class MobilePhone;
	friend class SmartPhone;
	friend class HybridPhone;
	friend class PushButtonPhone;
public:
	Shop();
	static Lang language;
	void BuyProduct(Civil* civ,int index);
	void AddProductInList(MobilePhone* phone);
	void AddCoverInList(Cover* cover);
	void AddSIMInList(SIM* card);
	void DeleteProductFromList(int index);
	void DeleteCoverFromList(int index);
	void DeleteSIMFromList(int index);
	void CheckProductList();
	int size = ProductList.size();
private:
	static vector<pair<MobilePhone*,double>> ProductList;
	static vector<pair<SIM*, double>> SIMList;
	static vector<pair<Cover*, double>> CoverList;
};

