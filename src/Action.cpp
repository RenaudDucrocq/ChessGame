//
// Created by renaud on 21/11/2023.
//

#include "Action.hpp"

Action::Action(const Coordonnees &depart, const Coordonnees &arrive) : depart(depart),
                                                                       arrive(arrive) {}

const Coordonnees &Action::getDepart() const {
    return depart;
}

const Coordonnees &Action::getArrive() const {
    return arrive;
}
