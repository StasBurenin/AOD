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
	int k,n;
	string bandName;

	void setBand() {
		cout << "Название группы: ";
		cin >> bandName;
		cout << endl;

		cout << "Введите колличество участников в группе - ";
		cin >> n;
		cout << endl;

		Participant *par = new Participant[n];
		
		for (int i = 0; i < n; i++) {
			cout << "=========== " << i+1 << " участник" << " ===========" << endl;
			par[i].setParticipant();
			ye.push(par[i].year);
		}

		k = 2016 - ye.top();
		
		for (int i = 1; i < n; i++) {
			ye.pop();
			k = k + (2016 - ye.top());
		}
		cout << "Средний возраст участников группы - " << k/n << endl;
		cout << endl;
	}
};
