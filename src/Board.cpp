//
// Created by renaud on 21/11/2023.
//

#include "Board.hpp"
#include "Pieces/Bishop.hpp"
#include <iostream>
#include <fstream>

Board::Board(const string& fileName, Player white, Player black) : white(white), black(black) {
    ifstream fichier(fileName);
    this->pieces = {};
    if (fichier){
        string ligne;
        getline(fichier, ligne);
        cout << ligne;
        Coordonnees c = Coordonnees(ligne[2], ligne[1]);
        switch (ligne[0]) {
            case 'b': {
                auto *b = new Bishop(c, white);
                break;
            }
            case 'B': {
                auto *B = new Bishop(c, black);
                break;
            }
            default:
                break;
        }

    } else {
        cout << "ERREUR OUVERTURE DU FICHIER";
    }
}
