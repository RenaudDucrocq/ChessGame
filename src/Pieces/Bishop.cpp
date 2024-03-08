//
// Created by renaud on 21/11/2023.
//


#include "Bishop.hpp"

Bishop::Bishop(const Coordonnees &position, Couleur couleur1) : Piece(position, couleur1) {}

Type Bishop::getType() {
    return Type(BISHOP);
}

unsigned int Bishop::getValue() {
    return 3;
}

vector <Action> Bishop::getAllActions() {
    vector<Action> actionlist;
    vector<Coordonnees> chemin;
    Coordonnees depart = this->getPosition();
    unsigned int ligd = this->getPosition().getLigne();
    unsigned int cold = this->getPosition().getColonne();
    unsigned int liga = ligd, cola = cold;

    while (liga <= 8 && cola <= 8) // En haut à droite
    {
        liga++;
        cola++;
        Coordonnees arrive = Coordonnees(liga, cola);
        chemin.push_back(arrive);
        actionlist.push_back(Action(depart, arrive, chemin));
    }

    liga = ligd;
    cola = cold;
    chemin = {};
    while (liga >= 0 && cola <= 8) // En bas à droite
    {
        liga--;
        cola++;
        Coordonnees arrive = Coordonnees(liga, cola);
        chemin.push_back(arrive);
        actionlist.push_back(Action(depart, arrive, chemin));
    }
    
    liga = ligd;
    cola = cold;
    chemin = {};
    while (liga >= 0 && cola >= 0) // En bas à gauche
    {
        liga--;
        cola--;
        Coordonnees arrive = Coordonnees(liga, cola);
        chemin.push_back(arrive);
        actionlist.push_back(Action(depart, arrive, chemin));
    }

    liga = ligd;
    cola = cold;
    chemin = {};
    while (liga <= 8 && cola >= 0) // En haut à gauche
    {
        liga++;
        cola--;
        Coordonnees arrive = Coordonnees(liga, cola);
        chemin.push_back(arrive);
        actionlist.push_back(Action(depart, arrive, chemin));
    }
    
    return actionlist;
}
