//
// Created by renau on 09/01/2024.
//

#include "King.hpp"

King::King(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

const type_info &King::getType() {
    return typeid(this);
}

unsigned int King::getValue() {
    return 0;
}

vector <Action> King::getAllActions() {
    return {};
}

