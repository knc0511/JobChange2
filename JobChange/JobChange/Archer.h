#pragma once
#include "Player.h"

class Archer : public Player
{
public:
	Archer();
	Archer(string nickname);

	void attack() override;

};