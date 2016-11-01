#pragma once

#include <iostream>
#include <string>
#include "Sponsor.h"

using namespace std;

class Director : public Sponsor
{
public:
	string post = "=========== ƒиректор ===========";
	int money;

	int setDirector() {
		cout << post << endl;
		setSponsor();
		cout << "¬ведите сумму прибыли от проекта: ";
		cin >> money;

		return money;
	}
};