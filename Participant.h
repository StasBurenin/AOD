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
		cout << "¬ведите им€: ";
		cin >> name;
		cout << "¬ведите фамилию: ";
		cin >> surname;
		cout << "¬ведите инструмент: ";
		cin >> instrument;
		cout << "¬ведите год рождени€: ";
		cin >> year;
		cout << endl;

		return year;
	}
};
