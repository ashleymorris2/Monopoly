

class Player
{
private:

	int playerNum;	//Unique identifiable player number.
	char * pieceName [20];//The name of the players piece.
	int funds; //The amount of cash that the player has.

public:
	
	Player(int playerNum, char * pieceName, int Funds);
	
	void setFunds(int amount);
	

};