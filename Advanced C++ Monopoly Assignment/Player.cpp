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
	int previousLoc = 0;

	playerRoll = Random();
	int counter = 0;

	cout << mPieceName <<" rolls " << playerRoll <<endl;
	previousLoc = mLocation;

	while (mLocation < previousLoc + playerRoll)
	{
		mLocation++;	
		
		if (mLocation == 26){
			playerRoll = playerRoll - counter;
			mLocation = 0; 
			previousLoc = -1;
			AddBalance(200);
			cout << mPieceName <<" passes GO and collects " << POUND <<"200"<<endl;
			
		}
		counter ++;	
	}
			
}
CPlayer::~CPlayer(){



}