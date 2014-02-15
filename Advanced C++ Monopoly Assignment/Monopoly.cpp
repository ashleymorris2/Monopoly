#include "stdafx.h"
#include "Monopoly.h"

CMonopoly::CMonopoly(){

	ifstream inp;
	string name, name2, name3;
		
	player1 = new CPlayer("Dog", 1);
	player2 = new CPlayer("Car", 2);

	int cost = 0, rent = 0, colourGroup = 0;
	char * fileName = "..\\Debug\\Monopoly.txt"; 
	
	//read file in
	inp.open(fileName);  	
	
	/*
		CSquare * tmp;

		inp >> name;//go
		tmp = new CSquare(name);	
		theBoard.push_back( tmp );
		
		inp >> name >> name2 >> cost >> rent >> colourGroup;//red road
 		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );

		inp >> name >> name2 >> cost >> rent >> colourGroup;//red street
		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );
	
		inp >> name;//bonus
		tmp = new CSquare(name);	
		theBoard.push_back( tmp );	

		inp >> name >> name2 >> cost >> rent >> colourGroup;//gray road
 		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );

		inp >> name >> name2 >> cost >> rent >> colourGroup;//gray street
		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );

		inp >> name;//jail
		tmp = new CSquare(name);	
		theBoard.push_back( tmp );

		inp >> name >> name2 >> cost >> rent >> colourGroup;//brown road
 		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );

		inp >> name >> name2 >> cost >> rent >> colourGroup;//brown street
		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );

		inp >> name >> name2;//speedy airport
		tmp = new CSquare(myName(name,name2));	
		theBoard.push_back( tmp );
	*/

		CSquare * tmp;

		inp >> name;//go
		tmp = new CSquare(name);	
		theBoard.push_back( tmp );
		
		int i = 1;

	while (i < 26){	

		CSquare * tmp;
		CProperty * tmp2;

		inp >> name >> name2 >> cost >> rent >> colourGroup;//property
 		tmp2 = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp2 );
		i++;

		if(i==3){
		inp >> name;//bonus
		tmp = new CSquare(name);	
		theBoard.push_back( tmp );
		i++;
		}
		if(i==6||i==16){
		inp >> name;//penalty
		tmp = new CSquare(name);	
		theBoard.push_back( tmp );
		i++;
		}
		if(i==9||i ==23){
		inp >> name >> name2;//airports
		tmp = new CSquare(myName(name,name2));	
		theBoard.push_back( tmp );
		i++;
		}
		if(i==13){
		inp >> name >> name2;//free parking
		tmp = new CSquare(myName(name,name2));	
		theBoard.push_back( tmp );
		i++;
		}
		if(i==19){
		inp >> name >> name2 >> name3;		
		tmp = new CSquare(myName(name,name2,name3));	
		theBoard.push_back( tmp );
		i++;
		}

	}
	inp.close();

	cout << "Welcome to Monopoly" << endl;
}
void CMonopoly::PlayRound(){


	cout <<"Player 1 is at : " << player1->GetLocation() << endl;
	cout <<"Player 2 is called: " << player2->GetPlayerName() <<endl;

	theBoard[7]->CalculateTurn(player2);
	

}
CMonopoly::~CMonopoly(){

	//Go through the vector deleting the pointers through dereferencing. 
	for ( vector <CSquare*>::iterator i = theBoard.begin(); i != theBoard.end(); i++ )
	{
		delete (*i); 
	}


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