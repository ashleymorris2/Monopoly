#include "stdafx.h"
#include "Square.h"

CSquare::CSquare(string posName)
{
	this->mPosName = posName;
}

string CSquare::GetName(){
//note - all squares have to have a name so all must be able to access this variable.
return mPosName;

}
void CSquare::CalculateTurn(CPlayer * player[], int playerNum){

	//abstract class

}
CSquare::~CSquare(){



}