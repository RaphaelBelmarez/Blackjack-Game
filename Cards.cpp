#include "Cards.h"


queue<Card> Cards::fillDeck() {
	vector<Card> Deck;
	for (int x = 1; x <= 4; x++) {
		char suits;
		if (x == 1) { suits = 'D'; };
		if (x == 2) { suits = 'C'; };
		if (x == 3) { suits = 'H'; };
		if (x == 4) { suits = 'S'; };
		Card card;
			for (int i = 1; i <= 13; i++) {
				card.suit = suits;
				if (i == 1) {
					card.number = "1";
					Deck.push_back(card);
				}
				else if (i == 2) {
					card.number = "2";
					Deck.push_back(card);
				}
				else if (i == 3) {
					card.number = "3";
					Deck.push_back(card);
				}
				else if (i == 4) {
					card.number = "4";
					Deck.push_back(card);
				}
				else if (i == 5) {
					card.number = "5";
					Deck.push_back(card);
				}
				else if (i == 6) {
					card.number = "6";
					Deck.push_back(card);
				}
				else if (i == 7) {
					card.number = "7";
					Deck.push_back(card);
				}
				else if (i == 8) {
					card.number = "8";
					Deck.push_back(card);
				}
				else if (i == 9) {
					card.number = "9";
					Deck.push_back(card);
				}
				else if (i == 10) {
					card.number = "10";
					Deck.push_back(card);
				}
				else if (i == 11) {
					card.number = "11";
					Deck.push_back(card);
				}
				else if (i == 12) {
					card.number = "12";
					Deck.push_back(card);
				}
				else if (i == 13) {
					card.number = "13";
					Deck.push_back(card);
				}
			}
		}
	for (int j = 0; j <= additionalCards; j++) {

		break;
	}
	random_device rd;
	mt19937 g(rd());
	shuffle(Deck.begin(), Deck.end(), g);
	for (int i = 0; i < Deck.size(); i++) {
		deck.push(Deck[i]);
		//Card card = deck.front();
		//deck.pop();
		//cout << card.number;
		//cout << card.suit;
		//cout << "  ";
	}
	//system("PAUSE");
	return deck;
	}
//now unused
queue<Card> Cards::Shuffle(vector<Card> unshuffledDeck) {
	for (int i = 0; i < unshuffledDeck.size(); i++) {
		Card card = unshuffledDeck[i];
		cout << card.number;
	}
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
void Cards::addCard(int card) {
	additionalCards += 1;
	if (card == 1) {
		deck.push(sub3());
	}
	if (card == 2) {
		deck.push(sub5());
	}
	if (card == 3) {
		deck.push(get21());
	}
	if (card == 4) {
		deck.push(delHand());
	}
	if (card == 5) {
		deck.push(reveal());
	}
}
Card Cards::sub3() {
	Card card;
	card.number = "-3";
	card.suit = 'N';
	return card;
}
Card Cards::sub5() {
	Card card;
	card.number = "-5";
	card.suit = 'N';
	return card;
}
Card Cards::get21() {
	Card card;
	card.number = "21";
	card.suit = 'N';
	return card;
}
Card Cards::delHand() {
	Card card;
	card.number = "-";
	card.suit = 'N';
	return card;
}
Card Cards::reveal() {
	Card card;
	card.number = "_";
	card.suit = 'N';
	return card;
}