#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include <iostream>
#include <string>

using namespace std;

class CPlayer
{
private:	
	string pieceName;//The name of the players piece
	int currentBalance;//Players current balance
	int location;//Players current location on the board

public:
	CPlayer(string pieceName);
};

#endif