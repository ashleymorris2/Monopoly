#include "stdafx.h"
#include "Player.h"
#include "MyDefinitions.h"

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
void CPlayer::AddBalance(int amount){

	mCurrentBalance = mCurrentBalance + amount;

}
void CPlayer::SubBalance(int amount){

	mCurrentBalance = mCurrentBalance - amount;

}
int CPlayer::GetBalance(){

	return mCurrentBalance;
}
void CPlayer::SetLocation(int loc){

	this->mLocation = loc;

}
void CPlayer::RollDice(){

	int playerRoll = 0;
	playerRoll = Random();

	cout << mPieceName <<" rolls " << playerRoll <<endl;

	if(mLocation <= 20){
	mLocation = mLocation + playerRoll;
	}
}
CPlayer::~CPlayer(){



}