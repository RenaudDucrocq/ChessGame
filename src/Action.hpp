//
// Created by renaud on 21/11/2023.
//

#ifndef MAIN_ACTION_HPP
#define MAIN_ACTION_HPP


#include "Coordonnees.hpp"

class Action {
private:
    Coordonnees depart;
    Coordonnees arrive;
public:
    Action(const Coordonnees &depart, const Coordonnees &arrive);

    const Coordonnees &getDepart() const;

    const Coordonnees &getArrive() const;
};


#endif //MAIN_ACTION_HPP
