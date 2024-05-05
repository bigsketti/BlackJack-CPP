#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include "card.hpp"

class Player {
	public:
		Player();



private: 
	std::vector<Card> hand;
	int handValue;
	int cash;
	int bet;


};
#endif // PLAYER_HPP