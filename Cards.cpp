#include "Cards.h"

queue<Card> Cards::fillDeck() {
	for (int x = 0; x < 4; x++) {
		char suit;
		if (x == 0) { suit == 'D'; };
		if (x == 1) { suit == 'C'; };
		if (x == 2) { suit == 'H'; };
		if (x == 3) { suit == 'S'; };
		Card card;
		card.suit == suit;
			for (int i = 0; i < 13; i++) {
				if (i % 13 == 1) {
					card.number == "A";
					deck.push(card);
				}
				else if (i % 13 == 2) {
					card.number == "2";
					deck.push(card);
				}
				else if (i % 13 == 3) {
					card.number == "3";
					deck.push(card);
				}
				else if (i % 13 == 4) {
					card.number == "4";
					deck.push(card);
				}
				else if (i % 13 == 5) {
					card.number == "5";
					deck.push(card);
				}
				else if (i % 13 == 6) {
					card.number == "6";
					deck.push(card);
				}
				else if (i % 13 == 7) {
					card.number == "7";
					deck.push(card);
				}
				else if (i % 13 == 8) {
					card.number == "8";
					deck.push(card);
				}
				else if (i % 13 == 9) {
					card.number == "9";
					deck.push(card);
				}
				else if (i % 13 == 10) {
					card.number == "10";
					deck.push(card);
				}
				else if (i % 13 == 11) {
					card.number == "J";
					deck.push(card);
				}
				else if (i % 13 == 12) {
					card.number == "Q";
					deck.push(card);
				}
				else if (i % 13 == 13) {
					card.number == "K";
					deck.push(card);
				}
			}
		}
	return deck;
	}
void Cards::shuffle(queue<Card> unshuffledDeck) {

}