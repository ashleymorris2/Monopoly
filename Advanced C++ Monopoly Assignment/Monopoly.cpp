#include "stdafx.h"
#include "Monopoly.h"

CMonopoly::CMonopoly(){

	ifstream inp;
	string name, name2, name3;
		
	player[0] = new CPlayer("Dog", 1);
	player[1] = new CPlayer("Car", 2);

	int cost = 0, rent = 0, colourGroup = 0;
	char * fileName = "..\\Debug\\Monopoly.txt"; 
	
	//read file in
	inp.open(fileName);  	

		CGo * tmp;
		inp >> name;//go
		tmp = new CGo(name);	
		theBoard.push_back( tmp );		
		int i = 1;

	while (i < 26){			
		
		CProperty * tmp;
		inp >> name >> name2 >> cost >> rent >> colourGroup;//property
 		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );
		i++;

		if(i==3){
			CBonus * tmp;
			inp >> name;//bonus
			tmp = new CBonus(name);	
			theBoard.push_back( tmp );
			i++;
		}
		if(i==6){
			CJail * tmp;
			inp >> name;//jail
			tmp = new CJail(name);	
			theBoard.push_back( tmp );
			i++;
		}
		if(i==9||i ==23){		
			CAirport * tmp;
			inp >> name >> name2;//airports
			tmp = new CAirport(myName(name,name2));	
			theBoard.push_back( tmp );
			i++;
		}
		if(i==13){
			CFreeParking * tmp;
			inp >> name >> name2;//free parking
			tmp = new CFreeParking(myName(name,name2));	
			theBoard.push_back( tmp );
			i++;
		}
		if(i==16){
			CPenalty * tmp;
			inp >> name;//penalty
			tmp = new CPenalty(name);	
			theBoard.push_back( tmp );
			i++;
		}
		if(i==19){//go to jail
			CGoToJail * tmp;
			inp >> name >> name2 >> name3;		
			tmp = new CGoToJail(myName(name,name2,name3));	
 			theBoard.push_back( tmp );
			i++;
		}
	}

	inp.close();
	tmp = NULL;
	delete(tmp);

	cout << "Welcome to Monopoly" << endl;
	cout << endl;
}
void CMonopoly::PlayRound(){
	
	for(int i = 0; i < ROUNDS; i++){
		for (int j = 0; j < NUMPLAYERS; j++)
		{
			player[j]->RollDice();
			theBoard[player[j]->GetLocation()]->CalculateTurn(player, j);//the board at the players current location.. calculate their turn.
			cout << player[j]->GetPlayerName() <<" has " << POUND<< player[j]->GetBalance() << endl;
			cout <<endl;
		}
	}

	
}
CMonopoly::~CMonopoly(){
	 
	for (int i = 0; i < NUMPLAYERS; i ++)
	{
		delete (player[i]);
	}

	for (int i = 0; i < 26; i ++)
	{
		delete (theBoard[i]);
	}
	theBoard.clear();
	
	//while(!theBoard.empty()) delete theBoard.back(), theBoard.pop_back();	
} 
//Takes the two or three strings and returns one string.
 string  myName (string  name1, string  name2){
	
	string name;	
	name = name1 +" " += name2;
	
	return name;
}
 string  myName (string  name1, string  name2, string name3){
	
	string name;
	name = name1 +" " += name2 +" " += name3;
	
	return name;
}