//  Name Emile LEPETIT
//  Class (CECS 282-01)
//  Project Name (Prog 1 – Solitaire Prime)
//  Due Date (09/13/2021)
//  I certify that this program is my own original work. I did not copy any part of this program from
//  any other source. I further certify that I typed each and every line of code in this program.

#ifndef SOLITAIRE_PRIME_GAME_HPP
#define SOLITAIRE_PRIME_GAME_HPP


class Game {
    public:
        Game();
        ~Game() = default;
        bool isExit() const;

        void run() const;

    private:
        bool _exit;
};


#endif //SOLITAIRE_PRIME_GAME_HPP
