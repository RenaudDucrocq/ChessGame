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
        switch (ligne[0]) {
            case 'b':
                Coordonnees c = Coordonnees(ligne[2],ligne[1]);
                Bishop *b = new Bishop(c, white);
        }

    } else {
        cout << "ERREUR OUVERTURE DU FICHIER";
    }
}
