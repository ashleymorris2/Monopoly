#include "stdafx.h"
#include "Player.h"


CPlayer::CPlayer(string pieceName, int playerNum){

	this->mPieceName = pieceName;
	this->mPlayerNum = playerNum;
	this->mCurrentBalance = 1500;
	this->mLocation = 0;
}
string CPlayer::GetPlayerName(){

	return mPieceName;

}
int CPlayer::GetLocation(){

	return mLocation;

}
void CPlayer::RollDice(){



}
