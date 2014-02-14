#include "stdafx.h"

#include "Square.h"
#include "Property.h"

CProperty::CProperty(string posName, int cost, int rent, int colourGroup) : CSquare(posName){		
	this->cost = cost;
	this->rent = rent;
	this->colourGroup = colourGroup;
	this->owner = 0;
}
