//
// Created by renaud on 21/11/2023.
//


#include "Bishop.hpp"

Bishop::Bishop(const Coordonnees &position, Couleur couleur1) : Piece(position, couleur1) {}

const type_info &Bishop::getType() {
    return typeid(this);
}

unsigned int Bishop::getValue() {
    return 3;
}

vector <Action> Bishop::getAllActions() {
    return {};
}
