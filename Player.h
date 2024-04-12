#include <iostream>
#include <vector>
#include "Cards.h"

using namespace std;

class Player {
public:
	void hit();
	bool stand();
private:
	vector<Card> hand;
	bool standStatus;
};