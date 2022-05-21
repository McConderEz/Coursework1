#include "Civil.h"



Civil::Civil()
{
	SetInfom();
}

void Civil::AddMoney(double add)
{
	
}

double Civil::ReadDouble()
{
	double number;
	char c;

	while (1) {
		if (!scanf_s("%lf", &number) || getchar() != '\n') {
			while ((c = getchar()) != '\n' && c != EOF);
		}
		else {
			return number;
		}

		printf_s("Incorrect number.\nTry again: ");
	}
}


