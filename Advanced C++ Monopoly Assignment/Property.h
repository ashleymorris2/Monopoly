#ifndef PROPERTY_H
#define PROPERTY_H
#pragma once

#include <string>
#include "Square.h"
#include "Player.h"

class CProperty :public CSquare
{
private:
	int cost; 
	int rent; 
	int colourGroup; 
	int owner; // 0 if not owned

public:
	CProperty(string posName, int cost, int rent, int colourGroup);
	//virtual void CalculateTurn(CPlayer * player);
};

#endif