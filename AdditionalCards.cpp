#include "AdditionalCards.h"

Card AdditionalCards::add5() {
	Card card;
	card.number = "+5";
	card.suit = NULL;
	return card;
}
Card AdditionalCards::sub5() {
	Card card;
	card.number = "-5";
	card.suit = NULL;
	return card;
}
Card AdditionalCards::get21() {
	Card card;
	card.number = "21";
	card.suit = NULL;
	return card;
}
Card AdditionalCards::delHand() {
	Card card;
	card.number = "-";
	card.suit = NULL;
	return card;
}
Card AdditionalCards::reveal() {
	Card card;
	card.number = "_";
	card.suit = NULL;
	return card;
}