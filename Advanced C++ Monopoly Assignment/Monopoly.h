#ifndef MONOPOLY_H
#define MONOPOLY_H
#pragma once

#include <string>
#include <vector>
#include <fstream>

#include "Square.h"
#include "Player.h"
#include "Property.h"

const char PND = 156;
string  myName (string  name1, string  name2);

class CMonopoly 
{
private:
	vector <CSquare*> theBoard;
	CPlayer * player1;
	CPlayer * player2;
	
public:
	CMonopoly();
	void PlayRound();
	~CMonopoly();
};
#endif