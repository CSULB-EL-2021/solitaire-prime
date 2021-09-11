//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 1 – Solitaire Prime)
//  Due Date (09/13/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#ifndef SOLITAIRE_PRIME_GAME_HPP
#define SOLITAIRE_PRIME_GAME_HPP

#include <iostream>
#include <cmath>

using namespace std;

#include "Deck.h"

class Game {
    public:
        Game();
        ~Game() = default;
        void run();


    private:
        bool _exit;
        int _input;
        Deck _deck;

        int prompt() const;
        void dispatch();
        bool isExit() const;
        void play();
        static bool isPrime(int);
};


#endif //SOLITAIRE_PRIME_GAME_HPP

Game::Game(): _exit(false), _input(0), _deck(Deck())
{

}

bool Game::isExit() const
{
    return _exit;
}

void Game::run()
{
    while (!_exit) {
        _input = this->prompt();
        this->dispatch();
        cout << endl;
    }
}

int Game::prompt() const
{
    char input = 0;

    cout << "Welcome to Solitaire Prime!" << endl;
    cout << "1) New Deck" << endl;
    cout << "2) Display Deck" << endl;
    cout << "3) Shuffle Deck" << endl;
    cout << "4) Play Solitaire Prime" << endl;
    cout << "5) Exit" << endl;

    cin >> input;

    return input - '0';
}

void Game::dispatch()
{
    switch (_input) {
        case 1:
            _deck.refreshDeck();
            break;
        case 2:
            _deck.showDeck();
            break;
        case 3:
            _deck.shuffle();
            break;
        case 4:
            this->play();
            break;
        case 5:
            _exit = true;
            break;
        default:
            cout << "Try another number" << endl;
            break;
    }
}

void Game::play()
{
    int piles = 0;
    int points = 0;

    cout << "Playing Solitaire Prime!!!" << endl << endl;

    for (int i = 0; i < 52 - 1; i++) {
        if (points != 0)
            cout << ", ";
        auto card = _deck.deal();

        points += card.getValue();
        card.showCard();
        if (Game::isPrime(points)) {
            cout << ", ";
            cout << "Prime:" << points << endl;
            points = 0;
            piles++;
        }
    }
    _deck.refreshDeck();
    if (!points)
        cout << endl << "Winner in " << piles << " piles!" << endl;
    else
        cout << ", Loser" << endl;

    // Debug - Stop on win
    /*if (points) {
        cout << "======" << endl;
        _deck.shuffle();
        this->play();
    }*/
}

bool Game::isPrime(int x) {
    if (x <= 1)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    Game* game = new Game();

    game->run();
    return 0;
}