//
// Created by renau on 09/01/2024.
//

#include "King.hpp"

King::King(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

Type King::getType() {
    return Type(KING);
}

unsigned int King::getValue() {
    return 0;
}

vector <Action> King::getAllActions() {
    return {};
}

