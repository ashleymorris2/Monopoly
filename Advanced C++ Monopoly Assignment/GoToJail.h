#ifndef GOJAIL_H
#define GOJAIL_H
#pragma once

#include <string>

#include "Square.h"
#include "Player.h"
#include "Special.h"

class CGoToJail :public CSpecial
{

public:
	CGoToJail(string posName);
	virtual void CalculateTurn(CPlayer * player[], int playerNum);
};

#endif