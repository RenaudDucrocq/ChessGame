//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_MOVE_HPP
#define MAIN_MOVE_HPP


#include "Coordonnees.hpp"
#include "Player.hpp"

class Move {
private:
    Coordonnees depart;
    Coordonnees arrive;
    Player playing;
    Player waiting;
public:
    Move(const Coordonnees &depart, const Coordonnees &arrive, const Player &playing, const Player &waiting);
};


#endif //MAIN_MOVE_HPP
