#ifndef FREEPARKING_H
#define FREEPARKING_H
#pragma once

#include <string>

#include "Square.h"
#include "Player.h"
#include "Special.h"

class CFreeParking :public CSpecial
{
public:
	CFreeParking(string posName);
	virtual void CalculateTurn(CPlayer * player[], int playerNum);

	~CFreeParking();
};

#endif