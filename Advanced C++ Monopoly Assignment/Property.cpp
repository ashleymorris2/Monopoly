#include "stdafx.h"

#include "Square.h"
#include "Property.h"

CProperty::CProperty(string posName, int cost, int rent, int colourGroup) : CSquare(posName){		
	
	this->mCost = cost;
	this->mRent = rent;
	this->mColourGroup = colourGroup;
	
	this->mOwner = 0;
}

int CProperty::GetRent(){

	return mRent;

}
int CProperty::GetCost(){

	return mCost;

}
int CProperty::GetColourGroup(){

	return mColourGroup;
}
void CProperty::CalculateTurn(CPlayer * player){

	cout << player->GetPlayerName() <<" lands on " << this->GetName() <<endl; 
	
	
}
