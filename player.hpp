#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include "card.hpp"

class Player {
	public:
		Player(); // Default constructor
		Player(int money); // Constructor
		
		void SetBet(int playerBet);
		void SetCash(int playerCash);

		int GetBet() const;
		int GetCash() const;
		int GetHandValue() const;

		void DealCard(Card card);

private: 
	std::vector<Card> hand;
	int handValue;
	int cash;
	int bet;


};
#endif // PLAYER_HPP