//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_PIECE_HPP
#define MAIN_PIECE_HPP

#include <list>
#include <typeinfo>

#include "Coordonnees.hpp"
#include "Player.hpp"
#include "Move.hpp"
#include "Board.hpp"

class Piece {
protected:
    Coordonnees position;
    Player owner;
public:
    Piece(Coordonnees position, Player owner);

    void setPosition(Coordonnees position);

    virtual list<Move> getAllMoves(Board board) = 0;

    bool sameColor(Piece const &autrePiece);

    virtual bool isMoveAuthorized(Board b, Coordonnees dest) = 0;

    virtual const type_info& getType() = 0;

    virtual unsigned int getValue() = 0;
};


#endif //MAIN_PIECE_HPP
