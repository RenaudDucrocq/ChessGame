#include <iostream>
#include <SFML/Graphics.hpp>

int main(int argc, char* argv[])
{
    std::cout << "Hello World from Client !" << std::endl;
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "ChessGame");

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(255, 255, 255));
        window.display();
    }

    return 0;
}