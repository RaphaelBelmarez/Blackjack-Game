#include "Dealer.h"

bool Dealer::check(queue<Card> decks) {
	float total = 0;
	for (int i = 0; i < hand.size(); i++) {
		Card cards = hand[i];
		total += stoi(cards.number);
	}
	Card card = decks.front();
	if (total < 21) {
		if ((total + stoi(card.number)) <= 21) {
			return true;
		}
	}
	else {
		return false;
	}
}
void Dealer::win() {
	hasWon = true;
}
bool Dealer::haswon() {
	bool wincon = hasWon;
	return wincon;
}