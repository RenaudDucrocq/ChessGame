//
// Created by renau on 09/01/2024.
//


#include "Pawn.hpp"

Pawn::Pawn(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

Type Pawn::getType() {
    return Type(PAWN);
}

unsigned int Pawn::getValue() {
    return 1;
}

vector <Action> Pawn::getPossibleActions() {
    return {};
}
