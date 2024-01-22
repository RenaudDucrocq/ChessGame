//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_MOVE_HPP
#define MAIN_MOVE_HPP


#include "Coordonnees.hpp"
#include "Player.hpp"
#include "Pieces/Piece.hpp"

class Piece;
class Move {
private:
    Coordonnees depart;
    Coordonnees arrive;
    Piece *playing;
    Piece *waiting;
public:
    Move(const Coordonnees &depart, const Coordonnees &arrive, Piece *playing, Piece *waiting);
};


#endif //MAIN_MOVE_HPP
