//
// Created by renau on 09/01/2024.
//


#include "Rook.hpp"

Rook::Rook(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

Type Rook::getType() {
    return Type(ROOK);
}

unsigned int Rook::getValue() {
    return 5;
}

vector<Action> Rook::getPossibleActions(const Board &board) {
    return {};
}
