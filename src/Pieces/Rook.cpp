//
// Created by renau on 09/01/2024.
//

#include "Rook.hpp"

Rook::Rook(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

const type_info &Rook::getType() {
    return typeid(this);
}

unsigned int Rook::getValue() {
    return 5;
}

list<Action> Rook::getAllActions() {
    return {};
}
