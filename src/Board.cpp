//
// Created by renau on 21/11/2023.
//

#include "Board.hpp"
#include <iostream>
#include <fstream>

Board::Board(const string& fileName, Player white, Player black) : white(white), black(black) {
    ifstream fichier(fileName);
    if (fichier){
        string ligne;
        getline(fichier, ligne);
        cout << ligne;
        switch (ligne[0]) {
            case 'b':
                Coordonnees c = Coordonnees(ligne[2],ligne[1]);
                Bishop b = Bishop(c, white);

        }

    } else {
        cout << "ERREUR OUVERTURE DU FICHIER";
    }
}
