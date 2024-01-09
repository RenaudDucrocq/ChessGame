#include <iostream>
#include "Coordonnees.hpp"
#include "Pieces/Bishop.hpp"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Coordonnees c = Coordonnees(1, 'A');
    std::cout << c.to_String();
    Coordonnees d = Coordonnees(1, 'B');
    bool a = c.equals(d);
    if (a) std::cout << "True";
    else std::cout << "False";
    Player *p = new Player();
    auto *b = new Bishop(c, *p);

    std::cout << b->getValue();

    return 0;
}
