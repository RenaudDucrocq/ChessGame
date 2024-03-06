#include <iostream>
#include "Coordonnees.hpp"
#include "Pieces/Bishop.hpp"
#include "Joueur.hpp"

#include <SFML/Graphics.hpp>

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    Coordonnees c = Coordonnees(1, 'A');
    std::cout << c.to_String();
    Coordonnees d = Coordonnees(1, 'B');
    bool a = c.equals(d);
    if (a) std::cout << "True";
    else std::cout << "False";
    auto *b = new Bishop(c, Couleur(WHITE));

    std::cout << b->getValue();

    Joueur *j = new Joueur(Couleur(WHITE), 100);
    cout << j->getScore();

    sf::Window window(sf::VideoMode(800, 600), "ChessGame");

    while (window.isOpen()) {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event)) {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}
