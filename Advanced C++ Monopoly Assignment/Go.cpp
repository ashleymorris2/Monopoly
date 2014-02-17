#include "stdafx.h"
#include "Square.h"
#include "Special.h"
#include "Go.h"

CGo::CGo(string posName) : CSpecial(posName){


}
void CGo::CalculateTurn(CPlayer * player[], int playerNum){

	cout << player[playerNum]->GetPlayerName() <<" lands on " << this->GetName() <<endl; 
	player[playerNum]->AddBalance(200);
	
}
CGo::~CGo(){


}