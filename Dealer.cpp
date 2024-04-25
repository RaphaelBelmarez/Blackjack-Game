#include "Dealer.h"

void Dealer::check() {
	int total;
	for (int i = 0; i < hand.size(); i++) {
		if (stoi(hand[i].number) == true)
			total += stoi(hand[i].number);
	}
	if (total < 21) {
		if ((total + stoi(Cards::deck.front().number)) <= 21) {
			hand.push_back(Cards::deal());
		}
	}
	else {
		stand();
	}
}