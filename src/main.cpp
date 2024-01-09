#include <iostream>
#include "Coordonnees.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Coordonnees c = Coordonnees(1, 'A');
    std::cout << c.to_String();
    Coordonnees d = Coordonnees(1, 'B');
    bool a = c.equals(d);
    if (a) std::cout << "True";
    else std::cout << "False";
    return 0;
}
