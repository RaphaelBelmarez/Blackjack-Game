#include <iostream>
#include "Screen.h"

using namespace std;

int Screen::init() {
	cout << "Welcome to Blackjack" << endl;
	Sleep(10);
	system("PAUSE");
	system("CLS");
	//dont quite believe I'll be able to check and make a savestate right now, I'd be able to later
	string line;
	fstream myFile("SaveState.txt");
	while (getline(myFile, line)) {
		saveState = stoi(line);
	}
	myFile.close();
	if (stoi(line) == 0) {
		return 1;
	}
	if (stoi(line) == 1) {
		return 2;
	}
	if (stoi(line) == 2) {
		return 3;
	}
	if (stoi(line) == 3) {
		return 4;
	}
	if (stoi(line) == 4) {
		return 5;
	}
	return 0;
}
char Screen::play() {
	string answer;
	cout << "Would you like to hit or stand?" << endl;
	cin >> answer;
	return answer[0];
}