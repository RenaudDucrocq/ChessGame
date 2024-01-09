//
// Created by renau on 09/01/2024.
//

#include "Rook.hpp"

Rook::Rook(Coordonnees position, Player owner) : Piece(position, owner) {
}

bool Rook::isMoveAuthorized(Board b, Coordonnees dest) {
    return false;
}

list<Move> Rook::getAllMoves(Board board) {
    return {};
}

const type_info &Rook::getType() {
    return typeid(this);
}

unsigned int Rook::getValue() {
    return 5;
}