#include "Dealer.h"

void Dealer::check() {
	float total = 0;
	for (int i = 0; i < hand.size(); i++) {
		if (stoi(hand[i].number) == true)
			total += stoi(hand[i].number);
	}
	if (total < 21) {
		if ((total + stoi(deck.front().number)) <= 21) {
			hand.push_back(deal());
		}
	}
	else {
		stand();
	}
}
void Dealer::win() {
	hasWon = true;
}
bool Dealer::haswon() {
	bool wincon = hasWon;
	return wincon;
}