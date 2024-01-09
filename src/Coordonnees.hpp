//
// Created by renau on 21/11/2023.
//

#ifndef ECHEC_COORDONNEES_HPP
#define ECHEC_COORDONNEES_HPP

#include <string>

using namespace std;


class Coordonnees {

private:
    unsigned int ligne;
    char colonne;
public:
    Coordonnees(int ligne, char colonne);

    string to_String() const;

    bool equals(Coordonnees& o) const;


};


#endif //ECHEC_COORDONNEES_HPP
