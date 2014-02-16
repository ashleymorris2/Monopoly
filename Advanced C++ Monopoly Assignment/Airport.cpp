#include "stdafx.h"
#include "Square.h"
#include "Airport.h"

CAirport::CAirport(string posName) : CSquare(posName){
	
	this->mPosName = posName;
	this->mOwner = -1;

}
void CAirport::CalculateTurn(CPlayer * player[], int playerNum){

	cout << player[playerNum]->GetPlayerName() <<" lands on " << this->GetName() <<endl; 

	
	if (mOwner < 0){

		if(player[playerNum]->GetBalance() >= 200){
		player[playerNum]->SubBalance(200);
		mOwner = playerNum;
		}
		else{

			return;	
		}
	}
	//If the owner isn't current player then player pays £10
	else if (mOwner != playerNum){
		player[playerNum]->SubBalance(10);
		player[mOwner]->AddBalance(10);

		cout << player[playerNum]->GetPlayerName() <<" pays "<<POUND<< "10 flying costs" <<endl;
	}
	
}