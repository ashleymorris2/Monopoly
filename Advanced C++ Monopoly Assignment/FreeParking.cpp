#include "stdafx.h"
#include "Square.h"
#include "Special.h"
#include "FreeParking.h"

CFreeParking::CFreeParking(string posName) : CSpecial(posName){

}
void CFreeParking::CalculateTurn(CPlayer * player[], int playerNum){

	cout << player[playerNum]->GetPlayerName() <<" lands on " << this->GetName() <<endl; 
	cout << player[playerNum]->GetPlayerName() <<" is resting" <<endl;

	
}
CFreeParking::~CFreeParking(){

}