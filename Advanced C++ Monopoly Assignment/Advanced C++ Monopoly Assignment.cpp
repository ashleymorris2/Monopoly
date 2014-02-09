// Advanced C++ Monopoly Assignment.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <fstream>

#include "Square.h"
#include "Player.h"

using namespace std;

const char PND = 156;
const int ROUNDS = 20;

int _tmain(int argc, _TCHAR* argv[])
{
	int currentRound = 0;

	ifstream inp;
	char dummy [30];
	char * fileName = "..\\Debug\\Monopoly.txt"; 

	CPlayer * player1 = new CPlayer("Dog");
	CPlayer * player2 = new CPlayer("Car");
	
	CSquare * boardSquare [26];  

	//read file in
	inp.open(fileName);  
	int i =0;
	while (inp && i < 26){
		inp.getline(dummy, 30);	
		boardSquare[i] = new CSquare;
		boardSquare[i]->setName(dummy);
	i++;
	}

	inp.close();

	cout << "Welcome to Monopoly" << endl;

	return 0;
}

