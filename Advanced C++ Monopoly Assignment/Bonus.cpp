#include "stdafx.h"
#include "Square.h"
#include "Special.h"
#include "Bonus.h"
#include "MyDefinitions.h"

CBonus::CBonus(string posName) : CSpecial(posName){

}
void CBonus::CalculateTurn(CPlayer * player[], int playerNum){

	int randomEvent = 0;
	
	cout << player[playerNum]->GetPlayerName() <<" lands on " << this->GetName() <<endl; 
	cout << endl;

	randomEvent = Random();

	switch (randomEvent)
	{
	case 1 :
		cout << "Find some money. Player gains"<<POUND<<"20" <<endl;
		player[playerNum]->AddBalance(20);
		break;
	case 2:
		cout << "Win competition. Player gains "<<POUND<<"50" <<endl;
		player[playerNum]->AddBalance(50);
		break;
	case 3:
		cout << "Tax rebate. Player gains "<<POUND<<"100" <<endl;
		player[playerNum]->AddBalance(100);
		break;
	case 4:
		cout << "Win lottery. Player gains "<<POUND<<"150" <<endl;
		player[playerNum]->AddBalance(150);
		break;
	case 5:
		cout << "Bequest. Player gains "<<POUND<<"200" <<endl;
		player[playerNum]->AddBalance(200);
		break;
	case 6:
		cout << "Birthday. Player gains "<<POUND<<"300" <<endl;
		player[playerNum]->AddBalance(300);
		break;
	}

	cout <<player[playerNum]->GetPlayerName() <<" has "<< player[playerNum]->GetBalance() <<endl;
	cout <<endl;
}
CBonus::~CBonus(){


}