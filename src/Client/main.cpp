#include <iostream>
#include <SFML/Graphics.hpp>

#include "Client/VBoard.hpp"
#include "Interface/IGame.hpp"
#include "Client/Mock/GameMock.hpp"

int main(int argc, char* argv[])
{    
    sf::VideoMode resolution(1280, 720);
    sf::RenderWindow window(resolution, "ChessGame");
    sf::View view;

    float boardSize = 8.0f * VBoard::getSquareSize();

    view.setSize(resolution.width, resolution.height);
    view.setCenter(sf::Vector2f(boardSize / 2, boardSize / 2));
    window.setView(view);
    window.setVerticalSyncEnabled(true);

    GameMock gameMock;
    IGame &game = gameMock;

    VBoard board;

    for (auto piece : game.getBoard().getPieces())
    {
        std::cout << piece->getLabel() << std::endl;
    }

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(0, 0, 0));
        window.draw(board);
        window.display();
    }

    return 0;
}