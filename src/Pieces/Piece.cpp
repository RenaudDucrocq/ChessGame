//
// Created by renaud on 21/11/2023.
//

#include "Piece.hpp"

Piece::Piece(Coordonnees position, Couleur couleur1) : position(position), couleur(couleur1) {
}

void Piece::setPosition(Coordonnees p) {
    this->position = p;
}

bool Piece::sameColor(Couleur couleur1) {
    return this->couleur == couleur1;
}

const Coordonnees &Piece::getPosition() const {
    return position;
}

Couleur Piece::getCouleur() {
    return this->couleur;
}
