#pragma once
#include "Creature.h"

enum PlayerType
{
	PT_Knight = 1,
	PT_Archer = 2,
	PT_Mage = 3,
};

class Player : public Creature
{
public:

	Player(int playerType) : Creature(CT_PLAYER), _playerType(playerType)
	{

	}
	
	virtual ~Player()
	{

	}


public:
	int _playerType;
};

class Knight : public Player
{
	Knight() : Player(PT_Knight)
	{
		_hp = 150;
		_attack = 10;
		_defence = 5;
	}
};

class Archer : public Player
{
	Archer() : Player(PT_Archer)
	{
		_hp = 80;
		_attack = 15;
		_defence = 3;
	}
};

class Mage : Player
{
	Mage() : Player(PT_Mage)
	{
		_hp = 80;
		_attack = 25;
		_defence = 3;
	}
};