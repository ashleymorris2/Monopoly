#include "stdafx.h"
#include "Monopoly.h"

CMonopoly::CMonopoly(){

	ifstream inp;
	string name, name2;
	
	player1 = new CPlayer("Dog", 1);
	player2 = new CPlayer("Car", 2);

	int cost = 0, rent = 0, colourGroup = 0;
	char * fileName = "..\\Debug\\Monopoly.txt"; 
	
	//read file in
	inp.open(fileName);  	
	
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
	
	inp.close();

	cout << "Welcome to Monopoly" << endl;
}
void CMonopoly::PlayRound(){

	

}
CMonopoly::~CMonopoly(){

	//Go through the vector deleting the pointers through dereferencing. 
	for ( vector <CSquare*>::iterator i = theBoard.begin(); i != theBoard.end(); i++ )
	{
		delete (*i); 
	}


}
//Takes the two strings and returns one string with a space
 string  myName (string  name1, string  name2){
	
	string name;
	
	name = name1 +" " += name2;
	
	return name;
}