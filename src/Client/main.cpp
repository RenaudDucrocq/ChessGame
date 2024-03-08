#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>
#include <memory>

#include "Client/BoardBackground.hpp"
#include "Interface/IGame.hpp"
#include "Client/Mock/GameMock.hpp"
#include "Client/PieceRenderer.hpp"

int main(int argc, char* argv[])
{    
    sf::VideoMode resolution(1280, 720);
    sf::RenderWindow window(resolution, "ChessGame", sf::Style::None);
    sf::View view;

    float boardSize = 8.0f * BoardBackground::getSquareSize();

    view.setSize(boardSize * resolution.width / resolution.height, boardSize);
    view.setCenter(sf::Vector2f(boardSize / 2, boardSize / 2));
    window.setView(view);
    window.setVerticalSyncEnabled(true);

    GameMock gameMock;
    IGame &game = gameMock;

    BoardBackground board;
    std::vector<std::unique_ptr<PieceRenderer>> pieces;

    for (auto piece : game.getBoard().getPieces())
    {
        pieces.push_back(std::make_unique<PieceRenderer>(*piece));
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

        for (auto&& piece : pieces)
        {
            window.draw(*piece);
        }

        window.display();
    }

    return 0;
}