#ifndef MONOPOLY_H
#define MONOPOLY_H
#pragma once

#include <string>
#include <vector>
#include <fstream>

#include "Player.h"

#include "Square.h"
#include "Property.h"
#include "Airport.h"
#include "MyDefinitions.h"

#include "Special.h"

#include "Go.h"
#include "Jail.h"
#include "Bonus.h"
#include "FreeParking.h"
#include "GoToJail.h"
#include "Penalty.h"

string  myName (string  name1, string  name2);
string  myName (string  name1, string  name2, string name3);

class CMonopoly 
{
private:
	vector <CSquare*> theBoard;
	CPlayer * player[2];	
public:
	CMonopoly();
	void PlayRound();
	~CMonopoly();
};
#endif