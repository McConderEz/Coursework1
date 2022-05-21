#include "Shop.h"


using namespace std;

double ReadDouble() {
    double number;
    char c;

    while (1) {
        if (!scanf_s("%lf", &number) || getchar() != '\n') {
            while ((c = getchar()) != '\n' && c != EOF);
        }
        else {
            return number;
        }
        cout << Shop::language.Shop_lang[0];
            
    }
}

Shop::Shop()
{

}

void Shop::BuyProduct(Civil* civ,int index)
{

    cout << Shop::language.Shop_lang[1] << endl;
    cout << Shop::language.Shop_lang[2] << endl;
    cout << Shop::language.Shop_lang[3] << endl;
    char choose;
    cin >> choose;

    switch (choose) {
    case '1':
        if (index < 0 || index > ProductList.size())
            break;
        if (civ->balance >= ProductList[index - 1].second) {
            civ->balance -= ProductList[index - 1].second;
            civ->phone = ProductList[index - 1].first;
            cout << Shop::language.Shop_lang[4] << endl;
            ProductList.erase(ProductList.begin() + index - 1);
        }
        else {
            cout << Shop::language.Shop_lang[5] << endl;
        }
        break;
    case '2':
        if (index < 0 || index > CoverList.size())
            break;
        if (civ->balance >= CoverList[index - 1].second) {
            civ->balance -= CoverList[index - 1].second;
            civ->phone->cover = CoverList[index - 1].first;
            cout << Shop::language.Shop_lang[6] << endl;
            CoverList.erase(CoverList.begin() + index - 1);
        }
        else {
            cout << Shop::language.Shop_lang[5] << endl;
        }
        break;
    case '3':
        if (index < 0 || index > SIMList.size())
            break;
        if (civ->balance >= SIMList[index - 1].second) {
            civ->balance -= SIMList[index - 1].second;           
            cout << Shop::language.Shop_lang[7] << endl;
            civ->phone->SIM_inventory = SIMList[index - 1].first;    
            SIMList.erase(SIMList.begin() + index - 1);
        }
        else {
            cout << Shop::language.Shop_lang[5] << endl;
        }
        break;
    default:
        cout << Shop::language.Shop_lang[8] << endl;
        break;
    }

}

void Shop::CheckProductList() {
    cout << Shop::language.Shop_lang[9] << endl;
    cout << Shop::language.Shop_lang[10] << endl;
    for (auto i = 0; i < ProductList.size(); i++) {
        cout << (i + 1) << ")" << Shop::language.Shop_lang[11] << ProductList[i].second << endl;
        ProductList[i].first->GetVendor();
        ProductList[i].first->GetModel();
    }
    cout << Shop::language.Shop_lang[12] << endl;
    for (auto i = 0; i < CoverList.size(); i++) {
        cout << (i + 1) << ")" << Shop::language.Shop_lang[11] << CoverList[i].second << endl;
        CoverList[i].first->GetInfo();       
    }
    cout << Shop::language.Shop_lang[13] << endl;
    for (auto i = 0; i < SIMList.size(); i++) {
        cout << (i + 1) << ")" << Shop::language.Shop_lang[11] << SIMList[i].second << endl;
        SIMList[i].first->GetNumber();
        SIMList[i].first->GetOperator();
    }
}

void Shop::AddProductInList(MobilePhone* phone)
{
	double price = 0;
	cout << Shop::language.Shop_lang[14];
	while (price <= 0) {
        price = ReadDouble();
	}
    pair<MobilePhone*,double> temp(phone,price);
    ProductList.push_back(temp);
    cout << Shop::language.Shop_lang[15] << endl;
}

void Shop::AddCoverInList(Cover* cover)
{
    double price = 0;
    cout << Shop::language.Shop_lang[16];
    while (price <= 0) {
        price = ReadDouble();
    }
    pair<Cover*, double> temp(cover, price);
    CoverList.push_back(temp);
    cout << Shop::language.Shop_lang[15] << endl;
}

void Shop::AddSIMInList(SIM* card)
{
    double price = 0;
    cout << Shop::language.Shop_lang[17];
    while (price <= 0) {
        price = ReadDouble();
    }
    pair<SIM*, double> temp(card, price);
    SIMList.push_back(temp);
    cout << Shop::language.Shop_lang[15] << endl;
}

void Shop::DeleteProductFromList(int index)
{
    ProductList.erase(ProductList.begin() + index-1);
}

void Shop::DeleteCoverFromList(int index)
{
    CoverList.erase(CoverList.begin() + index - 1);
}

void Shop::DeleteSIMFromList(int index)
{
    SIMList.erase(SIMList.begin() + index - 1);
}

vector<pair<MobilePhone*, double>> Shop::ProductList;
vector<pair<Cover*, double>> Shop::CoverList;
vector<pair<SIM*, double>> Shop::SIMList;