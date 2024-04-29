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
	queue<Card> deck = cards.fillDeck();
	Card cardas = deck.front();
	cout << cardas.number << endl;
	player.hit(cards.deal());
	player.hit(cards.deal());
	dealer.hit(cards.deal());
	dealer.hit(cards.deal());
	while (dealer.haswon() != true) {
		float dealertotal = 0;
		float playertotal = 0;
		
		if (deck.empty() == true) {
			cout << "empty" << endl;
		}
		system("CLS");
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
		if (player.isStand() == false) {
			char playstat = screen.play();
			if (playstat == 'h') {
				player.hand.push_back(cards.deal());
				
			}
			if (playstat == 's') {
				player.stand();
			}
		}
		//if (deck.empty() == true) {
			//cout << "empty" << endl;
		//}
		for (int i = 0; i < dealer.hand.size(); i++) {
			card = dealer.hand[i];
			dealertotal += stoi(card.number);
		}
		for (int i = 0; i < player.hand.size(); i++) {
			card = player.hand[i];
			playertotal += stoi(card.number);
		}
		if (player.isStand() == true) {
			if (dealer.check(deck) == true) {
				dealer.hit(cards.deal());
			}
			cout << "Your total is: " << playertotal << endl;
			cout << "Dealer's total is: " << dealertotal << endl;
			if (dealertotal > 21) {
				system("CLS");
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
				cout << "Dealer busted! You win! Relaunch to try again." << endl;
				break;
			}
			if (playertotal < dealertotal) {
				cout << "Game Lost! Relaunch to play again." << endl;
				dealer.win();
				break;
			}
		}
		if (playertotal > 21) {
			system("CLS");
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
			cout << "You've busted! Relaunch to try again." << endl;
			break;
		}
	}
}