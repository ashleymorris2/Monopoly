#ifndef BONUS_H
#define BONUS_H
#pragma once

#include <string>

#include "Square.h"
#include "Player.h"
#include "Special.h"

class CBonus :public CSpecial
{

public:
	CBonus(string posName);
	virtual void CalculateTurn(CPlayer * player[], int playerNum);
};

#endif