#pragma once

#include <iostream>
#include <string>
#include "Sponsor.h"

using namespace std;

class Producer : public Sponsor 
{
public:
	string post = "=========== �������� ===========";
	int money;

	int setProducer() {
		cout << post << endl;
		setSponsor();
		cout << "������� ����� ��������� � ������ �����: ";
		cin >> money;

		return money;
	}
};