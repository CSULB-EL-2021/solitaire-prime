//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 1 – Solitaire Prime)
//  Due Date (09/13/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.


#ifndef SOLITAIRE_PRIME_CARD_HPP
#define SOLITAIRE_PRIME_CARD_HPP

#include <iostream>
using namespace std;

class Card {
    public:
        Card();
        Card(char r, char s);
        ~Card() = default;
        void setCard(char r, char s);
        int getValue() const;
        void showCard() const;

    private:
        char _r; // Rank
        char _s; // Suit
};


#endif //SOLITAIRE_PRIME_CARD_HPP
