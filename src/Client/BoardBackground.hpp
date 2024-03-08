#ifndef H_BOARD_INCLUDED
#define H_BOARD_INCLUDED

#include <iostream>
#include <SFML/Graphics.hpp>

class BoardBackground : public sf::Drawable
{
private:
    static unsigned int c_squareSize;
    sf::Sprite m_boardSprite;
    sf::RenderTexture m_boardTexture;
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
    BoardBackground();
    static unsigned int getSquareSize(); 
};

#endif // H_BOARD_INCLUDED