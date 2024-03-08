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
    this->pieces.push_back(piece);
    if (piece->getCouleur() == this->black->getCouleur())
        this->black->addPiece(piece);
    else
        this->white->addPiece(piece);
}

vector<Action> Board::getAllActions() {
    vector<Action> actions = {};
    actions.insert(
            actions.cend(),
            this->black->getAllActions().cbegin(),
            this->black->getAllActions().cend());
    actions.insert(
            actions.cend(),
            this->white->getAllActions().cbegin(),
            this->white->getAllActions().cend());

    return actions;
}

bool Board::isActionAuthorised(const Action &action) {    
    return (emptyWay(action) || isAttack(action)) && inBoardWay(action);
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
    return coordonnees.getLigne() <= 8 && coordonnees.getColonne() <= 8 && coordonnees.getLigne() >= 0 &&
           coordonnees.getColonne() >= 0;
}

bool Board::inBoardWay(const Action &action) {
    if (all_of(action.getChemin().cbegin(), action.getChemin().cend(), [this](Coordonnees c) {
        return this->inBoardCell(c);
    }))
        return true;
    return false;
}

bool Board::isAttack(const Action &action){
    if (!emptyWay(action))
    {   
        for (auto c : action.getChemin()){
            if (!emptyCell(c) && c == action.getArrive())
                return true;
            else if (!emptyCell(c) && c != action.getArrive())
                return false;
        }
    }
    return false;
}
