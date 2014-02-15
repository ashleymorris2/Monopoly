#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include <iostream>
#include <string>

using namespace std;

class CPlayer
{
private:	
	string mPieceName;//The name of the players piece
	int mPlayerNum; //Unique number to identify the player
	int mCurrentBalance;//Players current balance
	int mLocation;//Players current location on the board

public:
	CPlayer(string pieceName, int playerNum);
	
	string GetPlayerName();
	int GetPlayerNum();
	
	void SetBalance(int ammount);
	int GetBalance();
	
	void SetLocation(int loc);
	int GetLocation();

	void RollDice();

	~CPlayer();
};

#endif