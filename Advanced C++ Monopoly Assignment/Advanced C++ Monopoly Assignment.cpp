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


#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

int _tmain(int argc, _TCHAR* argv[])
{	
	CMonopoly * monopoly = new CMonopoly();
	
	monopoly->PlayRound();
	
	system("pause");

	delete (monopoly);

	_CrtDumpMemoryLeaks();

	return 0;
}
