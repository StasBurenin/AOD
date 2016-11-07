#pragma once

#include <iostream>
#include "Participant.h"
#include <string>
#include <stack>

using namespace std;

class Band
{
public:
	stack <int> ye;
	int numberOfPart;
	int k;
	string bandName;
	Participant par[4];

	void setBand() {
		cout << "Название группы: ";
		cin >> bandName;
		cout << endl;

		for (int i = 0; i<4; i++) {
			cout << "=========== " << i+1 << " участник" << " ===========" << endl;
			par[i].setParticipant();
			ye.push(par[i].year);
		}

		k = 2016 - ye.top();
		
		for (int i = 1; i < 4; i++) {
			ye.pop();
			k = k + (2016 - ye.top());
		}
		cout << "Средний возраст участников группы - " << k/4 << endl;
		cout << endl;
	}
};
