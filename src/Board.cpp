//
// Created by renaud on 21/11/2023.
//

#include "Board.hpp"
#include "Pieces/Bishop.hpp"
#include "Pieces/Pawn.hpp"
#include "Pieces/Knight.hpp"
#include "Pieces/Rook.hpp"
#include "Pieces/Queen.hpp"
#include "Pieces/King.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>

Board::Board(const string &fileName, Player white, Player black) : white(white), black(black) {
    ifstream fichier(fileName);
    if (fichier) {
        string ligne;
        unsigned int i = 0;
        while (getline(fichier, ligne)) {
            cout << ligne;
            Coordonnees c = Coordonnees(ligne[2], ligne[1]);
            // Décision prise que la premiere igne du tableau correspond aux pieces blanches (minuscule)
            switch (ligne[0]) {
                case 'p': {
                    auto *p = new Pawn(c, white);
                    this->pieces[0][i] = p;
                    break;
                }
                case 'P': {
                    auto *p = new Pawn(c, black);
                    this->pieces[1][i] = p;
                    break;
                }
                case 'b': {
                    auto *p = new Bishop(c, white);
                    this->pieces[0][i] = p;
                    break;
                }
                case 'B': {
                    auto *p = new Bishop(c, black);
                    this->pieces[1][i] = p;
                    break;
                }
                case 'n': {
                    auto *p = new Knight(c, white);
                    this->pieces[0][i] = p;
                    break;
                }
                case 'N': {
                    auto *p = new Knight(c, black);
                    this->pieces[1][i] = p;
                    break;
                }
                case 'r': {
                    auto *p = new Rook(c, white);
                    this->pieces[0][i] = p;
                    break;
                }
                case 'R': {
                    auto *p = new Rook(c, black);
                    this->pieces[1][i] = p;
                    break;
                }
                case 'q': {
                    auto *p = new Queen(c, white);
                    this->pieces[0][i] = p;
                    break;
                }
                case 'Q': {
                    auto *p = new Queen(c, black);
                    this->pieces[1][i] = p;
                    break;
                }
                case 'k': {
                    auto *p = new King(c, white);
                    this->pieces[0][i] = p;
                    break;
                }
                case 'K': {
                    auto *p = new King(c, black);
                    this->pieces[1][i] = p;
                    break;
                }
                default:
                    break;
            }
        }

    } else {
        cout << "ERREUR OUVERTURE DU FICHIER";
    }
}

list<Piece*> Board::getPieces(Player p) {
    list<Piece*> piecesList;
    auto it1 = this->pieces.cbegin();
    while (it1 != this->pieces.cend()) {
        auto it2 = it1->cbegin();
        while ((it2 = find_if(it2, it1->cend(),
                              [p](Piece *piece) { return piece->sameColor(Pawn(Coordonnees(0, 0), p)); })) !=
               it1->cend()) {
            piecesList.push_back(*it2);
            it2++;
        }
        it1++;
    }
    return piecesList;
}

list<Piece *> Board::getPieces() {
    list<Piece*> piecesList;
    for(const auto ap : this->pieces){
        for(const auto p : ap){
            if (p != nullptr) piecesList.push_back(p);
        }
    }
    return piecesList;
}

void Board::addPiece(Piece *p) {

}

Piece *Board::getPiece(Coordonnees pos) {
    return nullptr;
}

void Board::emptyCell(Coordonnees pos) {

}

bool Board::isEmptyCell(Coordonnees pos) {
    return false;
}

list<Coordonnees> Board::getAllCoordonnees() {
    return list<Coordonnees>();
}

bool Board::sameColumnNothingBetween(Coordonnees o, Coordonnees d) {
    return false;
}

bool Board::sameRowNothingBetween(Coordonnees o, Coordonnees d) {
    return false;
}

bool Board::sameDiagonalNothingBetween(Coordonnees o, Coordonnees d) {
    return false;
}
