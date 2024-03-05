//
// Created by renau on 09/01/2024.
//

#ifndef MAIN_KING_HPP
#define MAIN_KING_HPP

#include "Piece.hpp"

class King : public Piece {
public:
    King(Coordonnees position, Couleur couleur1);

    list<Action> getAllActions() override;

    const type_info &getType() override;

    unsigned int getValue() override;
};


#endif //MAIN_KING_HPP
