//
// Created by renau on 09/01/2024.
//

#ifndef MAIN_KNIGHT_HPP
#define MAIN_KNIGHT_HPP

#include "Piece.hpp"

class Knight : public Piece{
public:
    Knight(Coordonnees position, Player owner);
    list<Move> getAllMoves(Board board) override;
    bool isMoveAuthorized(Board b, Coordonnees dest) override;
    const type_info & getType() override;
    unsigned int getValue() override;
};


#endif //MAIN_KNIGHT_HPP
