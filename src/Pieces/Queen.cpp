//
// Created by renau on 09/01/2024.
//

#include "Queen.hpp"

Queen::Queen(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

const type_info &Queen::getType() {
    return typeid(this);
}

unsigned int Queen::getValue() {
    return 9;
}

list<Action> Queen::getAllActions() {
    return {};
}
