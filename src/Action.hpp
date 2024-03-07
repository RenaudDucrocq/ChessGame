//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_ACTION_HPP
#define MAIN_ACTION_HPP


#include <vector>
#include "Coordonnees.hpp"

class Action {
private:
    Coordonnees depart;
    Coordonnees arrive;
    vector<Coordonnees> chemin;
public:
    Action(const Coordonnees &depart, const Coordonnees &arrive, const vector<Coordonnees> &chemin);

    const Coordonnees &getDepart() const;

    const Coordonnees &getArrive() const;

    const vector<Coordonnees> &getChemin() const;
};


#endif //MAIN_ACTION_HPP
