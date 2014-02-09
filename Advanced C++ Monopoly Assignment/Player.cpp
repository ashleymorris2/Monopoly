#include "stdafx.h"
#include "Player.h"


CPlayer::CPlayer(string pieceName){

	this->pieceName = pieceName;
	this->currentBalance = 1500;
	this->location = 0;

}