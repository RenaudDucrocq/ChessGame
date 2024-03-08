#include "VBoard.hpp"

int VBoard::c_squareSize = 92;

VBoard::VBoard()
{
    m_boardTexture.create(8 * c_squareSize, 8 * c_squareSize);

    sf::Texture lightSquareTexture;
    sf::Texture darkSquareTexture;

    lightSquareTexture.loadFromFile("./assets/1024px/square brown light.png");
    darkSquareTexture.loadFromFile("assets/1024px/square brown dark.png");

    sf::Sprite lightSquareSprite(lightSquareTexture);
    sf::Sprite darkSquareSprite(darkSquareTexture);

    lightSquareSprite.setTextureRect({0, 0, c_squareSize, c_squareSize});
    darkSquareSprite.setTextureRect({0, 0, c_squareSize, c_squareSize});

    m_boardTexture.clear(sf::Color(0, 0, 0));

    for (int i = 0; i < 64; i++)
    {
        lightSquareSprite.setPosition((i % 8) * c_squareSize, (i / 8) * c_squareSize);
        darkSquareSprite.setPosition((i % 8) * c_squareSize, (i / 8) * c_squareSize);
        if (((i / 8) % 2 == 0 && i % 2 == 0) || ((i / 8) % 2 == 1 && i % 2 == 1))
            m_boardTexture.draw(lightSquareSprite);
        else
            m_boardTexture.draw(darkSquareSprite);
    }

    m_boardTexture.display();

    m_boardSprite.setTexture(m_boardTexture.getTexture());
    m_boardSprite.setPosition(0, 0);
}

void VBoard::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(m_boardSprite, states);
}

int VBoard::getSquareSize()
{
    return VBoard::c_squareSize;
}