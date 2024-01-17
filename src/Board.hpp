//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_BOARD_HPP
#define MAIN_BOARD_HPP

#include "Pieces/Piece.hpp"
#include <array>
#include <list>

class Piece;
class Board {
private:
    Player white;
    Player black;
    array<array<Piece*, 8>,8> pieces{};
public:
    Board(const string& fileName, Player white, Player black);
    list<Piece*> getPieces(Player p);
    list<Piece*> getPieces();
    void addPiece(Piece* p);
    Piece* getPiece(Coordonnees pos);
    void emptyCell(Coordonnees pos);
    bool isEmptyCell(Coordonnees pos);
    static list<Coordonnees> getAllCoordonnees();
    bool sameColumnNothingBetween(Coordonnees o, Coordonnees d);
    bool sameRowNothingBetween(Coordonnees o, Coordonnees d);
    bool sameDiagonalNothingBetween(Coordonnees o, Coordonnees d);

};


#endif //MAIN_BOARD_HPP
