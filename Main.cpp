#include <iostream>
#include "Player.h"
#include "Cards.h"
#include "Screen.h"
#include "Dealer.h"

int main() {
	Cards cards;
	queue<Card> deck = cards.Shuffle(cards.fillDeck());
	Screen screen;
	if (screen.init() == 0) {

	}
	if (screen.init() == 1) {

	}
	if (screen.init() == 2) {

	}
	if (screen.init() == 3) {

	}
	if (screen.init() == 4) {

	}
}