//
// Created by renaud on 21/11/2023.
//

#include "Joueur.hpp"

Joueur::Joueur(Couleur couleur, int score) : couleur(couleur),
                                             Score(score) {
    this->pieces = {};
}

Couleur Joueur::getCouleur() const {
    return couleur;
}

const vector<Piece *> &Joueur::getPieces() const {
    return pieces;
}

const Piece *Joueur::getPiece(Coordonnees coordonnees) const {
    for (auto p: this->pieces) {
        if (p->getPosition().equals(coordonnees))
            return p;
    }
    return nullptr;
}

void Joueur::addPiece(Piece *piece) {
    this->pieces.emplace_back(piece);
}

int Joueur::getScore() const {
    return Score;
}

vector<Action> Joueur::getMyPossibleActions(const Board& board) {
    vector<Action> actions = {};
    for (auto p : this->pieces) {
        actions.insert(actions.cend(), p->getPossibleActions(board).cbegin(), p->getPossibleActions(board).cend());
    }

    return actions;
}
