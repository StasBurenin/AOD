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
		cout << "¬ведите им€ участника " << endl;
		cin >> name;
		cout << "¬ведите фамилию участника " << endl;
		cin >> surname;
		cout << "¬ведите инструмент участника " << endl;
		cin >> instrument;
		cout << "¬ведите год рождени€ участника " << endl;
		cin >> year;

		return year;
	}
};
