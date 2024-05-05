#include "card.hpp"

//default constructor
Card::Card() {
	value = 0;
	suit = ' ';
	isFaceUp = true;
}

//constructor with parameters
Card::Card(int value, char suit) {
	this->value = value;
	this->suit = suit;
	isFaceUp = false;
}

//flips the card over
void Card::ToggleIsFaceUp() {
	isFaceUp = !isFaceUp;
}

//returns whether the card is face up or not
bool Card::GetIsFaceUp() const {
	return isFaceUp;
}

//returns the value of the card
int Card::GetCardValue() const {
	return value;
}

//prints the card
void Card::PrintCard() {
	if (isFaceUp) {
		std::cout << value << suit << " ";
	}
	else {
		std::cout << "XX ";
	}
}
