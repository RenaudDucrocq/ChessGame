//
// Created by renau on 09/01/2024.
//

#ifndef MAIN_QUEEN_HPP
#define MAIN_QUEEN_HPP

#include "Piece.hpp"

class Queen : public Piece{
public:
    Queen(Coordonnees position, Player owner);
    list<Move> getAllMoves(Board board) override;
    bool isMoveAuthorized(Board b, Coordonnees dest) override;
    const type_info & getType() override;
    unsigned int getValue() override;
};


#endif //MAIN_QUEEN_HPP
