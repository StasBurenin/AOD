#pragma once

#include <iostream>
#include <string>
#include "Sponsor.h"

using namespace std;

class Director : public Sponsor
{
public:
	string post = "=========== �������� ===========";
	int money;

	int setDirector() {
		cout << post << endl;
		setSponsor();
		cout << "������� ����� ������� �� �������: ";
		cin >> money;

		return money;
	}
};