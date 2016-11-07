#include <iostream>
#include <stack>
#include "Band.h"
#include "Participant.h"
#include "Dicrector.h"
#include "Producer.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int s;
	Band ba;
	Director dir;
	Producer pro;

	ba.setBand();
	dir.setDirector();
	pro.setProducer();
	s = dir.money - pro.money;
	cout << "Общая прибыль от проекта = " << s << endl;

	system("pause");
	return 0;
};
