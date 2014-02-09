#ifndef SQUARE_H
#define SQUARE_H
#pragma once

#include <iostream>
#include <string>


using namespace std;

class CSquare
{
private:
	
	string posName;//The square name

	/* for property class
	int cost; //cost to buy the property
	int rent; 
	int colourGroup; // colour group that the property belongs to
	*/

public:
	void setName(string name);

	//CSquare(string name);
		//int cost, int rent, int colourGroup);
};

#endif