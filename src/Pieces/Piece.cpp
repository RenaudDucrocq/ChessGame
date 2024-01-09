//
// Created by renaud on 21/11/2023.
//

#include "Piece.hpp"

Piece::Piece(Coordonnees position, Player owner) : position(position), owner(owner) {
}

void Piece::setPosition(Coordonnees position) {
    this->position = position;
}

//TODO : à compléter
bool Piece::sameColor(const Piece &autrePiece) {
    return false;
}

