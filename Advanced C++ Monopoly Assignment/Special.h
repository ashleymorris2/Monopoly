#ifndef SPECIAL_H
#define SPECIAL_H
#pragma once

#include <string>
#include "Square.h"
#include "Player.h"

class CSpecial :public CSquare
{
private:
	//int mOwner; // 0 if not owned

public:
	CSpecial(string posName);

	virtual void CalculateTurn(CPlayer * player);
	int GetOwner();
	
};

#endif