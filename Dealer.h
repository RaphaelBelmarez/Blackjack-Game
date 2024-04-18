#include "Cards.h"
#include "Player.h"
#include <iostream>

class Dealer:public Player {
public:
	//will check to see its own hand and will run an algorithm to determine odds of busting if getting a new card, if odds aren't awful will hit.
	void check();
private:
	//bot can check if it has hit 21, even with the hidden card from player
	bool hasWon();
};