#pragma once
#include <iostream>

#include <string.h>

using namespace std;

class Zarplata {

public:

	char fio[35];

	int codeWork;

	int valDayWork;

	double tarif;

	//конструктор по умолчанию

	Zarplata() {

		cout << "Fio - ";

		cin >> fio;

		cout << "Code - ";

		cin >> codeWork;

		cout << "Day - ";

		cin >> valDayWork;

		cout << "Tarif - ";

		cin >> tarif;

	}

	//конструктор и с вводом параметров, и с параметром по умолчанию

	Zarplata(const char* FIO, int CODE, int DAY_WORK, double TARIF = 0.07) {

		strcpy_s(fio, FIO);

		codeWork = CODE;

		valDayWork = DAY_WORK;

		tarif = TARIF;

	}

	//функция расчета зарплаты

	double raschetZP() {

		return codeWork * valDayWork * tarif;

	}

	//вывод данных

	void putDate() {

		cout << "\n***************";

		cout << "\nFIO - " << fio;

		cout << "\nCode work - " << codeWork;

		cout << "\nValue day work - " << valDayWork;

		cout << "\nTarif - " << tarif;

		cout << "\nZP - " << raschetZP();

	}

};

int main()

{

	Zarplata c1;

	Zarplata c2("Petrov", 12, 50);

	Zarplata c3("Ivanov", 12, 50, 0.086);

	c1.putDate();

	c2.putDate();

	c3.putDate();

	return 0;
}

