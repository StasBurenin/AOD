#pragma once

#include <iostream>
#include "Participant.h"
#include <string>

using namespace std;

class Band
{
public:
	int numberOfPart;
	int k;
	string bandName;
	Participant par[4];

	void setBand() {
		cout << "�������� ������: ";
		cin >> bandName;

		for (int i = 0; i<4; i++) {
			cout << "=========== " << i+1 << " ��������" << " ===========" << endl;
			par[i].setParticipant();
		}

		k = 2016 - par[0].year;
		
		for (int i = 1; i < 4; i++) {
			k = k + (2016 - par[i].year);
		}
		cout << "������� ������� ���������� ������ - " << k/4 << endl;
	}
};
