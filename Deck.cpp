//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 1 – Solitaire Prime)
//  Due Date (09/13/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include "Deck.hpp"

Deck::Deck(): _position(0)
{
    this->_initDeck();
}

void Deck::refreshDeck()
{
    this->_initDeck();
    _position = 0;
}

Card Deck::deal()
{
    if (_position < this->_sizeDeck()) {
        _position++;
        return _cards[_position];
    }
    return {};
}

void Deck::shuffle()
{
    int x;
    int y;

    srand(time(0));

    for (int i = 0; i < 300; i++) {
        x = rand() % 52;
        y = rand() % 52;

        Card tmp = _cards[x];

        _cards[x] = _cards[y];
        _cards[y] = tmp;
    }
}

int Deck::cardsLeft()
{
    return this->_sizeDeck() - _position;
}

void Deck::showDeck()
{
    for (int i = 0, x = 0; i <= 4 - 1; i++) {
        for (int j = 0; j <= 13 - 1; j++, x++) {
            _cards[x].showCard();
            cout << "";
        }
        cout << endl;
    }
}

// ***
// Private fct
// ***

void Deck::_initDeck()
{
    char suits[] = { 'S', 'H', 'D', 'C' };
    char values[] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };

    for (int i = 0, x = 0; i <= 4 - 1; i++)
        for (int j = 0; j <= 13 - 1; j++, x++)
            _cards[x].setCard(values[j], suits[i]);
}

int Deck::_sizeDeck()
{
    return sizeof(_cards) / sizeof(_cards[0]);
}
