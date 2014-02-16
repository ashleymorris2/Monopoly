#include "stdafx.h"
#include "Square.h"
#include "Special.h"
#include "GoToJail.h"

CGoToJail::CGoToJail(string posName) : CSpecial(posName){
}
void CGoToJail::CalculateTurn(CPlayer * player[], int playerNum){

	cout << player[playerNum]->GetPlayerName() <<" lands on " << this->GetName() <<endl; 
	cout << player[playerNum]->GetPlayerName() <<" goes to Jail" <<endl;
	cout << player[playerNum]->GetPlayerName() <<" pays "<< POUND <<"50"<<endl;

	player[playerNum]->SubBalance(50);
	player[playerNum]->SetLocation(6);	
}