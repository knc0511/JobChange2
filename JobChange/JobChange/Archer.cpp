#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer()
{
	job_name = "Magician";
	HP += 50;
	power += 10;
	defence += 5;
}

Archer::Archer(string nickname)
{
	job_name = "Magician";
	setNickname(nickname);
	HP += 50;
	power += 10;
	defence += 5;
}

void Archer::attack()
{
	cout << "Archer 가 공격했다." << endl;
}
