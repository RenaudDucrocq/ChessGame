//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_ACTION_HPP
#define MAIN_ACTION_HPP


#include "Coordonnees.hpp"
#include "Player.hpp"
#include "Pieces/Piece.hpp"

class Piece;
class Action {
private:
    Coordonnees depart;
    Coordonnees arrive;
    Piece *playing;
    Piece *waiting;
public:
    Action(const Coordonnees &depart, const Coordonnees &arrive, Piece *playing, Piece *waiting);
};


#endif //MAIN_ACTION_HPP
