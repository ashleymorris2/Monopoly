#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CPlayer
{
private:	
	string mPieceName;//The name of the players piece
	int mPlayerNum; //Unique number to identify the player
	int mCurrentBalance;//Players current balance
	int mLocation;//Players current location on the board
	vector <int> mColourGroupsOwned;//Stores the colour groups representing the players owned properties

public:
	CPlayer(string pieceName, int playerNum);
	
	string GetPlayerName();
	int GetPlayerNum();
	
	int GetBalance();
	void AddBalance(int ammount);
	void SubBalance(int ammount);
	
	int GetLocation();
	void SetLocation(int loc);

	bool GetOwned(int colourGroup);
	void SetOwned(int colourGroup);

	void RollDice();

	~CPlayer();
};

#endif