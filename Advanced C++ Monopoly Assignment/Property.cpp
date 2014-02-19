#include "stdafx.h"

#include "Square.h"
#include "Property.h"

CProperty::CProperty(string posName, int cost, int rent, int colourGroup) : CSquare(posName){		
	this->mCost = cost;
	this->mRent = rent;
	this->mColourGroup = colourGroup;	
	this->mOwner = -1;
}
int CProperty::GetRent(){

	return mRent;
}
int CProperty::GetCost(){

	return mCost;
}
int CProperty::GetColourGroup(){

	return mColourGroup;
}
void CProperty::CalculateTurn(CPlayer * player[], int playerNum){

	int balancePaid = 0;

	cout << player[playerNum]->GetPlayerName() <<" lands on " << this->GetName() <<endl; 
		
	if (mOwner < 0){
			if(player[playerNum]->GetBalance() >= mCost){
				player[playerNum]->SubBalance(mCost);
				cout << player[playerNum]->GetPlayerName() << " buys " << this->GetName() << " for " <<POUND<< mCost <<endl;
				mOwner = playerNum;
				player[playerNum]->SetOwned(mColourGroup);
			}
			else{
				return;	
		}
	}
	
	else if (mOwner != playerNum){//If the owner isn't current player then player pays the owner

		if(player[mOwner]->GetOwned(mColourGroup) == true){//Checks if the whole colour group is owned
			balancePaid = mRent + mRent;
			player[playerNum]->SubBalance(balancePaid);
			player[mOwner]->AddBalance(balancePaid);
		}
		else{
			balancePaid = mRent;
			player[playerNum]->SubBalance(balancePaid);
			player[mOwner]->AddBalance(balancePaid);
		}
		cout << player[playerNum]->GetPlayerName() <<" pays "<<POUND<< balancePaid <<" rent" <<endl;
	}
}
CProperty::~CProperty(){



}