#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

//gives the card a number, or a k,q,j,or ace, which is why its a string, so we can transpose
struct Card {
	string number;
	char suit;
};

//controls the deck of cards, filling the deck, emptying the deck, shuffling, and getting top card
class Cards {
public:
	queue<Card> fillDeck();
	string emptyDeck();
	void shuffle(queue<Card> unshuffledDeck);
	Card deal();
	void GetCard();
private:
	//will control through a queue, so that if cards get put back into deck, which they shouldn't, they'll be put at the end. Wanted to put a stack but didnt make sense
	queue<Card> deck;
	int additionalCards;
};