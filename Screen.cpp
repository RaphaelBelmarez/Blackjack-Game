#include <iostream>
#include "Screen.h"

using namespace std;

void Screen::init() {
	//dont quite believe I'll be able to check and make a savestate right now, I'd be able to later.
	fstream myFile("SaveState.txt");
	while (getline(myFile, line)) {
		saveState = stoi(line);
	}
	if () {

	}
	cout << "Welcome to Blackjack" << endl;
	_sleep(10);
	system("PAUSE");
	system("CLS");
	cout << "You understand theres no going back now." << endl;
}