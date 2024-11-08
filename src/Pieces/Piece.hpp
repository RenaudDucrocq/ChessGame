//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_PIECE_HPP
#define MAIN_PIECE_HPP

#include "Coordonnees.hpp"
#include "Couleur.hpp"
#include "Action.hpp"

enum Type{
    BISHOP, KING, KNIGHT, PAWN, QUEEN, ROOK
};
class Piece {
protected:
    Coordonnees position;
    Couleur couleur;
public:
    Piece(Coordonnees position, Couleur couleur1);

    void setPosition(Coordonnees position);

    virtual vector <Action> getPossibleActions() = 0;

    bool sameColor(Couleur couleur1);

    virtual Type getType() = 0;

    virtual unsigned int getValue() = 0;

    const Coordonnees &getPosition() const;

    Couleur getCouleur();

    virtual ~Piece();
};


#endif //MAIN_PIECE_HPP
