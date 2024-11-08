//
// Created by renau on 09/01/2024.
//

#ifndef MAIN_ROOK_HPP
#define MAIN_ROOK_HPP

#include "Piece.hpp"

class Rook : public Piece {
public:
    Rook(Coordonnees position, Couleur couleur1);

    vector<Action> getPossibleActions() override;

    Type getType() override;

    unsigned int getValue() override;
};


#endif //MAIN_ROOK_HPP
