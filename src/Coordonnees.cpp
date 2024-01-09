//
// Created by renau on 21/11/2023.
//

#include "Coordonnees.hpp"

Coordonnees::Coordonnees(int ligne, char colonne) {
    this->ligne = ligne;
    this->colonne = colonne;
}

string Coordonnees::to_String() const {
    return this->colonne + to_string(this->ligne) ;
}

bool Coordonnees::equals(Coordonnees& o) const {
    return this->ligne == o.ligne && this->colonne == o.colonne ;
}
