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
        while (getline(fichier, ligne)) {
            cout << ligne;
            Coordonnees c = Coordonnees(ligne[2], ligne[1]);
            // Décision prise que la premiere igne du tableau correspond aux pieces blanches (minuscule)
            switch (ligne[0]) {
                case 'p': {
                    auto *p = new Pawn(c, white);
                    this->addPiece(p);
                    break;
                }
                case 'P': {
                    auto *p = new Pawn(c, black);
                    this->addPiece(p);
                    break;
                }
                case 'b': {
                    auto *p = new Bishop(c, white);
                    this->addPiece(p);
                    break;
                }
                case 'B': {
                    auto *p = new Bishop(c, black);
                    this->addPiece(p);
                    break;
                }
                case 'n': {
                    auto *p = new Knight(c, white);
                    this->addPiece(p);
                    break;
                }
                case 'N': {
                    auto *p = new Knight(c, black);
                    this->addPiece(p);
                    break;
                }
                case 'r': {
                    auto *p = new Rook(c, white);
                    this->addPiece(p);
                    break;
                }
                case 'R': {
                    auto *p = new Rook(c, black);
                    this->addPiece(p);
                    break;
                }
                case 'q': {
                    auto *p = new Queen(c, white);
                    this->addPiece(p);
                    break;
                }
                case 'Q': {
                    auto *p = new Queen(c, black);
                    this->addPiece(p);
                    break;
                }
                case 'k': {
                    auto *p = new King(c, white);
                    this->addPiece(p);
                    break;
                }
                case 'K': {
                    auto *p = new King(c, black);
                    this->addPiece(p);
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
    auto col = p->getPosition().getColonne();
    auto lig = p->getPosition().getLigne();

    this->pieces[lig][col] = p;
}

Piece *Board::getPiece(Coordonnees pos) {
    auto lig = pos.getLigne();
    auto col = pos.getColonne();

    return this->pieces[lig][col];
}

void Board::emptyCell(Coordonnees pos) {
    auto lig = pos.getLigne();
    auto col = pos.getColonne();

    this->pieces[lig][col] = nullptr;
}

bool Board::isEmptyCell(Coordonnees pos) {
    auto lig = pos.getLigne();
    auto col = pos.getColonne();

    return (this->pieces[lig][col] == nullptr);
}

list<Coordonnees> Board::getAllCoordonnees() {
    list<Coordonnees> allpos;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j)
            allpos.emplace_back(i, j);

    }
    return allpos;
}

bool Board::sameColumnNothingBetween(Coordonnees o, Coordonnees d) {
    auto ligo = o.getLigne();
    auto colo = o.getColonne();
    auto ligd = d.getLigne();
    auto cold = d.getColonne();
    auto minl = min(ligd, ligo);
    auto maxl = max(ligo,ligd);
    if (colo == cold){
        for (unsigned int i = minl+1; i < maxl; ++i) {
            if (this->pieces[i][cold] != nullptr) return false;
        }
    }
    else return false;
    return true;
}

bool Board::sameRowNothingBetween(Coordonnees o, Coordonnees d) {
    auto ligo = o.getLigne();
    auto colo = o.getColonne();
    auto ligd = d.getLigne();
    auto cold = d.getColonne();
    auto minl = min(cold, colo);
    auto maxl = max(colo,cold);
    if (ligo == ligd){
        for (unsigned int i = minl+1; i < maxl; ++i) {
            if (this->pieces[ligo][i] != nullptr) return false;
        }
    }
    else return false;
    return true;
}

bool Board::sameDiagonalNothingBetween(Coordonnees o, Coordonnees d) {
    auto ligo = o.getLigne();
    auto colo = o.getColonne();
    auto ligd = d.getLigne();
    auto cold = d.getColonne();
    auto minl = min(ligd, ligo);
    auto maxl = max(ligo,ligd);
    auto minc = min(cold, colo);
    auto maxc = max(colo,cold);
    auto dialig = minl+1;
    auto diacol = minc+1;
    while (this->pieces[dialig][diacol] == nullptr && dialig < maxl && diacol < maxc){
        dialig++;
        diacol++;
    }
    return (this->pieces[dialig][diacol] == nullptr);
}
