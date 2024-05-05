#include "card.hpp"

Card::Card() {	// Default constructor
	value = 0;
	suit = ' ';
	isFaceUp = false;
}

Card::Card(int value, char suit) {	// Constructor
	this->value = value;
	this->suit = suit;
	isFaceUp = false;
}

void Card::ToggleIsFaceUp() {
	isFaceUp = !isFaceUp;
}

bool Card::GetIsFaceUp() const {
	return isFaceUp;
}

int Card::GetCardValue() const {
	return value;
}

void Card::PrintCard() {
	if (isFaceUp) {
		std::cout << value << suit << " ";
	}
	else {
		std::cout << "XX ";
	}
}