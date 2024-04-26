#ifndef Player_h
#define Player_h


#include <iostream>
#include <vector>
#include "Cards.h"

using namespace std;

class Player {
public:
	vector<Card> hand;
	void hit();
	void stand();
	bool isStand();
private:
	bool standStatus;
};
#endif // !Player_h