//
// Created by renaud on 21/11/2023.
//

#include "Action.hpp"

#include <utility>

Action::Action(const Coordonnees &depart, const Coordonnees &arrive, const vector<Coordonnees> &chemin) : depart(depart),
                                                                                                          arrive(arrive),
                                                                                                          chemin(chemin) {}

const Coordonnees &Action::getDepart() const {
    return depart;
}

const Coordonnees &Action::getArrive() const {
    return arrive;
}

const vector<Coordonnees> &Action::getChemin() const {
    return chemin;
}
