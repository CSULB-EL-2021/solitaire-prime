//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 1 – Solitaire Prime)
//  Due Date (09/13/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#ifndef SOLITAIRE_PRIME_DECK_HPP
#define SOLITAIRE_PRIME_DECK_HPP

#include "Card.hpp"

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;


class Deck {
    public:
        Deck();
        ~Deck() = default;
        void refreshDeck();
        Card deal();
        void shuffle();
        int cardsLeft();
        void showDeck();

    private:
        void _initDeck();
        int _sizeDeck();

        int _position{};
        Card _cards[52];
};


#endif //SOLITAIRE_PRIME_DECK_HPP
