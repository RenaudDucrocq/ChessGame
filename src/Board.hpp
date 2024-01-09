//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_BOARD_HPP
#define MAIN_BOARD_HPP

#include "Pieces/Bishop.hpp"

class Board {
private:
    Player white;
    Player black;
    Piece* pieces [2][8];
public:
    Board(const string& fileName, Player white, Player black);

};


#endif //MAIN_BOARD_HPP
