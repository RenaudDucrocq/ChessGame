//
// Created by renau on 09/01/2024.
//

#include "Queen.hpp"

Queen::Queen(Coordonnees position, Player owner) : Piece(position, owner) {
}

bool Queen::isMoveAuthorized(Board b, Coordonnees dest) {
    return false;
}

list<Move> Queen::getAllMoves(Board board) {
    return {};
}

const type_info &Queen::getType() {
    return typeid(this);
}

unsigned int Queen::getValue() {
    return 9;
}