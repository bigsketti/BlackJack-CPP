#include "player.hpp"
#include <iostream>
#include <cstdlib>

Player::Player() {
	cash = 1000;
	bet = 0;
	handValue = 0;
}

Player::Player(int money) {
	this->cash = money;
	bet = 0;
	handValue = 0;
}

void Player::SetBet(int playerBet) {
	bet = playerBet;
}

void Player::SetCash(int playerCash) {
	cash = playerCash;
}

int Player::GetBet() const {
	return bet;
}

int Player::GetCash() const {
	return cash;
}

int Player::GetHandValue() const {
	return handValue;
}

void Player::DealCard(Card card) {
	int randVal = rand() % 14 + 1;
	int randSuit = rand() % 4 + 1;

	char suit;

	switch (randSuit) {
		case 1:
			suit = 'H';
			break;
		case 2:
			suit = 'D';
			break;
		case 3:
			suit = 'C';
			break;
		case 4:
			suit = 'S';
			break;
	}

	Card card(randVal, suit);

	hand.push_back(card);
	handValue += card.GetCardValue();
}
