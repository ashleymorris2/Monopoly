#include "stdafx.h"
#include "Square.h"
#include "Special.h"
#include "Jail.h"

CJail::CJail(string posName) : CSpecial(posName){


}
void CJail::CalculateTurn(CPlayer * player[], int playerNum){

	cout << player[playerNum]->GetPlayerName() <<" lands on " << this->GetName() <<endl; 
	cout << player[playerNum]->GetPlayerName() <<" is just visiting" <<endl;
		
}