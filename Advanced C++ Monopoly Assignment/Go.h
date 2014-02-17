#ifndef GO_H
#define GO_H
#pragma once

#include <string>

#include "Square.h"
#include "Player.h"
#include "Special.h"

class CGo :public CSpecial
{
public:
	CGo(string posName);
	virtual void CalculateTurn(CPlayer * player[], int playerNum);

	~CGo();
};

#endif