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
		cout << "������� ���: ";
		cin >> name;
		cout << "������� �������: ";
		cin >> surname;
		cout << "������� ����������: ";
		cin >> instrument;
		cout << "������� ��� ��������: ";
		cin >> year;
		cout << endl;

		return year;
	}
};
