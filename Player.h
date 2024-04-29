#ifndef Player_h
#define Player_h


#include <iostream>
#include <vector>
#include "Cards.h"

using namespace std;

class Player : public Cards {
public:
	vector<Card> hand;
	void hit(Card card);
	void stand();
	bool isStand();
private:
	bool standStatus;
};
#endif // !Player_h