#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include "card.hpp"

class Player {
	public:
		//constructors
		Player(); 
		Player(int money);
		
		//setters
		void SetBet(int playerBet);
		void SetCash(int playerCash);

		//getters
		int GetBet() const;
		int GetCash() const;
		int GetHandValue() const;

		//other functions
		void DealCard(Card card);

private: 
	std::vector<Card> hand;
	int handValue;
	int cash;
	int bet;


};
#endif // PLAYER_HPP
