#ifndef AIRPORT_H
#define AIRPORT_H
#pragma once

#include <string>
#include "Square.h"
#include "Player.h"

class CAirport :public CSquare
{
private:
	string mPosName;
	int mOwner; // 0 if not owned
public:
	CAirport(string posName);	
	virtual void CalculateTurn(CPlayer * player[], int playerNum);

	int GetOwner();	

	~CAirport();
};

#endif