#ifndef JAIL_H
#define JAIL_H
#pragma once

#include <string>

#include "Square.h"
#include "Player.h"
#include "Special.h"

class CJail :public CSpecial
{
public:
	CJail(string posName);
	virtual void CalculateTurn(CPlayer * player[], int playerNum);

	~CJail();
};

#endif