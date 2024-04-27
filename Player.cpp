#include "Player.h"

void Player::hit() {
	hand.push_back(deal());
}
void Player::stand() {
	standStatus = true;
}
bool Player::isStand() {
	return standStatus;
}