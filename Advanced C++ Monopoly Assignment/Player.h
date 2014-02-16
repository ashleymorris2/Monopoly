#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include <iostream>
#include <string>

using namespace std;

int Random();

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
	
	int GetBalance();
	void AddBalance(int ammount);
	void SubBalance(int ammount);
	
	int GetLocation();
	void SetLocation(int loc);

	void RollDice();

	~CPlayer();
};

#endif