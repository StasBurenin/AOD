#pragma once

#include <iostream>
#include <string>

using namespace std;

class Participant
{
public:
	string name;
	string surname;
	string instrument;
	int year;
	int setParticipant() {
		cout << "������� ��� ��������� " << endl;
		cin >> name;
		cout << "������� ������� ��������� " << endl;
		cin >> surname;
		cout << "������� ���������� ��������� " << endl;
		cin >> instrument;
		cout << "������� ��� �������� ��������� " << endl;
		cin >> year;

		return year;
	}
};
