//
// Created by renau on 09/01/2024.
//

#ifndef MAIN_ROOK_HPP
#define MAIN_ROOK_HPP

#include "Piece.hpp"

class Rook : public Piece {
public:
    Rook(Coordonnees position, Couleur couleur1);

    list<Action> getAllActions() override;

    const type_info &getType() override;

    unsigned int getValue() override;
};


#endif //MAIN_ROOK_HPP
