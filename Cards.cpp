#include "Cards.h"

vector<Card> Cards::fillDeck() {
	vector<Card> Deck;
	for (int x = 1; x <= 4; x++) {
		char suit;
		if (x == 1) { suit == 'D'; };
		if (x == 2) { suit == 'C'; };
		if (x == 3) { suit == 'H'; };
		if (x == 4) { suit == 'S'; };
		Card card;
			for (int i = 1; i <= 13; i++) {
				if (i == 1) {
					card.number = "A";
					Deck.push_back(card);
					break;
				}
				else if (i == 2) {
					card.number = "2";
					Deck.push_back(card);
					break;
				}
				else if (i == 3) {
					card.number = "3";
					Deck.push_back(card);
					break;
				}
				else if (i == 4) {
					card.number = "4";
					Deck.push_back(card);
					break;
				}
				else if (i == 5) {
					card.number = "5";
					Deck.push_back(card);
					break;
				}
				else if (i == 6) {
					card.number = "6";
					Deck.push_back(card);
					break;
				}
				else if (i == 7) {
					card.number = "7";
					Deck.push_back(card);
					break;
				}
				else if (i == 8) {
					card.number = "8";
					Deck.push_back(card);
					break;
				}
				else if (i == 9) {
					card.number = "9";
					Deck.push_back(card);
					break;
				}
				else if (i == 10) {
					card.number = "10";
					Deck.push_back(card);
					break;
				}
				else if (i == 11) {
					card.number = "J";
					Deck.push_back(card);
					break;
				}
				else if (i == 12) {
					card.number = "Q";
					Deck.push_back(card);
					break;
				}
				else if (i == 13) {
					card.number = "K";
					Deck.push_back(card);
					break;
				}
			}
		}
	for (int j = 0; j < additionalCards; j++) {
		return;
	}
	return Deck;
	}
queue<Card> Cards::Shuffle(vector<Card> unshuffledDeck) {
	random_device rd;
	mt19937 g(rd());
	shuffle(unshuffledDeck.begin(), unshuffledDeck.end(), g);
	for (int i = 0; i < unshuffledDeck.size(); i++) {
		deck.push(unshuffledDeck[i]);
	}
	return deck;
}
Card Cards::deal() {
	Card tempcard = deck.front();
	deck.pop();
	return tempcard;
}