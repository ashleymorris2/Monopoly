#ifndef PENALTY_H
#define PENALTY_H
#pragma once

#include <string>

#include "Square.h"
#include "Player.h"
#include "Special.h"

class CPenalty :public CSpecial
{	

public:
	CPenalty(string posName);
	virtual void CalculateTurn(CPlayer * player[], int playerNum);
};

#endif