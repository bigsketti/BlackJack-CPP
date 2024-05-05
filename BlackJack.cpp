#include "card.hpp"
#include "player.hpp"
#include <iostream>

int main() {
    Player user(1000);
    Player house(100000);

    std::cout << "Welcome to BlackJack!\n";
    std::cout << "Time to gamble your life savings away!\n";
    std::cout << "You have $" << user.GetCash() << " to start.\n";

    std::cout << "Place your bet: ";
    int bet;
    std::cin >> bet;
    user.SetBet(bet);

    std::cout << "You bet $" << user.GetBet() << ".\n";

}
