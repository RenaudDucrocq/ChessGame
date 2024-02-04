#ifndef H_BOARD_INCLUDED
#define H_BOARD_INCLUDED

#include <iostream>
#include <SFML/Graphics.hpp>

class VBoard : public sf::Drawable
{
private:
    static int c_squareSize;
    sf::Sprite m_boardSprite;
    sf::RenderTexture m_boardTexture;
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

public:
    VBoard();
    static int getSquareSize(); 
};

#endif // H_BOARD_INCLUDED