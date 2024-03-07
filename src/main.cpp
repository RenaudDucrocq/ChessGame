#include <iostream>
#include "Board.hpp"
#include <Pieces/Bishop.hpp>

#include <SFML/Graphics.hpp>

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    Coordonnees c = Coordonnees(-1, 0);
    std::cout << c.to_String() << "\n";
    Coordonnees d = Coordonnees(0, 8);
    std::cout << d.to_String() << "\n";

    auto *b = new Board();
    cout << b->inBoardCell(c) << "\n";
    cout << b->inBoardCell(d) << "\n";

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
