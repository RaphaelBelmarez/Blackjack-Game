#ifndef Cards_h
#define Cards_h


#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <random>
#include <iterator>

using namespace std;

//gives the card a number, or a k,q,j,or ace, which is why its a string, so we can transpose
struct Card {
	string number;
	char suit;
};

//controls the deck of cards, filling the deck, emptying the deck, shuffling, and getting top card
class Cards{
public:
	//fills deck with a shuffled set of cards
	queue<Card> fillDeck();
	//now unused
	queue<Card> Shuffle(vector<Card> unshuffledDeck);
	//returns a card from the deck and pops it from the top of the queue
	Card deal();
	//used to add cards to the deck
	void addCard(int card);
	//different types of cards that could be added
	Card sub3();
	Card sub5();
	Card get21();
	Card delHand();
	Card reveal();
	//will control through a queue, so that if cards get put back into deck, which they shouldn't, they'll be put at the end. Wanted to put a stack but didnt make sense
	queue<Card> deck;
private:
	//how many additional cards are in the deck
	int additionalCards;
	//will likely need to change this to a string to see how many of each are added
};
#endif // !Cards.h