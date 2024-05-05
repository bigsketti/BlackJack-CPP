#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>

class Card {

	public: 
		//constructors
		Card();
		Card(int value, char suit);

		//setters
		void ToggleIsFaceUp();

		//getters
		bool GetIsFaceUp() const;
		int GetCardValue() const;

		//other functions
		void PrintCard();

	private:
		int value;
		char suit;
		bool isFaceUp;
};

#endif // CARD_HPP
