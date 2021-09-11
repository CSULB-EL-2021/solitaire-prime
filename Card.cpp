//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 1 – Solitaire Prime)
//  Due Date (09/13/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#include "Card.h"

Card::Card(): _r('#'), _s('#')
{}

Card::Card(const char r, const char s): _r(r), _s(s)
{}

void Card::setCard(const char r, const char s)
{
    _r = r;
    _s = s;
}

int Card::getValue() const
{
    if (_r == 'A') return 1;
    else if (_r == 'T' || _r == 'J' || _r == 'Q' || _r == 'K') return 10;
    return _r - '0';
}

void Card::showCard() const
{
    std::string str{_r, _s};
    cout << str;
}