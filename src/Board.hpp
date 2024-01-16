//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_BOARD_HPP
#define MAIN_BOARD_HPP

#include "Pieces/Piece.hpp"
#include "array"

class Piece;
class Board {
private:
    Player white;
    Player black;
    array<array<Piece*, 8>,8> pieces{};
public:
    Board(const string& fileName, Player white, Player black);

};


#endif //MAIN_BOARD_HPP
