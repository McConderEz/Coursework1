#include "Cover.h"
#include <iostream>

using namespace std;

int Cover::ReadInteger() {
    int number;
    char c;
    while (1) {
        if (!scanf_s("%d", &number) || getchar() != '\n') {

            while ((c = getchar()) != '\n' && c != EOF);
        }
        else {
            return number;
        }
        cout << lang.Cover_lang[0];
    }
}

Cover::Cover(string color,bool armored) {
    this->color = SetColor(color);
    this->armored = SetArmored(armored);
}

void Cover::GetInfo()
{
    cout << lang.Cover_lang[1] << endl;
    cout << lang.Cover_lang[2] << this->color << endl;
    cout << lang.Cover_lang[3] << this->armored << endl;
    cout << endl;
}

string Cover::SetColor(string color)
{
    if (color.empty() == 1) {
        while (color.empty() == 1) {
            cout << lang.Cover_lang[4] << endl;
            cin >> color;
        }
    }
    else {
        return color;
    }
   
}

bool Cover::SetArmored(bool armored)
{
    if (armored > 1 || armored < 0) {
        while (armored > 1 || armored < 0) {
            cout << lang.Cover_lang[5] << endl;
            armored = ReadInteger();
        }
    }
    else {
        return armored;
    }
}
