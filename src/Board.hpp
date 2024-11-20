//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_BOARD_HPP
#define MAIN_BOARD_HPP


#include "Joueur.hpp"

class Board {
private:
    vector<Piece *> pieces;
    Joueur *white;
    Joueur *black;
    Joueur *winner;
public:
    Board();

    const vector<Piece *> &getPieces() const;

    void addPiece(Piece *piece);

    vector<Action> getAllPossibleActions();

    bool emptyCell(Coordonnees coordonnees);

    bool emptyWay(const Action &action);

    static bool inBoardCell(Coordonnees coordonnees);

    Piece *getPieceDepart(const Action &action);

    static void display();
};


#endif //MAIN_BOARD_HPP
