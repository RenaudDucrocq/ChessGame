#include <iostream>
#include <SFML/Graphics.hpp>

#include "Client/VBoard.hpp"

int main(int argc, char* argv[])
{
    std::cout << "Hello World from Client !" << std::endl;
    
    sf::VideoMode resolution(1280, 720);

    sf::RenderWindow window(resolution, "ChessGame");

    sf::View view;

    float boardSize = 8.0f * VBoard::getSquareSize();

    view.setSize(boardSize, boardSize);
    view.setCenter(sf::Vector2f(boardSize / 2, boardSize / 2));
    view.setViewport(
        sf::FloatRect((1 - (boardSize / resolution.width)) / 2.0f,
        (1 - (boardSize / resolution.height)) / 2.0f,
        boardSize / resolution.width,
        boardSize / resolution.height)
    );

    window.setView(view);


    VBoard board;

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