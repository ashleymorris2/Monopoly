#ifndef PROPERTY_H
#define PROPERTY_H
#pragma once

#include <string>
#include "Square.h"
#include "Player.h"

class CProperty :public CSquare
{
private:
	int mCost; 
	int mRent; 
	int mColourGroup; 
	int mOwner; // -1 if not owned

public:
	CProperty(string posName, int cost, int rent, int colourGroup);
	virtual void CalculateTurn(CPlayer * player[], int playerNum);

	int GetCost();
	int GetRent();
	int GetColourGroup();
	int GetOwner();	
};

#endif