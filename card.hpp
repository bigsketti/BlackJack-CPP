#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>

class Card {

	public: 
		Card();		// Default constructor
		Card(int value, char suit);	// Constructor
		void ToggleIsFaceUp();
		bool GetIsFaceUp() const;
		int GetCardValue() const;
		void PrintCard();

	private:
		int value;
		char suit;
		bool isFaceUp;
};

#endif // CARD_HPP