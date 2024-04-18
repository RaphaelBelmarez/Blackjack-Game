#include "Player.h"

void Player::hit() {
	hand.push_back(Cards::deal());
}
void Player::stand() {
	standStatus == true;
}
bool Player::isStand() {
	return standStatus;
}