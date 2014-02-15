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
#include "Monopoly.h"

const int ROUNDS = 20;

// Returns a random number in the range 1 .. 6
int Random()
{
	return static_cast<int>( static_cast<double> (rand()) / (RAND_MAX + 1) * 6.0f + 1 );
}

int _tmain(int argc, _TCHAR* argv[])
{	

	CMonopoly * monopoly = new CMonopoly();
	
	for(int i =0; i < ROUNDS; i++){
	
		monopoly->PlayRound();

	}

	system("pause");

	return 0;
}
