#pragma once

#include <iostream>
#include <string>

using namespace std;

class Sponsor 
{
public:
	string name;
	string lastName;

	void setSponsor() {
		cout << "������� ���: ";
		cin >> name;
		cout << "������� ��������: ";
		cin >> lastName;

	}

};