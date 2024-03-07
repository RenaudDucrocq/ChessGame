//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_PIECE_HPP
#define MAIN_PIECE_HPP

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

    virtual vector <Action> getAllActions() = 0;

    bool sameColor(Couleur couleur1);

    virtual const type_info & getType() = 0;

    virtual unsigned int getValue() = 0;

    const Coordonnees &getPosition() const;

    Couleur getCouleur();

    virtual ~Piece();
};


#endif //MAIN_PIECE_HPP
