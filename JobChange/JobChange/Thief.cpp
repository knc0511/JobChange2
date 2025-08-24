#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief()
{
	job_name = "Thief";
	HP += 50;
	power += 10;
	defence += 5;
}

Thief::Thief(string nickname)
{
	job_name = "Thief";
	setNickname(nickname);
	HP += 50;
	power += 10;
	defence += 5;
}

void Thief::attack()
{
	cout << "Thief 가 공격했다." << endl;
}
