//
// Created by renau on 09/01/2024.
//

#ifndef MAIN_QUEEN_HPP
#define MAIN_QUEEN_HPP

#include "Piece.hpp"

class Queen : public Piece {
public:
    Queen(Coordonnees position, Couleur couleur1);

    vector<Action> getPossibleActions(const Board &board) override;

    Type getType() override;

    unsigned int getValue() override;
};


#endif //MAIN_QUEEN_HPP
