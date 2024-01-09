//
// Created by renau on 09/01/2024.
//

#include "King.hpp"

King::King(Coordonnees position, Player owner) : Piece(position, owner) {
}

bool King::isMoveAuthorized(Board b, Coordonnees dest) {
    return false;
}

list<Move> King::getAllMoves(Board board) {
    return {};
}

const type_info &King::getType() {
    return typeid(this);
}

unsigned int King::getValue() {
    return 0;
}

