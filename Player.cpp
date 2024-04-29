#include "Player.h"

void Player::hit(Card card) {
	hand.push_back(card);
}
void Player::stand() {
	standStatus = true;
}
bool Player::isStand() {
	return standStatus;
}