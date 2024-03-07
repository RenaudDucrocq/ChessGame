//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_BISHOP_HPP
#define MAIN_BISHOP_HPP

#include "Piece.hpp"

class Bishop : public Piece{
public:
    Bishop(const Coordonnees &position, Couleur couleur1);

    vector<Action> getAllActions() override;

    const type_info &getType() override;

    unsigned int getValue() override;

};


#endif //MAIN_BISHOP_HPP
