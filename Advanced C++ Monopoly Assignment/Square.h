#ifndef SQUARE_H
#define SQUARE_H
#pragma once

#include <iostream>
#include <string>

#include "Player.h"
#include "MyDefinitions.h"

using namespace std;

//interface class for the monopoly board
class CSquare
{
private:	
	string mPosName;//The square name.
public:
	CSquare (string posName);//Constructor
	virtual void CalculateTurn(CPlayer * player[], int playerNum)=0;

	string GetName();

	~CSquare();
};

#endif