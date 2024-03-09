#ifndef PIECEMOCK_H_INCLUDED
#define PIECEMOCK_H_INCLUDED

#include "Interface/IPiece.hpp"

class PieceMock: public IPiece
{
private:
    Color m_color;
    sf::Vector2u m_position;
    Type m_type;
public:
    PieceMock(sf::Vector2u position);
    virtual const Color &getColor();
    virtual const sf::Vector2u &getPosition() const;
    virtual const Type &getType() const;
};


#endif // PIECEMOCK_H_INCLUDED