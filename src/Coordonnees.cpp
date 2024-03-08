//
// Created by renaud on 21/11/2023.
//

#include "Coordonnees.hpp"

Coordonnees::Coordonnees(unsigned int ligne, unsigned colonne) : ligne(ligne), colonne(colonne) {}

string Coordonnees::to_String() const {
    return to_string(this->colonne) + to_string(this->ligne);
}

bool Coordonnees::equals(Coordonnees &o) const {
    return this->ligne == o.ligne && this->colonne == o.colonne;
}

unsigned int Coordonnees::getLigne() const {
    return ligne;
}

unsigned int Coordonnees::getColonne() const {
    return colonne;
}

bool Coordonnees::operator==(const Coordonnees &rhs) const {
    return ligne == rhs.ligne &&
           colonne == rhs.colonne;
}

bool Coordonnees::operator!=(const Coordonnees &rhs) const {
    return ligne != rhs.ligne ||
           colonne != rhs.colonne;
}