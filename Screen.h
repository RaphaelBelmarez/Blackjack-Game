#include <fstream>
#include <string>
#include <Windows.h>

class Screen
{
public:
	//very rudimentary save state system, more of a work in progress while i research, would like to be able to resume play exactly where you left off.
	int init();
	char play();
private:
	int saveState;
};

