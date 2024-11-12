//
// Created by renaud on 21/11/2023.
//

#include "Board.hpp"
#include <algorithm>

Board::Board() {
    this->pieces = {};
    this->winner = nullptr;
    this->black = new Joueur(Couleur(BLACK), 0);
    this->white = new Joueur(Couleur(WHITE), 0);
}

const vector<Piece *> &Board::getPieces() const {
    return pieces;
}

void Board::addPiece(Piece *piece) {
    this->pieces.emplace_back(piece);
    if (piece->getCouleur() == this->black->getCouleur())
        this->black->addPiece(piece);
    else
        this->white->addPiece(piece);
}

vector<Action> Board::getAllPossibleActions() {
    vector<Action> actions = {};
    actions.insert(
            actions.cend(),
            this->black->getMyPossibleActions(this).cbegin(),
            this->black->getMyPossibleActions(this).cend());
    actions.insert(
            actions.cend(),
            this->white->getMyPossibleActions(this).cbegin(),
            this->white->getMyPossibleActions(this).cend());

    return actions;
}

bool Board::emptyCell(Coordonnees coordonnees) {
    bool res = true;
    for (auto p: this->pieces) {
        if (p->getPosition() == coordonnees)
            res = false;
    }
    return res;
}

bool Board::emptyWay(const Action &action) {
    if (all_of(action.getChemin().cbegin(), action.getChemin().cend(), [this](Coordonnees c) {
        return this->emptyCell(c);
    }))
        return true;
    return false;
}

bool Board::inBoardCell(Coordonnees coordonnees) {
    return coordonnees.getLigne() <= 8 && coordonnees.getColonne() <= 8;
}

Piece *Board::getPieceDepart(const Action &action){
    for (auto p : this->pieces)
    {
        if (p->getPosition() == action.getDepart())
            return p;
    }
    return nullptr;
}
