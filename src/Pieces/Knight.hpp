//
// Created by renau on 09/01/2024.
//

#ifndef MAIN_KNIGHT_HPP
#define MAIN_KNIGHT_HPP


#include "Piece.hpp"

class Knight : public Piece {
public:
    Knight(Coordonnees position, Couleur couleur1);

    vector<Action> getPossibleActions(const Board &board) override;

    Type getType() override;

    unsigned int getValue() override;
};


#endif //MAIN_KNIGHT_HPP
