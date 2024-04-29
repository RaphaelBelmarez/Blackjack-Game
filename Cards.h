#ifndef Cards_h
#define Cards_h


#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <random>
#include <iterator>
#include "AdditionalCards.h"

using namespace std;

//gives the card a number, or a k,q,j,or ace, which is why its a string, so we can transpose
struct Card {
	string number;
	char suit = NULL;
};

//controls the deck of cards, filling the deck, emptying the deck, shuffling, and getting top card
class Cards : public AdditionalCards{
public:
	vector<Card> fillDeck();
	string emptyDeck();
	queue<Card> Shuffle(vector<Card> unshuffledDeck);
	Card deal();
	void GetCard();
	void addCard(int card);
	//will control through a queue, so that if cards get put back into deck, which they shouldn't, they'll be put at the end. Wanted to put a stack but didnt make sense
	queue<Card> deck;
private:
	int additionalCards;
};
#endif // !Cards.h