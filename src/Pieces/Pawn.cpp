//
// Created by renau on 09/01/2024.
//

#include "Pawn.hpp"

Pawn::Pawn(Coordonnees position, Player owner) : Piece(position, owner) {
}

bool Pawn::isMoveAuthorized(Board b, Coordonnees dest) {
    return false;
}

list<Move> Pawn::getAllMoves(Board board) {
    return {};
}

const type_info &Pawn::getType() {
    return typeid(this);
}

unsigned int Pawn::getValue() {
    return 1;
}