//
// Created by renaud on 21/11/2023.
//

#ifndef ECHEC_COORDONNEES_HPP
#define ECHEC_COORDONNEES_HPP

#include <string>

using namespace std;


class Coordonnees {

private:
    unsigned int ligne;
    unsigned int colonne;
public:
    Coordonnees(unsigned int ligne, unsigned int colonne);

    string to_String() const;

    bool equals(Coordonnees& o) const;

    unsigned int getLigne() const;

    unsigned int getColonne() const;


};


#endif //ECHEC_COORDONNEES_HPP
