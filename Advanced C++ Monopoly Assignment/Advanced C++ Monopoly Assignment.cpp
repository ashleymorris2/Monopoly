// Advanced C++ Monopoly Assignment.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#include "Square.h"
#include "Player.h"
#include "Property.h"

const char PND = 156;
const int ROUNDS = 20;
const int BOARDSIZE = 26;

//Takes the two strings and returns one string with a space
string myName (string name1, string name2);

// Returns a random number in the range 1 .. 6
// Note that I am using casting to convert one data type to another
int Random()
{
	return static_cast<int>( static_cast<double> (rand()) / (RAND_MAX + 1) * 6.0f + 1 );
}

int _tmain(int argc, _TCHAR* argv[])
{
	int currentRound = 0;

	ifstream inp;
	string name, name2;

	int cost = 0, rent = 0, colourGroup = 0;

	char * fileName = "..\\Debug\\Monopoly.txt"; 

	CPlayer * player1 = new CPlayer("Dog", 1);
	CPlayer * player2 = new CPlayer("Car", 2);
	
	//CSquare * pTheBoard [BOARDSIZE];  

	vector <CSquare*> theBoard;

	//read file in
	inp.open(fileName);  	

	for(int i = 0; i <BOARDSIZE; i++)
	{
		CSquare * tmp;
			
		inp >> name;
		tmp = new CSquare(name);	
		theBoard.push_back( tmp );
		
		inp >> name >> name2 >> cost >> rent >> colourGroup;
 		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );

		inp >> name >> name2 >> cost >> rent >> colourGroup;
		tmp = new CProperty(myName(name,name2), cost, rent, colourGroup);
		theBoard.push_back( tmp );

		if(i == 9 || i==13 || i == 23){
		inp >> name >> name2;
		tmp = new CSquare(myName(name,name2));	
		theBoard.push_back( tmp );
		}
	}
	inp.close();


	cout << "Welcome to Monopoly" << endl;


	while(currentRound < ROUNDS){

		currentRound++;
	}

	return 0;
}
string myName (string name1, string name2){

	string name;
	name = name1 +" " += name2;
	return name;
}
