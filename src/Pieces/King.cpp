#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
//
// Created by renau on 09/01/2024.
//

#include "King.hpp"

King::King(Coordonnees position, Couleur couleur1) : Piece(position, couleur1) {
}

Type King::getType() {
    return Type(KING);
}

unsigned int King::getValue() {
    return 0;
}

vector <Action> King::getPossibleActions() {
    vector<Action> actions;
    unsigned int ligd = this->getPosition().getLigne();
    unsigned int cold = this->getPosition().getColonne();
    Coordonnees depart = this->getPosition();
    int liga = ligd;
    int cola = cold;
    vector<Coordonnees> chemin;

    liga++; // En haut
    Coordonnees arrive = Coordonnees(liga, cola);
    chemin.emplace_back(arrive);
    actions.emplace_back(depart, arrive, chemin);

    cola++; // En haut à droite
    chemin.clear(); // clear le chemin
    arrive = Coordonnees(liga, cola); // case d'arrive
    chemin.emplace_back(arrive); // le chemin ne comporte qu'une case
    actions.emplace_back(depart, arrive, chemin); // ajout de l'action

    liga = ligd; // A droite
    chemin.clear();
    arrive = Coordonnees(liga, cola);
    chemin.emplace_back(arrive);
    actions.emplace_back(depart, arrive, chemin);

    liga--; // En bas a droite
    chemin.clear();
    arrive = Coordonnees(liga, cola);
    chemin.emplace_back(arrive);
    actions.emplace_back(depart, arrive, chemin);

    cola = cold; // En bas
    chemin.clear();
    arrive = Coordonnees(liga, cola);
    chemin.emplace_back(arrive);
    actions.emplace_back(depart, arrive, chemin);

    cola--; // En bas a gauche
    chemin.clear();
    arrive = Coordonnees(liga, cola);
    chemin.emplace_back(arrive);
    actions.emplace_back(depart, arrive, chemin);

    liga = ligd; // A gauche
    chemin.clear();
    arrive = Coordonnees(liga, cola);
    chemin.emplace_back(arrive);
    actions.emplace_back(depart, arrive, chemin);

    liga++; // En haut a gauche
    chemin.clear();
    arrive = Coordonnees(liga, cola);
    chemin.emplace_back(arrive);
    actions.emplace_back(depart, arrive, chemin);

    return actions;
}


#pragma clang diagnostic pop