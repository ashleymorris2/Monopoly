#include "stdafx.h"
#include "Player.h"


CPlayer::CPlayer(string pieceName, int playerNum){

	this->pieceName = pieceName;
	this->playerNum = playerNum;
	this->currentBalance = 1500;
	this->location = 0;
}
