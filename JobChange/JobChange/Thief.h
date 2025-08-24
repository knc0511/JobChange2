#pragma once
#include "Player.h"

class Thief : public Player
{
public:
	Thief();
	Thief(string nickname);

	void attack() override;

};