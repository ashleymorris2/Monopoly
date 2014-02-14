#ifndef SQUARE_H
#define SQUARE_H
#pragma once

#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

class CSquare
{
private:	
	string mPosName;//The square name.

public:
	CSquare (string posName);//Constructor
	//virtual void TakeTurn(CPlayer * player);
	string GetName();
};

#endif