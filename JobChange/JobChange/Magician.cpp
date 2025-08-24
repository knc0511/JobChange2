#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician()
{
	job_name = "Magician";
	HP += 50;
	power += 10;
	defence += 5;
}

Magician::Magician(string nickname)
{
	job_name = "Magician";
	setNickname(nickname);
	HP += 50;
	power += 10;
	defence += 5;
}

void Magician::attack()
{
	cout << "Magician 이 공격했다." << endl;
}
