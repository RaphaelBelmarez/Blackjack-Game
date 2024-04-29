#include <iostream>
#include "Player.h"
#include "Cards.h"
#include "Screen.h"
#include "Dealer.h"

int main() {
	Card card;
	Player player;
	Dealer dealer;
	Cards cards;
	Screen screen;
	if (screen.init() == 1) {
		cards.addCard(1);
	}
	if (screen.init() == 2) {
		cards.addCard(2);
	}
	if (screen.init() == 3) {
		cards.addCard(3);
	}
	if (screen.init() == 4) {
		cards.addCard(4);
	}
	if (screen.init() == 5) {
		cards.addCard(5);
	}
	queue<Card> deck = cards.Shuffle(cards.fillDeck());
	player.hit(cards.deal());
	player.hit(cards.deal());
	dealer.hit(cards.deal());
	dealer.hit(cards.deal());
	while (dealer.haswon() != true) {
		float dealertotal = 0;
		float playertotal = 0;
		cout << "Your Hand: " << endl;
		for (int i = 0; i < player.hand.size(); i++) {
			card = player.hand[i];
			cout << card.suit;
			cout << card.number;
			cout << "  " << endl;
		}
		cout << "Dealer's Hand: " << endl;
		for (int i = 0; i < dealer.hand.size(); i++) {
			card = dealer.hand[i];
			cout << card.suit;
			cout << card.number;
			cout << "  " << endl;
		}
		char playstat = screen.play();
		if (player.isStand() == false) {
			if (playstat == 'h') {
				player.hand.push_back(cards.deal());
				
			}
			if (playstat == 's') {
				player.stand();
			}
		}
		card = cards.deal();
		cout << card.number;
		cout << card.suit;
		if (player.isStand() == true) {
			for (int i = 0; i < dealer.hand.size(); i++) {
				card = dealer.hand[i];
				dealertotal += stoi(card.number);
			}
			for (int i = 0; i < player.hand.size(); i++) {
				card = player.hand[i];
				playertotal += stoi(card.number);
			}
			if (playertotal < dealertotal) {
				cout << "Game Lost! Relaunch to play again." << endl;
				dealer.win();
				break;
			}
		}
	}
}