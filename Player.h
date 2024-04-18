#include <iostream>
#include <vector>
#include "Cards.h"

using namespace std;

class Player {
public:
	void hit();
	void stand();
	bool isStand();
	vector<Card> hand;
private:
	bool standStatus;
};