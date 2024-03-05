//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_PIECE_HPP
#define MAIN_PIECE_HPP

#include <list>
#include <typeinfo>

#include "Coordonnees.hpp"
#include "Couleur.hpp"
#include "Action.hpp"

class Piece {
protected:
    Coordonnees position;
    Couleur couleur;
public:
    Piece(Coordonnees position, Couleur couleur1);

    void setPosition(Coordonnees position);

    virtual list<Action> getAllActions() = 0;

    bool sameColor(Couleur couleur1);

    virtual const type_info & getType() = 0;

    virtual unsigned int getValue() = 0;

    const Coordonnees &getPosition() const;
};


#endif //MAIN_PIECE_HPP
