//
// Created by renau on 09/01/2024.
//

#include "Knight.hpp"

Knight::Knight(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

const type_info &Knight::getType() {
    return typeid(this);
}

unsigned int Knight::getValue() {
    return 3;
}

vector<Action> Knight::getAllActions() {
    return {};
}
