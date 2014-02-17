#include "stdafx.h"
#include "Square.h"
#include "Special.h"
#include "Penalty.h"
#include "MyDefinitions.h"

CPenalty::CPenalty(string posName) : CSpecial(posName){

}
void CPenalty::CalculateTurn(CPlayer * player[], int playerNum){

	int randomEvent = 0;

	cout << player[playerNum]->GetPlayerName() <<" lands on " << this->GetName() <<endl; 
	cout << endl;

	randomEvent = Random();

	switch (randomEvent)
	{
	case 1 :
		cout << "Pay food bill. Player loses "<<POUND<<"20" <<endl;
		player[playerNum]->SubBalance(20);
		break;
	case 2:
		cout << "Pay phone bill. Player loses "<<POUND<<"50" <<endl;
		player[playerNum]->SubBalance(50);
		break;
	case 3:
		cout << "Pay heating bill. Player loses "<<POUND<<"100" <<endl;
		player[playerNum]->SubBalance(100);
		break;
	case 4:
		cout << "Pay vehicle tax. Player loses "<<POUND<<"150" <<endl;
		player[playerNum]->SubBalance(150);
		break;
	case 5:
		cout << "Pay fuel bill. Player loses  "<<POUND<<"200" <<endl;
		player[playerNum]->SubBalance(200);
		break;
	case 6:
		cout << "Pay windfall tax. Player loses "<<POUND<<"300" <<endl;
		player[playerNum]->SubBalance(300);
		break;
	}

	cout <<player[playerNum]->GetPlayerName() <<" has "<< player[playerNum]->GetBalance() <<endl;
	cout << endl;
}
CPenalty::~CPenalty(){

}