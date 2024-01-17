//
// Created by renaud on 21/11/2023.
//

#include "Move.hpp"

Move::Move(const Coordonnees &depart, const Coordonnees &arrive, const Player &playing, const Player &waiting) : depart(
        depart), arrive(arrive), playing(playing), waiting(waiting) {}
