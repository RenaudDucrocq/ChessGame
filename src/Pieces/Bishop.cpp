//
// Created by renaud on 21/11/2023.
//

#include "Bishop.hpp"

Bishop::Bishop(Coordonnees position, Player owner) : Piece(position, owner) {
}

bool Bishop::isMoveAuthorized(Board b, Coordonnees dest) {
    return false;
}

list<Move> Bishop::getAllMoves(Board board) {
    return {};
}

const type_info &Bishop::getType() {
    return typeid(this);
}

unsigned int Bishop::getValue() {
    return 3;
}
