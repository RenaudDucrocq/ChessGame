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

    vector<Action> getAllActions();

    bool isActionAuthorised(const Action &action);

    bool emptyCell(Coordonnees coordonnees);

    bool emptyWay(const Action &action);

    bool inBoardCell(Coordonnees coordonnees);

    bool inBoardWay(const Action &action);
};


#endif //MAIN_BOARD_HPP
