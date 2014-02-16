#ifndef SPECIAL_H
#define SPECIAL_H
#pragma once

#include <string>
#include "Square.h"
#include "Player.h"

class CSpecial :public CSquare
{	

public:
	CSpecial(string posName);
	virtual void CalculateTurn(CPlayer * player[], int playerNum)=0;
};

#endif