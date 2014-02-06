#ifndef _PLAYER
#define _PLAYER
#pragma once

class CPlayer
{
private:

	int playerNum;	//Unique identifiable player number.
	char * pieceName [20];//The name of the players piece.
	int funds; //The amount of cash that the player has.
	int CurrentPos; //Players current position on the board

public:
	
	Player(int playerNum, char * pieceName, int Funds);
	void setFunds(int amount);


};

#endif