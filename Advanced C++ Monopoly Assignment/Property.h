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
	int mOwner; // 0 if not owned

public:
	CProperty(string posName, int cost, int rent, int colourGroup);
	//virtual void CalculateTurn(CPlayer * player);

	int GetCost();
	int GetRent();
	int GetColourGroup();
	int GetOwner();	

	virtual void CalculateTurn(CPlayer * player);

};

#endif