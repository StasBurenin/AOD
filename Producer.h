#pragma once

#include <iostream>
#include <string>
#include "Sponsor.h"

using namespace std;

class Producer : public Sponsor 
{
public:
	string post = "=========== Продюсер ===========";
	int money;

	int setProducer() {
		cout << post << endl;
		setSponsor();
		cout << "Введите сумму вложенных в проект денег: ";
		cin >> money;

		return money;
	}
};