#ifndef SQUARE_H

#define SQUARE_H
#pragma once

#include <iostream>
#include <string>

using namespace std;

class CSquare
{
private:
	
	string name;//The square name

	int cost; //cost to buy the property
	int rent; 
	int colourGroup; // colour group that the property belongs to
	

public:
	Square(string name);
		//int cost, int rent, int colourGroup);
};

#endif