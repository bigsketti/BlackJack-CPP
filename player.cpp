#include "player.hpp"
#include <iostream>
#include <cstdlib>

//initializes player with 1000 cash
Player::Player() {
	cash = 1000;
	bet = 0;
	handValue = 0;
}

//initializes player with a specified amount of cash
Player::Player(int money) {
	this->cash = money;
	bet = 0;
	handValue = 0;
}

//sets the bet to be used for this hand
void Player::SetBet(int playerBet) {
	bet = playerBet;
}

//sets available cash for the player
void Player::SetCash(int playerCash) {
	cash = playerCash;
}

//returns the bet for this hand
int Player::GetBet() const {
	return bet;
}

//returns the available cash for the player
int Player::GetCash() const {
	return cash;
}

//returns the total value of the player's hand
int Player::GetHandValue() const {
	return handValue;
}

//pushes card into hand vector and adds card value to handValue
void Player::DealCard(Card card) {
	int randVal = rand() % 14 + 1;
	int randSuit = rand() % 4 + 1;

	char suit{};

	switch (randSuit) { //assigns a suit to the card
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

	Card newCard(randVal, suit);

	hand.push_back(newCard);
	handValue += card.GetCardValue();
}
