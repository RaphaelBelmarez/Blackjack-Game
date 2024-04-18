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
class Cards {
public:
	vector<Card> fillDeck();
	string emptyDeck();
	queue<Card> Shuffle(vector<Card> unshuffledDeck);
	static Card deal();
	void GetCard();
	//will control through a queue, so that if cards get put back into deck, which they shouldn't, they'll be put at the end. Wanted to put a stack but didnt make sense
	static queue<Card> deck;
private:
	int additionalCards;
};