//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_JOUEUR_HPP
#define MAIN_JOUEUR_HPP


#include "Pieces/Piece.hpp"
#include <vector>

class Joueur {
private:
    Couleur couleur;
    vector<Piece *> pieces;
    int Score;
public:
    Joueur(Couleur couleur, int score);

    Couleur getCouleur() const;

    const vector<Piece *> &getPieces() const;

    const Piece* getPiece(Coordonnees coordonnees) const;

    void addPiece(Piece * piece);

    int getScore() const;

};


#endif //MAIN_JOUEUR_HPP
