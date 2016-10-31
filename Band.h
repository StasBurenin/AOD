#pragma once

#include <iostream>
#include "Participant.h"
#include <string>

using namespace std;

class Band
{
public:
	int numberOfPart;
	string bandName;
	Participant par[4];

	void setBand() {
		cout << "Название группы: ";
		cin >> bandName;

		for (int i = 0; i<4; i++) {
			cout << i+1 << " участник" << endl;
			par[i].setParticipant();
			cout << "===================" << endl;
		}
	}
};
