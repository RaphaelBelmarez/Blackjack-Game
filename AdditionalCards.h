#ifndef AdditionalCards_h
#define AdditionalCards_h


#include "Cards.h"
#include <iostream>
#include <string>


using namespace std;

class AdditionalCards {
public:
	Card sub3();
	Card sub5();
	Card get21();
	Card delHand();
	Card reveal();
private:

};

#endif // !AdditionalCards_h