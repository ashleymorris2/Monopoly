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
	int playerNum; //Unique number to identify the player
	int currentBalance;//Players current balance
	int location;//Players current location on the board

public:
	CPlayer(string pieceName, int playerNum);
	string GetPlayerName();
	
	int GetPlayerNum();
	
	void SetBalance(int ammount);
	int GetBalance();
	
	void SetLocation(int loc);
	int GetLocation();

	~CPlayer();
};

#endif