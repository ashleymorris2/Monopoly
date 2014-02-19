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
void CPlayer::SetOwned(int colourGroup){

	mColourGroupsOwned.push_back(colourGroup);

}
bool CPlayer::GetOwned(int colourGroup){

	int searchSize = mColourGroupsOwned.size();
	int counter = 0;
		
	for (int i = 0; i<searchSize; i ++){ //Searches the vector for the specified colour and counts how many times its found.
			if (mColourGroupsOwned[i] == colourGroup){
				counter++;
			}
		}

	if (colourGroup == 3 || colourGroup == 6){
		if (counter == 3){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		if (counter == 2){
			return true;
		}
		else{
			return false;
		}
	}

}
void CPlayer::RollDice(){

	int playerRoll = 0;
	int previousLoc = 0;
	int counter = 0;

	playerRoll = Random();
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