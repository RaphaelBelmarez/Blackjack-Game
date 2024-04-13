#pragma once
class Screen
{
public:
void init();
void reset();
void getsavestate();
void checkforsavefile();
cool createsavefile();
private:
int savestate;
};

