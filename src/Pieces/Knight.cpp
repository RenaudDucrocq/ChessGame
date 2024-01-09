//
// Created by renau on 09/01/2024.
//

#include "Knight.hpp"

Knight::Knight(Coordonnees position, Player owner) : Piece(position, owner) {
}

bool Knight::isMoveAuthorized(Board b, Coordonnees dest) {
    return false;
}

list<Move> Knight::getAllMoves(Board board) {
    return {};
}

const type_info &Knight::getType() {
    return typeid(this);
}

unsigned int Knight::getValue() {
    return 3;
}