//
// Created by renau on 09/01/2024.
//


#include "Queen.hpp"

Queen::Queen(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

Type Queen::getType() {
    return Type(QUEEN);
}

unsigned int Queen::getValue() {
    return 9;
}

vector <Action> Queen::getAllActions() {
    return {};
}
